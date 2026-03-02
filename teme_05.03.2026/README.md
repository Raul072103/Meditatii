# Tema pentru 05.03.2026

O sa discutam saptamana asta despre github, dar deocamdata
doar o sa iti pun problemele pe care le ai tema aici si tu o sa dai copy paste
pe compilatorul tau online si le rezolvi.

O sa gasesti comentarii puse pentru fiecare probleme, si vreau sa imi raspunzi
la fiecare intrebare si as fi si mai fericit daca ai incerca sa te joci si tu
mai mult cu codul ca sa explorezi mai mult.

## Memorie

Vreau sa te focusezi sa intelegi cum functioneaza memoria, asa ca problemele
o sa fie legate de memoria unui program.

### Recapitulare

**Afiseaza adresa lui 'a'**
```
  int a = 2;
  cout << &a;
```


**Pointeri**

Am discutat acum 2 ore despre "pointeri". Dupa numele lor, pointerii sunt
niste variabile care **pointeaza** spre o adresa in memorie.

De exemplu, daca avem un pointer spre o variabila, acel pointer va pointa
spre **zona de memorie** unde se afla variabila.

Cel mai usor sa te gandesti e in felul urmator:

- daca tu ai o variabila anume, e.g. **int a = 2**
- dupa aceea iti creezi un pointer spre variabila a, e.g. **int *ptr = &a**
- acum **ptr** pointeaza spre memoria lui a, si astfel tu poti sa modifici
valoare lui a prin **ptr**, e.g. ***ptr = 3**, se traduce "modifica valuare
unde pointerul ptr pointeaza, cu 3"

**Observatii**:
  ```
    int a = 2;
    int ptr = a; // aici ptr e un numar intreg pe 32 de biti care doar are o
                 // copie a lui a, deci daca modifici ptr nu modifici a
  ```

  ```
    int* ptr; // asa se declara un pointer, pui "*"
    bool* ptrToBool; // poti sa ai pointeri spre orice tip de variabila
  ```

  ```
    int a = 2;
    int* ptr = &a; // vezi ca aici tu spui ptr = &a, deoarece tu ii "spui"
                   // la ptr sa pointeze la "adresa" lui a
    
    cout << &a << "\n; // 0x2141255
    cout << ptr << "\n; // 0x2141255

    // Dupa cum vezi ptr "pointeaza" spre adresa lui a!

    cout << *ptr << "\n"; // 2

    // Dupa cum vezi daca la o variabila de tip pointer ii pui "*" o sa 
    // primesti valoarea din memorie, in cazul nostru 2, valoare lui a

    a = 5;

    cout << *ptr << "\n"; // 5

    // Dupa cum poti observa am modificat a, deci am modificat in memorie la
    // adresa lui a cu 5, si cum ptr pointeaza spre adresa lui a, valoarea
    // lui *ptr va fi 5!
  ```

### Concluzie

Va dura un pic sa te obisnuiesti, dar ideea de baza este sa intelegi ca tot
ceea ce tu declari ca variabile exista undeva in memorie, fizic. 

Deci tu cand lucrezi cu variabile de fapt lucrezi cu valorile care se afla
in memorie la adresele respective.

Si ca sa te gandesti la logica din spatele la pointeri, e destul de logic sa
intelegi ca daca tu ai o adresa intr-o memorie, nu te opreste nimica sa 
accessezi direct adresa respectiva din mai multe "directii".

E ca si cum prietenii tai iti stiu adresa la casa/apartament unde locuesti tu.
Deci daca eu ma duc sa ii intreb pe prietenii tai unde locuiesti tu, o sa
primesc acelasi raspuns, e.g Fagaras, str cimpului, bl 11...".

Si daca ma duc la adresa respectiva te gasesc pe tine, casa ta. Daca tu
sa zicem ca iti zugravesti camera, eu daca merg la adresa ta o sa gasesc 
camera zugravita.

Daca de exemplu, eu merg la adresa primita de la un prieten, iti intru in casa
si iti vopsesc o camera cu roz, tu cand o sa intri in casa o sa gasesti camera
in roz.

### Sfaturi utile

- Incearca sa te joci cu programele pe care le scri, ca sa intelegi cat mai mult.

# IMPORTANT

Ma astept sa iti iei notite, fie pe calculator, fie pe caiet. Astfel incat
cand corectam tema sa mai sti ce ai descoperit.