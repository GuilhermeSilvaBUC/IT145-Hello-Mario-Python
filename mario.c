#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Keep asking until the height is between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print each row of the pyramid
    for (int row = 1; row <= height; row++)
    {
        // Print the spaces before the hashes
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

        // Print the hashes
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
