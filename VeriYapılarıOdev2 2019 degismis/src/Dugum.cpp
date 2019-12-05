/**
* @file Dugum.cpp
* @dugume dair her sey burada
* @course 2. Ogretim a
* @assignment 2.Odev
* @date 23.11.2019
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/
#include "Dugum.hpp"

#include <iostream>
#include <string>

 using namespace std;


 Dugum::Dugum(string kelime,int deger,int kazanc){
      this->kelime=kelime;
      this->deger=deger;
      this->kazanc=kazanc;
    }

		void Dugum::setOnceki(Dugum *geri){
            this->geri = geri;
        }
		void Dugum::setSonraki(Dugum *ileri){
            this->ileri = ileri;
        }
        void Dugum::setKelime(string kelime){
            this->kelime=kelime;
        }
		void Dugum::setKazanc(int kazanc){
            this->kazanc=kazanc;
        }


		Dugum::~Dugum(){}

        Dugum* Dugum::getOnceki(){
            return this->geri;
        }

         Dugum*  Dugum::getSonraki(){
            return this->ileri;
        }
        string Dugum::getKelime(){
            return this->kelime;
        }
        int Dugum::getDeger(){
            return this->deger;
        }
        int Dugum::getKazanc(){
            return this->kazanc;
        }
        Dugum* Dugum::getSimdiki(){
            return this;
        }
