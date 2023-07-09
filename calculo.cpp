#include <iostream>
#include "calculo.h"
using std::cout;
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

void calculo(float pedidos[])
{
    limparTela();

    cout.precision(2);
    cout << fixed;

    const char *produtos[3] = {"Alface", "Beterrabas", "Cenoura"};
    const double precos[3] = {1.25, 0.65, 0.90};

    cout << "Produto\t\t" << "Preco / Kg\t" << "Pedido (Kg)\t" << "Total Parcial\n";
    cout << "=============================================================\n";
    cout << "Alface\t\tR$ " << precos[0] << "/Kg\t" << pedidos[0] << "Kg\t\tR$ " << pedidos[0] * precos[0] << endl;
    cout << "Beterraba\tR$ " << precos[1] << "/Kg\t" << pedidos[1] << "Kg\t\tR$ " << pedidos[1] * precos[1] << endl;
    cout << "Cenoura\t\tR$ " << precos[2] << "/Kg\t" << pedidos[2] << "Kg\t\tR$ " << pedidos[2] * precos[2] << endl;
    cout << "=============================================================\n";

    float descontos = 0;
    float total_pedido = 0;
    float custo_de_entrega = 0;

    total_pedido = pedidos[0] * precos[0] + pedidos[1] * precos[1] + pedidos[2] * precos[2];

    for(int i = 0; i < 3; ++i)
    {
        if(pedidos[i] > 100)
            descontos += pedidos[i] * 0.05;
    }

    if(total_pedido < 5)
        custo_de_entrega = 3.5;
    else if(total_pedido >= 5 && total_pedido < 20)
        custo_de_entrega = 10;
    else if(total_pedido >= 20)
        custo_de_entrega = 8 + total_pedido * 0.1;

    float total_pagar = total_pedido - descontos + custo_de_entrega;

    cout << "Total do pedido:\t\t\t\tR$ " << total_pedido << endl;
    cout << "Descontos:\t\t\t\t\tR$ " << descontos << endl;
    cout << "Custo de entrega:\t\t\t\tR$ " << custo_de_entrega << endl;
    cout << "=============================================================\n";
    cout << "Total a pagar:\t\t\t\t\tR$ " << total_pagar << endl;
}