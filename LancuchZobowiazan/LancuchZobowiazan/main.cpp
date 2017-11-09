#include <iostream>

typedef int Temat;
const Temat BRAK_POMOCY = 1;

class ObslugaPomocy {
public:
	ObslugaPomocy(ObslugaPomocy * OP = nullptr, Temat t = BRAK_POMOCY)
	{
		_nastepnik = OP;
		_temat = t;
	}

	virtual bool JestPomoc() { return _temat != BRAK_POMOCY; }
	virtual void UstawObsluge( ObslugaPomocy * OP, Temat t ) {}
	virtual void ObsluzPomoc() 
	{ 
		if (_nastepnik != nullptr)
		{
			_nastepnik->ObsluzPomoc();
		}
	}

private:
	ObslugaPomocy * _nastepnik;
	Temat _temat;
};

class Widzet : public ObslugaPomocy
{
protected:
	Widzet(Widzet * rodzic, Temat t = BRAK_POMOCY) : ObslugaPomocy(rodzic, t)
	{
		_rodzic = rodzic;
	}
	
private: 
	Widzet * _rodzic;
};

class Przycisk : public Widzet {
public: 
	Przycisk(Widzet * w, Temat t = BRAK_POMOCY) : Widzet(w, t)	{}
	virtual void ObsluzPomoc()
	{
		if (JestPomoc())
		{
			std::cout << "Jest pomoc.. \n";
		}
		else
		{
			ObslugaPomocy::ObsluzPomoc();
		}
	}
};

class Dialog : public Widzet {
public:
	Dialog(ObslugaPomocy * o, Temat t = BRAK_POMOCY) : Widzet(nullptr)
	{
		UstawObsluge(o, t);
	}

	virtual void ObsluzPomoc()
	{
		if (JestPomoc())
		{
			std::cout << "Jest pomoc.. \n";
		}
		else
		{
			ObslugaPomocy::ObsluzPomoc();
		}
	}
};


class Aplikacja : public ObslugaPomocy {
public:
	Aplikacja(Temat t = BRAK_POMOCY) : ObslugaPomocy(nullptr ,t){ }

	virtual void ObsluzPomoc()
	{
		std::cout << "Lista tematow pomocy\n";
	}
};

const Temat Drukowanie = 1;
const Temat ULOZENIEPAPIERU = 2;
const Temat APLIKACJA = 3;

int main()
{
	Aplikacja * app = new Aplikacja(APLIKACJA);
	Dialog * dialog = new Dialog(app, Drukowanie);
	Przycisk * butt = new Przycisk(dialog, ULOZENIEPAPIERU);

	butt->ObsluzPomoc();
	dialog->ObsluzPomoc();
	app->ObsluzPomoc();

	return 0;
}