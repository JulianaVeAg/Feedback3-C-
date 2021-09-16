//============================================================================
// Name        : feedback3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


char array[10][30];
char aux [30];

void pedir10palabras();
void mostrar();
void ordenar();
void ordenarlongitud();

int main() {

	pedir10palabras();
	cout <<"-----------" << endl;
	mostrar();
	cout <<"-----------" << endl;
	ordenar();
	cout <<"mostrar palabras ordenadas alfabeticamente" << endl;
	mostrar();
	cout <<"-----------" << endl;
	ordenarlongitud();
	cout <<"mostrar palabras ordenadas por longitud" << endl;
	mostrar();
	
	
	
	return 0;
}

void pedir10palabras(){
	for (int i=0;i<10;i++){
	cout << "Por favor introduza una palabra-" << endl;
	cin>>array[i];
	fflush(stdin);		
	}	 
}
void mostrar(){
	cout << "Mostrando palabras" << endl;
	for(int i=0;i<10;i++){
		cout << array[i]  << endl;	
	}
}
void ordenar(){
	for(int j=0;j<9;j++){
		for(int i=0;i<9-j;i++){
			if(strcmp(array[i],array[i+1])>0){
				
				strcpy(aux,array[i]);
				strcpy(array[i],array[i+1]);
				strcpy(array[i+1],aux);				
			}
		}
	}
	
}

void ordenarlongitud(){
	for(int j=0;j<9;j++){
				for(int i=0;i<9-j;i++){
					if(strlen(array[i])< strlen (array[i+1])){
						
						strcpy(aux,array[i]);
						strcpy(array[i],array[i+1]);
						strcpy(array[i+1],aux);				
					}
				}
			}
			 
	
}