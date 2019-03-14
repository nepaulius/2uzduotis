#include "scratch.cpp"
#include "scratch_3.cpp"




int main()
{

    std::string d;
    std::cout<<"Kokia strategija pasirinksite? Spauskite V , jei 1 strategija, spauskite M, jei 2 strategija"<<std::endl;
    std::cin>>d;
    std::string r=ValidacijaVidurkiuIrMedianai(d);
     for(int k=1;k<6;k++)
    {

        Pirmasfailas(k,r);

    }

    std::string q;
    std::cout<<"Iveskite V, jei norite skaityti is failo, M jei norite rasyti ranka : "<<std::endl;
    std::cin>>q;
    std::string c=ValidacijaVidurkiuIrMedianai(q);

    if(c[0]=='V')
    {
       Tekstas();
    }
    else if(c[0]=='M') {
        Ivedimas();
    }


    return 0;
}



