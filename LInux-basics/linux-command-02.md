### 2️⃣ File Operations

These commands are used to create, copy, move, and delete files and directories.

* `touch file.txt` → Creates a new empty file named `file.txt`.

* `mkdir MyFolder` → Creates a new directory named `MyFolder`.

* `cp file1.txt file2.txt` → Copies the contents of `file1.txt` to a new file named `file2.txt`.

* `mv old.txt new.txt` → Renames the file `old.txt` to `new.txt`. It can also be used to move a file to a different directory: `mv file.txt /path/to/new/directory/`.

* `rm file.txt` → Deletes the file named `file.txt`. **Use with caution!**

* `rm -r foldername` → Deletes the directory named `foldername` and all its contents (files and subdirectories). **Use with extreme caution!** The `-r` flag stands for recursive.

### 📌 Example:

Create a project folder, navigate into it:

```bash
mkdir Projects
cd Projects
