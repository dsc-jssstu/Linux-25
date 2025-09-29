## 7️⃣ Networking & Package Management

Networking commands help you configure and monitor network connectivity, while package management tools allow you to install, upgrade, and remove software on your system.

---

### 🌐 Network Diagnostics & Information

These commands are crucial for inspecting network interfaces, testing connectivity, and diagnosing issues.

| Command | Purpose | Example |
| :--- | :--- | :--- |
| **`ifconfig`** | Displays detailed information about all network interfaces. (Often replaced by `ip addr` in newer Linux systems.) | `ifconfig` |
| **`ip addr`** | **Modern utility** for showing and managing IP addresses, routes, and network devices. | `ip addr show` |
| **`ping`** | Tests connectivity and latency by sending ICMP echo requests to a specified host. (Press `CTRL + C` to stop.) | `ping google.com` |
| **`ss`** | A faster, more flexible utility for inspecting **sockets** (connections and listening ports). Modern replacement for `netstat`. | `ss -tuln` |
| **`netstat`** | Displays network connections, routing tables, and interface statistics. | `netstat -tulnp` |
| **`traceroute`** | Tracks the route (hops) packets take to reach a host, showing all intermediate routers and their latency. | `traceroute example.com` |
| **`mtr`** | (My Traceroute) Combines `ping` and `traceroute` into a continuous, **live display** for real-time monitoring. | `mtr google.com` |
| **`nmap`** | (Network Mapper) Used for **network discovery** and security auditing, finding live hosts and open ports. | `nmap 192.168.1.1/24` |

---

### 📡 DNS and Domain Lookups

These commands help you query the Domain Name System to resolve names and retrieve domain registration information.

| Command | Purpose | Example |
| :--- | :--- | :--- |
| **`nslookup`** | Queries DNS servers to find domain name or IP address information. | `nslookup example.com` |
| **`dig`** | (Domain Information Groper) An advanced tool for querying DNS name servers and retrieving detailed DNS records. | `dig A example.com` |
| **`host`** | Performs simple DNS lookups, converting domain names to IPs and vice-versa. | `host example.com` |
| **`whois`** | Queries the **WHOIS database** to retrieve registration and administrative information about a domain. | `whois example.com` |

---

### 💻 Remote Access and Data Transfer

These commands facilitate secure connections to remote machines and the transfer of files.

| Command | Purpose | Example |
| :--- | :--- | :--- |
| **`ssh`** | (Secure Shell) Used to **securely log in** and execute commands on a remote computer. | `ssh user@192.168.1.5` |
| **`scp`** | (Secure Copy) A command-line utility for **securely transferring files** between hosts using the SSH protocol. | `scp localfile.txt user@remote:/path/` |
| **`wget`** | Non-interactive utility for **retrieving files** from the web (HTTP, HTTPS, FTP). Great for downloading large files. | `wget https://example.com/file.zip` |
| **`curl`** | Tool for **transferring data** with URL syntax, supporting numerous protocols. Often used for testing APIs or downloading content. | `curl -O https://example.com/api/data.json` |

---

### 💻 System Naming

These commands display information about your local machine's kernel and hostname.

| Command | Purpose | Example |
| :--- | :--- | :--- |
| **`uname -a`** | Displays detailed information about the system's **kernel**. | `uname -a` |
| **`hostname`** | Displays (or sets) the system's current **hostname**. | `hostname` |
