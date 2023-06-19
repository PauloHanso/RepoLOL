#include <iostream>
#include "Personagens.h"

using namespace std;

int main()
{

    cout << "Zed O mestre das sombras!" << endl;
   
    personagens* PersonagemZED = new personagens();
    PersonagemZED->setNome("ZED");
    PersonagemZED->setLane("MID");
    PersonagemZED->setAnoDeLancamento(2012);
    PersonagemZED->setNota(10);

    PersonagemZED->mostrar();
    delete PersonagemZED;

    cout << endl;

    cout << "Akshan, A sentinela rebelde!" << endl;
    personagens* PersonagemAkshan = new personagens();
    PersonagemAkshan->setNome("AKSHAN");
    PersonagemAkshan->setLane("MID");
    PersonagemAkshan->setAnoDeLancamento(2021);
    PersonagemAkshan->setNota(10);

    PersonagemAkshan->mostrar();
    delete PersonagemAkshan;

    cout << endl;


    cout << "Aatrox, a espada DARKIN!" << endl;
    personagens* PersonagemAatrox = new personagens();
    PersonagemAatrox->setNome("AATROX");
    PersonagemAatrox->setLane("TOP");
    PersonagemAatrox->setAnoDeLancamento(2013);
    PersonagemAatrox->setNota(9);

    PersonagemAatrox->mostrar();
    delete PersonagemAatrox;

    cout << endl;

    cout << "Nautilus, Tita das profundezas!" << endl;
    personagens* PersonsagemNautilus = new personagens();
    PersonsagemNautilus->setNome("Nautilus");
    PersonsagemNautilus->setLane("Supp/mid");
    PersonsagemNautilus->setAnoDeLancamento(2012);
    PersonsagemNautilus->setNota(7);

    PersonsagemNautilus->mostrar();
    delete PersonsagemNautilus;

    cout << endl;

    return 0;
}
