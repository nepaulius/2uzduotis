#ifndef GALVININKAS_H_INCLUDED
#define GALVININKAS_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iterator>
#include <exception>
#include <limits>
#include <sstream>

struct Studentai{
std::string vardas;
std::string pavarde;
std::vector <int> balai;
double galutinis;
double galutinismediana;
bool operator() (Studentai i,Studentai j) { return (i.pavarde<j.pavarde);}

};
int Tik(std::string tikrinimas);
std::string Tik2();
 void Tekstas();
 double Mediana(std::vector<int> balai,int namsk);
 double Vidurkis(double laikinvid,int e);
 int Ilgiausia(std::vector<std::string>pavardes);
 int countWordsInString(std::string const& str);
 std::string ValidacijaVidurkiuIrMedianai(std::string b);



#endif // GALVININKAS_H_INCLUDED
