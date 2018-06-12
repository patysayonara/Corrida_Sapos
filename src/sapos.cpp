/**
*@file sapos.cpp
*@brief Arquivo que contem os metodos da classe Sapos
*@author Patricia Sayonara Goes de Araujo
*@since 01/06/2018
*@date 04/06/2018
*@version 1.0
*/

#include <iostream>
using namespace std;
#include "../include/sapos.hpp"
#include <cstdlib>
#include <ctime>

/**@brief Construtor padrao da classe Sapos*/
Sapos::Sapos(){
    this->nome = "Desconhecido";
    this->identificador = 0;
    this->distPercorrida = 0;
    this->puloMaximo = 0;
    this->quantPulos = 0;
    this->quantProvas = 0;
    this->vitorias = 0;
    this->empates = 0;
    this->totalPulos = 0;
    this->ranking = 0;
}

/**
* @brief Metodo que designa o nome do sapo
* @param nome Nome do sapo
*/
void Sapos::setNome(string nome){
    this->nome = nome;
}

/**
* @brief Metodo que designa o numero identificador do sapo
* @param ident Identificador do sapo
*/
void Sapos::setIdentificador(int ident){
    this->identificador = ident;
}

/**
* @brief Metodo que designa a distancia percorrida pelo sapo na corrida
* @param dist Distancia percorrida pelo sapo
*/
void Sapos::setDistPercorrida(int dist){
    this->distPercorrida = dist;
}

/**
* @brief Metodo que designa o distancia maxima percorrida por um pulo do sapo
* @param pulo Distancia maxima do pulo do sapo
*/
void Sapos::setPuloMaximo(int pulo){
    this->puloMaximo = pulo;
}

/**
* @brief Metodo que designa a quantidade de provas realizadas pelo sapo
* @param quant Quantidade de provas realizadas pelo sapo
*/
void Sapos::setQuantProvas(int quant){
    this->quantProvas = quant;
}

/**
* @brief Metodo que designa a quantidade de vitorias do sapo
* @param vict Vitorias do sapo
*/
void Sapos::setVitorias(int vict){
    this->vitorias = vict;
}

/**
* @brief Metodo que designa a quantidade de empates do sapo
* @param emp Empates do sapo
*/
void Sapos::setEmpates(int emp){
    this->empates = emp;
}

/**
* @brief Metodo que designa o numero total de pulos dados pelo sapo em corridas
* @param total Numero total de pulos
*/
void Sapos::setTotalPulos(int total){
    this->totalPulos = total;
}

/**
* @brief Metodo que designa o numero de pulos dados pelo sapo na corrida atual
* @param pulos Numero atual de pulos
*/
void Sapos::setQuantPulos(int pulos){
    this->quantPulos = pulos;
}

/**
* @brief Metodo que designa a colocacao do sapo na corrida
* @param ranking Colocacao do sapo
*/
void Sapos::setRanking(int ranking){
    this->ranking = ranking;
}

/**
* @brief Metodo que retorna o nome do sapo
* @return Nome do sapo
*/
string Sapos::getNome(){
    return this->nome;
}

/**
* @brief Metodo que retorna o numero identificador do sapo
* @return Identificador do sapo
*/
int Sapos::getIdentificador(){
    return this->identificador;
}

/**
* @brief Metodo que retorna a distancia percorrida pelo sapo na corrida
* @return Distancia percorrida pelo sapo
*/
int Sapos::getDistPercorrida(){
    return this->distPercorrida;
}

/**
* @brief Metodo que retorna a distancia maxima percorrida por um pulo do sapo
* @return Distancia maxima do pulo do sapo
*/
int Sapos::getPuloMaximo(){
    return this->puloMaximo;
}

/**
* @brief Metodo que retorna a quantidade de provas realizadas pelo sapo
* @return Quantidade de provas realizadas pelo sapo
*/
int Sapos::getQuantProvas(){
    return this->quantProvas;
}

/**
* @brief Metodo que retorna o numero de vitorias do sapo
* @return Numero de vitorias do sapo
*/
int Sapos::getVitorias(){
    return this->vitorias;
}

/**
* @brief Metodo que retorna o numero de empates do sapo
* @return Numero de empates do sapo
*/
int Sapos::getEmpates(){
    return this->empates;
}

/**
* @brief Metodo que retorna a quantidade de pulos dados pelo sapo em provas
* @return Quantidade total de pulos dados pelo sapo em provas
*/
int Sapos::getTotalPulos(){
    return this->totalPulos;
}

/**
* @brief Metodo que retorna a quantidade de pulos dados pelo sapo na prova atual
* @return Quantidade de pulos dados pelo sapo na prova atual
*/
int Sapos::getQuantPulos(){
    return this->quantPulos;
}

/**
* @brief Metodo que retorna a colocacao do sapo na prova
* @return Colocacao do sapo no ranking da prova
*/
int Sapos::getRanking(){
    return this->ranking;
}

/**
* @brief Metodo que realiza o pulo randomico do sapo
*/
void Sapos::pular(){
    int pular = 0; /**<Variavel que recebe a distancia percorrida pelo sapo na corrida*/
    int distPulo = 0; /**<Variavel que recebe a distancia do pulo dado pelo sapo*/
    int pulos = 0; /**<Variavel que recebe a quantidade de pulos dados pelo sapo*/

    pular = getDistPercorrida();
    distPulo = rand() % getPuloMaximo() + 1;
    /**@brief Impressao do pulo atual do sapo*/
    cout << "Sapo " << getIdentificador() << ": " << getNome() << " saltou " << distPulo << " unidades." << endl;
    pular += distPulo;
    setDistPercorrida(pular);
    pulos = getQuantPulos();
    pulos++;
    setQuantPulos(pulos);
}
