# Exemple

## 1) Baza 2 -> Baza 10

Regula:
$$
(b_n...b_2b_1b_0)_2 = \sum_{i=0}^{n} b_i \cdot 2^i
$$

### Exemplul 1
$$
\begin{aligned}
(0100110)_2 &= 0\cdot2^6 + 1\cdot2^5 + 0\cdot2^4 + 0\cdot2^3 + 1\cdot2^2 + 1\cdot2^1 + 0\cdot2^0 \\
&= 0 + 32 + 0 + 0 + 4 + 2 + 0 = 38
\end{aligned}
$$

Rezultat: $(0100110)_2 = (38)_{10}$

### Exemplul 2

$$
\begin{aligned}
(101101)_2 &= 1\cdot2^5 + 0\cdot2^4 + 1\cdot2^3 + 1\cdot2^2 + 0\cdot2^1 + 1\cdot2^0 \\
&= 32 + 0 + 8 + 4 + 0 + 1 = 45
\end{aligned}
$$

Rezultat: $(101101)_2 = (45)_{10}$

---

## 2) Baza 10 -> Baza 2

Regula: impartiri succesive la 2; citim resturile de jos in sus.

### Exemplul 1

Convertim $(38)_{10}$ in baza 2.

| Impartire | Cat | Rest |
|---|---:|---:|
| 38 : 2 | 19 | 0 |
| 19 : 2 | 9  | 1 |
| 9 : 2  | 4  | 1 |
| 4 : 2  | 2  | 0 |
| 2 : 2  | 1  | 0 |
| 1 : 2  | 0  | 1 |

Citind resturile de jos in sus: $100110_2$

Rezultat: $(38)_{10} = (100110)_2$

### Exemplul 2

Convertim $(77)_{10}$ in baza 2.

| Impartire | Cat | Rest |
|---|---:|---:|
| 77 : 2 | 38 | 1 |
| 38 : 2 | 19 | 0 |
| 19 : 2 | 9  | 1 |
| 9 : 2  | 4  | 1 |
| 4 : 2  | 2  | 0 |
| 2 : 2  | 1  | 0 |
| 1 : 2  | 0  | 1 |

Citind resturile de jos in sus: $1001101_2$

Rezultat: $(77)_{10} = (1001101)_2$

### Alta modalitate (metoda babeasca)

Poti sa incerci sa iei cea mai apropiata putere a lui 2 de nr respectiv si
sa incerci sa faci tot asa pana cand creezi o suma de puteri a lui 2 care iti
da nr respectic.

De exemplu:

77 - 64 = 13

13 - 8 = 5

5 - 4 = 1

1 - 1 = 0

$$
\begin{aligned}
77 = 2^6 + 2^3 + 2^2 + 2^1
77 = 64 + 8 + 4 + 1
\end{aligned}
$$

---

## 3) Baza 16 -> Baza 10

Regula:
$$
(a_n...a_1a_0)_{16} = \sum_{i=0}^{n} v(a_i) \cdot 16^i
$$
unde $A=10, B=11, C=12, D=13, E=14, F=15$.

### Exemplul 1

Convertim $(2F)_{16}$ in baza 10.

$$
(2F)_{16} = 2\cdot16^1 + 15\cdot16^0 = 32 + 15 = 47
$$

Rezultat: $(2F)_{16} = (47)_{10}$

### Exemplul 2

Convertim $(1A3)_{16}$ in baza 10.

$$
\begin{aligned}
(1A3)_{16} &= 1\cdot16^2 + 10\cdot16^1 + 3\cdot16^0 \\
&= 256 + 160 + 3 = 419
\end{aligned}
$$

Rezultat: $(1A3)_{16} = (419)_{10}$

---

## 4) Baza 10 -> Baza 16

Regula: impartiri succesive la 16; citim resturile de jos in sus.

### Exemplul 1

Convertim $(419)_{10}$ in baza 16.

| Impartire | Cat | Rest |
|---|---:|---:|
| 419 : 16 | 26 | 3 |
| 26 : 16  | 1  | 10 (=A) |
| 1 : 16   | 0  | 1 |

Citind resturile de jos in sus: $1A3_{16}$

Rezultat: $(419)_{10} = (1A3)_{16}$

### Exemplul 2

Convertim $(255)_{10}$ in baza 16.

| Impartire | Cat | Rest |
|---|---:|---:|
| 255 : 16 | 15 | 15 (=F) |
| 15 : 16  | 0  | 15 (=F) |

Citind resturile de jos in sus: $FF_{16}$

Rezultat: $(255)_{10} = (FF)_{16}$


### Alta modalitate (metoda babeasca)

Si aici poti sa faci metodada babeasca dar devine mai greu.

---

## 5) Conversie rapida baza 2 <-> baza 16

Fiecare cifra hexazecimala corespunde exact la 4 biti:

| Hex | Binar |
|---:|:---:|
| 0 | 0000 |
| 1 | 0001 |
| 2 | 0010 |
| 3 | 0011 |
| 4 | 0100 |
| 5 | 0101 |
| 6 | 0110 |
| 7 | 0111 |
| 8 | 1000 |
| 9 | 1001 |
| A | 1010 |
| B | 1011 |
| C | 1100 |
| D | 1101 |
| E | 1110 |
| F | 1111 |

### Exemplu 2 -> 16

$(101111001010)_2 = (1011\ 1100\ 1010)_2 = (BCA)_{16}$

### Exemplu 16 -> 2

$(3D)_{16} = (0011\ 1101)_2 = (111101)_2$

---