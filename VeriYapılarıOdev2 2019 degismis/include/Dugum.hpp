//sablon dugum
#ifndef DUGUM_HPP
#define DUGUM_HPP

#include <iostream>
#include <string>

using namespace std;


class Dugum{
	private: 
		int deger;
		int kazanc;
		string kelime;
		Dugum *ileri;
		Dugum *geri;
		
	public:	
		Dugum(string,int,int);
		void setOnceki(Dugum *);
		void setSonraki(Dugum *);
		void setKelime(string);
		void setDeger(int);
		void setKazanc(int);
		Dugum *getSonraki();
		Dugum *getOnceki();
		Dugum *getSimdiki();
		string getKelime();
		int getKazanc();
		int getDeger();

	
		~Dugum();

};
#endif