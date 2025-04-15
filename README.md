# 🖨️ ft_printf

A custom implementation of the C standard library’s `printf` function, developed as part of the 42 school curriculum. This project explores variadic functions, string formatting, and low-level output in C, providing a deeper understanding of how `printf` works under the hood.

---

## ✨ Features

- ✅ Supports the following format specifiers:
  - `%c` : Character  
  - `%s` : String  
  - `%p` : Pointer address  
  - `%d` / `%i` : Signed decimal integer  
  - `%u` : Unsigned decimal integer  
  - `%x` / `%X` : Unsigned hexadecimal (lowercase / uppercase)  
  - `%%` : Literal percent sign  

- 🔁 Handles variable argument lists using `<stdarg.h>`
- 🔢 Returns the total number of characters printed
- 🧱 Modular and readable code structure

## 🗂️ Project Structure

42-printf/ <br>
├── ft_printf.c    &nbsp;&nbsp;&nbsp;&nbsp;     # Core implementation of ft_printf <br>
├── ft_printf.h    &nbsp;&nbsp;&nbsp;&nbsp;     # Header file with function prototypes <br>
├── ft_print_args.c &nbsp;&nbsp;&nbsp;&nbsp;    # Handles parsing and printing of arguments <br>
├── ft_print_int.c  &nbsp;&nbsp;&nbsp;&nbsp;    # Functions for printing integers <br>
├── ft_print_unsigned.c &nbsp;&nbsp;&nbsp;&nbsp; # Functions for printing unsigned integers <br>
├── ft_print_hex.c   &nbsp;&nbsp;&nbsp;&nbsp;   # Functions for printing hexadecimal numbers <br>
├── ft_print_ptr.c  &nbsp;&nbsp;&nbsp;&nbsp;    # Functions for printing pointer addresses <br>
├── ft_putchr.c     &nbsp;&nbsp;&nbsp;&nbsp;    # Function to print a single character <br>
├── ft_putstr.c    &nbsp;&nbsp;&nbsp;&nbsp;     # Function to print strings <br>
├── ft_strlen.c    &nbsp;&nbsp;&nbsp;&nbsp;     # Custom implementation of strlen <br>
├── ft_memcpy.c    &nbsp;&nbsp;&nbsp;&nbsp;     # Custom implementation of memcpy <br>
├── ft_strcpy.c     &nbsp;&nbsp;&nbsp;&nbsp;    # Custom implementation of strcpy <br>
├── ft_hex_len.c   &nbsp;&nbsp;&nbsp;&nbsp;     # Calculates length of hexadecimal numbers <br>
├── Makefile       &nbsp;&nbsp;&nbsp;&nbsp;     # Makefile to compile the project <br>

---

## ⚙️ Getting Started

### 📋 Prerequisites

- GCC Compiler  
- Make Utility

---

## 🛠️ Compilation

To build the static library: <br>
make <br>
This will generate libftprintf.a. <br>

## 🚀 Usage
Include the header in your source file: <br>
#include "ft_printf.h" <br>

Compile your project with the static library: <br>
gcc main.c libftprintf.a -o my_program <br>

Run your program: <br>
./my_program <br>

🧪 Example
#include "ft_printf.h" <br>

int main(void) <br>
{ <br>
    ft_printf("Character: %c\n", 'A'); <br>
    ft_printf("String: %s\n", "Hello, World!"); <br>
    ft_printf("Pointer: %p\n", (void *)0x12345678); <br>
    ft_printf("Decimal: %d\n", 42); <br>
    ft_printf("Unsigned: %u\n", 42); <br>
    ft_printf("Hexadecimal: %x\n", 42); <br>
    ft_printf("Percent Sign: %%\n"); <br>
    return 0; <br>
} <br>

### 📝 Notes <br>
❌ This implementation does not support flags, width, precision, or length modifiers. <br>

🎯 Focus is on mastering the fundamentals of variadic functions and formatted output in C. <br>

### 📄 License <br>
This project is open source and available under the MIT License. <br>
