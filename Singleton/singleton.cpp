#include <iostream>

class CSingleton
{
private:
    CSingleton() 
	{ 
		std::cout << "Initialize\n"; 
	}
	
	static CSingleton * instance;
public:
    static CSingleton * getInstance()
    {
		if ( instance == nullptr )
		{
			instance = new CSingleton();
		}
        
		return instance;
    }
    
    void method()
	{
		std::cout << "Hello, World!\n";
	}
};

CSingleton * CSingleton::instance = nullptr;

int main()
{
	CSingleton::getInstance()->method();
	CSingleton::getInstance()->method();
	
	return 0;
}