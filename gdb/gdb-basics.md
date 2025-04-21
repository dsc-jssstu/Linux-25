# GDB Command in Linux

GDB (GNU Debugger) is a powerful command-line tool used in Linux (and other Unix-like operating systems) for debugging programs written in various languages such as C, C++, Ada, and Fortran. It allows you to observe the execution of your program while it is running, or to examine the core dump (a snapshot of the program's memory) when a program crashes.

Here's a breakdown of some essential GDB commands:

**Getting Started:**

* **`gdb <program_name>`**: Starts GDB with the specified executable.
* **`gdb <program_name> <core_file>`**: Starts GDB to debug a core dump file.
* **`attach <process_id>`**: Attaches GDB to a running process with the given process ID.
* **`file <program_name>`**: Specifies the program to be debugged (if GDB was started without a program).
* **`help`**: Displays a list of GDB commands.
* **`help <command>`**: Provides detailed information about a specific GDB command.
* **`quit` or `q`**: Exits GDB.

**Running and Controlling Execution:**

* **`run` or `r`**: Starts the execution of the program. You can provide command-line arguments after `run`.
    * **`run <args>`**: Runs the program with the specified arguments.
* **`continue` or `c`**: Resumes program execution after it has been stopped (e.g., at a breakpoint).
* **`next` or `n`**: Executes the current line of code and moves to the next line at the same level of the call stack (steps over function calls).
* **`step` or `s`**: Executes the current line of code. If it's a function call, it steps into the function.
* **`finish`**: Continues execution until the current function returns.
* **`until <location>`**: Continues execution until the specified location is reached. `<location>` can be a line number, function name, or address.
* **`signal <signal>`**: Sends a signal to the running program (e.g., `signal SIGINT` to interrupt).
* **`kill`**: Terminates the execution of the program being debugged.

**Breakpoints:**

Breakpoints halt the execution of your program at specific locations, allowing you to examine the program's state.

* **`break <location>` or `b <location>`**: Sets a breakpoint at the specified location.
    * **`break <line_number>`**: Sets a breakpoint at a specific line number in the current file.
    * **`break <filename>:<line_number>`**: Sets a breakpoint at a specific line number in a given file.
    * **`break <function_name>`**: Sets a breakpoint at the beginning of a function.
    * **`break <filename>:<function_name>`**: Sets a breakpoint at the beginning of a function in a given file.
    * **`break <address>`**: Sets a breakpoint at a specific memory address.
    * **`break <condition>`**: Sets a breakpoint that only triggers when the specified condition is true.
* **`tbreak <location>`**: Sets a temporary breakpoint that is automatically deleted the first time it is hit.
* **`info breakpoints` or `info b`**: Displays information about all set breakpoints, including their numbers, locations, and conditions.
* **`enable <breakpoint_numbers>`**: Enables the specified breakpoints.
* **`disable <breakpoint_numbers>`**: Disables the specified breakpoints.
* **`delete <breakpoint_numbers>`**: Deletes the specified breakpoints. If no numbers are given, all breakpoints are deleted.
* **`clear <location>`**: Deletes breakpoints at the specified location.

**Examining Variables and Memory:**

* **`print <expression>` or `p <expression>`**: Evaluates and prints the value of an expression (e.g., a variable, an arithmetic expression).
    * **`print/<format> <expression>`**: Prints the value in a specific format (e.g., `/x` for hexadecimal, `/d` for decimal, `/t` for binary, `/c` for character, `/s` for string).
* **`display <expression>`**: Prints the value of an expression every time the program stops (e.g., at a breakpoint or after a step).
    * **`display/<format> <expression>`**: Displays the value in a specific format.
* **`undisplay <display_numbers>`**: Stops displaying the specified expressions. Use `info display` to see the display numbers.
* **`ptype <variable_name>`**: Prints the data type of a variable.
* **`x /<nfu> <address>`**: Examines memory at a specified address.
    * `<n>`: Number of units to display.
    * `f`: Format of the units (e.g., `x` for hexadecimal, `d` for decimal, `s` for string, `i` for instruction).
    * `u`: Size of the units (e.g., `b` for byte, `h` for halfword, `w` for word, `g` for giant word).
    * `<address>`: The memory address to start examining.

**Examining the Call Stack:**

The call stack shows the sequence of function calls that led to the current point of execution.

* **`backtrace` or `bt`**: Displays the entire call stack.
* **`frame <n>` or `f <n>`**: Selects a specific frame in the call stack (numbered from 0 for the innermost frame). This allows you to examine local variables in that frame.
* **`up <n>`**: Moves up `n` frames in the call stack (towards the caller).
* **`down <n>`**: Moves down `n` frames in the call stack (towards the callee).
* **`info locals`**: Displays the local variables of the current frame.
* **`info args`**: Displays the arguments passed to the current function.

**Watchpoints:**

Watchpoints allow you to monitor the value of an expression and stop the program when its value changes.

* **`watch <expression>`**: Sets a watchpoint for the given expression. The program will stop when the value of the expression changes.
* **`rwatch <expression>`**: Sets a watchpoint that triggers when the expression is read.
* **`awatch <expression>`**: Sets a watchpoint that triggers when the expression is either read or written.
* **`info watchpoints`**: Displays information about all set watchpoints.
* **`delete watch <watchpoint_numbers>`**: Deletes the specified watchpoints.

**Other Useful Commands:**

* **`list` or `l`**: Displays the source code around the current execution point.
    * **`list <line_number>`**: Displays the source code around the specified line number.
    * **`list <function_name>`**: Displays the source code of the specified function.
    * **`list <filename>:<line_number>`**: Displays the source code around the specified line number in a given file.
    * **`list <filename>:<function_name>`**: Displays the source code of the specified function in a given file.
    * **`list -`**: Displays the lines just before the previously listed lines.
* **`set variable <variable_name> = <value>`**: Modifies the value of a variable during debugging.
* **`shell <command>`**: Executes a shell command without exiting GDB.
* **`source <filename>`**: Executes GDB commands from a file.
* **`define <command_name>` ... `end`**: Defines a new GDB command.
* **`show <parameter>`**: Shows the current value of a GDB parameter.
* **`set <parameter> <value>`**: Sets the value of a GDB parameter.

This is just an introduction to some of the most commonly used GDB commands. GDB is a very powerful and versatile tool with many more advanced features. Refer to the GDB documentation for a comprehensive overview. Remember to compile your programs with debugging symbols (`-g` flag with GCC/G++) to get the most out of GDB.
