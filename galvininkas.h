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
#include <cmath>
#include <chrono>
#include <list>
#include <deque>
#include <random>



struct Studentai{
std::string vardas;
std::string pavarde;
std::vector <int> balai;
int testas;
double galutinis;
double galutinismediana;
bool operator() (Studentai i,Studentai j) { return (i.pavarde<j.pavarde);}

};
int Tik(std::string tikrinimas);
std::string Tik2();
 void Tekstas();
void Pirmasfailas(int k);
std::vector<Studentai> Rusis(std::vector<Studentai>  & vektstud,int k);
 double Mediana(std::vector<int> balai,int namsk);
 double Vidurkis(double laikinvid,int e);
 int Ilgiausia(std::vector<std::string>pavardes);
 int countWordsInString(std::string const& str);
 std::string ValidacijaVidurkiuIrMedianai(std::string b);
void Rusis2(std::list<Studentai> liststud,int k);
void Rusis3(std::deque<Studentai>dekasstud,int k);
void Ivedimas();
int PerkeltiIrasyma1sdekas(std::deque<Studentai>nemoka,std::deque<Studentai>moka,int k);
int PerkeltiIrasymas1vector(std::vector<Studentai>nemoka,std::vector<Studentai>moka,int k);
void PerkeltiRusis3(std::deque<Studentai>dekasstud,int k);
int PerkeltiIrasymaslistas(std::list<Studentai>nemoka,std::list<Studentai>moka,int k);
void PerkeltiRusis2(std::list<Studentai> liststud,int k);
void PerkeltiRusis(std::vector<Studentai> vektstud,int k);



#endif // GALVININKAS_H_INCLUDED
