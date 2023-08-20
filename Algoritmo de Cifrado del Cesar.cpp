#include<iostream>
#include <cstring>
using namespace std;

char ltrs[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','W','X','Y','Z'};

void cifrado(){
	char txt[100];
	cin.ignore();
		cout <<"Ingrese texto a cifrar :";
		cin.getline(txt,100);
		for(int i=0; i<strlen(txt); i++){
			for(int j=0; j<strlen(ltrs);j++){
				if(txt[i]==ltrs[j]){
					int aux=(j+3)%52;
					txt[i]=ltrs[aux];
					break;
				}
			}
		}
		
	cout <<"\t\nEl texto cifrado es: "<<txt<<endl;
}

void descifrado(){
	char txt[100];
	cin.ignore();
		cout <<"Ingrese texto a cifrar :";
		cin.getline(txt,100);
		for(int i=0; i<strlen(txt); i++){
			for(int j=0; j<strlen(ltrs); j++){
				if(txt[i]==ltrs[j]){
					int aux;
					if((j-3)<0){
						aux=52+(j-3);
					}
					else{
						aux = (j-3)%52;
					}
					txt[i]=ltrs[aux];
					break;
				}
			}
		}
		
	cout <<"\t\nEl texto descifrado es: "<<txt<<endl;	
}

int main(){
	int contra, op;
	string txt;
	
	do{
		
		cout << "---------Que decea hacer?----------";
		cout << "\n"<<endl;
		cout << "1.<< CIFRAR>>"<<endl;
		cout << "2.<< DECIFRAR>>"<<endl;
		cout << "\t3.<<SALIR>>"<<endl;
		cin>>op;
		
		switch(op){
			case 1: cifrado();break;
			case 2: descifrado(); break;
		}
		system("Pause");
	}while(op != 3);
	
}
