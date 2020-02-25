/*********************
 * HANGMAN
 * 
 ********************/

#include "header.h"

#include "spielrunde.h"
#include "woerterliste.h"
#include "statistiken.h"

int main(int argc, char **argv)
{

  // string playerName;
  int eingabe = 42;
  Spielrunde game = Spielrunde();
  Woerterliste liste("Wortliste.txt");

  // cout << "Bitte geben Sie eine Spielernamen an: ";
  // cin >> playerName;

  do
  {
    cout << "Welche Aktion wollen Sie ausführen." << endl;
    cout << "[1], für eine neue Spielrunde." << endl;
    cout << "[2], um sich die aktuelle Wörterliste anzeigen zu lassen." << endl;
    cout << "[3], um der Wörterliste ein neues Wort hinzuzufügen." << endl;
    cout << "[4], um ein Wort von der Wörterliste zu löschen." << endl;
    cout << "[5], um die Benutzerstatistik einzusehen." << endl;
    cout << "[0], zum beenden der Anwendung." << endl;
    cout << "Ihre Auswahl: ";
    cin >> eingabe;

    switch (eingabe)
    {
    case 0:
      cout << "Vielen dank fürs spielen und einen schönen Tag noch." << endl;
      break;

    case 1:
      /***
         * Hier wird das eigentliche Game gespielt
         **/

      break;

    case 2:
      // Anzeigen der Wörterliste
      liste.showListe();
      break;

    case 3:
      // Hinzufügen von neuen Wörtern
      liste.addListe();
      break;

    case 4:
      // Löschen von bestehenden Wörtern
      liste.deleteWord();
      break;

    case 5:
      /* code */
      break;

    default:
      cout << "Es sollte nur eine der oben aufgeführte Möglichkeiten ausgewählt werden." << endl;
      break;
    }
  } while (eingabe);

  return 0;
}