
/**
* @file Ogrenci.hpp
* @course 2. Ogretim D
* @assignment 2.Odev
* @date 5.12.2018
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/
#include "Yonetim.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

#include <string>
#include <iomanip>
using namespace std;


Yonetim::Yonetim(){
	this->listebasi = NULL;
BagilListeYap();
}
void Yonetim::EkranGetir(){

	
	cout << endl << endl<< "1. Sola Hareket" << endl << "2.Saga Hareket" << endl<< "3.Bir Dugumun durumlarini Yazdir"<<endl << "4. Tum Durumlarini Yazdir"<<endl <<"5. Cikis" << endl << "=>";
	char secim;
	cin >> secim;
	switch(secim){
	
		case '1':
		SolaHareket();
		cout<< "Sola Hareket Ediyom :)";
		break;
		case '2':
		SagaHareket();
		cout<<"Saga Hareket Ediyom :=)=";
		
		break;
		case '3':
		DugumDurumlariSor();
		
		break;
		case'4':
		TumDugumDurumYazdir();
		break;
		case'5':
		
		exit(0);
		break;
		default:
		break;
	}
	EkranGetir();

}

 void Yonetim::BagilListeYap(){
	 string sayi;
	 Dugum *temp;

	ifstream input("Sayi.txt");
	
			while (input >> sayi)
	{
		int numara= atoi(sayi.c_str());
		Dugum *dugum=new Dugum(numara);
		if (this->listebasi== NULL) {this->listebasi=dugum;
		}
		else{
			temp->setSonraki(dugum);
			dugum->setOnceki(temp);
			dugum->setSonraki(listebasi);
		}
	temp=dugum;
			}

		 this->listebasi->setOnceki(temp);
		 }


void Yonetim::SolaHareket(){
	Dugum *temp = this->listebasi;
	Dugum *temphead = new Dugum(*this->listebasi);
	for(;;)
	{ 
		if(temp->getSonraki() != this->listebasi)
		temp->elemanSec(temp->getSonraki()->elemanAl());
		else temp->elemanSec(temphead->elemanAl());
		if(temp->getSonraki() != this->listebasi)
		{
			temp=temp->getSonraki();
		}
		else break;
	}
}
void Yonetim::SagaHareket(){
	Dugum *temp = this->listebasi;
	Dugum *temphead = new Dugum(*this->listebasi);
	for(;;)
	{ 
		if(temp->getOnceki() != this->listebasi)
		temp->elemanSec(temp->getOnceki()->elemanAl());
		else temp->elemanSec(temphead->elemanAl());
		if(temp->getOnceki() != this->listebasi)
		{
			temp=temp->getOnceki();
		}
		else break;
	}
}
void Yonetim::TumDugumDurumYazdir(){
	Dugum *temp =this->listebasi;
	for(;;){
		cout<< setw(10)<<temp->elemanAl()<<left;
		//alttaki fonksiyonu unutma
		temp->butunStackDurumlariniAl();
		cout<<endl;
		if(temp->getSonraki() != this->listebasi){
			temp = temp ->getSonraki();
		}
		else break;
	}
}
void Yonetim::DugumDurumlariSor(){
	cout << endl << "Dugum: ";
	int dugum;
	try{
		cin>>dugum;
		Dugum *temp = this->listebasi;
		for(int i=0;;i++){
			if(i==dugum){
				DugumDurumlari(temp);
				break;
			}
			if(temp->getSonraki() != this->listebasi)
			{
				temp=temp->getSonraki();
			}
			else{EkranGetir(); break; }
		}
	}
	catch (int puh)
	{
	EkranGetir();
}
}
void Yonetim::DugumDurumlari(Dugum* dugum){
	cout<<setw(6)<<dugum->elemanAl()<<left;
	dugum->butunStackDurumlariniAl();
	cout<<endl;
	system("pause");
	EkranGetir();
}
