# 2uzduotis

* **v0.1**

Programa skaičiuoja vartotojo įvestus studentų namų darbų ir egzamino vidurkį ir medianą.\
Programos trūkumai:\
Nėra validacijų (vartotojas turi įvesti tai ką jo prašo programa).
___

* **v0.2**

Programa skaičiuoja tekstiniame faile surašytų studentų namų darbų ir egzamino vidurkį ir medianą.

Programos trūkumai:
Tekstinis failas turi būti surašytas be klaidų, kitaip programa užlūžta, nėra validacijų.
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


Programos patobulinimai:\
Yra validacijos\
Programos trūkumai :\
Tekstinis failas turi būti surašytas be klaidų, kitaip programa užlūžta, nėra validacijų.
___
* **v0.4**
Programa rūšiuoja studentus pagal jų vidurkį.

|*Studentų skaičius*|10|100|1 000|10 000|100 000|
|---|:---:|:---:|:---:|:---:|:---:|
|**Rūšiavimo laikas (sekundėmis)**|0,125|0,21|0,34|1,11|8,5|
___
* **v0.5**
Programa rūšiuoja studentus pagal jų vidurkį, naudojami skirtingo tipo konteineriai.

Programos rezultatai :\
![](https://user-images.githubusercontent.com/45967745/54384676-7946be80-469d-11e9-8666-295833761994.JPG)

Programos rezultatai lentelėje : 


|*Konteinerių tipas/Studentų skaičius*|10|100|1 000|10 000|100 000|
|---|:---:|:---:|:---:|:---:|:---:|
**Rūšiavimo laikas (sekundėmis)** tipas - __*Vector*__|0,000|0,000|0,001|0,014|0,154     
**Rūšiavimo laikas (sekundėmis)** tipas - __*List*__|0,000|0,000|0,002|0,01|0,101
**Rūšiavimo laikas (sekundėmis)** tipas - __*Deque*__|0,000|0,000|0,001|0,008|0,113
___
* **v1.0**

Programa rūšiuoja studentus į 2 grupes, pagal jų vidurkį.\
__1 strategija__

Rezultatai tokie patys, kaip ir v0.5 versijoje 

__2 strategija__

Programos rezultatai :\
![](https://user-images.githubusercontent.com/45967745/54385769-160a5b80-46a0-11e9-871b-bf1a9ba7cb1a.JPG)

Programos rezultatai lentelėje : 

|*Konteinerių tipas/Studentų skaičius*|10|100|1 000|10 000|100 000|
|---|:---:|:---:|:---:|:---:|:---:|
**Rūšiavimo laikas (sekundėmis)** tipas - __*Vector*__|0,000|0,000|0,118|10,531|1117,103     
**Rūšiavimo laikas (sekundėmis)** tipas - __*List*__|0,000|0,000|0,006|0,013|0,046
**Rūšiavimo laikas (sekundėmis)** tipas - __*Deque*__|0,000|0,000|0,041|4,560|447,017

Programa po optimizacijos (*vector tipo konteineris*)

![](https://user-images.githubusercontent.com/45967745/54386159-04758380-46a1-11e9-94b3-658b4afb8c81.JPG)

Programa po optimizacijos lentelė:

|*Studentų skaičius*|10|100|1 000|10 000|100 000|
|---|:---:|:---:|:---:|:---:|:---:|
**Rūšiavimo laikas (sekundėmis)** tipas - __*Vector(neoptimizuotas)*__|0,000|0,000|0,118|10,531|1117,103     
**Rūšiavimo laikas (sekundėmis)** tipas - __*Vector(optimizuotas)*__|0,000|0,000|0,01|0,014|0,12

