#### File Permissions & Ownership

In Linux, every file and directory has associated permissions that determine who can read, write, or execute it. These permissions are defined for three categories of users:

* **Owner:** The user who created the file.
* **Group:** A collection of users who may have specific access rights.
* **Others:** All users who are not the owner or members of the file's group.

The three basic permissions are:

* **r (read):** Allows viewing the contents of a file or listing the contents of a directory.
* **w (write):** Allows modifying the contents of a file or creating, deleting, or renaming files within a directory.
* **x (execute):** Allows running a file as a program (if it's an executable) or accessing the contents of a directory (making it the current working directory).

#### Commands for Managing Permissions & Ownership

* `chmod` → This command is used to change the permissions of files and directories. Permissions can be set using either symbolic mode (e.g., `chmod u+x file.txt` to add execute permission for the owner) or numeric mode (octal notation).

    ```bash
    chmod 755 file.txt
    ```

    In numeric mode, permissions are represented by a 3-digit octal number, where each digit corresponds to the owner, group, and others, respectively. The values for each digit are calculated by adding the values for read (4), write (2), and execute (1) permissions.

    * `7` (owner) = `4` (read) + `2` (write) + `1` (execute)
    * `5` (group) = `4` (read) + `0` (write) + `1` (execute)
    * `5` (others) = `4` (read) + `0` (write) + `1` (execute)

* `chown` → This command is used to change the ownership of files and directories. You can change both the owner and the group.

    ```bash
    chown user:group file.txt
    ```

    This command changes the owner of `file.txt` to `user` and the group to `group`. You can also change only the owner (`chown user file.txt`) or only the group (`chown :group file.txt`). You typically need superuser privileges (using `sudo`) to change ownership.
