#include <iostream>

int main(int argc, char **argv)
{
    // Check if there are command-line arguments
    if (argc > 1)
    {
        // Iterate over each argument
        for (int i = 1; i < argc; i++)
        {
            // Convert each character of the argument to uppercase
            for (int j = 0; argv[i][j] != '\0'; j++)
                argv[i][j] = (char)toupper(argv[i][j]);

            // Print the modified argument
            std::cout << argv[i];

            // Check if the next argument is not NULL
            if (argv[i] != NULL)
                std::cout << " ";
        }

        // Print a new line after printing all the arguments
        std::cout << std::endl;
    }
    else
    {
        // Print a default message when no arguments are provided
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
