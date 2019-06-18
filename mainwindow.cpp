#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "msgdialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* START TODO */
    connect(ui->cella_00, SIGNAL(clicked(bool)), this, SLOT(onClicked_00()));
    connect(ui->cella_01, SIGNAL(clicked(bool)), this, SLOT(onClicked_01()));
    connect(ui->cella_02, SIGNAL(clicked(bool)), this, SLOT(onClicked_02()));
    connect(ui->cella_10, SIGNAL(clicked(bool)), this, SLOT(onClicked_10()));
    connect(ui->cella_11, SIGNAL(clicked(bool)), this, SLOT(onClicked_11()));
    connect(ui->cella_12, SIGNAL(clicked(bool)), this, SLOT(onClicked_12()));
    connect(ui->cella_20, SIGNAL(clicked(bool)), this, SLOT(onClicked_20()));
    connect(ui->cella_21, SIGNAL(clicked(bool)), this, SLOT(onClicked_21()));
    connect(ui->cella_22, SIGNAL(clicked(bool)), this, SLOT(onClicked_22()));

    m_celle[0][0] = ui->cella_00;
    m_celle[0][1] = ui->cella_01;
    m_celle[0][2] = ui->cella_02;
    m_celle[1][0] = ui->cella_10;
    m_celle[1][1] = ui->cella_11;
    m_celle[1][2] = ui->cella_12;
    m_celle[2][0] = ui->cella_20;
    m_celle[2][1] = ui->cella_21;
    m_celle[2][2] = ui->cella_22;
    /* END TODO */
}

MainWindow::~MainWindow()
{
    delete ui;
}

/* START TODO */
void MainWindow::fineTurno()
{
    static int turni = 0;

    /* Controlla vittoria */
    if (vittoria()) {
        MsgDialog m(m_giocatore+" ha vinto");
        m.setVisible(true);
        m.exec();
    }

    turni++;
    /* Celle piene? */
    if (turni == 9) {
        MsgDialog m("Fine partita");
        m.setVisible(true);
        m.exec();
    }

    /* Passa al giocatore successivo */
    if (m_giocatore == "O") {
        m_giocatore = "X";
    } else {
        m_giocatore = "O";
    }
}
/* END TODO */

bool MainWindow::vittoria()
{
/*Controlla condizioni di vittoria*/
return (stato(0,0)==stato(0,1)&&stato(0,1)==stato(0,2)&&stato(0,2)!=""
||stato(1,0)==stato(1,1)&&stato(1,1)==stato(1,2)&&stato(1,2)!=""
||stato(2,0)==stato(2,1)&&stato(2,1)==stato(2,2)&&stato(2,2)!=""
||stato(0,0)==stato(1,0)&&stato(1,0)==stato(2,0)&&stato(2,0)!=""
||stato(0,1)==stato(1,1)&&stato(1,1)==stato(2,1)&&stato(2,1)!=""
||stato(0,2)==stato(1,2)&&stato(1,2)==stato(2,2)&&stato(2,2)!=""
||stato(0,0)==stato(1,1)&&stato(1,1)==stato(2,2)&&stato(2,2)!=""
||stato(2,0)==stato(1,1)&&stato(1,1)==stato(0,2)&&stato(0,2)!="");
}

QString MainWindow::stato(int riga, int colonna)
{
    return m_celle[riga][colonna]->text();
}


void MainWindow::onClicked_00()
{
    if (ui->cella_00->text() == "") {
        ui->cella_00->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_01()
{
    if (ui->cella_01->text() == "") {
        ui->cella_01->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_02()
{
    if (ui->cella_02->text() == "") {
        ui->cella_02->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_10()
{
    if (ui->cella_10->text() == "") {
        ui->cella_10->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_11()
{
    if (ui->cella_11->text() == "") {
        ui->cella_11->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_12()
{
    if (ui->cella_12->text() == "") {
        ui->cella_12->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_20()
{
    if (ui->cella_20->text() == "") {
        ui->cella_20->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_21()
{
    if (ui->cella_21->text() == "") {
        ui->cella_21->setText(m_giocatore);
        fineTurno();
    }
}

void MainWindow::onClicked_22()
{
    if (ui->cella_22->text() == "") {
        ui->cella_22->setText(m_giocatore);
        fineTurno();
    }
}

