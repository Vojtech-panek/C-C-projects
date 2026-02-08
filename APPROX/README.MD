# PI Approximator (Leibniz Formula)

Jednoduchá konzolová aplikace v C++, která demonstruje výpočet hodnoty čísla $\pi$ pomocí **Leibnizovy řady**. Program umožňuje uživateli zvolit počet iterací a průběžně sleduje, jak se odhad zpřesňuje.

##  Jak to funguje?

Program využívá Gregoryho-Leibnizův vzorec, což je nekonečná řada definovaná jako:

$$\frac{\pi}{4} = 1 - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \frac{1}{9} - \dots = \sum_{k=0}^{\infty} \frac{(-1)^k}{2k+1}$$



V kódu je tato logika implementována v cyklu, kde:
* **Sudé indexy (k)** se přičítají.
* **Liché indexy (k)** se odčítají.
* Výsledná suma se v každém kroku násobí $4$, abychom získali přibližnou hodnotu $\pi$.

##  Kompilace a spuštění

K běhu potřebujete jakýkoliv standardní kompilátor C++ (např. GCC, Clang nebo MSVC).

1. **Kompilace:**
   ```bash
   g++ -o pi_calc main.cpp