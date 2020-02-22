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

public:
  Woerterliste();
  Woerterliste(string);
  ~Woerterliste();
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
