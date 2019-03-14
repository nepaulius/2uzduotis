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

Programos rezultatai :
![](https://user-images.githubusercontent.com/45967745/54384676-7946be80-469d-11e9-8666-295833761994.JPG)

Programos rezultatai lentelėje : 
|*Konteinerių tipas/Studentų skaičius*|10|100|1 000|10 000|100 000|
|---|:---:|:---:|:---:|:---:|:---:|
**Rūšiavimo laikas (sekundėmis)** tipas - *Vector*|0,000|0,000|0,001|0,014|0,154     
**Rūšiavimo laikas (sekundėmis)** tipas - *List*|0,000|0,000|0,002|0,01|0,101
**Rūšiavimo laikas (sekundėmis)** tipas - *Deque*|0,000|0,000|0,001|0,008|0,113
