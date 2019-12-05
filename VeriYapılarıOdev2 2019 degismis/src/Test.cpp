/**
* @file Test.cpp
* @projenin testini yapıyor
* @course 2. Ogretim a
* @assignment 2.Odev
* @date 26.11.2019
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/
#include <iostream>
#include "BagilListe.hpp"
#include "Dugum.hpp"
#include <String>



using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");

//Burayı sadece ekran getir metodum için kullandım 
	BagilListe b;
	b.EkranGetir();
	cout<<endl<<"Toplam Kazanc:"<<b.toplamKazanc();
	cout<<endl;
	b.copleriTemizle();
	
}

