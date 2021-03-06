/**
 * @file Modalidade.h
 *
 * @author Vanderson Santos <vanderson.santos@usp.br>
 *
 * @date 10/2019
 *
 * @copyright MIT License - Copyright (c) 2021 Vanderson Santos
 */

#ifndef MODALIDADE_H
#define MODALIDADE_H
#include "Equipe.h"

class Modalidade {
    private:
        string nome;
        int quantidade;
        Equipe** participantes[quantidade];
        Equipe** ordem[quantidade];

    public:
        Modalidade(string nome, Equipe** participantes, int quantidade);
        ~Modalidade();
        string getNome();

        Equipe** getEquipes();

        int getQuantidadeDeEquipes();

        void setResultado(Equipe** ordem);

        int getPosicao(Equipe* participante);

        void imprimir();
};

#endif  // MODALIDADE_H
