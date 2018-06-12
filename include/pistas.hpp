/**
*@file pistas.hpp
*@brief Arquivo que contem a classe Pistas
*@author Patricia Sayonara Goes de Araujo
*@since 01/06/2018
*@date 04/06/2018
*@version 1.0
*/

#ifndef PISTAS
#define PISTAS

/**@brief Definicao da classe Pistas que contem os atributos e os metodos a serem utilizados para pistas de corrida*/
class Pistas{
    private:
        string nome; /**<Variavel que vai receber o nome da pista de corrida*/
        int identificador; /**<Variavel que vai receber o numero identificador da pista de corrida*/
        int distancia; /**<Variavel que vai receber a distancia da pista de corrida*/
    public:
        Pistas(); /**@brief Construtor padrao da classe Pistas*/
        void setNome(string nome); /**@brief setter para o atributo nome*/
        void setIdentificador(int ident); /**@brief setter para o atributo identificador*/
        void setDistancia(int dist); /**@brief setter para o atributo distancia*/
        string getNome(); /**@brief getter para o atributo nome*/
        int getIdentificador(); /**@brief getter para o atributo identificador*/
        int getDistancia(); /**@brief getter para o atributo distancia*/
};

#endif
