#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

bool only_digits(char *str);
char rotate(char c, int key);

int main(int argc, string argv[])
{
    // Count command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        // Check if the provided key contains only digits
        if (!only_digits(argv[1]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert argv[1] to an int
    int key = atoi(argv[1]);

    // Prompt for plaintext
    string plaintext = get_string("plaintext: ");

    // Encrypt plainext using rotate
    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }
    printf("\n");

    return 0;
}

// Iterate over provided key to ensure it's a digit
bool only_digits(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
        {
            return false;
        }
        str++;
    }
    return true;
}

// Function to rotate plaintext characters per the key
char rotate(char c, int key)
{
    if (isalpha(c))
    {
        if (islower(c))
        {
            c = (c - 'a' + key) % 26 + 'a';
        }
        else
        {
            c = (c - 'A' + key) % 26 + 'A';
        }
    }
    return c;
}
