## Filters in Linux

Filters are powerful programs in Linux that take plain text as input (either from a file or another program's output), process it in a specific way, and then produce a modified output. They are a fundamental part of the Linux command-line toolkit and are often used in conjunction with pipes (`|`) to create complex data processing workflows. Here are some of the most commonly used filters:

1.  **`cat`**: Displays the content of a file line by line to the standard output.

    ```bash
    cat [path]
    ```

    *Example:* `cat my_document.txt`

2.  **`head`**: Shows the first `n` lines of a specified text file(s). If the number of lines is not specified, it defaults to displaying the first 10 lines.

    ```bash
    head [-n] [path]
    ```

    *Example:* `head -5 logfile.txt` (shows the first 5 lines)

3.  **`tail`**: Works similarly to `head` but displays the last `n` lines of a file. Like `head`, it shows the last 10 lines by default if no number is provided. The `-f` option is particularly useful for following log files in real-time.

    ```bash
    tail [-n] [path]
    ```

    *Example:* `tail -20 system.log` (shows the last 20 lines), `tail -f server.log` (follows the server log in real-time)

4.  **`sort`**: Arranges the lines of a text file alphabetically by default. However, it offers numerous options to customize the sorting based on different criteria (e.g., numerically, by field, in reverse order). Consult the `man sort` page for a comprehensive list of options.

    ```bash
    sort [-options] [path]
    ```

    *Example:* `sort names.txt` (sorts alphabetically), `sort -n numbers.txt` (sorts numerically)

5.  **`uniq`**: Removes adjacent duplicate lines from the input. It's important to note that `uniq` only eliminates consecutive duplicate lines. To remove all duplicates (regardless of their position), the input should typically be sorted first.

    ```bash
    uniq [options] [path]
    ```

    *Example:* `sort data.txt | uniq` (sorts the data and then removes duplicates)

6.  **`wc`**: Provides a count of lines, words, and characters in a file or standard input.

    ```bash
    wc [-options] [path]
    ```

    *Example:* `wc report.txt` (shows lines, words, and characters), `wc -l report.txt` (shows only the number of lines)

7.  **`grep`**: A powerful tool used to search for specific patterns within text files. It prints the lines that contain a match for the given pattern. `grep` offers a wide array of options for more advanced searching (e.g., case-insensitive, regular expressions).

    ```bash
    grep [options] pattern [path]
    ```

    *Example:* `grep "error" logfile.txt` (finds all lines containing "error"), `grep -i "warning" log.txt` (case-insensitive search for "warning")

8.  **`tac`**: Acts as the reverse of `cat`. Instead of printing the file from the first line to the last, `tac` prints the file content starting from the last line and going up to the first.

    ```bash
    tac [path]
    ```

    *Example:* `tac reversed_log.txt`

9.  **`sed`**: Stands for "stream editor." It's a versatile filter that allows you to perform search and replace operations, as well as other transformations, on text streams. `sed` is a more advanced tool with a rich set of commands and options; refer to its manual page (`man sed`) for detailed usage.

    ```bash
    sed 's/old/new/g' [path]
    ```

    *Example:* `sed 's/apple/orange/g' fruit.txt` (replaces all occurrences of "apple" with "orange")

10. **`nl`**: Numbers the lines of the input text data. It provides options to customize the line numbering format, starting number, and increment.

    ```bash
    nl [-options] [path]
    ```

    *Example:* `nl document.txt` (numbers all non-empty lines), `nl -b a config.txt` (numbers all lines)
