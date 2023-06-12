#include <iostream>

using namespace std;

class personagens
{
public:
    personagens();

    void mostrar()
	{
        cout << nome << endl;
        cout << lane << endl;
        cout << data << endl;
        cout << dificuldade << endl;
        cout << nota << endl;
    }
protected:
    const char* nome;
    const char* lane;
    unsigned int data = 0;
    const char* dificuldade;
    unsigned int nota = 0;

};
