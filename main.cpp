/*********************
 * HANGMAN
 * 
 ********************/

#include "header.h"

#include "spielrunde.h"
#include "woerterliste.h"

int main(int argc, char **argv)
{
    string playerName;
    int wahl = 0;

    cout << "Bitte geben Sie eine Spielernamen an: ";
    cin >> playerName;

    cout << "Welche Aktion wollen Sie ausführen." << endl;
    cout << "[1], für eine neue Spielrunde." << endl;
    cout << "[2], um sich die aktuelle Wörterliste anzeigen zu lassen." << endl;
    cout << "[3], um ein Wort von der Wörterliste zu löschen." << endl;
    cout << "[4], um der Wörterliste ein neues Wort hinzuzufügen." << endl;
    cout << "[5], um die Benutzerstatistik einzusehen." << endl;
    cout << "[0], zum beenden der Anwendung." << endl;
    cout << "Ihre Auswahl: ";
    cin >> wahl;

    switch (whal)
    {
    case 0:
        /* code */
        break;

    case 1:
        /* code */
        break;

    case 2:
        /* code */
        break;

    case 3:
        /* code */
        break;

    case 4:
        /* code */
        break;

    case 5:
        /* code */
        break;

    default:
        cout << "Es sollte nur eine der oben aufgeführte Möglichkeiten ausgewählt werden." << endl;
        break;
    }

    return 0;
}