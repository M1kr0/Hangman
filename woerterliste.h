// #ifndef WOERTERLIST_H
// #define WOERTERLISTE_H
// #endif

#pragma once

#include "header.h"
#include "dateiarbeit.h"

class Woerterliste : public Dateiarbeit
{
private:
  string m_dateiName;
  vector<string> m_liste;
  vector<int> m_genutzt;

public:
  Woerterliste();
  Woerterliste(string);
  ~Woerterliste();

  void getListe(int _option = 0);
  void addListe();
};
Woerterliste::Woerterliste()
{
#if DEBUG
  cout << "Wörterliste default constructor called." << endl;
#endif
}

Woerterliste::Woerterliste(string _dateiName) : Dateiarbeit{_dateiName}
{
#if DEBUG
  cout << "Wörterliste overloaded constructor called." << endl;
#endif
}

Woerterliste::~Woerterliste()
{
#if DEBUG
  cout << "Wörterliste destructor called." << endl;
#endif
}

void Woerterliste::getListe(int _option)
{
  switch (_option)
  {
  case 0:
    cout << "Zeige die Liste an Wörtern welche in der aktuellen Lsite vorhanden sind." << endl;
    break;

  case 1:
    cout << "Zeige die Liste der Wörter in alphabetischer Reihenfolge an." << endl;

  default:
    cout << "Dies ist keine der möglichen Optionen." << endl;
    break;
  }
}

void Woerterliste::addListe()
{
  int wahl;
  bool enthalten;
  string wort;
  do
  {
    enthalten = false;
    wahl = 0;
    cout << "Welches Wort wollen Sie hinzufügen: ";
    cin >> wort;

    for (int i = 0; i < m_woerter.size(); i++)
    {
      if (m_woerter.at(i) == wort)
        enthalten = true;
    }

    if (!enthalten)
      m_woerter.push_back(wort);
    else
      cout << "Das Wort ist schon in der Liste enthalten." << endl;

    cout << "Wollen Sie ein weiteres Wort hinzufügen. [1] für ja, [0] für nein." << endl;
    cout << "Ihre Eingabe: ";
    cin >> wahl;
  } while (wahl);
}