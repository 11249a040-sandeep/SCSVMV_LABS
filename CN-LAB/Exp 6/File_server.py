import socket
from pathlib import Path


def file_transfer_server():
    server_socket = None
    connection = None
    try:
        server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        server_socket.bind(('127.0.0.1', 12345))
        server_socket.listen(1)
        print("Server listening on port 12345...")
        connection, client_address = server_socket.accept()
        print(f"Connected by {client_address}")
        filename_size = int.from_bytes(_receive_exactly(connection, 4), "big")
        if not 1 <= filename_size <= 255:
            raise ValueError("invalid filename length")
        filename = _receive_exactly(connection, filename_size).decode("utf-8")
        print(f"Receiving file: {filename}")
        output_path = Path(f"received_{Path(filename).name}")
        with output_path.open('wb') as file:
            for data in iter(lambda: connection.recv(4096), b""):
                file.write(data)
        print(f"File saved as {output_path}")
    except (OSError, ValueError, UnicodeDecodeError) as error:
        print(f"Error: {error}")
    finally:
        if connection is not None:
            connection.close()
        if server_socket is not None:
            server_socket.close()


def _receive_exactly(connection, size):
    data = bytearray()
    while len(data) < size:
        chunk = connection.recv(size - len(data))
        if not chunk:
            raise ConnectionError("connection closed before the header was complete")
        data.extend(chunk)
    return bytes(data)

if __name__ == '__main__':
    file_transfer_server()