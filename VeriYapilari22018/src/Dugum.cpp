
/**
* @file Dugum.cpp
* @course 2. Ogretim D
* @assignment 2.Odev
* @date 5.12.2018
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/

#include "Dugum.hpp"
#include "Stack.hpp"
#include <iostream>
#include <String>
 
 using namespace std;

    Dugum::Dugum(int ee){
        this->stack = new Stack();
        this->elemanSec(ee);

    }

		void Dugum::setOnceki(Dugum *geri){
            this->geri = geri;
        }
		void Dugum::setSonraki(Dugum *ileri){
            this->ileri = ileri;
        }
		void Dugum::elemanSec(int eleman){
            this->eleman=eleman;
            this->stack->push(eleman);
        }


		Dugum::~Dugum(){}
		
        Dugum* Dugum::getOnceki(){
            return this->geri;
        }

         Dugum*  Dugum::getSonraki(){
            return this->ileri;
        }
        int  Dugum::elemanAl(){
            return this->eleman;
        }
        void Dugum::butunStackDurumlariniAl(){
            this->stack->butunDurumlariCagir();
              }