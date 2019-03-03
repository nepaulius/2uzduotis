#include "galvininkas.h"

void Rusis(std::vector<Studentai> vektstud,int k)
{


    std::ofstream ne;
    std::ofstream taip;
    std::stringstream a;
    std::string failovardas;
    std::stringstream a1;
    std::string failovardas1;
    a<<k;
    failovardas= "Moka_" + a.str();

    failovardas += ".txt";
    taip.open(failovardas.c_str(), std::ios::out);
    a1<<k;
    failovardas1= "Nemoka_" + a1.str();

    failovardas1 += ".txt";
    ne.open(failovardas1.c_str(), std::ios::out);


    for(int i=0;i<vektstud.size();i++)
    {
        if(vektstud[i].galutinis<5)
        {
            ne<<std::left<<std::setw(15)<<vektstud[i].vardas<<std::setw(20)<<std::left<<vektstud[i].pavarde;
            for(int j=0;j<10;j++)
            {
                ne<<std::setw(5)<<std::left<<vektstud[i].balai[j];
            }
            ne<<std::setw(7)<<std::right<<vektstud[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<vektstud[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<vektstud[i].galutinismediana<<std::endl;

        }
        else
        {
            taip<<std::left<<std::setw(10)<<vektstud[i].vardas<<std::setw(20)<<std::left<<vektstud[i].pavarde;
            for(int j=0;j<10;j++)
            {
                taip<<std::setw(5)<<std::left<<vektstud[i].balai[j];
            }
            taip<<std::setw(7)<<std::right<<vektstud[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<vektstud[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<vektstud[i].galutinismediana<<std::endl;
        }

    }
    ne.close();
    taip.close();

}
void Pirmasfailas(int k)
{
    auto start = std::chrono::system_clock::now();
    Studentai gimt;
    std::vector<Studentai> stud;

    double laikinvid=0;
    std::string failovardas;
    std::ofstream fr;

    std::stringstream a;
    a<<k;
    failovardas= "Rez_" + a.str();

    failovardas += ".txt";
    fr.open(failovardas.c_str(), std::ios::out);

    fr<<std::left<<std::setw(15)<<"Vardas"<<std::setw(30)<<std::left<<"Pavarde";
    for(int i=1;i<11;i++)
    {
        fr<<std::setw(5)<<std::left<<"ND"+std::to_string(i);
    }
    fr<<std::setw(12)<<std::right<<"Egzaminas"<<std::setw(35)<<std::right<<"Galutinis vid./ Galutinis med"<<std::endl;
    fr<<std::endl;


    srand (time(NULL));
    for(int i=0;i<std::round(pow(10,k));i++)
    {

        gimt.vardas="Vardas"+std::to_string(i);

        gimt.pavarde="Pavarde"+std::to_string(i);
        for(int j=0;j<10;j++)
        {
            int bet=rand() % 10 + 1;

            laikinvid=bet+laikinvid;


            gimt.balai.push_back(bet);
        }
        gimt.testas=rand() % 10 + 1;




        gimt.galutinis = 0.4 * Vidurkis(laikinvid,10) + 0.6 *gimt.testas;
        gimt.galutinismediana =0.4 * Mediana(gimt.balai,10) + 0.6 *gimt.testas;




        stud.push_back(gimt);


        gimt.balai.clear();
\
        laikinvid=0;
    }
    auto startrusis = std::chrono::system_clock::now();
    Rusis(stud, k);
    auto endrusis = std::chrono::system_clock::now();
    auto uztruko = endrusis - startrusis;
    std::cout << k<<" karta rusiuojant uztruko :   "<<uztruko.count()<< std::endl;

    for(int i=0;i<stud.size();i++)
    {
        fr<<std::left<<std::setw(15)<<stud[i].vardas<<std::setw(30)<<std::left<<stud[i].pavarde;
        for(int j=0;j<10;j++)
        {
            fr<<std::setw(5)<<std::left<<stud[i].balai[j];
        }
        fr<<std::setw(7)<<std::right<<stud[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<stud[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<stud[i].galutinismediana<<std::endl;

    }


    fr.close();
    auto end = std::chrono::system_clock::now();
    auto elapsed = end - start;
    //std::cout << k<<" karta skaiciuojant uztruko :   "<<elapsed.count() << std::endl;

}
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
