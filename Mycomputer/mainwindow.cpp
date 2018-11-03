#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextCursor>
#include<cmath>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num1="";
    num2="";
    oper="";
    anwser="";
    havenum1=false;
    this->resize(500,400);
    this->move(380,240);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(havenum1==false)
    {
    num1+="1";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="1";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(havenum1==false)
    {
    num1+="2";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="2";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(havenum1==false)
    {
    num1+="3";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="3";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(havenum1==false)
    {
    num1+="4";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="4";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(havenum1==false)
    {
    num1+="5";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="5";
    ui->textEdit->setText(num1+oper+num2);
    }

}

void MainWindow::on_pushButton_6_clicked()
{
    if(havenum1==false)
    {
    num1+="6";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="6";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(havenum1==false)
    {
    num1+="7";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="7";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(havenum1==false)
    {
    num1+="8";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="8";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(havenum1==false)
    {
    num1+="9";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="9";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    if(havenum1==false)
    {
    num1+="0";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="0";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    oper="+";
    if(num1==""&&anwser!="")num1=anwser;
    ui->textEdit->setText(num1+oper);
    havenum1=true;
}

void MainWindow::on_pushButton_12_clicked()
{
    oper="×";
    if(num1==""&&anwser!="")num1=anwser;
    ui->textEdit->setText(num1+oper);
    havenum1=true;
}


void MainWindow::on_pushButton_11_clicked()
{
    oper="-";
    if(num1==""&&anwser!="")num1=anwser;
    ui->textEdit->setText(num1+oper);
    havenum1=true;
}


void MainWindow::on_pushButton_13_clicked()
{
    oper="÷";
    if(num1==""&&anwser!="")num1=anwser;
    ui->textEdit->setText(num1+oper);
    havenum1=true;
}

void MainWindow::on_pushButton_17_clicked()
{
    if(havenum1==false)
    {
    num1+=".";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+=".";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_16_clicked()
{
    num1="";
    num2="";
    oper="";
    ui->textEdit->clear();
    havenum1=false;
//ui->textEdit->moveCursor(QTextCursor::Up);
}

void MainWindow::on_pushButton_14_clicked()
{
    if(oper=="+")
    {
        double temp=num1.toDouble()+num2.toDouble();
       anwser.setNum(temp);
       num1="";
       num2="";
       oper="";
       ui->textEdit->append("="+anwser);
    }
    if(oper=="×")
    {
        double temp=num1.toDouble()*num2.toDouble();
       anwser.setNum(temp);
       num1="";
       num2="";
       oper="";
       ui->textEdit->append("="+anwser);
    }
    if(oper=="-")
    {
        double temp=num1.toDouble()-num2.toDouble();
       anwser.setNum(temp);
       num1="";
       num2="";
       oper="";
       ui->textEdit->append("="+anwser);
    }
    if(oper=="÷")
    {
        double temp=num1.toDouble()/num2.toDouble();
       anwser.setNum(temp);
       num1="";
       num2="";
       oper="";
       ui->textEdit->append("="+anwser);
    }
    if(oper=="^2")
    {
        double temp=pow(num1.toDouble(),2);
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="^3")
    {
        double temp=pow(num1.toDouble(),3);
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="^")
    {
        double temp=pow(num1.toDouble(),num2.toDouble());
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="lg")
    {
        double temp=log10(num1.toDouble());
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="ln")
    {
        double temp=log(num1.toDouble());
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="√")
    {
        double temp=sqrt(num1.toDouble());
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="sin")
    {
        double temp=sin(num1.toDouble());
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="cos")
    {
        double temp=cos(num1.toDouble());
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    if(oper=="tan")
    {
        double temp=tan(num1.toDouble());
        anwser.setNum(temp);
        num1="";
        num2="";
        oper="";
        ui->textEdit->append("="+anwser);
    }
    havenum1=false;
}

void MainWindow::on_pushButton_18_clicked()
{
    if(havenum1==false && anwser!="")
    {
    num1=anwser;
    ui->textEdit->setText(oper+num1);
    havenum1=true;
    }
    else if(oper!=""&& anwser!="")
    {
    num2=anwser;
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_19_clicked()
{
    if(num1!=""&&oper=="")
    {
        oper="^2";
        havenum1=true;
        ui->textEdit->setText(num1+oper);
    }
}

void MainWindow::on_pushButton_20_clicked()
{
    if(num1!=""&&oper=="")
    {
        oper="^3";
        havenum1=true;
        ui->textEdit->setText(num1+oper);
    }
}

void MainWindow::on_pushButton_21_clicked()
{
    if(num1!="")
    {
        oper="^";
        havenum1=true;
        ui->textEdit->setText(num1+oper);
    }
}

void MainWindow::on_pushButton_22_clicked()
{
    if(num1=="")
    {
        oper="lg";
        ui->textEdit->setText(oper);
    }
}

void MainWindow::on_pushButton_23_clicked()
{
    if(num1=="")
    {
        oper="ln";
        ui->textEdit->setText(oper);
    }
}

void MainWindow::on_pushButton_24_clicked()
{
    if(num1=="")
    {
        oper="√";
        ui->textEdit->setText(oper);
    }
}

void MainWindow::on_pushButton_25_clicked()
{
    if(num1=="")
    {
        oper="sin";
        ui->textEdit->setText(oper);
    }
}

void MainWindow::on_pushButton_26_clicked()
{
    if(num1=="")
    {
        oper="cos";
        ui->textEdit->setText(oper);
    }
}

void MainWindow::on_pushButton_27_clicked()
{
    if(num1=="")
    {
        oper="tan";
        ui->textEdit->setText(oper);
    }
}

void MainWindow::on_pushButton_28_clicked()
{
    if(havenum1==false)
    {
    num1+="2.71828";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="2.71828";
    ui->textEdit->setText(num1+oper+num2);
    }
}

void MainWindow::on_pushButton_29_clicked()
{
    if(havenum1==false)
    {
    num1+="3.1415926";
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2+="3.1415926";
    ui->textEdit->setText(num1+oper+num2);
    }
}


void MainWindow::on_pushButton_30_clicked()
{
    if(havenum1==false)
    {
    num1.insert(0,'-');
    ui->textEdit->setText(oper+num1);
    }
    else if(oper!="")
    {
    num2.insert(0,'-');
    ui->textEdit->setText(num1+oper+num2);
    }
}
