
/**
* @file Yonetim.hpp
* @course 2. Ogretim D
* @assignment 2.Odev
* @date 5.12.2018
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/

#ifndef YONETIM_HPP
#define YONETIM_HPP

#include <iostream>
#include <fstream>
#include "Dugum.hpp"
using namespace std;


class Yonetim{
    private:
    Dugum *listebasi;
    
    public:
    Yonetim();
    void SolaHareket();
    void SagaHareket();
    void DugumDurumlari(Dugum *);
    void DugumDurumlariSor();
    void TumDugumDurumYazdir();
    void BagilListeYap();
    void EkranGetir();
};

#endif
