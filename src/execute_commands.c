#include "commands.h"

void execute_commands(char *command)
{
    char *cmd = strtok(command, " "); // Get the command (first token)
    char *arg = strtok(NULL, " ");    // Get the first argument (subsequent tokens)

    // Array to hold command-line arguments
    char *args[100];
    int argc = 0;

    // Loop to tokenize and store all arguments
    while (arg != NULL)
    {
        args[argc++] = arg; // Add argument to array
        arg = strtok(NULL, " ");
    }

    // Ensure args array is null-terminated
    args[argc] = NULL;

    if (strcmp(cmd, "pwd") == 0)
    {
        pwd_command();
    }
    else if (strcmp(cmd, "clear") == 0)
    {
        clear_command();
    }
    else if (strcmp(cmd, "ls") == 0)
    {
        ls_command(argc > 0 ? args[0] : NULL);
    }
    else if (strcmp(cmd, "mkdir") == 0)
    {
        mkdir_command(argc > 0 ? args[0] : NULL);
    }
    else if (strcmp(cmd, "rmdir") == 0)
    {
        rmdir_command(argc > 0 ? args[0] : NULL);
    }
    else if (strcmp(cmd, "cd") == 0)
    {
        cd_command(argc > 0 ? args[0] : NULL);
    }
    else if (strcmp(cmd, "rm") == 0)
    {
        rm_command(argc, args);
    }

    else if (strcmp(cmd, "touch") == 0)
    {
        touch_command(argc > 0 ? args[0] : NULL);
    }
    else if (strcmp(cmd, "man") == 0)
    {
        man_command(argc > 0 ? args[0] : NULL);
    }
    else if (strcmp(cmd, "cat") == 0)
    {
        cat_command(argc, args);
    }
    else if (strcmp(cmd, "echo") == 0)
    {
        echo_command(argc, args);
    }
    else if (strcmp(cmd, "grep") == 0)
    {
        grep_command(argc, args);
    }
    else if (strcmp(cmd, "cp") == 0)
    {
        cp_command(argc, args);
    }
    else if (strcmp(cmd, "mv") == 0)
    {
        mv_command(argc, args);
    }
    else if (strcmp(cmd, "chmod") == 0)
    {
        chmod_command(argc, args);
    }
    else if (strcmp(cmd, "date") == 0)
    {
        date_command();
    }
    else
    {
        printf("Command not recognized.\n");
    }
}
