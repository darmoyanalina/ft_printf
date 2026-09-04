*This project has been created as part of the 42 curriculum by adarmoya.*

# ft_printf

## Description
The `ft_printf` project is a reimplementation of the standard C `printf` function.
The goal of the project is to deepen your understanding of variadic functions, string formatting, and output in C, while improving your ability to write modular and efficient code.

`ft_printf` supports multiple conversion specifiers such as:
- `%c` – character
- `%s` – string
- `%p` – pointer
- `%d` / `%i` – integer
- `%u` – unsigned integer
- `%x` / `%X` – hexadecimal (lowercase/uppercase)
- `%%` – literal percent sign

The project is an exercise in handling edge cases, formatting, and memory management while replicating the behavior of a standard library function.

---

## Algorithm and Data Structure Justification

### The Dispatcher Pattern (`check_format`)
My implementation utilizes a **Dispatcher Pattern** through the `check_format` function. Instead of embedding complex logic inside the main loop, `ft_printf` identifies a format specifier and passes the type and the argument list pointer to a specialized evaluator.
* **Justification:** This separation of concerns ensures that the main loop only handles the traversal of the string, while the dispatcher manages the logic for type-specific printing. It makes the code more readable and significantly easier to maintain or extend with new flags in the future.



### Variadic Argument Handling
The project uses the `va_list`, `va_start`, `va_arg`, and `va_end` macros to handle a variable number of arguments.
* **Justification:** Since the number and types of arguments are unknown at compile-time, variadic functions are the only way to retrieve data from the stack safely. Passing the `va_list` by pointer to the `check_format` allows the function to advance the argument pointer correctly without losing its state in the calling function.

---

## Instructions
1. **Clone the repository**
   ```bash
   git clone <repository_url>

2. **Compile**

   ```bash
   gcc -Wall -Wextra -Werror -c *.c
   ar rcs libftprintf.a *.o
   ```
3. **Usage**

   ```c
   #include "ft_printf.h"

   int main(void) {
       ft_printf("Hello %s, your score is %d%%\n", "Alina", 505);
       return 0;
   }
   ```

   Compile your program by linking `libftprintf.a`:

   ```bash
   gcc main.c -L. -lftprintf -o my_program
   ./my_program
   ```

## Resources

* [C Standard Library Documentation](https://en.cppreference.com/w/c/io/fprintf)
* [42 Curriculum ft_printf Subject](https://github.com/42-school/ft_printf)
* Tutorials on variadic functions in C and string formatting

### AI Usage

AI tools were used to:

* Generate initial README structure and wording
* Assist with clarifying explanations and examples

All code implementation, debugging, and testing were completed manually without AI assistance.
