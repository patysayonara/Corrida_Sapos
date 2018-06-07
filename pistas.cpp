/**
*@file pistas.cpp
*@brief Arquivo que contem os metodos da classe Pistas
*@author Patricia Sayonara Goes de Araujo
*@since 01/06/2018
*@date 04/06/2018
*@version 1.0
*/

#include <iostream>
using namespace std;
#include "pistas.hpp"

/**@brief Construtor padrao da classe Pistas*/
Pistas::Pistas(){
    this->nome = "Desconhecido";
    this->identificador = 0;
    this->distancia = 0;
}

/**
* @brief Metodo que designa o nome da pista
* @param nome Nome da pista
*/
void Pistas::setNome(string nome){
    this->nome = nome;
}

/**
* @brief Metodo que designa o numero identificador da pista
* @param ident Identificador da pista
*/
void Pistas::setIdentificador(int ident){
    this->identificador = ident;
}

/**
* @brief Metodo que designa a distancia da pista
* @param dist Distancia da pista
*/
void Pistas::setDistancia(int dist){
    this->distancia = dist;
}

/**
* @brief Metodo que retorna o nome da pista
* @return Nome da pista
*/
string Pistas::getNome(){
    return this->nome;
}

/**
* @brief Metodo que retorna o numero identificador da pista
* @return Identificador da pista
*/
int Pistas::getIdentificador(){
    return this->identificador;
}

/**
* @brief Metodo que retorna a distancia da pista
* @return Distancia da pista
*/
int Pistas::getDistancia(){
    return this->distancia;
}

