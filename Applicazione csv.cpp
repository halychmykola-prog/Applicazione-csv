#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct location{
	double lt;
	double lg;
};

struct numerazione_civica{
	string ClasseToponimo;
	string DescrizioneToponimo;
	string numero;
	string Subalterno;
	string CAP;
	int SezioneISTAT;
	double Lat;
	double Lon;
	location Loc;
};

/*
aprire file, controllare se esiste, se esiste salvare contenuto del file 
nel campo con lettura e poi passare il campo a struttura

*/

string visualizzazione(numerazione_civica array[])
{
	
	
};

void carica_dati(numerazione_civica array[], string file_name)
{
	ifstream fileInput("testo.txt"); // Apre il file
    string linea;

    if (fileInput.is_open()) {
    	int counter=0;
        while (getline(fileInput, linea))// { // Legge riga per riga //fileInput>>linea
		{
			array[counter]=linea;//riga sbagliata
			cout<<endl<<endl<<endl<<endl;
			
			cout<<array[counter].ClasseToponimo;
			cout<<array[counter].DescrizioneToponimo;
			cout<<array[counter].numero;
			cout<<array[counter].Subalterno;
			cout<<array[counter].CAP;
			cout<<array[counter].SezioneISTAT;
			cout<<array[counter].Lat;
			cout<<array[counter].Lon;
			cout<<array[counter].Loc.lt;
			cout<<array[counter].Loc.lg;
		
        	
        }
        fileInput.close(); // Chiude lo stream
    } else {
        cout << "Impossibile aprire il file";
    }
	

};

int main()
{
	numerazione_civica dati[1500];
	int scelta=0;
	
	do
	{
	    /*
	    Si annula inthelp perche' e' una veriabile d'appoggio universale.
	    */
	    
	    
	    cout<<"Opzioni: "<<endl;
		cout<<"   Per fare fare lettura, premi '1'."<<endl<<"   Per visualizzare array, premi '2'."<<endl;
		
		cout<<"Quale operazione vuoi fare? Inserisci la lettera: ";
		cin>>scelta;
		cout<<endl;
		
		
		switch(scelta)
		{
		    /*
		    
		    */
		    case 1:
		    	break;
		}
		    	
		    	
		    	
		    	
		    	
		    	
	
	}while(scelta!=0);








    return 0;
}
