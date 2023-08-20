#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arreglo1[5];
	int arreglo2[5];
	int suma[10];
	
	cout<<"ARREGLO 1: "<<endl;
	for (int i=0; i<5; i++){
		cin>>arreglo1[i];
	}
	
	cout<<endl<<"ARREGLO 2: "<<endl;
	for (int i=0; i<5; i++){
		cin>>arreglo2[i];
	}
	
	for(int i=0; i<10; i++){
		if(i<5){
			suma[i]=arreglo1[i];
		}
		if(i>=5){
			suma[i]=arreglo2[i-5];
		}
	}
	
	cout<<endl<<"ARREGLO DE 10 ELEMENTOS: "<<endl;
	for(int i=0; i<10; i++){
		cout<<suma[i]<<" ";
	}
	
	cout<<endl<<"\nARREGLO DE 10 ELEMENTOS ORDENADO: "<<endl;
	for(int i=0; i<10; i++){
		for(int j=0, k=1; k<10; j++, k++){
			if(suma[j]>suma[k]){
				int temp=suma[k];
				suma[k]=suma[j];
				suma[j]=temp;
			}
		}
	}
	
	for(int i=0; i<10; i++){
		cout<<suma[i]<<" ";
	}
	
	cout<<endl<<endl;
	system("pause");
	return 0;
}
