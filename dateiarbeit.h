#pragma once

#include "header.h"

class Dateiarbeit
{
private:
    /* data */
    vector<string> woerter;
    vector<int> woerterGenutzt;
    string dateiName;

public:
    Dateiarbeit();
    Dateiarbeit(string _dateiName);
    ~Dateiarbeit();

    void dateiLaden(string _dateiName);
    void dateiSpeichern(string _dateiName);
};
Dateiarbeit::Dateiarbeit()
{
}

Dateiarbeit::Dateiarbeit(string _dateiName)
{
    // Datei Pointer
    fstream fin;
    string line, word, tempWort;
    int tempZahl;
    // Die Datei öffnen
    fin.open(_dateiName);

    if (fin.is_open())
    {
        woerter.clear();

        while (getline(fin, line))
        {
            stringstream lineStream(line);
            getline(lineStream, tempWort, ' ');
            lineStream >> tempZahl;

            woerter.push_back(tempWort);
            woerterGenutzt.push_back(tempZahl);
        }
    }
    else
    {
        cout << "Datei konnte nicht geöffnet werde." << endl;
    }

    for (int i = 0; i < woerter.size(); ++i)
    {
        cout << woerter.at(i) << ", " << woerterGenutzt.at(i) << endl;
    }

    fin.close();
}

Dateiarbeit::~Dateiarbeit()
{
}

void Dateiarbeit::dateiLaden(string _dateiName)
{
}

void Dateiarbeit::dateiSpeichern(string _dateiName)
{
}
