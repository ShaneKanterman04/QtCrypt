# QtCrypt: A Custom Encryption Suite
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
QtCrypt is a professional-grade encryption and decryption tool developed in C++ with a state-of-the-art Qt graphical user interface. Designed for portfolio purposes, QtCrypt demonstrates expertise in custom cryptographic algorithm design, secure file handling, and advanced C++ programming—all wrapped in a sleek, modern UI.
## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Technical Architecture](#technical-architecture)
- [Installation](#installation)
- [Usage](#usage)
- [Development Guidelines](#development-guidelines)
- [License](#license)
- [Acknowledgements](#acknowledgements)
- [Contact](#contact)
## Overview
QtCrypt is a custom encryption suite that enables users to securely encrypt and decrypt files using a self-designed cipher. The project integrates a robust C++ backend with a Qt-based GUI, providing a professional and intuitive user experience.
**Note:** This tool is intended for educational and demonstrative purposes and is not recommended for production-level security.
## Features
- **Custom Encryption Algorithm:** Implements a proprietary cipher that combines substitution, permutation, and XOR operations.
- **Qt-Based Graphical User Interface:** Offers a modern, user-friendly interface for file selection, key management, and encryption/decryption operations.
- **Secure File I/O:** Robustly handles file reading and writing with comprehensive error management.
- **Key Management:** Incorporates a simple key derivation mechanism to securely generate and manage encryption keys.
- **Modular and Extensible Design:** Architected for easy future enhancements and integration of additional cryptographic techniques.
## Technical Architecture
QtCrypt is developed using modern C++ standards and leverages the Qt framework for its GUI components. The project is organized into several core modules:
- **Encryption Engine:** Contains the logic for the substitution, permutation, and XOR operations.
- **Key Derivation Module:** Processes user-supplied keys to generate a secure key stream.
- **File Handling Module:** Manages robust input/output operations and error handling for file encryption/decryption.
- **Qt UI Module:** Implements the graphical user interface with features such as file dialogs, status updates, and interactive controls using Qt’s signal-slot mechanism.
## Installation
### Prerequisites
- A C++ compiler with C++11 support (or later)
- [CMake](https://cmake.org/) for build configuration
- [Qt 5 or later](https://www.qt.io/) for the graphical user interface

### Build & Run Instructions
```bash
# Step 1: Clone the repository
git clone https://github.com/yourusername/QtCrypt.git
cd QtCrypt
```
```bash
# Step 2: Create a build directory and navigate into it
mkdir build
cd build
```
```bash
# Step 3: Configure the project with CMake
# (If CMake doesn't automatically detect your Qt installation,
#  set CMAKE_PREFIX_PATH to your Qt directory)
cmake ..
```
```bash
# Step 4: Build the project
cmake --build .
```
```bash
# Step 5: Run the application (still inside the build directory)
./QtCrypt
```

## Usage
When the Qt-based GUI appears after running `./QtCrypt`:
1. **Select a File:** Browse for the file to encrypt or decrypt.
2. **Enter a Key:** Provide the encryption key.
3. **Choose an Operation:** Click “Encrypt” or “Decrypt.”
4. **View Status:** Monitor progress and see log messages in the interface.



## Development Guidelines
- **Code Quality:** Adhere to modern C++ best practices and maintain clear, well-documented code.
- **Modular Design:** Ensure each module is self-contained with clearly defined interfaces.
- **Testing:** Implement unit tests for critical modules and rigorously validate the encryption algorithm.
- **Contributions:** Contributions are welcome! Please fork the repository, create a feature branch, and submit a pull request describing your changes.
## License
QtCrypt is licensed under the MIT License. See the [LICENSE](LICENSE) file for full details.
## Acknowledgements
- Thanks to the open-source community for continuous inspiration and resource sharing.
- This project is developed strictly for educational and portfolio demonstration purposes.
## Contact
For inquiries, contributions, or further information, please contact:
- **Email:** [your.email@example.com](mailto:your.email@example.com)
- **GitHub:** [yourusername](https://github.com/yourusername)
