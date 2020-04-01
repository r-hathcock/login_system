#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString userId = "";
    do
    {
        bool ok;
        userId = QInputDialog::getText(this, tr("Login"),
                                      tr("5 Digit User Name:"),
                                             QLineEdit::Normal,
                                        QDir::home().dirName(),
                                                          &ok);
    } while((userId.length() != 5) || (userId == "empty"));

    //ui->txt->setText(userId);
}

void MainWindow::on_logoutButton_clicked()
{
    ui->textEdit->setText << "STATUS\n" << "Lab# " << std::setw(7) << "   Computers\n";

   for (int i = 0; i < NUM_LABS; i++)
   {
       std::cout << i + 1 << " " << std::setw(7);

       for (int j = 0; j < NUM_COMPUTERS; j++)
       {
           std::cout << j + 1 << ": " << labs[i][j] << " ";
       }
       std::cout << "\n";
   }
}

void MainWindow::on_searchButton_clicked()
{

}

void MainWindow::on_exitButton_clicked()
{

}
