
/**
* @file Stack.hpp
* @course 2. Ogretim D
* @assignment 2.Odev
* @date 5.12.2018
* @author Fatih Enis Kaya fatih.kaya18@ogr.sakarya.edu.tr
*/

#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <iomanip>
using namespace std;
class Stack{
	private:
		int *elemanlar;
		int stackBasi;
		int elemanSayisi;
		int kapasite;
		
		bool dolumu(){
			return elemanSayisi == kapasite;
		}
		
		/**
			Kapasite dolunca yer a�ar.
		*/
		void yerAc(int boyut)
		{
			 int *tmp = new int[boyut];
			 for(int j=0;j<elemanSayisi;j++) tmp[j]= elemanlar[j];
			 if(elemanlar != NULL) delete [] elemanlar;
			 elemanlar = tmp;
			 kapasite = boyut;
		}
	public:
		Stack(){
			elemanlar=NULL;
			stackBasi=-1;
			elemanSayisi=0;
			kapasite=0;
		}
		bool isEmpty() const{
			return stackBasi == -1;
		}
		int elSay(){
			return this->elemanSayisi;
		}
		void push(int eleman){
			if(dolumu()){
				yerAc(max(1,2*kapasite));
			}			
			stackBasi++;
			elemanlar[stackBasi] = eleman;
			elemanSayisi++;
		}
		void pop() {
			if(!isEmpty()){
					stackBasi--;
			elemanSayisi--;
			} // Stack bo�ken pop metodu �a�r�lamaz
		
		}
		int top()
		{
			if(!isEmpty())  // Stack bo�ken top metodu �a�r�lamaz
			return elemanlar[stackBasi];
		}
		void makeEmpty(){ // stack'i ilk haline �ivirir
			stackBasi=-1;
			elemanSayisi=0;			
		}
		~Stack(){
			if(elemanlar != NULL) delete [] elemanlar;
			elemanlar=NULL;
		}
		void butunDurumlariCagir(){
			
		const int elsay = elemanSayisi;
		int degerler[elsay];
		for(int i = 0; i < elsay; i++)
		{
			degerler[i] = top();
			cout<<":" << setw(10)<<degerler[i] <<left;
			pop();
		}
		
		for(int i = elsay-1 ; i >=  0; i--)
		{
			push(degerler[i]);

		}
		
		}
};
#endif