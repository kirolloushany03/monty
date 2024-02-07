# Monty Interpreter

Welcome to the Monty Interpreter project repository! 🚀

This project aims to create an interpreter for Monty ByteCodes files. Monty is a scripting language that relies on a unique stack, with specific instructions to manipulate it.

## Learning Objectives ℹ️

By the end of this project, you should be able to:

- Explain the concepts of LIFO and FIFO
- Understand the usage of stacks and queues
- Identify common implementations of stacks and queues
- Recognize the most common use cases of stacks and queues
- Utilize global variables properly in C programs

## Resources 📚

To get started, make sure to read or watch the following:

- [Google](https://www.google.com)
- [How do I use extern to share variables between source files in C?](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files-in-c)
- [Stacks and Queues in C](https://www.geeksforgeeks.org/stack-data-structure/)
- [Stack operations](https://www.geeksforgeeks.org/stack-data-structure/)
- [Queue operations](https://www.geeksforgeeks.org/queue-data-structure/)
  
## Requirements 📋

Here are the general requirements for this project:

- Editors: `vi`, `vim`, `emacs`
- Compilation: `gcc` with specific options
- Use of the Betty style for code formatting
- Limitations on global variables and functions per file
- Usage of C standard library
- Prototypes inclusion in a header file called `monty.h`
- Proper error handling and output formatting
  
## Compilation & Output 💻

The code will be compiled using the following command:

```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```

- Output must be printed on `stdout`
- Error messages must be printed on `stderr`
  
## Tests 🧪

We encourage collaboration on creating a comprehensive set of tests to ensure code functionality and correctness.

## The Monty Language 📜

Monty 0.98 is a scripting language that relies on Monty byte codes. Files with `.m` extension contain Monty byte codes, with one instruction per line.

## Tasks 📝

This project is composed of several tasks, each involving the implementation of specific opcodes. Below is a summary of the tasks:

1. **push, pall**
   - Implement the `push` and `pall` opcodes.

2. **pint**
   - Implement the `pint` opcode.

3. **pop**
   - Implement the `pop` opcode.

4. **swap**
   - Implement the `swap` opcode.

5. **add**
   - Implement the `add` opcode.

6. **nop**
   - Implement the `nop` opcode.

7. **sub** (Advanced)
   - Implement the `sub` opcode.

8. **div** (Advanced)
   - Implement the `div` opcode.

9. **mul** (Advanced)
   - Implement the `mul` opcode.

10. **mod** (Advanced)
    - Implement the `mod` opcode.

11. **comments** (Advanced)
    - Implement support for comments in Monty files.