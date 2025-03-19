#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include <QLabel>
#include <QTextStream>
#include <QDebug>
#include <QCryptographicHash>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadFileContents(const QString &fileName)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not open file for reading!");
        return;
    }

    QTextStream in(&file);
    QString fileContent = in.readAll(); // Read the entire file
    file.close();

    ui->textEdit->setText(fileContent); // Update text edit with file content
    ui->lblFileName->setText(fileName); // Update the label with file path
}

void MainWindow::on_btnSelect_pressed()
{
    QString fileName = QFileDialog::getOpenFileName(
        this, // Parent widget
        "Select a file", // Dialog title
        "", // Default directory
        "All files (*.*);;Text files (*.txt)" // File type filter
        );

    if (!fileName.isEmpty()) {
        file.setFileName(fileName); // Use class member variable

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << "Could not open file for reading!";
            return;
        }

        MainWindow::loadFileContents(file.fileName());
        file.close(); // Close the file
    }
}

void MainWindow::on_btnEncrypt_pressed()
{
    QString key = ui->txtKey->text();
    MainWindow::encryptFile(file.fileName(), key);
}

void MainWindow::encryptFile(const QString &fileName, const QString &password)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Failed to open file for reading.");
        return;
    }

    QByteArray fileData = file.readAll(); // Read file content
    file.close();

    // Generate a hash from the password (to ensure consistent key size)
    QByteArray key = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);

    // XOR encryption (Basic example)
    for (int i = 0; i < fileData.size(); ++i) {
        fileData[i] = fileData[i] ^ key[i % key.size()];
    }

    // Save encrypted data
    QFile encryptedFile(fileName);
    if (!encryptedFile.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, "Error", "Failed to open file for writing.");
        return;
    }

    encryptedFile.write(fileData);
    encryptedFile.close();

    MainWindow::loadFileContents(fileName);

    QMessageBox::information(this, "Success", "File encrypted successfully!");
}

void MainWindow::decryptFile(const QString &fileName, const QString &password)
{
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Failed to open file for reading.");
        return;
    }

    QByteArray fileData = file.readAll(); // Read file content
    file.close();

    // Generate a hash from the password (ensures consistent key size)
    QByteArray key = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);

    // XOR decryption (Same as encryption since XOR is symmetric)
    for (int i = 0; i < fileData.size(); ++i) {
        fileData[i] = fileData[i] ^ key[i % key.size()];
    }

    // Overwrite the original file with decrypted data
    if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QMessageBox::warning(this, "Error", "Failed to overwrite file.");
        return;
    }

    file.write(fileData);
    file.close();

    MainWindow::loadFileContents(fileName);

    QMessageBox::information(this, "Success", "File decrypted successfully!");
}

void MainWindow::on_btnDecrypt_pressed()
{
    MainWindow::decryptFile(file.fileName(), ui->txtKey->text());
}
