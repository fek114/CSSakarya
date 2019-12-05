/**
* @file Bagilliste.cpp
* @bagillisteye dair her sey burada
* @course 2. Ogretim a
* @assignment 2.Odev
* @date 23.11.2019
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/
#include "BagilListe.hpp"
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include<locale.h>



using namespace std;

BagilListe::BagilListe()
{
	this->listebasi = NULL;
	BagilListeYap();
}
//adi gibi bagilliste olusturuyorum ifstream ile wordumu kontrol ederek noduma ekliyorum, sonrasında kontrol ederek düzeltiyorum
void BagilListe::BagilListeYap()
{
	Dugum *temp;
	string word;
	bool aynistring=false;
	int sayac=0;
	ifstream input("icerik.txt");
	
	while (input >> word)
	{
		string kelime = word;
		
		int deger = degerBul(kelime);
		Dugum *dugum;

		if(deger>-1){
		dugum = new Dugum("",listedeKacElemanVar()-deger+1,kelime.length());
		}else{
		dugum = new Dugum(kelime,0,0);

		}
		if (this->listebasi == NULL)
		{
			this->listebasi = dugum;
		}
		else
		{
			temp->setSonraki(dugum);
			dugum->setOnceki(temp);
		}
		temp = dugum;
	}
}
//dügümün degerini burdan buluyorum
int BagilListe::degerBul(string kelime){
		int counter=-1;
		
		if(this->listebasi==NULL){
		return counter;
		}
		Dugum* temp = this->listebasi;
	for(int i =0 ;  ;i++){
			
			if(temp->getKelime()==kelime){
				counter=i;
				break;
			}
			if(temp->getSonraki()!=NULL){
			temp=temp->getSonraki();
			}
			else break;
		}
		return counter;	
} 

//ekrana getirmek için kullandığım fonksiyon
void BagilListe::EkranGetir()
{
	Dugum *temp =this->listebasi;
	
	while(temp->getSonraki()!=NULL){
		if(temp->getOnceki()==NULL){
		cout<<"NULL"<<"<-"<<":";
		cout<<temp->getKelime();
		cout<<" - ";
		cout<<temp->getSimdiki()->getDeger();
		cout<<":";
		}
		
		else{
		cout<<"<->:";
		cout<<temp->getKelime();
		cout<<" - ";
		cout<<temp->getSimdiki()->getDeger();
		cout<<":";

		}
		temp=temp->getSonraki();
	}
		cout<<temp->getKelime();
		cout<<" - ";
		cout<<temp->getSimdiki()->getDeger();
		cout<<":";
		cout<<"->"<<"NULL";
		cout<<endl;


}
//listede kaç eleman var bunu öğrenmek için kullandım
int BagilListe::listedeKacElemanVar(){
	Dugum *temp=this->listebasi;
	int kaceleman=0;
	for (kaceleman = 0; temp->getSonraki()!=NULL; kaceleman++)
	{
		temp=temp->getSonraki();
		/* code */
	}
return kaceleman;	

}
int BagilListe::toplamKazanc(){
	Dugum *temp=this->listebasi;
	int kaceleman=0;
	int toplamkazancim=0;
	int kazanc=0;
	int sayac=0;

	for(kaceleman=0; temp->getSonraki()!=NULL;kaceleman++ ){
		if(temp->getDeger()!=0){
		kazanc=temp->getKazanc();
		toplamkazancim=toplamkazancim+temp->getKazanc();
		sayac++;
		temp=temp->getSonraki();
		}
		else{
		temp=temp->getSonraki();
		}
	}
	toplamkazancim=temp->getKazanc()+toplamkazancim-1;
	
	return toplamkazancim-sayac;

}
void BagilListe::copleriTemizle(){
	Dugum *temp = this->listebasi;	
	
	for(int i=0; i<listedeKacElemanVar() ;i++){
	temp=temp->getSonraki();
	delete temp->getOnceki();
	}

	cout<<endl;
	cout<<"Veriler copleriTemizle() ile silindi";
	exit(0);
}
