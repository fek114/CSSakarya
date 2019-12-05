/**
* @file Ogrenci.hpp
* @course 2. Ogretim A
* @assignment 1.Odev
* @date 23.10.2018
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/
#include "Random.h"
#include <sys/time.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

unsigned short lfsr = 0xACE1u;
  unsigned bit;

  unsigned rando()
  {
    bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
    return lfsr =  (lfsr >> 1) | (bit << 15);
  }

	int SayiOlustur(){

		int simdikiNanoZamaninKisaHali =  (int)rando()%26;
		//printf("milliseconds: %d\n", simdikiNanoZamaninKisaHali);
		return simdikiNanoZamaninKisaHali;
	}
