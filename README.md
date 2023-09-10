# File Encryptor/Decryptor

## Overview

This C program provides a simple tool to encrypt and decrypt files using the XOR encryption method. You can compile the program either using the provided `Makefile` or manually with `gcc`. 

## Table of Contents

- [Project Directory Structure](#project-directory-structure)
- [Prerequisites](#prerequisites)
- [How to Compile](#how-to-compile)
- [Usage](#usage)
- [Cleaning Up](#cleaning-up)
- [Contributing](#contributing)
- [License](#license)

## Project Directory Structure

- `./bin`: Directory to store the built executable.
- `./src`: Source code of the program.

## Prerequisites

Before you get started, ensure you have the following prerequisites:

- GCC (GNU Compiler Collection) installed on your system.

## How to Compile

You have two options to compile the program:

### Option 1: Using the Makefile

1. Open a terminal.
2. Navigate to the project directory.
3. Run the following command to build the executable:

    ```shell
    make install
    ```

### Option 2: Manually

1. Open a terminal.
2. Navigate to the project directory.
3. Run the following command to build the executable:

   ```shell
   gcc -o ./bin/file-encrypt ./src/file-encrypt.c
   ```

## Usage

To encrypt a file, run the following command:

```shell
./bin/file-encrypt <input-file> <output-encryped-file>
```

To decrypt a file, run the following command:

```shell
./bin/file-encrypt <input-encryped-file> <output-file>
```

## Cleaning Up

To clean up the project directory, run the following command:

```shell
make clean
```

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
