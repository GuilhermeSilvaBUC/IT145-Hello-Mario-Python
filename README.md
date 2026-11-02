# IT145 – Lesson 11: Hello and Mario in Python

**Student:** Guilherme Pereira  
**Course:** IT145 – Introduction to Programming

## Project Description

This project includes two Python programs, Hello and Mario, rewritten from C. The purpose is to compare both programming languages and understand how Python makes coding simpler.

## Project Files

- `hello.py` – Asks for the user's name and prints a greeting.
- `mario.py` – Creates a right-aligned pyramid with a height between 1 and 8.
- `mario.c` – Original C version of the Mario program.

## Hello – Python

```python
name = input("What is your name? ")
print(f"hello, {name}")
```

## Mario – C Version

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int row = 1; row <= height; row++)
    {
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
```

## Mario – Python Version

```python
while True:
    try:
        height = int(input("Height: "))
        if 1 <= height <= 8:
            break
    except ValueError:
        pass

for i in range(1, height + 1):
    print(" " * (height - i) + "#" * i)
```

## Example Output

```text
Height: 0
Height: abc
Height: 4
   #
  ##
 ###
####
```

## C vs. Python Comparison

| Feature | C | Python |
|---|---|---|
| Lines of code | 34 | 10 |
| Input | `get_int()` | `input()` |
| Output | `printf()` | `print()` |
| Loops | Nested loops | One main loop |
| String repetition | Multiple loops | String multiplication |
| Error handling | Input validation | `try/except` |

Python is shorter and easier to read. In C, I needed multiple loops to print spaces and hashes. Python allows me to multiply strings, which reduces the amount of code.

Python also handles many programming details automatically. However, I need to use `try/except` to prevent errors when someone enters letters instead of a number.

I would rather maintain the Python version because it is simpler. Learning C first was useful because it helped me understand how loops and variables work.

## Testing Results

Both Python programs passed the CS50 Check50 tests.

- Hello: 3/3 tests passed.
- Mario: 9/9 tests passed.

## How to Run

Hello:

```bash
python hello.py
```

Mario:

```bash
python mario.py
```

## References

Harvard University. (n.d.). *Hello*. CS50x. https://cs50.harvard.edu/x/psets/6/hello/

Harvard University. (n.d.). *Mario (less comfortable)*. CS50x. https://cs50.harvard.edu/x/psets/6/mario/less/
