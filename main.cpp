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
    else if(c[0]=='M') {
        Ivedimas();
    }


    return 0;
}



