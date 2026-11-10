# Computer Networks Lab

This directory contains the available computer-network experiments:

| Experiment | Topic | Program |
|---|---|---|
| 2 | Host/IP, DNS, public IP, ping, and port utilities | Python |
| 3 | HTTP web client | Python |
| 4 | TCP echo client and server | Python |
| 5 | Multi-client chat | Python |
| 6 | TCP file transfer | Python |
| 7 | ARP/RARP table simulation | Python |
| 8 | TCP and UDP traffic simulation | NS-2 Tcl |
| 9 | Distance-vector routing simulation | NS-2 Tcl |
| 10 | Link-state routing simulation | NS-2 Tcl |
| 11 | Hostname and local IP lookup | Python |

## Running the Python experiments

Run commands from the experiment directory, for example:

```bash
python3 "Exp 2/DNS.py"
```

For experiments with a client and server, start the server in one terminal
before starting the client in another:

```bash
python3 "exp 4/server.py"
python3 "exp 4/client.py"
```

The same arrangement applies to `Exp 5` and `Exp 6`. The file-transfer
experiment writes received files as `received_<filename>` in the server's
working directory.

## Running the NS-2 experiments

NS-2 and NAM must be installed:

```bash
ns "Exp 8/tcp_udp.tcl"
ns "Exp 9/distance_vector.tcl"
ns "Exp 10/link_state.tcl"
```

The simulations create trace files in the current directory and open NAM
when the simulation finishes.
