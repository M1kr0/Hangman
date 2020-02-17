#pragma once

#include "header.h"

class Dateiarbeit
{
private:
    /* data */
    vector<string> woerter;

public:
    Dateiarbeit(/* args */);
    ~Dateiarbeit();

    void dateiLaden(string _dateiName);
    void dateiSpeichern(string _dateiName);
};

Dateiarbeit::Dateiarbeit(/* args */)
{
}

Dateiarbeit::~Dateiarbeit()
{
}

void Dateiarbeit::dateiLaden(string _dateiName)
{
    // Datei Pointer
    fstream fin;
    string line, word, temp;
    // Die Datei öffnen
    fin.open(_dateiName, ios::in);

    while (fin >> temp)
    {
    }
}

void Dateiarbeit::dateiSpeichern(string _dateiName)
{
}