/**
* @file RastgeleKarakter.c
* @course 2. Ogretim a
* @assignment 3.Odev
* @date 21.04.2019
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Random.h"
#include "RastgeleKarakter.h"



char* RastgeleKarakter(int kactane){

					char s[kactane + 1];
					char pool[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
					size_t poolsize = strlen(pool);
					size_t index;
					size_t i;
					for(i = 0; i < kactane && poolsize > 0; ++i)
					{
							index = SayiOlustur();
							s[i] = pool[index];
							pool[index] = pool[--poolsize];
					}
					s[i] = '\0';
					printf("%s\n", s);
			    return 0;
}

	char* RastgeleKarakterAraDeger(int kactane , int bir, int iki){
		char s[kactane + 1];
		char pool[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		size_t poolsize = strlen(pool);
		char pool2[] = "";
		for(int i =0; i<bir;i++){
			pool2[i] = pool[i];
		}
		char pool3[] = "";
		for(int i =0; i<iki;i++){
			pool3[i] = pool[i];
		}
		char pool4[] = "";
		size_t maxSize = 0;
		if(strlen(pool2)>=strlen(pool3))
		maxSize = strlen(pool3);
		else maxSize = strlen(pool2);
		for(int i =0; i<maxSize;i++){
			if(pool2[i] == pool3[i])
			pool4[i] = pool2[i];
		}
		size_t index;
		size_t i;
		for(i = 0; i < kactane && maxSize > 0; ++i)
		{
				index = SayiOlustur();
				s[i] = pool4[index];
				pool4[index] = pool4[--maxSize];
		}
		s[i] = '\0';
		printf("%s\n", s);
		return 0;
}
	char* BelirtilenKarakter(int kacadet , char*verilen){
		char* dondur;
		char* belirtilenCharList ;

//verilenler gelecek

  }
	char* CumleUret(){
						int kelsayisi = SayiOlustur()%10 +1;
						for(int j = 0; j<kelsayisi;j++){
							int kactane = SayiOlustur();

						char s[kactane + 1];
						char pool[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
						size_t poolsize = strlen(pool);
						size_t index;
						size_t i;
						for(i = 0; i < kactane && poolsize > 0; ++i)
						{
								index = SayiOlustur();
								s[i] = pool[index];
								pool[index] = pool[--poolsize];
						}
						s[i] = '\0';
						printf("%s ", s);
						}
						printf("\n");
				    return 0;
	}
