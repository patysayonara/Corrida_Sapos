/**
*@file sapos.hpp
*@brief Arquivo que contem a classe Sapos
*@author Patricia Sayonara Goes de Araujo
*@since 01/06/2018
*@date 04/06/2018
*@version 1.0
*/

#ifndef SAPOS
#define SAPOS

/**@brief Definicao da classe Sapos que contem os atributos e os metodos a serem utilizados pelos sapos competidores*/
class Sapos{
    private:
        string nome; /**<Variavel que vai receber o nome do sapo*/
        int identificador; /**<Variavel que vai receber o numero identificador do sapo*/
        int distPercorrida; /**<Variavel que vai receber a distancia percorrida pelo sapo durante a corrida*/
        int puloMaximo; /**<Variavel que vai receber a distancia maxima atingida pelo pulo do sapo*/
        int quantPulos; /**<Variavel que vai receber o numero de pulos que o sapo deu para terminar a corrida*/
        int quantProvas; /**<Variavel que vai receber a quantidade de provas que o sapo ja completou antes*/
        int vitorias; /**<Variavel que vai receber o numero de vitorias do sapo*/
        int empates; /**<Variavel que vai receber o numero de empates do sapo*/
        int totalPulos; /**<Variavel que vai receber o numero total de pulos dados pelo sapo*/
        int ranking; /**<Variavel que vai receber o ranking do sapo na corrida*/
    public:
        Sapos(); /**@brief Construtor padrao da classe Sapos*/
        void setNome(string nome); /**@brief setter para o atributo nome*/
        void setIdentificador(int ident); /**@brief setter para o atributo identificador*/
        void setDistPercorrida(int dist); /**@brief setter para o atributo distPercorrida*/
        void setPuloMaximo(int pulo); /**@brief setter para o atributo puloMaximo*/
        void setQuantProvas(int quant); /**@brief setter para o atributo quantProvas*/
        void setVitorias(int vict); /**@brief setter para o atributo vitorias*/
        void setEmpates(int emp); /**@brief setter para o atributo empates*/
        void setTotalPulos(int total); /**@brief setter para o atributo totalPulos*/
        void setQuantPulos(int pulos); /**@brief setter para o atributo quantPulos*/
        void setRanking(int ranking); /**@brief setter para o atributo ranking*/
        string getNome(); /**@brief getter para o atributo nome*/
        int getIdentificador(); /**@brief getter para o atributo identificador*/
        int getDistPercorrida(); /**@brief getter para o atributo distPercorrida*/
        int getPuloMaximo(); /**@brief getter para o atributo puloMaximo*/
        int getQuantProvas(); /**@brief getter para o atributo quantProvas*/
        int getVitorias(); /**@brief getter para o atributo vitorias*/
        int getEmpates(); /**@brief getter para o atributo empates*/
        int getTotalPulos(); /**@brief getter para o atributo totalPulos*/
        int getQuantPulos(); /**@brief getter para o atributo quantPulos*/
        int getRanking(); /**@brief getter para o atributo ranking*/
        void pular(); /**@brief Metodo que promove o pulo randomico dos sapos*/
};

#endif
