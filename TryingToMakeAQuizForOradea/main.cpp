#include "TryingToMakeAQuizForOradea.h"
#include "Repository.h"
#include "Service.h"
#include "QtWidgetsClass.h"
#include <QVBoxLayout>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Repository repo{};
    Service srv{ repo };
    srv.srv_addQuestion("Celula", "Afirmatiile corecte privind celula sunt:", "Este unitatea de baza morfofunctionala a organizarii materiei vii", "Poate exista doar singura", "Poate exista singura sau in grup", "Forma sa este legata de functie", "Are initial forma globuloasa", "A C D E");
    srv.srv_addQuestion("Celula", "Forma celulelor:", "Este legata de functia lor", "Este initial globuloasa", "Ulterior se poate modifica", "Ulterior se modifica obligatoriu", "Nu se modifica ulterior la nici o celula", "A B C");
        
    QtWidgetsClass* gui = new QtWidgetsClass(srv);
    gui->show();


    return a.exec();
}
