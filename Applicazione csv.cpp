#include <iostream>
#include <string>
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
	int CAP;
	int SezioneISTAT;
	double Lat;
	double Lon;
	location Loc;
	
};

int main()
{
	numerazione_civica dati[100];



    return 0;
}
