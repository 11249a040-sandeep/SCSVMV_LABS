import socket

target = input("Enter IP Address: ").strip()
for port in range(1, 101):
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as sock:
        sock.settimeout(0.5)
        if sock.connect_ex((target, port)) == 0:
            print("Port", port, "is Open")