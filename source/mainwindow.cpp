#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>
#include <math.h>
#include <QtGui/QIcon>

QIcon icon("Calc.ico");

using namespace std;


QString value = "", total = "", tests="", ttotal = "";
double pi = 3.14159265359;
double fnum;
double tnum;
double snum;
bool add_fun = false;
bool sub_fun = false;
bool multi_fun = false;
bool divide_fun = false;
bool power = false;

bool square_fun = false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEnabled(false);

}

MainWindow::~MainWindow()
{

    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    value = ui->textEdit->toPlainText() + "1";
    ui->textEdit->setText(value);
}


void MainWindow::on_pushButton_2_clicked()
{
    value = ui->textEdit->toPlainText() + "2";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_3_clicked()
{
    value = ui->textEdit->toPlainText() + "3";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_4_clicked()
{
    value = ui->textEdit->toPlainText() + "4";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_6_clicked()
{
    value = ui->textEdit->toPlainText() + "5";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_7_clicked()
{
    value = ui->textEdit->toPlainText() + "6";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_8_clicked()
{
    value = ui->textEdit->toPlainText() + "7";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_5_clicked()
{
    value = ui->textEdit->toPlainText() + "8";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_10_clicked()
{
    value = ui->textEdit->toPlainText() + "9";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_12_clicked()
{
    value = ui->textEdit->toPlainText() + "0";
    ui->textEdit->setText(value);

}


void MainWindow::on_pushButton_11_clicked()
{
    fnum = value.toDouble();
    value = "";

    ui->textEdit->setText(value);
    add_fun = true;


}


void MainWindow::on_pushButton_9_clicked()
{
    fnum = value.toDouble();
    value = "";

    ui->textEdit->setText(value);
    sub_fun = true;



}


void MainWindow::on_pushButton_14_clicked()
{
    fnum = value.toDouble();
    value = "";

    ui->textEdit->setText(value);
    multi_fun = true;


}


void MainWindow::on_pushButton_13_clicked()
{
    fnum = value.toDouble();
    value = "";

    ui->textEdit->setText(value);
    divide_fun = true;

}


void MainWindow::on_pushButton_15_clicked()
{
    snum = value.toDouble();
    tests = "";
    tests = ui->textEdit->toPlainText();
    string final = tests.toStdString();
    /*if (final.find("π")){
        ui->textEdit->toPlainText().replace("π", "3.14");

    }*/
    if (add_fun){
        total = QString::number(fnum + snum);

        ui->textEdit->setText(total);
        fnum = 0;
        snum = 0;


    }
    if (sub_fun){
        total = QString::number(fnum - snum);
        ui->textEdit->setText(total);

        fnum = 0;
        snum = 0;

    }
    if (multi_fun){
        total = QString::number(fnum * snum);
        ui->textEdit->setText(total);

        fnum = 0;
        snum = 0;
    }
    if (divide_fun){
        if (fnum == snum){
            total = QString::number(1);
            ui->textEdit->setText(total);
        }
        else {
            total = QString::number(fnum / snum);
            ui->textEdit->setText(total);
        }


        fnum = 0;
        snum = 0;
    }
    if (power){
        total = QString::number(pow(fnum, snum));
        ui->textEdit->setText(total);
    }
    if (square_fun){

    }
    fnum = 0;
    snum = 0;







}






void MainWindow::on_pushButton_16_clicked()
{
    ui->textEdit->clear();
}


void MainWindow::on_pushButton_17_clicked()
{
    fnum = value.toDouble();
    value = "";
    total = QString::number(fnum * fnum);
    ui->textEdit->setText(total);

    square_fun = true;
}


void MainWindow::on_pushButton_18_clicked()
{
    fnum = value.toDouble();
    value = "";
    total = QString::number(fnum * fnum * fnum);
    ui->textEdit->setText(total);

}


void MainWindow::on_pushButton_19_clicked()
{
    fnum = value.toDouble();
    value = "";
    total = QString::number(sqrt(fnum));
    ui->textEdit->setText(total);
}


void MainWindow::on_pushButton_20_clicked()
{
    value = ui->textEdit->toPlainText() + ".";
    ui->textEdit->setText(value);
}


void MainWindow::on_pushButton_21_clicked()
{
    fnum = value.toDouble();
    value = "";
    total = QString::number(fnum / 100);
    ui->textEdit->setText(total);
}


void MainWindow::on_pushButton_22_clicked()
{
    fnum = value.toDouble();
    value = ui->textEdit->toPlainText() + "3.14";
    ui->textEdit->setText(value);

}




void MainWindow::on_pushButton_23_clicked()
{
    tnum = ui->textEdit_2->toPlainText().toInt();
    tests = "";
    ttotal = QString::number(sin(tnum));
    ui->textEdit_2->setText(ttotal);
}


void MainWindow::on_pushButton_24_clicked()
{
    tnum = ui->textEdit_2->toPlainText().toInt();
    tests = "";
    ttotal = QString::number(cos(tnum));
    ui->textEdit_2->setText(ttotal);
}


void MainWindow::on_pushButton_25_clicked()
{
    tnum = ui->textEdit_2->toPlainText().toInt();
    tests = "";
    ttotal = QString::number(tan(tnum));
    ui->textEdit_2->setText(ttotal);
}





void MainWindow::on_pushButton_27_clicked()
{
    tnum = ui->textEdit_2->toPlainText().toInt();
    tests = "";
    ttotal = QString::number(1/(sin(tnum)));
    ui->textEdit_2->setText(ttotal);
}


void MainWindow::on_pushButton_28_clicked()
{
    tnum = ui->textEdit_2->toPlainText().toInt();
    tests = "";
    ttotal = QString::number(1/(tan(tnum)));
    ui->textEdit_2->setText(ttotal);
}


void MainWindow::on_pushButton_29_clicked()
{
    tnum = ui->textEdit_2->toPlainText().toInt();
    tests = "";
    QString conversion = "";

    conversion = QString::number(1/(cos(tnum)));


    ui->textEdit_2->setText(conversion);
}


void MainWindow::on_pushButton_26_clicked()
{
    fnum = value.toDouble();
    value = "";

    ui->textEdit->setText(value);
    power = true;
}


void MainWindow::on_pushButton_68_clicked()
{
    value = ui->textEdit_2->toPlainText() + "1";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_62_clicked()
{
    value = ui->textEdit_2->toPlainText() + "2";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_61_clicked()
{
    value = ui->textEdit_2->toPlainText() + "3";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_59_clicked()
{
    value = ui->textEdit_2->toPlainText() + "4";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_70_clicked()
{
    value = ui->textEdit_2->toPlainText() + "5";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_63_clicked()
{
    value = ui->textEdit_2->toPlainText() + "6";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_60_clicked()
{
    value = ui->textEdit_2->toPlainText() + "7";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_67_clicked()
{
    value = ui->textEdit_2->toPlainText() + "8";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_69_clicked()
{
    value = ui->textEdit_2->toPlainText() + "9";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_64_clicked()
{
    value = ui->textEdit_2->toPlainText() + "0";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_71_clicked()
{
    value = ui->textEdit_2->toPlainText() + "3.14";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_65_clicked()
{
    value = ui->textEdit_2->toPlainText() + ".";
    ui->textEdit_2->setText(value);
}


void MainWindow::on_pushButton_72_clicked()
{
    ui->textEdit_2->clear();
}


void MainWindow::on_pushButton_84_clicked()
{
    QString current = ui->comboBox->currentText();
    QString second = ui->comboBox_2->currentText();


    if (current.compare("Degrees") && second.compare("Radian")){
        exit;

    }
    if (current == "Degrees" && second == "Radian"){
        QString answer = "";
        answer = QString::number(ui->lineEdit->text().toInt() * (pi / 180));
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit_2->setText(answer);
    }
    if (current == "Radian" && second == "Degrees"){
        QString answer = "";
        answer = QString::number(ui->lineEdit->text().toInt() * (180 / pi));
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit_2->setText(answer);
    }
    if (current == second){
        ui->lineEdit_2->setText(ui->lineEdit->text());
    }

}





void MainWindow::on_comboBox_activated(int index)
{

}


void MainWindow::on_pushButton_78_clicked()
{
    value = ui->lineEdit->text() + "1";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_79_clicked()
{
    value = ui->lineEdit->text() + "2";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_75_clicked()
{
    value = ui->lineEdit->text() + "3";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_66_clicked()
{
    value = ui->lineEdit->text() + "4";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_73_clicked()
{
    value = ui->lineEdit->text() + "5";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_74_clicked()
{
    value = ui->lineEdit->text() + "6";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_77_clicked()
{
    value = ui->lineEdit->text() + "7";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_81_clicked()
{
    value = ui->lineEdit->text() + "8";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_82_clicked()
{
    value = ui->lineEdit->text() + "9";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_80_clicked()
{
    value = ui->lineEdit->text() + "0";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_76_clicked()
{
    value = ui->lineEdit->text() + ".";
    ui->lineEdit->setText(value);
}


void MainWindow::on_pushButton_83_clicked()
{
    ui->lineEdit->clear();
}

