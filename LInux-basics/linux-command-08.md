#### 2️⃣ Killing Processes

Sometimes, you might need to terminate a running process if it's unresponsive, consuming too many resources, or needs to be stopped for other reasons. These commands allow you to send signals to processes, typically to terminate them.

* `kill [PID]` → Sends a termination signal (SIGTERM) to the process with the specified Process ID (PID), asking it to terminate gracefully. You can find the PID of a process using commands like `ps` or `top`.
    ```bash
    kill 1234
    ```
    Replace `1234` with the actual PID of the process you want to stop.

* `pkill [process_name]` → Sends a termination signal to all processes whose name matches the given `process_name`. This is often more convenient than finding the PID first.
    ```bash
    pkill firefox
    ```
    This command will attempt to terminate all processes named `firefox`.

* `killall [process_name]` → Similar to `pkill`, this command also sends a termination signal to all processes with the specified name. There might be subtle differences in behavior depending on the system, but both are generally used for the same purpose.
    ```bash
    killall chrome
    ```
    This command will attempt to terminate all processes named `chrome`.

**Important Note:** The `kill` command can also send different signals to a process. For example, `kill -9 [PID]` (SIGKILL) forcefully terminates a process immediately without allowing it to clean up. This should be used as a last resort, as it can sometimes lead to data loss or system instability.
