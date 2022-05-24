#include <iostream>

using namespace std;

int main() {
	
	inicioprograma:
		
	int notas[10];
	int cantidad, sumanotas, mayor=0, menor=notas[0];
	double prom;
	int op;
	sumanotas=0;
	
	cout<<" --------------------------------------------------"<<endl;
	cout<<"|   Calculadora Promedio, Nota Mayor, Nota Menor   |"<<endl;
	cout<<" --------------------------------------------------"<<endl;
	
	
	
	
	cout<<"Ingrese el numero de notas que desea agregar"<<endl;
	cin>>cantidad;
	cout<<endl;
	
	for (int i=0; i < cantidad; i++){
		cout<<"Ingrese la nota No."<<i+1<<endl;
		cin>>notas[i];							
		sumanotas=sumanotas+notas[i];			
		
		if (notas[i] > mayor ) {          
			mayor=notas[i];				
		}										
		if (notas[i]< menor){			
			menor=notas[i];
		}
				
	}
	
	prom=sumanotas/cantidad;
	
	cout<<endl;
	
	do{
	
	cout<<endl;
	cout<<"Ingresa una de las siguientes opciones"<<endl;
	cout<<"1. Calcular Promedio"<<endl;
	cout<<"2. Ver Nota Mayor"<<endl;
	cout<<"3. Ver Nota Menor"<<endl;
	cout<<"4. Ingresar Nuevas notas"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"R//  ";
			
			
	cin>>op;
	

		if(op>0 && op<=5){

			switch(op){
				case 1:
					cout<<endl<<"-----> El promedio de sus notas es: "<<prom<<endl;
					break;
				case 2:
					cout<<endl<<"-----> De las notas ingresadas, su Nota Mayor es: "<<mayor<<endl;
					break;
				case 3:
					cout<<endl<<"-----> De las notas ingresadas, su Nota Menor es: "<<menor<<endl;
					break;
				case 4:
					system("cls");
					goto inicioprograma;
					
				case 5:				
					return 0;
			}
		}else{
			cout<<"La opcion introducida es invalida, vuelva a ejecutar el programa"<<endl;
			return 0;
		}
		
	}while(op !=5);
	
	
	system("pause");
	return 0;
}
