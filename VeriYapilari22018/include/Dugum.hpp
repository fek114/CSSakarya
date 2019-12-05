
/**
* @file Dugum.hpp
* @course 2. Ogretim D
* @assignment 2.Odev
* @date 5.12.2018
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/

#ifndef DUGUM_HPP
#define DUGUM_HPP

#include <iostream>
#include "Stack.hpp"
using namespace std;


class Dugum{
	private: 
		Stack *stack;
		int eleman;
		Dugum *ileri;
		Dugum *geri;


	public:	
	Dugum(int);
		void setOnceki(Dugum *);
		void setSonraki(Dugum *);
		Dugum *getSonraki();
		Dugum *getOnceki();
		int elemanAl();
		void elemanSec(int);
		~Dugum();
		
		void butunStackDurumlariniAl();
		
};
#endif