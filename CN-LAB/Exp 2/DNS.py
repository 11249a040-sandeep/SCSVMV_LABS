import socket

host = input("Enter Website: ").strip()
try:
    print(socket.gethostbyname_ex(host))
except socket.gaierror as error:
    print(f"Unable to resolve {host!r}: {error}")