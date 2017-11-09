#include <iostream>

class Skladacz
{
public:
	virtual int Skladaj()
};
class Komponent;

class ObiektZlozony
{
public:
	ObiektZlozony(Skladacz* skladacz)
	{

	}

	void Popraw() {}
private:
	Skladacz * _skladac;
	Komponent * _komponenty;
	int _licznikKomponentow;
	int _szerokoscWiersza;
	int * _przejsciaDoNowegoWiersza;
	int _licznikWierszy;
};