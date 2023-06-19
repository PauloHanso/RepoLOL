#include "Personagens.h"
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

personagens::personagens()
{
    // Construtor padrão vazio
}

personagens::personagens(const char* nome, const char* lane, unsigned int anoDeLancamento, unsigned int nota)
{
    setNome(nome);
    setLane(lane);
    setAnoDeLancamento(anoDeLancamento);
    setNota(nota);
}

void personagens::setNome(const char* nome)
{
    strncpy_s(Nome, 10, nome, 10);
    
}

const char* personagens::getNome() const
{
    return Nome;
}

void personagens::setLane(const char* lane)
{
    strncpy_s(Lane,10,lane, 10);
  
}

const char* personagens::getLane() const
{
    return Lane;
}

void personagens::setAnoDeLancamento(unsigned int anoDeLancamento)
{
    AnoDeLancamento = anoDeLancamento;
}

unsigned int personagens::getAnoDeLancamento() const
{
    return AnoDeLancamento;
}

void personagens::setNota(unsigned int nota)
{
    Nota = nota;
}

unsigned int personagens::getNota() const
{
    return Nota;
}


void personagens::mostrar()
{
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Lane: " << getLane() << std::endl;
    std::cout << "Ano de Lancamento: " << getAnoDeLancamento() << std::endl;
    std::cout << "Nota: " << getNota() << std::endl;
}
