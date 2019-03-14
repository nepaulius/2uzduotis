# 2uzduotis

* **v0.1**

Programa skaičiuoja vartotojo įvestus studentų namų darbų ir egzamino vidurkį ir medianą.
Programos trūkumai:
Nėra validacijų (vartotojas turi įvesti tai ką jo prašo programa)
___

* **v0.2**

Programa skaičiuoja tekstiniame faile surašytų studentų namų darbų ir egzamino vidurkį ir medianą.

Programos trūkumai:
Tekstinis failas turi būti surašytas be klaidų, kitaip programa užlūžta, nėra validacijų
___
* **v0.3**

Programa naudoja try/catch funkciją, tikrinant ar atsidaro tekstinis failas su studentų duomenimis
```c++ try{
        fd.open("kursiokai.txt");
        if (!fd.good()){
            throw "Tekstinio failo atidaryti neimanoma";

        }
    } catch(const char *msg)
    {
        std::cout<<msg;
    }
```
   Programos patobulinimai:
    Yra validacijos
Programos trūkumai:
Tekstinis failas turi būti surašytas be klaidų, kitaip programa užlūžta.
___
