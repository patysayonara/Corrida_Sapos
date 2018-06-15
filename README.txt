Instituição: Universidade Federal do Rio Grande do Norte (UFRN)
Disciplina: Linguagem de Programação I
Aluno(a): Patrícia Sayonara Góes de Araújo
	
	Os arquivos contidos nesta pasta são referentes à prática III da disciplina Linguagem de Programação I do curso Tecnologia da Informação. Compondo este programa, o qual simula uma corrida de sapos, há os seguintes arquivos:
		- main.cpp, o qual é o gerenciador da corrida;
		- sapos.cpp, o qual contém o desenvolvimento dos métodos da classe Sapos;
		- pistas.cpp, o qual contém o desenvolvimento dos métodos da classe Pistas;
	Esses arquivos estão disponíveis na pasta src. Também, tem-se os seguintes arquivos .hpp, os quais estão na pasta include:
		- sapos.hpp, o qual contém os atributos e métodos da classe Sapos;
		- pistas.hpp, o qual contém os atributos e métodos da classe Pistas;
	O programa vem acompanhado dos seguintes arquivos testes, disponíveis na pasta principal:
		- sapos.txt
		- pistas.txt
	Obs: os arquivos testes não devem ser alterados manualmente, apenas através do programa.
	Quanto aos itens avaliados no trabalho, seguem as seguintes distribuições:
		- Passo 1: A estrutura para leitura do arquivo contendo os sapos encontra-se no main.cpp, a partir da linha 38 até a linha 66;
		- Passo 2: A estrutura para leitura do arquivo contendo as pistas encontra-se no main.cpp, a partir da linha 73 até a linha 93;
		- Passo 3: Encontra-se no main.cpp: 
			- Item (a): da linha 101 até a linha 115;
			- Item (b): da linha 174 até a linha 184;
			- Item (c): da linha 226 até a linha 343;
			- Item (d): da linha 122 até a linha 167;
			- Item (e): da linha 191 até a linha 124.
		- Passo 4: Encontra-se no main.cpp:
			- Item (a): da linha 226 até a linha 245;
			- Item (b): da linha 248 até a linha 253;
			- Item (c): da linha 256 até a linha 257;
		- Passo 5: 
			- Item (a): A chamada da função pular está na linha 273, na main.cpp, e a estrutura da função pular encontra-se no sapos.cpp, da linha 193 até a linha 207;
			- Item (b): Encontra-se no main.cpp, a verificação da parada está na linha 274;
			- Item (c): Encontra-se no main.cpp, da linha 310 até a linha 332;
		- Passo 6: Encontra-se no main.cpp, da linha 345 até a linha 379.
		- A documentação do programa gerada pela ferramenta Doxygen, em forma de páginas WEB (HTML), está na pasta doc.

	Para a execução do programa, está disponível na pasta principal o makefile. 
	Vale ressaltar que os arquivos objetos estão na pasta build, enquanto que o executável do programa encontra-se na pasta bin. 
	Para a compilação do programa, tem-se o seguinte comando: $ make. Enquanto que a inserção do executável, para a execução do programa, deve ser acionado com o seguinte comando: ./bin/corridaSapos 
	
	Os arquivos do programa estão disponíveis no seguinte link do GitHub: https://github.com/patysayonara/Corrida_Sapos