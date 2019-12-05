//bagilliste icin gerekli hpp
#ifndef BAGILLISTE_HPP
#define BAGILLISTE_HPP


#include <iostream>
#include <fstream>
#include <string>

#include "Dugum.hpp"
using namespace std;

class BagilListe{
    private:
    Dugum *listebasi;

    public:
    BagilListe();
    
    int degerBul(string);
    void BagilListeYap();
    void EkranGetir();
    int listedeKacElemanVar();
    void copleriTemizle();
    int toplamKazanc();

};

#endif
