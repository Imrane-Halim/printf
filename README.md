# ft_printf 📝
================

A recreation of the `printf` function in C, as part of the 42 school curriculum 🎓.

**Description**
---------------

This project aims to mimic the behavior of the original `printf` function from the C standard library 📚. It handles the following conversions:

* `%c` : Prints a single character 📝.
* `%s` : Prints a string 📄.
* `%p` : Prints a void pointer in hexadecimal format 🔍.
* `%d` : Prints a decimal number 📊.
* `%i` : Prints an integer in base 10 📊.
* `%u` : Prints an unsigned decimal number 📊.
* `%x` : Prints a number in hexadecimal lowercase format 🔑.
* `%X` : Prints a number in hexadecimal uppercase format 🔑.
* `%%` : Prints a percent sign %.

**How to use**
--------------

1. Clone the repository: `git clone https://github.com/your-username/ft_printf.git` 📦
2. Compile the library: `make` 🛠️
3. Include the library in your project: `#include "ft_printf.h"` 📝
4. Use the `ft_printf` function: `ft_printf("Hello, %s!", "world");` 🌎

**Make targets**
----------------

* `make` : Compile the library 🛠️
* `make all` : Compile the library and run the tests 📊
* `make clean` : Clean the object files and library 🧹
* `make fclean` : Clean the object files, library, and test files 🧹
* `make re` : Rebuild the library and run the tests 🔁
* `make bonus` : Compile the library with bonus features 🎁

**Example use cases**
--------------------

* Printing a string: `ft_printf("Hello, %s!", "world");` 🌎
* Printing a decimal number: `ft_printf("The answer is %d.", 42);` 📊
* Printing a hexadecimal number: `ft_printf("The answer is %x.", 42);` 🔑

**1337 School**
-------------

This project is part of the 1337 school curriculum 🎓. Learn more about 1337 at [1337.ma](https://1337.ma) 📚.
