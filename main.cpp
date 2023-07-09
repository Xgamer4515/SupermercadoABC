#include <iostream>
#include "menu.h"
#include "calculation.h"
using std::cin;

int main()
{
    menu();
    char opcao;
    std::cin >> opcao;

    opcao_invalida(opcao);

    limparTela();
    float pedidos[3] {};

    while(opcao != 's')
    {	
        switch(opcao)
        {
            case 'a': pedidos[0] = fazerPedido(0); break;
            case 'b': pedidos[1] = fazerPedido(1); break; 
            case 'c': pedidos[2] = fazerPedido(2); break;
        }

        menu();
        cin >> opcao;
        opcao_invalida(opcao);		
    }
    calculo(pedidos);

    return 0;
}