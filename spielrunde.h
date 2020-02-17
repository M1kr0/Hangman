#pragma once

#include "header.h"

class Spielrunde
{
private:
    /* data */
public:
    Spielrunde(/* args */);
    ~Spielrunde();

    void showHangman(int _stage);
};

Spielrunde::Spielrunde(/* args */)
{
}

Spielrunde::~Spielrunde()
{
}

void Spielrunde::showHangman(int _stage)
{
    switch (_stage)
    {
    case 0:
        cout << "Sie haben noch alle Leben." << endl;
        break;

    case 1:
        cout << "|      |" << endl;
        cout << "|      |" << endl;
        cout << "Sie haben 1 von 7 Leben verloren." << endl;
        cout << "Noch ist keine Panik angesagt." << endl;
        break;

    case 2:
        cout << "________" << endl;
        cout << "|      |" << endl;
        cout << "|      |" << endl;
        cout << "Sie haben 2 von 7 Leben verloren." << endl;
        break;

    case 3:
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << "_|______" << endl;
        cout << "|      |" << endl;
        cout << "|      |" << endl;
        cout << "Sie haben 3 von 7 Leben verloren." << endl;
        cout << "Sie sollten besser aufpassen." << endl;
        break;

    case 4:
        cout << " ____   " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << "_|______" << endl;
        cout << "|      |" << endl;
        cout << "|      |" << endl;
        cout << "Sie haben 4 von 7 Leben verloren." << endl;
        break;

    case 5:
        cout << " ____   " << endl;
        cout << " |  |   " << endl;
        cout << " | ( )  " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << "_|______" << endl;
        cout << "|      |" << endl;
        cout << "|      |" << endl;
        cout << "Sie haben 5 von 7 Leben verloren." << endl;
        cout << "Sie sollten sich die nächsten Buchstaben gründlich überlegen." << endl;
        break;

    case 6:
        cout << " ____   " << endl;
        cout << " |  |   " << endl;
        cout << " | ( )  " << endl;
        cout << " | \\|/  " << endl;
        cout << " |  |   " << endl;
        cout << " |      " << endl;
        cout << " |      " << endl;
        cout << "_|______" << endl;
        cout << "|      |" << endl;
        cout << "|      |" << endl;
        cout << "Sie haben 6 von 7 Leben verloren." << endl;
        cout << "Beim nächsten Fehler ist das Spiel vorbei." << endl;
        break;

    case 7:
        cout << " ____   " << endl;
        cout << " |  |   " << endl;
        cout << " | ( )  " << endl;
        cout << " | \\|/  " << endl;
        cout << " |  |   " << endl;
        cout << " | / \\  " << endl;
        cout << " |      " << endl;
        cout << "_|______" << endl;
        cout << "|      |" << endl;
        cout << "|      |" << endl
             << endl;
        cout << "Sie haben das Spiel verloren." << endl;
        cout << "Versuchen Sie es gerne nocheinmal." << endl;
        break;

    default:
        break;
    }
}
