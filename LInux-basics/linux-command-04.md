### 4️⃣ Text Editors (Nano & Vim)

These are command-line based text editors that allow you to create and modify files directly within the terminal.

#### Nano (Beginner-Friendly)

Nano is known for its simplicity and user-friendly interface, making it a great choice for beginners.

* **Open a file in Nano:**
    ```bash
    nano filename.txt
    ```

* **Saving and Exiting:**
    * Press `CTRL + X` to exit.
    * If you've made changes, you'll be prompted to save. Press `Y` for Yes or `N` for No.
    * If you choose to save, you'll be asked for the filename (you can usually just press `Enter` to keep the existing name).

#### Vim (Advanced & Efficient)

Vim is a powerful and highly configurable text editor favored by many developers and system administrators for its efficiency and extensive features. It has a steeper learning curve than Nano.

* **Open a file in Vim:**
    ```bash
    vim filename.txt
    ```

* **Basic Editing:**
    * Press `i` to enter **Insert Mode**, where you can type text.
    * Press `ESC` to exit Insert Mode and return to **Normal Mode** (command mode).
    * In Normal Mode, you can use various commands to navigate, edit, and save the file.

* **Saving and Exiting:**
    * `:w` followed by `Enter` saves the file.
    * `:q` followed by `Enter` quits Vim.
    * `:wq` followed by `Enter` saves the file and then quits.
    * `:q!` followed by `Enter` quits without saving changes (use with caution).
