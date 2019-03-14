#include <random>
#include <unordered_set>
#include "galvininkas.h"






int PerkeltiIrasyma1sdekas(std::deque<Studentai>nemoka,std::deque<Studentai>moka,int k)
{


        std::ofstream ne;
        std::ofstream taip;
        std::stringstream a;
        std::string failovardas;
        std::stringstream a1;
        std::string failovardas1;

        a<<k;
        failovardas= "DekasMoka_" + a.str();

        failovardas += ".txt";
        taip.open(failovardas.c_str(), std::ios::out);
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
        for(int i=0;i<moka.size();i++)
        {
                taip<<std::left<<std::setw(15)<<moka[i].vardas<<std::setw(20)<<std::left<<moka[i].pavarde;
                for(int j=0;j<50;j++)
                {
                        taip<<std::setw(5)<<std::left<<moka[i].balai[j];
                }
                taip<<std::setw(7)<<std::right<<moka[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<moka[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<moka[i].galutinismediana<<std::endl;
        }

        ne.close();
        taip.close();


}
int PerkeltiIrasymas1vector(std::vector<Studentai>nemoka,std::vector<Studentai>moka,int k)
{
        std::ofstream ne;
        std::ofstream taip;
        std::stringstream a;
        std::string failovardas;
        std::stringstream a1;
        std::string failovardas1;
        a<<k;
        failovardas= "VectorMoka_" + a.str();

        failovardas += ".txt";
        taip.open(failovardas.c_str(), std::ios::out);
        a1<<k;
        failovardas1= "VectorNemoka_" + a1.str();

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
        for(int i=0;i<moka.size();i++)
        {
                taip<<std::left<<std::setw(15)<<moka[i].vardas<<std::setw(20)<<std::left<<moka[i].pavarde;
                for(int j=0;j<50;j++)
                {
                        taip<<std::setw(5)<<std::left<<moka[i].balai[j];
                }
                taip<<std::setw(7)<<std::right<<moka[i].testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<moka[i].galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<moka[i].galutinismediana<<std::endl;
        }

        ne.close();
        taip.close();

}

void PerkeltiRusis3(std::deque<Studentai>dekasstud,int k)
{


        std::deque<Studentai> nemoka;
        std::deque<Studentai> moka;

        auto s = std::chrono::system_clock::now();

        for(int i=0;i<dekasstud.size();i++)
        {
                if(dekasstud[i].galutinis<5)
                {
                        nemoka.push_back(dekasstud[i]);
                }
                else
                {

                        moka.push_back(dekasstud[i]);
                }

        }
        auto e = std::chrono::system_clock::now();
        std::chrono::duration<double> u = e - s;
        std::cout<<"10 pakelta " << k<<" (dekas) rusiuoja   :   "<<std::fixed<<std::setprecision(20)<<u.count()<< std::endl;
        PerkeltiIrasyma1sdekas(nemoka,moka,k);
}
int PerkeltiIrasymaslistas(std::list<Studentai>nemoka,std::list<Studentai>moka,int k)
{

        std::list<Studentai>::iterator ite;
        std::ofstream ne;
        std::ofstream taip;
        std::stringstream a;
        std::string failovardas;
        std::stringstream a1;
        std::string failovardas1;

        a<<k;
        failovardas= "ListMoka_" + a.str();

        failovardas += ".txt";
        taip.open(failovardas.c_str(), std::ios::out);
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
        for(ite=moka.begin();ite!=moka.end();ite++)
        {
                taip<<std::left<<std::setw(15)<<ite->vardas<<std::setw(20)<<std::left<<ite->pavarde;
                for(int j=0;j<50;j++)
                {
                        taip<<std::setw(5)<<std::left<<ite->balai[j];
                }
                taip<<std::setw(7)<<std::right<<ite->testas<<std::setw(20)<< std::setprecision (2) << std::fixed<<ite->galutinis<<std::right<<std::setw(15)<< std::setprecision (2) << std::fixed<<ite->galutinismediana<<std::endl;
        }

        ne.close();
        taip.close();


}
void PerkeltiRusis2(std::list<Studentai> liststud,int k)
{
        std::list<Studentai>nemoka;
        std::list<Studentai>moka;
        std::list<Studentai>::iterator it;


        auto startrusislistas = std::chrono::system_clock::now();

        it = liststud.begin();
        while (it != liststud.end()){
                if(it->galutinis <5)
                {
                        nemoka.push_back(*it);
                }
                else if(it->galutinis>=5)
                {
                        moka.push_back(*it);
                }

                it++;
        }

        auto endrusislistas = std::chrono::system_clock::now();
        std::chrono::duration<double>uztrukolistas = endrusislistas - startrusislistas;
        std::cout <<"10 pakelta "<< k<<" (list) rusiuoja    :   "<<std::fixed<<std::setprecision(20)<<uztrukolistas.count()<< std::endl;
        PerkeltiIrasymaslistas(nemoka,moka,k);

}
void PerkeltiRusis(std::vector<Studentai> vektstud,int k)
{

        std::vector<Studentai> nemoka;
        std::vector<Studentai> moka;

        auto s = std::chrono::system_clock::now();

        for(int i=0;i<vektstud.size();i++)
        {
                if(vektstud[i].galutinis<5)
                {
                        nemoka.push_back(vektstud[i]);
                }
                else
                {

                        moka.push_back(vektstud[i]);
                }

        }
        auto e = std::chrono::system_clock::now();
        std::chrono::duration<double> u = e - s;
        std::cout<<"10 pakelta " << k<<" (vector) rusiuoja  :   "<<std::fixed<<std::setprecision(20)<<u.count()<< std::endl;
        PerkeltiIrasymas1vector(nemoka,moka,k);

}
