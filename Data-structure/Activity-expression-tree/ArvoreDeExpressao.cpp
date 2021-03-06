// Árvore de Expressão.
#include "stdafx.h"
#include <iostream>
#include "ArvoreDeExpressao.hpp"


int main()
{
	setlocale(LC_ALL, "Portuguese");
	std::string expressao = "(3-(9+7)*4)*8+1+1";
	Nodo* arvore = montarArvore(expressao);
	std::cout << "O Resultado da expressao: " << expressao << " é: " << std::endl << executarArvore(arvore) << std::endl;
	std::cin.get();

    return 0;
}