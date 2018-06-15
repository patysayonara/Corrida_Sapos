Institui��o: Universidade Federal do Rio Grande do Norte (UFRN)
Disciplina: Linguagem de Programa��o I
Aluno(a): Patr�cia Sayonara G�es de Ara�jo
	
	Os arquivos contidos nesta pasta s�o referentes � pr�tica III da disciplina Linguagem de Programa��o I do curso Tecnologia da Informa��o. Compondo este programa, o qual simula uma corrida de sapos, h� os seguintes arquivos:
		- main.cpp, o qual � o gerenciador da corrida;
		- sapos.cpp, o qual cont�m o desenvolvimento dos m�todos da classe Sapos;
		- pistas.cpp, o qual cont�m o desenvolvimento dos m�todos da classe Pistas;
	Esses arquivos est�o dispon�veis na pasta src. Tamb�m, tem-se os seguintes arquivos .hpp, os quais est�o na pasta include:
		- sapos.hpp, o qual cont�m os atributos e m�todos da classe Sapos;
		- pistas.hpp, o qual cont�m os atributos e m�todos da classe Pistas;
	O programa vem acompanhado dos seguintes arquivos testes, dispon�veis na pasta principal:
		- sapos.txt
		- pistas.txt
	Obs: os arquivos testes n�o devem ser alterados manualmente, apenas atrav�s do programa.
	Quanto aos itens avaliados no trabalho, seguem as seguintes distribui��es:
		- Passo 1: A estrutura para leitura do arquivo contendo os sapos encontra-se no main.cpp, a partir da linha 38 at� a linha 66;
		- Passo 2: A estrutura para leitura do arquivo contendo as pistas encontra-se no main.cpp, a partir da linha 73 at� a linha 93;
		- Passo 3: Encontra-se no main.cpp: 
			- Item (a): da linha 101 at� a linha 115;
			- Item (b): da linha 174 at� a linha 184;
			- Item (c): da linha 226 at� a linha 343;
			- Item (d): da linha 122 at� a linha 167;
			- Item (e): da linha 191 at� a linha 124.
		- Passo 4: Encontra-se no main.cpp:
			- Item (a): da linha 226 at� a linha 245;
			- Item (b): da linha 248 at� a linha 253;
			- Item (c): da linha 256 at� a linha 257;
		- Passo 5: 
			- Item (a): A chamada da fun��o pular est� na linha 273, na main.cpp, e a estrutura da fun��o pular encontra-se no sapos.cpp, da linha 193 at� a linha 207;
			- Item (b): Encontra-se no main.cpp, a verifica��o da parada est� na linha 274;
			- Item (c): Encontra-se no main.cpp, da linha 310 at� a linha 332;
		- Passo 6: Encontra-se no main.cpp, da linha 345 at� a linha 379.
		- A documenta��o do programa gerada pela ferramenta Doxygen, em forma de p�ginas WEB (HTML), est� na pasta doc.

	Para a execu��o do programa, est� dispon�vel na pasta principal o makefile. 
	Vale ressaltar que os arquivos objetos est�o na pasta build, enquanto que o execut�vel do programa encontra-se na pasta bin. 
	Para a compila��o do programa, tem-se o seguinte comando: $ make. Enquanto que a inser��o do execut�vel, para a execu��o do programa, deve ser acionado com o seguinte comando: ./bin/corridaSapos 
	
	Os arquivos do programa est�o dispon�veis no seguinte link do GitHub: https://github.com/patysayonara/Corrida_Sapos