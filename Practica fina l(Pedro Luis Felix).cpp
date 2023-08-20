//Pedro Luis Felix
//100494189

/*"OBSERVACION CORREGIDA"

Detallitos en el encabezado del archivo generado

*/

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include <iomanip>
using namespace std;

void escribir();

int main()
{
	escribir();



    system("pause");
	return 0;	
	
}

void escribir(){
	
	ofstream archivo;
	string nombreArchivo;
	string nombre_apellido,Matricula,secion;
	float Nota_PrimerParcial,Nota_SegundoParcial,Nota_ExamenFinal,Seccion; 
	float Nota_final;
	char opcion, continuar;
	string estatus;
	int i=1;

	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out); 
	
	if(archivo.fail()){
		
		cout<<"no se puede abrir el archivo";
		exit(1);
	}
	archivo<<"DATOS PARA INFORMATICA: INF-510 y INF-511\n";
	archivo <<left <<setw(23) << "\n\NOMBRES" <<left <<setw(20) <<"MATRICULAS"
	         <<left <<setw(20)<< "Seccion"<<left <<setw(20)<<"Calificacion"<<left <<setw(20)<<"Estatus" <<endl <<endl;
   
  
  do{
  
	
   cout<<"\n\nReportar la calificacion final obtenida de 3 estudiantes de una materia determinada.\n\n";
   cout<<"A) INFORMATICA: INF-510 \n";
   cout<<"B) INFORMATICA: INF-511 \n";
  
   
            cout<<"\n\nElija una opcion :";
            cin>>opcion;
            
            
            
      cin.ignore();
            
     switch(opcion){
     	cin.ignore();
     	do{
			 case 'a':
             case 'A':
             	
                 
                 cout<<"\nDatos para INFORMATICA: INF-510:\n";
		
	  	         cout<<"\nDigite su nombre y apellido :  ";
                 getline(cin,nombre_apellido);
                     
                 cout<<"Digite su Matricula : ";
                 getline(cin,Matricula);
          
                 cout<<"digite su  secion: ";
               	 getline(cin,secion);
         
                 cout<<"Digite su nota del primer parcial : ";
                 cin>>Nota_PrimerParcial;
        
                 cout<<"Digite su nota del segundo parcial : ";
                 cin>>Nota_SegundoParcial;
      
                 cout<<"Digite su nota del examen final : ";
                 cin>>Nota_ExamenFinal;
      
				 
		   Nota_final=Nota_PrimerParcial+Nota_SegundoParcial+Nota_ExamenFinal;
		   cout<<"\n\n";
		   
		   if(Nota_final>=70){
		   	
		   	   estatus="Promovido";
		   }
		   else{
		 
		   	   estatus="Reprobado";
		   }	
		   
		   
		   
	  
            archivo <<left <<setw(20) <<nombre_apellido<<left <<setw(20) <<Matricula
	    <<left <<setw(20)<<secion<<left <<setw(20)<<Nota_final<<left <<setw(20)<<estatus<<endl;
		   
		   
			cout <<left <<setw(20) << "NOMBRES" <<left <<setw(20) <<"MATRICULAS"
	    <<left <<setw(20)<< "Seccion"<<left <<setw(20)<<"Calificacion"<<left <<setw(20)<<"Estatus" <<endl <<endl;
		  
            cout <<left <<setw(20) <<nombre_apellido<<left <<setw(20) <<Matricula
	    <<left <<setw(20)<<secion<<left <<setw(20)<<Nota_final<<left <<setw(20)<<estatus<<endl;
	     
	       i=i+1;
		    
          	
       cout<<"\n\nDesea continuar con INFORMATICA: INF-510 : s/n ";
       cin>>continuar;
       cin.ignore();
      }while(tolower(continuar)=='s'); 
         break;
     
	 do{  
              case 'b':
              case 'B':
            	
                 
                 cout<<"\nDatos para INFORMATICA: INF-511:\n";
	 
	  	         cout<<"\nDigite su nombre y apellido :  ";
                 getline(cin,nombre_apellido);
                     
                 cout<<"Digite su Matricula : ";
                 getline(cin,Matricula);
          
                 cout<<"digite su  secion: ";
               	 getline(cin,secion);
         
                 cout<<"Digite su nota del primer parcial : ";
                 cin>>Nota_PrimerParcial;
        
                 cout<<"Digite su nota del segundo parcial : ";
                 cin>>Nota_SegundoParcial;
      
                 cout<<"Digite su nota del examen final : ";
                 cin>>Nota_ExamenFinal;
      
				 
		   Nota_final=Nota_PrimerParcial+Nota_SegundoParcial+Nota_ExamenFinal;
		   cout<<"\n\n";
		   
		   if(Nota_final>=70){
		   	
		   	   estatus="Promovido";
		   }
		   else{
		 
		   	   estatus="Reprobado";
		   }	
		   
		   
		   
		   	  
            archivo <<left <<setw(20) <<nombre_apellido<<left <<setw(20) <<Matricula
	    <<left <<setw(20)<<secion<<left <<setw(20)<<Nota_final<<left <<setw(20)<<estatus<<endl;
		   
		   
			cout <<left <<setw(20) << "NOMBRES" <<left <<setw(20) <<"MATRICULAS"
	    <<left <<setw(20)<< "Seccion"<<left <<setw(20)<<"Calificacion"<<left <<setw(20)<<"Estatus" <<endl <<endl;
		  
            cout <<left <<setw(20) <<nombre_apellido<<left <<setw(20) <<Matricula
	    <<left <<setw(20)<<secion<<left <<setw(20)<<Nota_final<<left <<setw(20)<<estatus<<endl;
	     
	       i=i+1;
		    
          	
       cout<<"\n\nDesea continuar con INFORMATICA: INF-511 : s/n ";
       cin>>continuar;
       cin.ignore();
      }while(tolower(continuar)=='s'); 
         break;
        
		   default : cout<<"\nLa opcion que usted digito no es valida:";
}
     
        
        
   cout<<"\n\nDesea continuar usando el programa: s/n ";
   cin>>continuar;
   
    
   }while(tolower(continuar)=='s');
		
}
