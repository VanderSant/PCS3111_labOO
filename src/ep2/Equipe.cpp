/**
 * @file Equipe.cpp
 *
 * @author Vanderson Santos <vanderson.santos@usp.br>
 *
 * @date 12/2019
 *
 * @copyright MIT License - Copyright (c) 2021 Vanderson Santos
 */

#include "Equipe.h"

#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;

Equipe::Equipe(string nome) {
    this->nome = nome;
}

Equipe::~Equipe() {
    cout<<"Equipe "<<this->getNome()<<" Destruida"<<endl;
}

string Equipe::getNome() {
    return nome;
}

void Equipe::imprimir() {
    cout<<"Equipe "<<this->getNome()<<endl;
}
