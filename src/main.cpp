/**
*@file main.cpp
*@brief Arquivo que gerencia a corrida de sapos
*@author Patricia Sayonara Goes de Araujo
*@since 01/06/2018
*@date 04/06/2018
*@version 1.0
*/

#include <iostream>
using namespace std;
#include "../include/sapos.hpp"
#include "../include/pistas.hpp"
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

/**
* @brief Funcao principal que gerencia a corrida
* @return 0
*/
int main(){

    vector<Sapos*> sapos; /**<Estrutura vector que vai receber os sapos competidores*/
    vector<Pistas*> pistas; /**<Estrutura vector que vai receber as pistas disponiveis para a corrida*/

    string nomeSapo; /**<Variavel que recebe o nome do sapo*/
    int identificador; /**<Variavel que recebe o numero identificador do sapo*/
    int puloMaximo; /**<Variavel que recebe a distancia maxima do pulo do sapo*/
    int quantProvas; /**<Variavel que recebe a quantidade de provas que o sapo participou*/
    int vitorias; /**<Variavel que recebe o numero de vitorias do sapo*/
    int empates; /**<Variavel que recebe a quantidade de empates do sapo*/
    int totalPulos; /**<Variavel que recebe a quantidade total de pulos dados pelo sapo em provas*/

    /**@brief Estrutura para a leitura do arquivo "sapos.txt" que contem os sapos competidores*/
    ifstream firstFile("sapos.txt");
    /**@brief Verificacao da correta abertura do arquivo "sapos.txt"*/
    if(firstFile.is_open()){
        do{
            Sapos *sp = new Sapos; /**<Definicao de um objeto da classe Sapos*/

            /**@brief Insercao das informacoes do arquivo no objeto sp da classe Sapos*/
            firstFile >> nomeSapo;
            sp->setNome(nomeSapo);
            firstFile >> identificador;
            sp->setIdentificador(identificador);
            firstFile >> puloMaximo;
            sp->setPuloMaximo(puloMaximo);
            firstFile >> quantProvas;
            sp->setQuantProvas(quantProvas);
            firstFile >> vitorias;
            sp->setVitorias(vitorias);
            firstFile >> empates;
            sp->setEmpates(empates);
            firstFile >> totalPulos;
            sp->setTotalPulos(totalPulos);

            sapos.push_back(sp); /**@brief Insercao das informacoes do sapo em questao na estrutura vector sapos*/
        } while(!firstFile.eof()); /**@brief Permite que a leitura ocorra ate o final do arquivo*/
        firstFile.close();
    } else {
        cerr << "Nao foi possivel fazer a leitura do arquivo" << endl;	
	return 0;
    }

    string nomePista; /**<Variavel que recebe o nome da pista de corrida*/
    int identificadorPista; /**<Variavel que receber o numero identificador da pista de corrida*/
    int distancia; /**<Variavel que recebe a distancia da pista de corrida*/

    /**@brief Estrutura para a leitura do arquivo "pistas.txt" que contem as pistas de corrida disponiveis*/
    ifstream secondFile("pistas.txt");
    /**@brief Verificacao da correta abertura do arquivo "pistas.txt"*/
    if(secondFile.is_open()){
        do{
            Pistas *ps = new Pistas; /**<Definicao de um objeto da classe Pistas*/

            /**@brief Insercao das informacoes do arquivo no objeto ps da classe Pistas*/
            secondFile >> nomePista;
            ps->setNome(nomePista);
            secondFile >> identificadorPista;
            ps->setIdentificador(identificadorPista);
            secondFile >> distancia;
            ps->setDistancia(distancia);

            pistas.push_back(ps); /**@brief Insercao das informacoes da pista em questao na estrutura vector pistas*/
        } while(!secondFile.eof()); /**@brief Permite que a leitura ocorra ate o final do arquivo*/
        secondFile.close();
    } else {
        cerr << "Nao foi possivel fazer a leitura do arquivo" << endl;
	return 0;
    }

    int escolha; /**<Variavel que recebe as escolhas do usuario*/
    cout << "Deseja ver as estastisticas dos sapos competidores? Digite 1 para 'Sim' e 2 para 'Nao'." << endl;
    cout << "Digite: ";
    cin >> escolha;

    /**@brief Estrutura para a visualizacao das estatisticas dos sapos competidores*/
    if(escolha == 1){
        cout << "ESTATISTICAS DOS SAPOS: " << endl;
        vector<Sapos*>::iterator item; /**<Definicao de um iterator para os objetos da classe Sapos contidos no vector sapos*/
        for(item = sapos.begin(); item != sapos.end(); ++item){
            cout << "   Sapo " << (*item)->getIdentificador() << ":" << endl;
            cout << "           Nome: " << (*item)->getNome() << endl;
            cout << "           Distancia maxima percorrida por um pulo: " << (*item)->getPuloMaximo() << endl;
            cout << "           Quantidade de provas disputadas: " << (*item)->getQuantProvas() << endl;
            cout << "           Quantidade de vitorias: " << (*item)->getVitorias() << endl;
            cout << "           Quantidade de empates: " << (*item)->getEmpates() << endl;
            cout << "           Quantidade total de pulos dados: " << (*item)->getTotalPulos() << endl;
        }
    } else if(escolha != 2){
        cout << "Escolha invalida!" << endl;
    }

    cout << "Deseja adicionar um novo sapo? Digite 1 para 'Sim' ou 2 para 'Nao'." << endl;
    cout << "Digite: ";
    cin >> escolha;

    /**@brief Estrutura que permite a criacao de novos sapos*/
    if(escolha == 1){
        int numSapos; /**<Variavel que recebe o numero de novos sapos que devem ser criados*/
        cout << "Deseja adicionar quantos sapos? Digite: ";
        cin >> numSapos;

        /**@brief Verificacao de que o numero inserido pelo usuario é positivo e maior do que 0*/
        if(numSapos > 0){
            int aux1 = 0; /**<Variavel que auxilia na contagem de quantos novos sapos foram criados*/
            while(aux1 != numSapos){
                Sapos *sp2 = new Sapos; /**<Definicao de um objeto da classe Sapos*/

                /**@brief Insercao das informacoes do novo sapo*/
                cin.ignore();
                cout << "Digite o nome do novo sapo (utilize apenas uma palavra): ";
                getline(cin, nomeSapo);
                sp2->setNome(nomeSapo);

                identificador = sapos.size() + 1;
                sp2->setIdentificador(identificador);

                cout << "Digite a distancia maxima percorrida por um pulo deste sapo: ";
                cin >> puloMaximo;
                sp2->setPuloMaximo(puloMaximo);

                quantProvas = 0;
                sp2->setQuantProvas(quantProvas);

                vitorias = 0;
                sp2->setVitorias(vitorias);

                empates = 0;
                sp2->setEmpates(empates);

                totalPulos = 0;
                sp2->setTotalPulos(totalPulos);

                sapos.push_back(sp2); /**@brief Insercao das informacoes do novo sapo na estrutura vector sapos*/

                aux1++;
            }
        } else {
            cout << "Escolha invalida!" << endl;
        }
    } else if(escolha != 2){
        cout << "Escolha invalida!" << endl;
    }

    cout << "Deseja ver as estatisticas das pistas? Digite 1 para 'Sim' ou 2 para 'Nao'." << endl;
    cout << "Digite: ";
    cin >> escolha;

    /**@brief Estrutura para a visualizacao das estatisticas das pistas de corrida*/
    if(escolha == 1){
        cout << "ESTATISTICAS DAS PISTAS: " << endl;
        vector<Pistas*>::iterator pist; /**<Definicao de um iterator para os objetos da classe Pistas contidos no vector pistas*/
        for(pist = pistas.begin(); pist != pistas.end(); ++pist){
            cout << "   Pista " << (*pist)->getIdentificador() << ":" << endl;
            cout << "           Nome: " << (*pist)->getNome() << endl;
            cout << "           Distancia: " << (*pist)->getDistancia() << endl;
        }
    } else if(escolha != 2){
        cout << "Escolha invalida!" << endl;
    }

    cout << "Deseja adicionar uma nova pista? Digite 1 para 'Sim' ou 2 para 'Nao'." << endl;
    cout << "Digite: ";
    cin >> escolha;

    /**@brief Estrutura que permite a criacao de novas pistas de corrida*/
    if(escolha == 1){
        int numPistas; /**<Variavel que recebe o numero de novas pistas que devem ser criadas*/
        cout << "Deseja adicionar quantas pistas? Digite: ";
        cin >> numPistas;

        /**@brief Verificacao de que o numero inserido pelo usuario é positivo e maior do que 0*/
        if(numPistas > 0){
            int aux2 = 0; /**<Variavel que auxilia na contagem de quantas novas pistas foram criadas*/
            while(aux2 != numPistas){
                Pistas *ps2 = new Pistas; /**<Definicao de um objeto da classe Pistas*/

                /**@brief Insercao das informacoes da nova pista*/
                cin.ignore();
                cout << "Digite o nome da nova pista: ";
                getline(cin, nomePista);
                ps2->setNome(nomePista);

                identificadorPista = pistas.size() + 1;
                ps2->setIdentificador(identificadorPista);

                cout << "Digite a distancia da nova pista: ";
                cin >> distancia;
                ps2->setDistancia(distancia);

                pistas.push_back(ps2); /**@brief Insercao das informacoes da nova pista na estrutura vector pistas*/

                aux2++;
            }
        } else {
            cout << "Escolha invalida!" << endl;
        }
    } else if(escolha != 2){
        cout << "Escolha invalida!" << endl;
    }

    cout << "A corrida esta prestes a comecar! Selecione uma pista de corrida: " << endl;
    vector<Pistas*>::iterator it2; /**<Definicao de um iterator para os objetos da classe Pistas contidos no vector pistas*/
    /**@brief Apresentacao para o usuario das pistas disponiveis para a corrida*/
    for(it2 = pistas.begin(); it2 != pistas.end(); ++it2){
        cout << "Pista " << (*it2)->getIdentificador() << ": " << (*it2)->getNome() << endl;
    }
    cout << "Digite o numero da pista: ";
    int pista; /**<Variavel que recebe do usuario o numero identificador da pista escolhida para a corrida*/
    cin >> pista;

    /**@brief Estrutura que verifica se o usuario inseriu o identificador da pista corretamente*/
    if(pista > 0 && pista <= (int) pistas.size()){
        string pistaEscolhida; /**<Variavel que recebe o nome da pista escolhida*/
        int distEscolhida; /**<Variavel que recebe a distancia da pista escolhida*/
        for(it2 = pistas.begin(); it2 != pistas.end(); ++it2){
            if(pista == (*it2)->getIdentificador()){
                pistaEscolhida = (*it2)->getNome();
                distEscolhida = (*it2)->getDistancia();
            }
        }

        cout << "A corrida na pista " << pistaEscolhida << " esta prestes a comecar!" << endl;
        cout << "Estes sao os sapos competidores: " << endl;
        vector<Sapos*>::iterator item2; /**<Definicao de um iterator para os objetos da classe Sapos contidos no vector sapos*/
        /**@brief Apresentacao dos sapos competidores para o usuario*/
        for(item2 = sapos.begin(); item2 != sapos.end(); ++item2){
            cout << "       Sapo " << (*item2)->getIdentificador() << ": " << (*item2)->getNome() << endl;
        }

        int start; /**<Variavel que recebe a confirmacao do usuario de que a corrida deve comecar*/
        cout << "Aperte 1 para comecar a corrida!" << endl;
        cin >> start;

        int *ordem = new int[sapos.size()]; /**<Vetor que recebe os identificadores dos sapos conforme eles atingem a linha de chegada*/

        srand(time(NULL));
        /**@brief Verificacao de que a corrida deve comecar*/
        if(start == 1){
            int colocacao = 0; /**<Variavel que determina a colocacao do sapo na corrida */
            int competidores = sapos.size(); /**<Variavel para a verificacao de que todos os sapos terminaram a corrida*/
            int provas; /**<Variavel para a incrementacao no numero de provas feitas por cada sapo*/
            int match = 0; /**<Variavel que verifica se dois ou mais sapos terminaram a corrida na mesma colocacao*/
            int cont = 0; /**<Contador para o vetor ordem*/
            while(competidores != 0){
                for(item2 = sapos.begin(); item2 != sapos.end(); ++item2){
                        /**@brief Estrutura que verifica se o sapo atingiu a distancia da corrida*/
                        if((*item2)->getDistPercorrida() < distEscolhida){
                           (*item2)->pular(); /**@brief Chamada da funcao pular que permite o pulo dos sapos*/
                            if((*item2)->getDistPercorrida() >= distEscolhida){
                                /**@brief Estrutura que verifica se dois ou mais sapos terminaram a corrida na mesma colocacao*/
                                if((*item2)->getQuantPulos() > match){
                                    colocacao++;
                                    match = (*item2)->getQuantPulos();
                                    (*item2)->setRanking(colocacao);
                                    ordem[cont] = (*item2)->getIdentificador();
                                    cont++;
                                } else {
                                    (*item2)->setRanking(colocacao);
                                    ordem[cont] = (*item2)->getIdentificador();
                                    cont++;
                                }
                                competidores--;
                                provas = (*item2)->getQuantProvas();
                                provas++;
                                (*item2)->setQuantProvas(provas);
                            }
                        }
                }
            }
	    
	    
	    int *podium = new int[sapos.size()]; /**<Vetor que recebe a quantidade de sapos em cada posicao do ranking*/
	    for(int i = 0; i < (int) sapos.size(); i++){
		podium[i] = 0;
	    }
	    for(item2 = sapos.begin(); item2 != sapos.end(); ++item2){
		podium[(*item2)->getRanking()-1]++;
	    }

            int pulos; /**<Variavel que incrimenta a quantidade total de pulos de cada sapo*/
            int transicao; /**<Variavel que auxilia na incrementacao na quantidade de vitorias ou empates do sapo que atingiu o primeiro lugar na corrida*/
            cout << "A corrida terminou!" << endl;
            competidores = 1;
            cont = 0;
            cout << "RANKING DA CORRIDA: " << endl;
            while(competidores != (int) sapos.size() +1){
                for(item2 = sapos.begin(); item2 != sapos.end(); ++item2){
                    if((*item2)->getIdentificador() == ordem[cont]){
                            cout << (*item2)->getRanking() << "º lugar: " << (*item2)->getNome() << ", terminou a corrida com " << (*item2)->getQuantPulos() << " pulos." << endl;
                            competidores++;
                            cont++;
                            pulos = (*item2)->getTotalPulos() + (*item2)->getQuantPulos();
                            (*item2)->setTotalPulos(pulos);
                            /**@brief Estrutura que verifica se ocorreram empates na corrida*/
			    if(podium[(*item2)->getRanking()-1] > 1){
				transicao = (*item2)->getEmpates();
				transicao++;
				(*item2)->setEmpates(transicao);
			    } else if((*item2)->getRanking() == 1){ /**@brief Determina a vitoria da corrida*/
				transicao = (*item2)->getVitorias();
                                transicao++;
                                (*item2)->setVitorias(transicao);
			    }
                    }
                }
            }

	    

            delete ordem; /**@brief Liberacao da memoria alocada no vetor ordem*/
	    delete podium; /**@brief Liberacao da memoria alocada no vetor podium*/
        } else {
            cout << "Numero invalido para começar a corrida! Reinicie o programa!" << endl;
        }
    } else {
        cout << "Escolha de pista invalida! Reinicie o programa!" << endl;
    }

    vector<Sapos*>::iterator item3; /**<Definicao de um iterator para os objetos da classe Sapos contidos no vector sapos*/
    /**@brief Estrutura para a escrita dos sapos no arquivo "sapos.txt" com as novas modificacoes pos-corrida*/
    ofstream finishFile1("sapos.txt");
    /**@brief Verificacao da correta abertura do arquivo "sapos.txt"*/
    if(finishFile1.is_open()){
        for(item3 = sapos.begin(); item3 != sapos.end(); ++item3){
            /**@brief Insercao das informacoes dos sapos no arquivo*/
            finishFile1 << '\n' << (*item3)->getNome() << '\n';
            finishFile1 << (*item3)->getIdentificador() << '\n';
            finishFile1 << (*item3)->getPuloMaximo() << '\n';
            finishFile1 << (*item3)->getQuantProvas() << '\n';
            finishFile1 << (*item3)->getVitorias() << '\n';
            finishFile1 << (*item3)->getEmpates() << '\n';
            finishFile1 << (*item3)->getTotalPulos();
        }
        finishFile1.close();
    } else {
        cerr << "Nao foi possivel fazer a escrita do arquivo!" << endl;
        return 0;
    }

    /**@brief Estrutura para a escrita das pistas de corrida no arquivo "pistas.txt" com as novas modificacoes pos-corrida*/
    ofstream finishFile2("pistas.txt");
    /**@brief Verificacao da correta abertura do arquivo "pistas.txt"*/
    if(finishFile2.is_open()){
        for(it2 = pistas.begin(); it2 != pistas.end(); ++it2){
            /**@brief Insercao das informacoes das pistas de corrida no arquivo*/
            finishFile2 << '\n' << (*it2)->getNome() << '\n';
            finishFile2 << (*it2)->getIdentificador() << '\n';
            finishFile2 << (*it2)->getDistancia();
        }
        finishFile2.close();
    } else {
        cerr << "Nao foi possivel fazer a escrita do arquivo!" << endl;
    }


    /**@brief Liberacao da memoria alocada no vector sapos*/
    for(item3 = sapos.begin(); item3 != sapos.end(); ++item3){
            delete *item3;
    }
    sapos.clear();

    /**@brief Liberacao da memoria alocada no vector pistas*/
    for(it2 = pistas.begin(); it2 != pistas.end(); ++it2){
            delete *it2;
    }
    pistas.clear();


    return 0;
}
