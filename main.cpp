#include "scratch.cpp"




int main()
{

     for(int k=1;k<6;k++)
    {

        Pirmasfailas(k);

    }


    std::string q;
    std::cout<<"Iveskite V, jei norite skaityti is failo, M jei norite rasyti ranka : "<<std::endl;
    std::cin>>q;
    std::string c=ValidacijaVidurkiuIrMedianai(q);
    if(c[0]=='V')
    {
       Tekstas();

    }
    else if(c[0]=='M')

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


    return 0;
}



