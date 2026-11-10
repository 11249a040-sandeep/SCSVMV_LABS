import socket
import os


def file_transfer_client():
    client_socket = None
    try:
        client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        client_socket.connect(('127.0.0.1', 12345))
        filename = os.path.basename(input("Enter the filename to send: ").strip())
        if not filename:
            print("Error: A filename is required.")
            return
        if not os.path.isfile(filename):
            print(f"Error: File '{filename}' not found.")
            return
        filename_bytes = filename.encode("utf-8")
        client_socket.sendall(len(filename_bytes).to_bytes(4, "big"))
        client_socket.sendall(filename_bytes)
        with open(filename, 'rb') as file:
            for chunk in iter(lambda: file.read(4096), b""):
                client_socket.sendall(chunk)
        print(f"File '{filename}' sent successfully.")
    except (OSError, ValueError) as error:
        print(f"Error: {error}")
    finally:
        if client_socket is not None:
            client_socket.close()

if __name__ == '__main__':
    file_transfer_client()