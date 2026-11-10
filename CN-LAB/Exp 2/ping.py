import platform
import subprocess

host = input("Enter IP: ").strip()
count_flag = "-n" if platform.system().lower() == "windows" else "-c"
subprocess.run(["ping", count_flag, "4", host], check=False)