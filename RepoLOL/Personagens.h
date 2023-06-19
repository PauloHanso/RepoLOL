#pragma once

class personagens
{
public:
    personagens();
    personagens(const char* nome, const char* lane, unsigned int anoDeLancamento, unsigned int nota);
    // Construtor e sobrecarga de construtor

    // M�todos de configura��o (setters)
    void setNome(const char* nome);
    void setLane(const char* lane);
    void setAnoDeLancamento(unsigned int anoDeLancamento);
    void setNota(unsigned int nota);

    // M�todos de obten��o (getters)
    const char* getNome() const;
    const char* getLane() const;
    unsigned int getAnoDeLancamento() const;
    unsigned int getNota() const;

    void mostrar();

private:
    char Nome[100];
    char Lane[20];
    unsigned int AnoDeLancamento;
    unsigned int Nota;
};
