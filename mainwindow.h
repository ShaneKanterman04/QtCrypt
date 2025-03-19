#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSelect_pressed();

    void on_btnEncrypt_pressed();
    void encryptFile(const QString &fileName, const QString &password);
    void decryptFile(const QString &fileName, const QString &password);

    void on_btnDecrypt_pressed();
private:
    Ui::MainWindow *ui;
    QFile file; // Move file variable to the header
    void loadFileContents(const QString &fileName);

};

#endif // MAINWINDOW_H
