### 6️⃣ Process Management (1:30 - 2:00)

Processes are instances of running programs on your Linux system. Efficiently managing these processes is crucial for maintaining optimal system performance.

#### 1️⃣ Viewing Processes

These commands allow you to see what programs are currently running on your system.

* `ps` → Displays a snapshot of the currently running processes associated with the current user and terminal. The output typically includes the process ID (PID), the terminal it's running on (TTY), the CPU time it has used (TIME), and the command that was executed (CMD).
    ```bash
    ps
      PID TTY          TIME CMD
     1234 pts/0    00:00:00 bash
     5678 pts/0    00:00:01 nano my_file.txt
    ```
* `ps aux` → Shows a comprehensive list of all processes running on the system, including those owned by other users and background processes. The output provides detailed information such as the user who owns the process (USER), the process ID (PID), CPU utilization (%CPU), memory usage (%MEM), virtual memory size (VSZ), resident set size (RSS), the terminal associated with the process (TTY), the status of the process (STAT), the CPU time used (TIME), and the command with its arguments (COMMAND).

* `top` → Provides a dynamic, real-time view of the running processes. It displays a summary of the system's resource usage (CPU, memory) and a list of the most resource-intensive processes, updating periodically. You can interact with `top` using various commands to sort processes, filter by user, and more. To exit `top`, press `q`.
    ```bash
    top
    ```
    (This will open an interactive display)

* `htop` → An interactive and visually enhanced alternative to `top`. It provides a more user-friendly interface with color-coded output and allows you to easily scroll through processes, sort them, and perform actions like killing processes using function keys. `htop` is often not installed by default and needs to be installed using your distribution's package manager (e.g., `sudo apt-get install htop` on Debian/Ubuntu, `sudo yum install htop` on CentOS/RHEL).
    ```bash
    htop
    ```
    (This will open an interactive display if installed)
