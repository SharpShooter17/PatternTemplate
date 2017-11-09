#include <iostream>
#include <stdlib.h>

class App
{
public:
	App() {}
	void operacja1() { std::cout << "App operation 1\n"; }
	void operacja2() { std::cout << "App operation 2\n"; }
	void operacja3() { std::cout << "App operation 3\n"; }
	void Dzialaj() { std::cout << "Dzialam xd\n"; }
};

class Polecenie
{
public:
	virtual ~Polecenie() {};
	virtual void Wykonaj() = 0;
protected:
	Polecenie() {};
};

class PolecenieOtworz : public Polecenie
{
public:
	PolecenieOtworz(App* app) { _app = app; }
	virtual void Wykonaj()
	{
		_app->operacja1();
	}
private:
	App* _app;
};

class PolecenieWklej : public Polecenie
{
public:
	PolecenieWklej(App* app) { _app = app; }
	virtual void Wykonaj()
	{
		_app->operacja1();
	}
private:
	App* _app;
};

template <class Odbiorca>
class ProstePolecenie : public Polecenie
{
public:
	typedef void (Odbiorca::*Akcja) ();
	ProstePolecenie(Odbiorca * o, Akcja a) : _odbiorca(o), _akcja(a) {}
	void Wykonaj()
	{
		(_odbiorca->*_akcja)();
	}
private:
	Akcja _akcja;
	Odbiorca * _odbiorca;
};

int main()
{
	App * odbiorca = new App;
	Polecenie * polecenie = new ProstePolecenie<App>(odbiorca, &App::Dzialaj);
	polecenie->Wykonaj();

	system("pause");
	return 0;
}