#### User Management Commands

These commands allow you to get information about users and groups.

* `whoami` → Displays the username of the currently logged-in user.
    ```bash
    whoami
    your_username
    ```
    
* `id` → Shows detailed information about the current user, including the User ID (UID), Group ID (GID), and the IDs of the groups the user is a member of.
    ```bash
    id
    uid=1000(your_username) gid=1000(your_group) groups=1000(your_group),4(adm),24(cdrom),27(sudo),30(dip),46(plugdev),113(lpadmin),133(sambashare),999(docker)
    ```
    
* `groups [username]` → Lists the names of the groups that a specific user belongs to. If no username is provided, it lists the groups of the current user.
    ```bash
    groups your_username
    your_username : your_group adm cdrom sudo dip plugdev lpadmin sambashare docker
    ```
    ```bash
    
    groups another_user
    another_user : another_group some_other_group
    ```
