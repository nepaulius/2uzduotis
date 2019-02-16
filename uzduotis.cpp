#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



double Mediana(std::vector<int> balai,int namsk)
{
 double median;
 std::sort(balai.begin(), balai.end());
 if( namsk%2==0 || namsk==2  )  median=(double)(balai[balai.size()/2]+balai[balai.size()/2-1])/2;
 else median=balai[balai.size()/2];

 return median;
}

double Vidurkis(double laikinvid,int e)
{
    double vidurkis = laikinvid/e;
    return vidurkis;
}
int Ilgiausia(std::vector<std::string>pavardes, int skaic)
{
    std::string longest=pavardes[0];
    for(int i=0;i<skaic;i++)
    {
        if(longest.size()<pavardes[i].size())
        {
            longest=pavardes[i];
        }
    }

    return longest.size();
}

struct Studentai{
std::string vardas;
std::string pavarde;
std::vector <int> balai;
double galutinis;
double galutinismediana;

};



int main()
{

int studsk;

std::vector<Studentai> vektstud;

std::vector<std::string>vardai2;
std::vector<std::string>pavardes2;





std::cout<<"Iveskite studentu skaiciu : "<<std::endl;
std::cin>>studsk;


for(int i=0;i<studsk;i++){

Studentai stud;
std::cout<<"Iveskite varda : "<<std::endl;
std::cin>>stud.vardas;
vardai2.push_back(stud.vardas);


std::cout<<"Iveskite pavarde : "<<std::endl;
std::cin>>stud.pavarde;
pavardes2.push_back(stud.pavarde);


int t;

std::cout<<"Ar norite automatiskai parinkti namu darbu ir egzamino reuzltatus? (Jei norite, spauskite 0 jei ne 1)"<<std::endl;
std::cin>>t;

double laikinvid=0;


if(t==0)
{
    int n=3;

    int intime;
     srand (time(NULL));
    for(int i=0;i<n;i++)
    {
       intime = rand() % 10 + 1;
       stud.balai.push_back(intime);
       laikinvid=stud.balai[i]+laikinvid;

    }
int egz=rand() % 10 + 1;

stud.galutinis = 0.4 * Vidurkis(laikinvid,n) + 0.6 * egz;
stud.galutinismediana= 0.4* Mediana(stud.balai,n) + 0.6 * egz;


vektstud.push_back(stud);



}

else
{

int d;
int e=0;
do{
std::cout<<"Iveskite namu darbu pazymi(1-10), kai noresite baigti, spauskite 0 : "<<std::endl;
std::cin>>d;


if(d!=0&&d<=10){
stud.balai.push_back(d);
laikinvid=stud.balai[e]+laikinvid;
e++;
}
else if(d>10) std::cout<<"Ivedet per dideli bala"<<std::endl;

}while(d!=0);



int egz=0;
int a=0;
do{
std::cout<<"Iveskite egzamino pazymi(1-10) : "<<std::endl;
std::cin>>egz;

if(egz<0 || egz>10) std::cout<<"Ivedet ne taip"<<std::endl;
else a++;
}while(a<1);




stud.galutinis = 0.4* Vidurkis(laikinvid,e)+ 0.6*egz;
stud.galutinismediana= 0.4 * Mediana(stud.balai,e)+ 0.6*egz;


vektstud.push_back(stud);



}
}







int s;
std::cout<<"Jei norite matyti vidurki, spauskite 0, jei mediana spauskite 1"<<std::endl;
std::cin>>s;
std::cout<<std::left<<std::setw(Ilgiausia(pavardes2,studsk)+10)<<"Pavarde ";
std::cout<<std::left<<std::setw(Ilgiausia(vardai2,studsk)+10)<<"Vardas";
std::cout<<"Galutinis (vid.)/Galutinis (med.) "<<std::endl;



for(int i=0;i<vektstud.size();i++){

std::cout<<std::left<<std::setw(Ilgiausia(pavardes2,studsk)+10)<<vektstud[i].pavarde;
std::cout<<std::left<<std::setw(Ilgiausia(vardai2,studsk)+10)<<vektstud[i].vardas;

if(s==0) std::cout<<std::fixed<<std::setprecision(2)<<vektstud[i].galutinis<<std::setw(16)<<std::endl;
else std::cout<<std::right<<std::setw(24)<<std::fixed<<std::setprecision(2)<<vektstud[i].galutinismediana<<std::endl;


}




//std::cout<<IlgiausiaPavarde(pavardes2,studsk)<<std::endl;





    return 0;
}
