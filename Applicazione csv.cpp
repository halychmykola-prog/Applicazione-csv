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


string visualizzazione(numerazione_civica array[], int size)
{
    string output;
	for(int i=0;i<size;i++)
	{
		output += array[i].ClasseToponimo+"\t";
		output += array[i].DescrizioneToponimo+"\t";
        output += array[i].numero+"\t";
        output += array[i].Subalterno+"\t";
        output += array[i].CAP+"\t";
        output += to_string(array[i].SezioneISTAT)+"\t";
        output += to_string(array[i].Lat)+"\t";
        output += to_string(array[i].Lon)+"\t";
		output += to_string(array[i].Loc.lt)+"\t";
        output += to_string(array[i].Loc.lg)+"\t";
	}
	return output;
	
	
};



void carica_dati(numerazione_civica array[], string file_name)
{
	ifstream fileInput(file_name); // Apre il file
    string linea;
    int counter=0;

    if (!fileInput.is_open()) {
        cout<<"Errore: Impossibile aprire il file "<<file_name<< endl;
        return;
    }
    else
    {
        while (fileInput >> linea && counter < 1500)// { // Legge riga per riga //
		{
			array[counter].ClasseToponimo = linea;
            
            fileInput >> linea;
            array[counter].DescrizioneToponimo = linea;
            
            fileInput >> linea;
            array[counter].numero = linea;
            
            fileInput>>linea;
            array[counter].Subalterno = linea;
            
            fileInput >> linea;
            array[counter].CAP = linea;
            
            fileInput >> linea;
            array[counter].SezioneISTAT = stoi(linea); 
            
            fileInput >> linea;
            array[counter].Lat = stod(linea); 
            
            fileInput >> linea;
            array[counter].Lon = stod(linea); 
            
            fileInput >> linea;
            array[counter].Loc.lt = stod(linea); 
            
            fileInput >> linea;
            array[counter].Loc.lg = stod(linea);

            
            
            counter++; 
        }
        fileInput.close();
    } 
	

};

void cercavia()//mostra tutti numeri civici con via data
{
	
};






int main()
{
	numerazione_civica dati[1500];
	int scelta=0;
    string helpstring;
	
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
		    
		    case 1:
                carica_dati(dati, "numerazione_civica.csv");
                helpstring = "Dati caricati con successo.";
                cout<<helpstring<<endl;
                break;
		    
            case 2:
                cout<<visualizzazione(dati, 1500)<<endl;
                break;

            default:
                helpstring = "Scelta non valida. Riprova.";
                cout<<helpstring<<endl;
                break;
		}
		    	
		    	
		    	
		    	
		    	
		    	
	
	}while(scelta!=0);








    return 0;
}