### 3️⃣ Viewing File Contents

These commands allow you to read and analyze the contents of text files.

* `cat file.txt` → Displays the entire content of `file.txt` directly in the terminal. This is suitable for smaller files.

* `less longfile.txt` → Opens `longfile.txt` in a scrollable viewer. You can navigate through the file using the arrow keys, Page Up, Page Down, and quit by pressing `q`. This is useful for large files.

* `head -10 file.txt` → Shows the first 10 lines of `file.txt`. You can replace `10` with any number to display a different number of lines.

* `tail -10 file.txt` → Shows the last 10 lines of `file.txt`. Similar to `head`, you can change the number of lines displayed. `tail -f file.txt` is particularly useful for monitoring log files in real-time as new lines are added.

### 📌 Example:

Display the Linux distribution information and the first 5 lines of the system log file:

```bash
cat /etc/os-release
head -5 /var/log/syslog
