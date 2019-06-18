#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    // Ritorna lo stato della cella: "" (vuota), "O", "X"
    QString stato(int riga, int colonna);
    // Ritorna vero se le condizioni di vittoria sono soddisfatte
    bool vittoria();
    // Array con puntatori ai widget dell'interfaccia grafica
    QPushButton* m_celle[3][3];
    Ui::MainWindow *ui;



    QString m_giocatore{"O"};
    void fineTurno();

public slots:
    void onClicked_00();
    void onClicked_01();
    void onClicked_02();
    void onClicked_10();
    void onClicked_11();
    void onClicked_12();
    void onClicked_20();
    void onClicked_21();
    void onClicked_22();
};

#endif // MAINWINDOW_H
