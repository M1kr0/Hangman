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
  // // Spielrunde game = Spielrunde();
  Woerterliste liste("Wortliste.txt");

  // cout << "Bitte geben Sie eine Spielernamen an: ";
  // cin >> playerName;

  do
  {
    cout << "Welche Aktion wollen Sie ausführen." << endl;
    cout << "[1], für eine neue Spielrunde." << endl;
    cout << "[2], um sich die aktuelle Wörterliste anzeigen zu lassen." << endl;
    cout << "[3], um ein Wort von der Wörterliste zu löschen." << endl;
    cout << "[4], um der Wörterliste ein neues Wort hinzuzufügen." << endl;
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
      cout << "Soll die Liste normal[0] oder alphabetisch[1] angezeigt werden: ";
      cin >> eingabe;
      liste.getListe(eingabe);
      break;

    case 3:
      /* code */
      break;

    case 4:
      liste.addListe();
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