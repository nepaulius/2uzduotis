# 2uzduotis

* **v0.1**

Programa skaičiuoja vartotojo įvestus studentų namų darbų ir egzamino vidurkį ir medianą.\
Programos trūkumai:\
Nėra validacijų (vartotojas turi įvesti tai ką jo prašo programa).
Reikia nusikopijuoti CMakeLists.txt ir įkelti į atisiųstą aplanką (Nukopijuotą CMakeLists.txt savo kompiuteryje pavadinti CMakeLists.txt ir nurodyti jo buvimo vietą IDE)
https://raw.githubusercontent.com/nepaulius/2uzduotis/master/CMakeLists.txt
___

* **v0.2**

Programa skaičiuoja tekstiniame faile surašytų studentų namų darbų ir egzamino vidurkį ir medianą.

Programos trūkumai:
Tekstinis failas turi būti surašytas be klaidų, kitaip programa užlūžta, nėra validacijų.
Reikia nusikopijuoti CMakeLists.txt ir įkelti į atisiųstą aplanką (Nukopijuotą CMakeLists.txt savo kompiuteryje pavadinti CMakeLists.txt ir nurodyti jo buvimo vietą IDE)
https://raw.githubusercontent.com/nepaulius/2uzduotis/master/CMakeLists.txt
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
Reikia nusikopijuoti CMakeLists.txt ir įkelti į atisiųstą aplanką (Nukopijuotą CMakeLists.txt savo kompiuteryje pavadinti CMakeLists.txt ir nurodyti jo buvimo vietą IDE)
https://raw.githubusercontent.com/nepaulius/2uzduotis/master/CMakeLists.txt
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
___

*Programos paleidimas*

**1)** Norint pasileisti programą reikia atsisiųsti ir įsidiegti vieną iš C++ kalbą palaikančių IDE:\
[Galimi variantai](https://www.google.com/search?ei=joCLXL_aOceOrwS05oK4BQ&q=c%2B%2B+ide+download&oq=c%2B%2B+ide+d&gs_l=psy-ab.1.0.0i19l6j0i22i30i19l4.8164.9984..10956...0.0..0.100.179.1j1......0....1..gws-wiz.......0i71j0i67j0.iYvw4THCg-U)\
**2)** Iš Releases atsisiųsti norimą versiją\
[Pavyzdys - Versija 1.0.1](https://github.com/nepaulius/2uzduotis/releases/tag/v1.0.1)\
**3)** Atsisiųsti Source code (.zip arba tar.gz)\
![](https://user-images.githubusercontent.com/45967745/54426465-9a9cbe80-4720-11e9-995a-43dfb470a814.JPG)
**4)** Per IDE paleisti atsisiųstą aplanką. 
___

* **Papildoma**

Rezultatai programoje:

![Capturedekas](https://user-images.githubusercontent.com/45967745/54785790-c1cb2280-4c2f-11e9-893f-edb8f6c479b3.JPG)

Rezultatai lentelėje

|*Konteinerių tipas/Studentų skaičius*|10 000|100 000|
|---|:---:|:---:|
**Rūšiavimo laikas (sekundėmis)** tipas - __*Vector(rastiMinkstus)*__|7,27|650,56 
**Rūšiavimo laikas (sekundėmis)** tipas - __*Vector(rastiKietus)*__|37,15|3375,45 
**Rūšiavimo laikas (sekundėmis)** tipas - __*Dekas(rastiMinkstus)*__|3,0456|229,84
**Rūšiavimo laikas (sekundėmis)** tipas - __*Dekas(rastiKietus)*__|0,0156|0,062 

