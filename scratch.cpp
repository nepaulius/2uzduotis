#include "galvininkas.h"


std::string Tik2()
{
  std::string tikrinimas;
    bool valid;
    std::string n;
	do
    {
        std::getline(std::cin,tikrinimas);
        std::stringstream s(tikrinimas);
        if(s >> n){
        valid = true;
        for(auto& i : tikrinimas)
        {
            if(!std::isalpha(i))
            {
                valid = false;
                std::cout << "Ivedete ne taip bandykite dar kart" << std::endl;
                break;
            }
        }
    }
    else{
	     valid = false;
         std::cout << "Ivedete ne taip bandykite dar kart" << std::endl;
}
    }while(!valid);

    return  tikrinimas;

}

int Tik(std::string tikrinimas)
{

    bool valid;
    std::string n;
	do
    {

        std::getline(std::cin,tikrinimas);
        std::stringstream s(tikrinimas);
        if(s >> n){
        valid = true;
        for(auto& i : tikrinimas)
        {
            if(!std::isdigit(i))
            {
                valid = false;
                std::cout << "Ivedete ne taip bandykite dar kart" << std::endl;
                break;
            }
        }
    }
    else{
	     valid = false;
         std::cout << "Ivedete ne taip bandykite dar kart" << std::endl;
}
    }while(!valid);

    return std::stoi(tikrinimas);

}


 void Tekstas()
{
int kartai=0;
std::vector<Studentai> vektstud;
std::vector<std::string>Pavardes1;
std::vector<std::string>Vardai1;


Studentai stud;
    std::string sLine;
    std::ifstream fd;
    try{
        fd.open("kursiokai.txt");
        if (!fd.good()){
            throw "Tekstinio failo atidaryt neimanoma";

        }
    } catch(const char *msg)
    {
        std::cout<<msg;
    }


getline(fd, sLine);

while(!fd.eof())
{
    fd>>stud.pavarde>>stud.vardas;
    Pavardes1.push_back(stud.pavarde);
    Vardai1.push_back(stud.vardas);


    int q;
    double laikinvid=0;
    for(int i=0;i<countWordsInString(sLine);i++)
    {
        fd>>q;
        stud.balai.push_back(q);
        laikinvid=stud.balai[i]+laikinvid;
    }


    int egz;
    fd>>egz;

stud.galutinis = 0.4 * Vidurkis(laikinvid,countWordsInString(sLine)) + 0.6 *egz;
stud.galutinismediana= 0.4 * Mediana(stud.balai,countWordsInString(sLine)) + 0.6 * egz;


vektstud.push_back(stud);
kartai++;
stud.balai.clear();
}
    fd.close();





std::sort(vektstud.begin(), vektstud.end(), stud);


std::cout<<std::left<<std::setw(Ilgiausia(Pavardes1)+10)<<"Pavarde ";
std::cout<<std::left<<std::setw(Ilgiausia(Vardai1)+10)<<"Vardas";
std::cout<<"Galutinis (vid.)/Galutinis (med.) "<<std::endl;
std::cout<<std::endl;


for(int i=0;i<vektstud.size();i++){

std::cout<<std::left<<std::setw(Ilgiausia(Pavardes1)+10)<<vektstud[i].pavarde;
std::cout<<std::left<<std::setw(Ilgiausia(Vardai1)+10)<<vektstud[i].vardas;
std::cout<<std::left<<std::setw(20)<<vektstud[i].galutinis;
std::cout<<std::left<<std::setw(20)<<vektstud[i].galutinismediana<<std::endl;

}
}


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

int Ilgiausia(std::vector<std::string>pavardes)
{
    std::string longest=pavardes[0];
    for(int i=0;i<pavardes.size();i++)
    {
        if(longest.size()<pavardes[i].size())
        {
            longest=pavardes[i];
        }
    }

    return longest.size();
}
int countWordsInString(std::string const& str)
{
    std::stringstream stream(str);
    return std::distance(std::istream_iterator<std::string>(stream), std::istream_iterator<std::string>())-3;
}
std::string ValidacijaVidurkiuIrMedianai(std::string b)
{
    while(b.length()!=1 || !isalpha(b[0]) || b[0]!='V' && b[0]!='M' )
    {
        std::cout<<"Iveskite dar kart"<<std::endl;
        std::cout<<"Iveskite [V/M]: ";
		std::cin >> b;
    }

	return b;
}
