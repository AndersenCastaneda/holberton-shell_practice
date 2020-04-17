# shell_practice

This is a personal project, I'm trying to replicate a Shell
using:

- Structs
- Pointers
- Double pointers
- CLEAN CODE

Everything is compile with: 
- gcc -Wall -Werror -pedantic -Wextra *.c -o hsh -g

To check memory leaks I use valgrind. Whit this flags:
- valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./hsh
