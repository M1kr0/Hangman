// #ifndef WOERTERLIST_H
// #define WOERTERLISTE_H
// #endif

#pragma once

#include "header.h"
#include "dateiarbeit.h"

class Woerterliste : public Dateiarbeit
{
private:
    /* data */
public:
    Woerterliste();
    Woerterliste(string _dateiName);
    ~Woerterliste();
};
Woerterliste::Woerterliste()
{
}

Woerterliste::Woerterliste(string _dateiName)
{
}

Woerterliste::~Woerterliste()
{
}
