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

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[right], i = left - 1;
    for (int j = left; j <= right - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return (i + 1);
}

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int pi = partition(arr, left, right);
        quickSort(arr, left, pi - 1);
        quickSort(arr, pi + 1, right);
    }
}

string visualizzazione(numerazione_civica array[])
{
	
	
};


void carica_dati(numerazione_civica array[], string file_name)
{
	ifstream fileInput("testo.txt"); // Apre il file
    string linea;

    if (fileInput.is_open()) {
    	int counter=0;
        while (fileInput>>linea)// { // Legge riga per riga //
		{
			array[counter].ClasseToponimo = linea;//riga sbagliata
			array[counter].DescrizioneToponimo = linea;
			array[counter].numero = linea;
			array[counter].Subalterno = linea;
			array[counter].CAP = linea;
			stoi(linea, 0, 10);
			array[counter].SezioneISTAT = linea;
			array[counter].Lat = linea;
			array[counter].Lon = linea;
			array[counter].location.lg = linea;
			array[counter].location. = linea;



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

void cercavia()//mostra tutti numeri civici con via data
{
	
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
