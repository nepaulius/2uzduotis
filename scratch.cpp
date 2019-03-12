#include <random>
#include <unordered_set>
#include "galvininkas.h"


int Irasymasdekas(std::deque<Studentai>nemoka,std::deque<Studentai>moka,int k)
{


    std::ofstream ne;

    std::stringstream a1;
    std::string failovardas1;

    a1<<k;
    failovardas1= "DekasNemoka_" + a1.str();

    failovardas1 += ".txt";
    ne.open(failovardas1.c_str(), std::ios::out);
    for(int i=0;i<nemoka.size();i++)
    {
        ne<<std::left<<std::setw(15)<<nemoka[i].vardas<<std::setw(20)<<std::left<<nemoka[i].pavarde;
        for(int j=0;j<50;j++)
        {
            ne<<std::setw(5)<<std::left<<nemoka[i].balai[j];
        }
        ne<<std::setw(7)<<std::right<<nemoka[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<nemoka[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<nemoka[i].galutinismediana<<std::endl;
    }


    ne.close();



}

void Rusis3(std::deque<Studentai>dekasstud,int k)
{


    std::deque<Studentai> nemoka;
    std::deque<Studentai> moka;

    auto startasdekas = std::chrono::system_clock::now();




    for (auto it = begin(dekasstud); it != end(dekasstud);) {
        if (it->galutinis <= 5) {
            nemoka.push_back(*it);
            it = dekasstud.erase(it);
        }
            else
            ++it;
    }






    auto endasdekas = std::chrono::system_clock::now();
    std::chrono::duration<double> uztrukodekas = endasdekas - startasdekas;
    std::cout<<"10 pakelta " << k<<" (dekas) rusiuoja   :   "<<std::fixed<<std::setprecision(20)<<uztrukodekas.count()<< std::endl;
    Irasymasdekas(nemoka,moka,k);
}
int Irasymaslistas(std::list<Studentai>nemoka,std::list<Studentai>moka,int k)
{

    std::list<Studentai>::iterator ite;
    std::ofstream ne;

    std::stringstream a1;
    std::string failovardas1;

    a1<<k;
    failovardas1= "ListNemoka_" + a1.str();

    failovardas1 += ".txt";
    ne.open(failovardas1.c_str(), std::ios::out);


   for(ite=nemoka.begin(); ite!=nemoka.end();ite++)
    {
        ne<<std::left<<std::setw(15)<<ite->vardas<<std::setw(20)<<std::left<<ite->pavarde;
        for(int j=0;j<50;j++)
        {
            ne<<std::setw(5)<<std::left<<ite->balai[j];
        }
        ne<<std::setw(7)<<std::right<<ite->testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<ite->galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<ite->galutinismediana<<std::endl;
    }


    ne.close();



}
void Rusis2(std::list<Studentai> liststud,int k)
{
std::list<Studentai>nemoka;
std::list<Studentai>moka;
std::list<Studentai>::iterator it;


    auto startrusislistas = std::chrono::system_clock::now();


    for (auto it = begin(liststud); it != end(liststud);) {
        if (it->galutinis <= 5) {
            nemoka.push_back(*it);
            it = liststud.erase(it);
        }
        else
            ++it;
    }


    auto endrusislistas = std::chrono::system_clock::now();
    std::chrono::duration<double>uztrukolistas = endrusislistas - startrusislistas;
    std::cout <<"10 pakelta "<< k<<" (list) rusiuoja    :   "<<std::fixed<<std::setprecision(20)<<uztrukolistas.count()<< std::endl;
    Irasymaslistas(nemoka,moka,k);

}

int Irasymas(std::vector<Studentai>nemoka,int k)
{
    std::ofstream ne;

    std::stringstream a1;
    std::string failovardas1;

    a1<<k;
    failovardas1= "Nemoka_" + a1.str();

    failovardas1 += ".txt";
    ne.open(failovardas1.c_str(), std::ios::out);
    for(int i=0;i<nemoka.size();i++)
    {
        ne<<std::left<<std::setw(15)<<nemoka[i].vardas<<std::setw(20)<<std::left<<nemoka[i].pavarde;
        for(int j=0;j<50;j++)
        {
            ne<<std::setw(5)<<std::left<<nemoka[i].balai[j];
        }
        ne<<std::setw(7)<<std::right<<nemoka[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<nemoka[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<nemoka[i].galutinismediana<<std::endl;
    }

    ne.close();


}

bool IsMarkedToDelete(const Studentai & o)
{
    return o.galutinis<=5;


}

std::vector<Studentai> Rusis( std::vector<Studentai> & vektstud ,int k)
{

    std::vector<Studentai> nemoka;
    std::vector<Studentai> moka;

    auto s = std::chrono::system_clock::now();


    std::copy_if(vektstud.begin(), vektstud.end(),std::inserter(nemoka, nemoka.end()), [](const Studentai & w){return w.galutinis<=5;});

    vektstud.erase(std::remove_if(vektstud.begin(), vektstud.end(), IsMarkedToDelete),vektstud.end());



    auto e = std::chrono::system_clock::now();
    std::chrono::duration<double> u = e - s;
    std::cout<<"10 pakelta " << k<<" (vector) rusiuoja  :   "<<std::fixed<<std::setprecision(20)<<u.count()<< std::endl;
    Irasymas(nemoka,k);
    return vektstud;

}
void Pirmasfailas(int k)
{
  //  auto start = std::chrono::system_clock::now();
    Studentai gimt;
    std::vector<Studentai> vektstud;
    std::list<Studentai> liststud;
    std::list<Studentai>::iterator it;
    std::deque<Studentai> dekasstud;

    double laikinvid=0;
    std::string failovardas;
    std::ofstream fr;

    std::stringstream a;
    a<<k;
    failovardas= "Rez_" + a.str();

    failovardas += ".txt";
    fr.open(failovardas.c_str(), std::ios::out);

    fr<<std::left<<std::setw(15)<<"Vardas"<<std::setw(30)<<std::left<<"Pavarde";
    for(int i=1;i<51;i++)
    {
        fr<<std::setw(5)<<std::left<<"ND"+std::to_string(i);
    }
    fr<<std::setw(12)<<std::right<<"Egzaminas"<<std::setw(35)<<std::right<<"Galutinis vid./ Galutinis med"<<std::endl;
    fr<<std::endl;



    std::mt19937 generator;
    generator.seed(std::time(0));
    std::uniform_int_distribution<uint64_t> dice(1,10);

    for(int i=0;i<std::round(pow(10,k));i++)
    {

        gimt.vardas="Vardas"+std::to_string(i);

        gimt.pavarde="Pavarde"+std::to_string(i);
        for(int j=0;j<50;j++)
        {
            int bet=dice(generator);

            laikinvid=bet+laikinvid;


            gimt.balai.push_back(bet);
        }
        gimt.testas=dice(generator);




        gimt.galutinis = 0.4 * Vidurkis(laikinvid,50) + 0.6 *gimt.testas;
        gimt.galutinismediana =0.4 * Mediana(gimt.balai,50) + 0.6 *gimt.testas;




        vektstud.push_back(gimt);
        liststud.push_back(gimt);
        dekasstud.push_back(gimt);


        gimt.balai.clear();

        laikinvid=0;
    }

   Rusis(vektstud, k);
   Rusis2(liststud, k);
  Rusis3(dekasstud,k);



    for(int i=0;i<vektstud.size();i++)
    {
        fr<<std::left<<std::setw(15)<<vektstud[i].vardas<<std::setw(30)<<std::left<<vektstud[i].pavarde;
        for(int j=0;j<50;j++)
        {
            fr<<std::setw(5)<<std::left<<vektstud[i].balai[j];
        }
        fr<<std::setw(7)<<std::right<<vektstud[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<vektstud[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<vektstud[i].galutinismediana<<std::endl;

    }


    fr.close();
    //auto end = std::chrono::system_clock::now();
    //auto elapsed = end - start;
    //std::cout << k<<" karta skaiciuojant uztruko :   "<<elapsed.count() << std::endl;

}
void Ivedimas()
{
    std::vector<Studentai> vektstud;
    std::vector<std::string>vardai2;
    std::vector<std::string>pavardes2;

    std::string studsk;
    std::cout<<"Iveskite studentu skaiciu : "<<std::endl;
    std::getline(std::cin,studsk);

    int a=Tik(studsk);

    while (a<=0 || a>10)
    {
        std::cout<<"Per didelis arba per mazas balas.Bandykite dar kart : "<<std::endl;
        a=Tik(studsk);
    }




    for(int i=0;i<a;i++){

        Studentai stud;
        std::cout<<"Iveskite varda : "<<std::endl;
        std::cin.sync();

        stud.vardas=Tik2();
        vardai2.push_back(stud.vardas);


        std::cout<<"Iveskite pavarde : "<<std::endl;


        stud.pavarde=Tik2();
        pavardes2.push_back(stud.pavarde);



        std::string f;
        std::cout<<"Ar norite automatiskai parinkti namu darbu ir egzamino rezultatus? (Jei norite, spauskite M jei ne V)"<<std::endl;
        std::cin>>f;
        std::string p=ValidacijaVidurkiuIrMedianai(f);

        double laikinvid=0;


        if(p[0]=='M')
        {
            int n=3;
            stud.vardas;


            std::mt19937 generator;
            generator.seed(std::time(0));
            std::uniform_int_distribution<uint64_t> dice(1,10);
            int intime;
          // srand (time(NULL));
            for(int i=0;i<n;i++)
            {
                intime=dice(generator);
                stud.balai.push_back(intime);
                laikinvid=stud.balai[i]+laikinvid;

            }
            int egz=dice(generator);

            stud.galutinis = 0.4 * Vidurkis(laikinvid,n) + 0.6 * egz;
            stud.galutinismediana= 0.4 * Mediana(stud.balai,n) + 0.6 * egz ;


            vektstud.push_back(stud);



        }

        else if(p[0]=='V')
        {

            std::string  d;
            int e=0;
            std::cout<<"Iveskite namu darbu pazymi(1-10), kai noresite baigti, spauskite 0 : "<<std::endl;
            std::getline(std::cin,d);
            int g=Tik(d);
            do{
                if(g>0 && g<=10){
                    std::cout<<"Iveskite namu darbu pazymi(1-10), kai noresite baigti, spauskite 0 : "<<std::endl;
                    stud.balai.push_back(g);
                    laikinvid=stud.balai[e]+laikinvid;
                    e++;
                }
                else if(g>10) std::cout<<"Ivedet per dideli bala.Bandykite dar kart.Jei norite baigti, spauskite 0"<<std::endl;


                g=Tik(d);

            }while(g!=0);



            std::string test;
            std::cout<<"Iveskite egzamino skaiciu : "<<std::endl;
            std::cin.sync();

            int egz=Tik(test);

            while (egz<=0 || egz>10)
            {
                std::cout<<"Per didelis arba per mazas balas.Bandykite dar kart : "<<std::endl;
                egz=Tik(test);
            }



            stud.galutinis = 0.4* Vidurkis(laikinvid,e)+ 0.6*egz;
            stud.galutinismediana= 0.4 * Mediana(stud.balai,e)+ 0.6*egz ;


            vektstud.push_back(stud);

        }
    }

    std::string s;
    std::cout<<"Jei norite matyti vidurki, spauskite V, jei mediana spauskite M"<<std::endl;
    std::cin>>s;
    std::string h=ValidacijaVidurkiuIrMedianai(s);
    std::cout<<std::left<<std::setw(Ilgiausia(pavardes2)+10)<<"Pavarde ";
    std::cout<<std::left<<std::setw(Ilgiausia(vardai2)+10)<<"Vardas";
    std::cout<<"Galutinis (vid.)/Galutinis (med.) "<<std::endl;



    for(int i=0;i<vektstud.size();i++){

        std::cout<<std::left<<std::setw(Ilgiausia(pavardes2)+10)<<vektstud[i].pavarde;
        std::cout<<std::left<<std::setw(Ilgiausia(vardai2)+10)<<vektstud[i].vardas;

        if(h[0]=='V') std::cout<<std::fixed<<std::setprecision(2)<<vektstud[i].galutinis<<std::setw(16)<<std::endl;
        else if(h[0]=='M') std::cout<<std::right<<std::setw(24)<<std::fixed<<std::setprecision(2)<<vektstud[i].galutinismediana<<std::endl;


    }
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
            throw "Tekstinio failo atidaryti neimanoma";

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
        std::cout<<std::left<<std::setw(20)<<std::fixed<<std::setprecision(2)<<vektstud[i].galutinis;
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
