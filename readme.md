# QtCrypt - File Encryption & Decryption Tool

**QtCrypt** is a secure and user-friendly application built using the **Qt Framework** designed for encrypting and decrypting files with a custom password-based algorithm. This project showcases the use of Qt for creating interactive graphical user interfaces (GUIs) and the integration of cryptographic techniques to ensure data security.

---

## Features

- **File Encryption**: Encrypt any file with AES encryption using a password as the key.
- **File Decryption**: Decrypt files previously encrypted with the application using the correct password.
- **File Viewer**: View the contents of encrypted or decrypted files within the app.
- **Password-based Security**: Files are secured using a password-derived key for AES encryption.
- **Cross-platform Compatibility**: Built using Qt, ensuring that the app runs on various platforms with a seamless experience.

---

## Screenshots

### Main Interface
![Main Interface]([https://paste.pics/ed298d7be2cff5cbfd84444fa95357d8](https://i2.paste.pics/ed298d7be2cff5cbfd84444fa95357d8.png?rand=o2h4HgQwId))

### File Viewer (Decrypted File)
![File Viewer](https://your-link-to-screenshot2.png)

### Successful Encryption
![Encryption Success](https://your-link-to-screenshot3.png)

### Successful Decryption
![Decryption Success](https://your-link-to-screenshot4.png)

---

## How It Works

1. **Select File**: Choose a file from your file system that you wish to encrypt or decrypt.
2. **Password Input**: Type in the password used to secure the file. The password is processed to generate a cryptographic key.
3. **Encryption/Decryption**: 
   - **Encryption**: AES encryption is applied to the file's contents, ensuring data confidentiality.
   - **Decryption**: The encrypted file can be decrypted with the correct password to restore the original content.
4. **File Viewer**: View the contents of the encrypted or decrypted file directly within the application window.

---

## Key Features

- **AES Encryption**: The file's data is encrypted using the Advanced Encryption Standard (AES), a widely trusted encryption algorithm. A SHA-256 hash of the user’s password is used to derive the encryption key.
- **Cross-Platform**: Built with **Qt 6**, ensuring compatibility across major platforms (Windows, Linux, and macOS).
- **User-Friendly Interface**: The application provides a simple, intuitive interface allowing users to easily select files, enter passwords, and view file contents without needing any technical knowledge.

---

## Technologies Used

- **Qt 6**: A powerful C++ framework used to create the cross-platform graphical user interface.
- **C++17**: Leveraged for modern, efficient C++ programming features.
- **AES Encryption**: Used for secure encryption and decryption of files.
- **QCryptographicHash**: Used to generate a consistent and secure cryptographic key from the user’s password.

---

## Setup and Installation

### Prerequisites

To run **QtCrypt**, you’ll need to have the following installed:

- **Qt 6** or **Qt 5** (with support for Widgets)
- **CMake 3.5** or higher
- A C++ compiler supporting **C++17** (e.g., GCC or Clang)

*Pre-built binaries are available for download, so you do not need to build from source.*

---

## Contribution

If you would like to contribute to this project, feel free to fork the repository and submit a pull request. Contributions such as bug fixes, feature enhancements, and suggestions are welcome!

---

## License

This project is licensed under the **MIT License**.

---

## Contact

For more information, or if you have any questions or suggestions, feel free to reach out via [your email/contact information].
