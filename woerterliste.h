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

  template <typename T>
  void remove(vector<T> &_vec, size_t _pos);

public:
  Woerterliste();
  Woerterliste(string);
  ~Woerterliste();

  void showListe();
  void addListe();
  void deleteWord();
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

void Woerterliste::showListe()
{
  int eingabe = 42;
  cout << "Soll die Liste normal[0] oder alphabetisch[1] angezeigt werden: ";
  cin >> eingabe;
  switch (eingabe)
  {
  case 0:
    cout << "Wort:\t\tGespielt:" << endl;
    for (int i = 0; i < m_woerter.size(); i++)
    {
      cout << m_woerter.at(i) << "\t\t" << m_woerterGenutzt.at(i) << endl;
    }

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
  char wahl;
  bool enthalten;
  string wort;
  do
  {
    enthalten = false;
    wahl = 'n';
    cout << "Welches Wort wollen Sie hinzufügen: ";
    cin >> wort;

    for (int i = 0; i < m_woerter.size(); i++)
    {
      if (m_woerter.at(i) == wort)
        enthalten = true;
    }

    if (!enthalten)
    {
      m_woerter.push_back(wort);
      m_woerterGenutzt.push_back(0);
    }
    else
      cout << "Das Wort ist schon in der Liste enthalten." << endl;

    cout << "Wollen Sie ein weiteres Wort hinzufügen. [j]a, [n]ein." << endl;
    cout << "Ihre Eingabe: ";
    cin >> wahl;
  } while (wahl == 'j' || wahl == 'J');
}

void Woerterliste::deleteWord()
{
  unsigned int index = 42;
  cout << "Welches Wort wollen Sie löschen. Bitte den Index angeben: ";
  cin >> index;

  if (index > m_woerter.size())
  {
    cout << "Der Index liegt ausserhalb des möglichen." << endl;
  }
  else
  {
    remove(m_woerter, index - 1);
    remove(m_woerterGenutzt, index - 1);
  }
}

template <typename T>
void Woerterliste::remove(vector<T> &_vec, size_t _pos)
{
  _vec.erase(_vec.begin() + _pos);
}