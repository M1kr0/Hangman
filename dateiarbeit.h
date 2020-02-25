#pragma once

#include "header.h"

class Dateiarbeit
{
protected:
  /* data */
  vector<string> m_woerter;
  vector<int> m_woerterGenutzt;
  string m_dateiName;

public:
  Dateiarbeit();
  Dateiarbeit(string _dateiName);
  ~Dateiarbeit();

  vector<string> getWoerter();
  vector<int> getWoerterGenutzt();
};

Dateiarbeit::Dateiarbeit()
{
#if DEBUG
  cout << "Dateiarbeit default constructor called." << endl;
#endif
}

Dateiarbeit::Dateiarbeit(string _dateiName)
{
#if DEBUG
  cout << "Dateiarbeit overloaded constructor called." << endl;
#endif
  fstream fin;
  string line, word, tempWort;
  int tempZahl;

  m_dateiName = _dateiName;
  // Die Datei öffnen
  fin.open(_dateiName);

  if (fin.is_open())
  {
    m_woerter.clear();

    while (getline(fin, line))
    {
      stringstream lineStream(line);
      getline(lineStream, tempWort, ',');
      lineStream >> tempZahl;

      m_woerter.push_back(tempWort);
      m_woerterGenutzt.push_back(tempZahl);
    }
  }
  else
  {
    cout << "Datei konnte nicht geöffnet werde." << endl;
    cout << "Überprüfen Sie den Dateinamen und starten Sie erneut." << endl;
  }

  for (int i = 0; i < m_woerter.size(); ++i)
  {
    cout << m_woerter.at(i) << ", " << m_woerterGenutzt.at(i) << endl;
  }

  fin.close();
}

Dateiarbeit::~Dateiarbeit()
{
#if DEBUG
  cout << "Dateiarbeit destructor called." << endl;
#endif
  // Abspeichern der aktuellen Wörterliste mit den neuen Zählern in der Datei
  ofstream file;
  string tempLine;

  file.open(m_dateiName);

  if (!file.is_open())
  {
    cout << m_dateiName << " konnte nicht zum schreiben geöffnet werden." << endl;
  }
  else
  {
    for (int i = 0; i < m_woerter.size(); i++)
    {
      file << m_woerter.at(i) << "," << m_woerterGenutzt.at(i) << endl;
    }
  }

  file.close();
}

vector<string> Dateiarbeit::getWoerter()
{
  return m_woerter;
}
vector<int> Dateiarbeit::getWoerterGenutzt()
{
  return m_woerterGenutzt;
}