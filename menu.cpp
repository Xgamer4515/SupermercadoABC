#include <iostream>
#include "menu.h"
using std::cout;
using std::endl;
using std::endl;
using std::fixed;

void limparTela()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void opcao_invalida(char& opcao)
{
    limparTela();	
    while(opcao != 'a' && opcao != 'b' && opcao != 'c' && opcao != 's')
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(100,'\n');
        }
        cout << "Digite novamente sua opcao: ";
        cin >> opcao;
    }
}

void menu()
{
    cout << "==========================\n";
    cout << "     Supermercado ABC\n";
    cout << "==========================\n";
    const char *produtos[3] = {"Alface", "Beterrabas", "Cenoura"};
    const double precos[3] = {1.25, 0.65, 0.90};
    const char *opcoes[3] = {"a", "b", "c"};
    for(int i = 0; i < 3; ++i)
    {
        cout.precision(2);
        cout << std::fixed;
        cout << opcoes[i] << ") " << produtos[i] << '\t' << "R$ " << precos[i] << "/Kg\n";	
    }
    cout << "s) Sair\n";
    cout << "===========================\n";
    cout << "Sua opcao: ";
}

float fazerPedido(int index)
{
    cout << "Digite a quantidade do pedido: ";
    float pedido;
    cin >> pedido;
    limparTela();
    return pedido;
}