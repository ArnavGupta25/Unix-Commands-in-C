# Shell Command Reimplementation in C


## Table of Contents

- [Overview](#overview)
- [File Structure](#file-structure)
- [Commands Implemented](#commands-implemented)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Cloning the Repository](#cloning-the-repository)
- [Running the Project](#running-the-project)
  - [Compilation](#compilation)
  - [Execution](#execution)
- [Usage](#usage)
- [Contributing](#contributing)

## Overview

This project is a reimplementation of various common shell commands in C, specifically for Linux environments. It aims to provide a deeper understanding of how these commands work by coding them from scratch using standard C libraries. Each command is designed to closely mimic its Unix shell counterpart.

## File Structure

The project is organized as follows:

```
/Unix-Commands-in-C
├── src/
│   ├── main.c                    # Main entry point of the program
│   ├── execute_commands.c        # Contains the command execution logic
│   └── commands/                 # Directory containing individual command implementations
│       ├── cat.c
│       ├── cd.c
│       ├── chmod.c
│       ├── clear.c
│       ├── cp.c
│       ├── date.c
│       ├── echo.c
│       ├── grep.c
│       ├── ls.c
│       ├── man.c
│       ├── mkdir.c
│       ├── mv.c
│       └── pwd.c
│       └── rm.c
│       └── rmdir.c
│       └── touch.c
├── include/
│   └── commands.h                # Header file with command declarations
├── scripts/
│   └── compile.sh                # Script to compile the project
├── test/                         # Folder containing some test files for running the commands
│   └── dir1                      #Directory for checking running of rmdir,cd 
│   └── .hidden_file.txt          #For checking running of ls -a                
│   └── file1.txt                 #For checking running of rm,mv,cat,cp
│   └── file2.txt                 #For checking running of rm,mv,cat,cp
│   └── grep1.txt                 #For checking running of grep
│   └── grep2.txt                 #For checking running of grep             
├── .gitignore                    # Specifies files and directories to be ignored by Git
└── README.md                     # This README file
```

## Commands Implemented

- **`pwd`**: Prints the current working directory.
- **`ls`**: Lists the files and directories in the current directory.
  - `-l`: List in long format.
  - `-a`: List all entries including those starting with a dot (hidden files).
  - `-la`: List in long format including all entries.
- **`mkdir`**: Creates a new directory.
- **`rmdir`**: Removes an empty directory.
- **`clear`**: Clears the terminal.
- **`cd`**: Changes the current working directory.
- **`rm`**: Removes one or multiple files or directories.
- **`touch`**: Creates a new empty file or updates the timestamp of an existing file.
- **`man`**: Displays help information for commands.
- **`cat`**: Displays the contents of one or more files.
- **`echo`**: Displays a line of text.
- **`grep`**: Searches for a pattern in files.
- **`cp`**: Copies a file from source to destination.
- **`mv`**: Moves or renames a file.
- **`chmod`**:  Changes the permissions of files.
- **`date`**:  Displays the current date and time.


## Getting Started

### Prerequisites

- **Linux Operating System**: The project is intended to run on a Linux environment.
- **C Compiler**: Ensure you have `gcc` or any other C compiler installed.
- **Git**: You need Git installed to clone the repository.

### Cloning the Repository

To get a copy of this project up and running on your local machine, follow these steps:

1. Clone the repository:

    ```sh
    git clone https://github.com/ArnavGupta25/Unix-Commands-in-C.git
    ```

2. Navigate into the project directory:

    ```sh
    cd Unix-Commands-in-C
    ```

## Running the Project

### Compilation

To compile the project, navigate to the `scripts/` directory and run the `compile.sh` script:

```sh
cd scripts/
./compile.sh
```

### Execution
To run the project, execute the run file:

```sh
./run
```

## Usage

Once the program is running, you can enter any of the implemented commands, such as pwd, ls, mkdir, rmdir, etc. Type exit to terminate the shell.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for additional commands to implement, feel free to open an issue or submit a pull request.
