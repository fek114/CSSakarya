/**
* @file Ogrenci.hpp
* @projenin testini yapıyor
* @course 2. Ogretim A
* @assignment 3.Odev
* @date 21.04.2019
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/


#include <stdio.h>
#include <stdlib.h>
#include "RastgeleKarakter.h"
#include "Random.h"
#include <unistd.h>



int main(){

printf("\n\n--------------------HARFLERRRRR-----------------\n\n");
	for(int i =0;i<100;i++){

		RastgeleKarakter(SayiOlustur()+1);
	}
	printf("\n\n--------------------ARA DEGERLI KELIMELEEEEER-----------------\n\n");
	for(int i =0;i<100;i++){

		RastgeleKarakterAraDeger(SayiOlustur()+1,SayiOlustur()+1,SayiOlustur()+1);
	}
	printf("\n\n--------------------CUMLELERRR-----------------\n\n");
	for(int i =0;i<100;i++){

		CumleUret();
	}



}
