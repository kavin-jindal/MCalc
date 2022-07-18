#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();
    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();


    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_68_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_64_clicked();

    void on_pushButton_71_clicked();

    void on_pushButton_65_clicked();

    void on_pushButton_72_clicked();

    void on_pushButton_84_clicked();

    void on_comboBox_activated(int index);

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_78_clicked();

    void on_pushButton_79_clicked();

    void on_pushButton_75_clicked();

    void on_pushButton_66_clicked();

    void on_pushButton_73_clicked();

    void on_pushButton_74_clicked();

    void on_pushButton_77_clicked();

    void on_pushButton_81_clicked();

    void on_pushButton_82_clicked();

    void on_pushButton_80_clicked();

    void on_pushButton_76_clicked();

    void on_pushButton_83_clicked();

private:
    void createActions();
    void createMenus();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
