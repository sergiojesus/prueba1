#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class  Nodo {
	
	int valor;
	Nodo *sig;
	public:
	Nodo(int);
	friend class Lista;
   
};
	
	Nodo::Nodo(int a){
			valor=a;
			sig=NULL;
			
		}
		
 class Lista{
    	Nodo *inicio;
    	Nodo *fin;
    	public:
    		Lista();
    	void insertar(int);
        void mostrar();     		
			friend class Nodo;
    		
   	};

           
		    Lista::Lista(){
    			inicio=NULL;
    			fin=NULL;
    			
			}
			
			void Lista::insertar(int v){
				Nodo *nuevo = new Nodo(v);
				 if(inicio==NULL){
				 	
				 	inicio=nuevo;
				 	fin=nuevo;
				 	delete nuevo;
				 }
				 else{
				 	fin->sig=nuevo;
				 	fin=nuevo;
				 }
			}
			
	void Lista::mostrar(){
		if(inicio==NULL){
			cout<<"lista vacia";
			
		}
		else {
		
		Nodo *aux;
		aux=inicio;
		
		while(aux!=NULL){
			cout<<aux->valor<<endl;
			aux=aux->sig;
			
		}
	}
	}		

int main(int argc, char** argv) {
	Lista uno;
	uno.insertar(8);
	uno.insertar(8);
	uno.mostrar();
	return 0;
}
