### 7️⃣ Networking & Package Management (2:00 - 2:30)

Networking commands help you configure and monitor network connectivity, while package management tools allow you to install, upgrade, and remove software on your system.

#### 1️⃣ Checking Network

These commands are used to inspect your network interfaces and test connectivity.

* `ifconfig` → Displays detailed information about your network interfaces, including IP addresses, MAC addresses, and network statistics. Note that on some newer Linux distributions, this command might be replaced by `ip addr`.
    ```bash
    ifconfig
    eth0: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500
            inet 192.168.1.100  netmask 255.255.255.0  broadcast 192.168.1.255
            ether 00:11:22:33:44:55  txqueuelen 1000  (Ethernet)
            RX packets 12345 bytes 6789012 (6.7 MB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 54321 bytes 12345678 (12.3 MB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0

    lo: flags=73<UP,LOOPBACK,RUNNING>  mtu 65536
            inet 127.0.0.1  netmask 255.0.0.0
            loop  txqueuelen 1000  (Local Loopback)
            RX packets 123 bytes 4567 (4.5 KB)
            RX errors 0  dropped 0  overruns 0  frame 0
            TX packets 123 bytes 4567 (4.5 KB)
            TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0
    ```
* `ping [hostname/IP]` → Sends ICMP (Internet Control Message Protocol) echo requests to a specified hostname or IP address and listens for responses. This is a fundamental tool for testing network connectivity and latency. Press `CTRL + C` to stop the `ping` command.
    ```bash
    ping google.com
    PING google.com (142.250.185.78) 56(84) bytes of data.
    64 bytes from bom12s10-in-f78.1e100.net (142.250.185.78): icmp_seq=1 ttl=117 time=12.5 ms
    64 bytes from bom12s10-in-f78.1e100.net (142.250.185.78): icmp_seq=2 ttl=117 time=12.3 ms
    ^C
    --- google.com ping statistics ---
    2 packets transmitted, 2 received, 0% packet loss, time 1001ms
    rtt min/avg/max/mdev = 12.345/12.420/12.495/0.075 ms
    ```
* `netstat` → Displays various network-related information, including network connections, routing tables, interface statistics, masquerade connections, and multicast memberships. The `netstat` command is being gradually replaced by the `ss` command in newer systems.

    ```bash
    netstat -tulnp
    ```

    * `-t`: Shows TCP connections.
    * `-u`: Shows UDP connections.
    * `-l`: Shows listening sockets (ports that services are listening on).
    * `-n`: Shows numerical addresses instead of resolving hostnames.
    * `-p`: Shows the PID and name of the program to which each socket belongs (requires root privileges).
