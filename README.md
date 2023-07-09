# SupermercadoABC

SupermercadoABC é um aplicativo de linha de comando simples que simula um sistema de pedidos de supermercado. Ele permite que os usuários façam pedidos de vários produtos e calcule o custo total, descontos e taxas de entrega.

## Recursos

- Menu interativo para selecionar produtos e fazer pedidos.
- Cálculo do custo total do pedido, incluindo descontos para grandes pedidos.
- Cálculo dos portes de envio com base no valor total da encomenda.
- Limpando a tela para uma melhor experiência do usuário.

## Pré requisitos

- Compilador C++ compatível com C++11 ou posterior.
- Biblioteca padrão (iostream) para operações de entrada/saída.
- Sistema operacional: Windows (para `system("cls")`) ou tipo Unix (para `system("clear")`).

## Uso

1. Clone o repositório:
    ```
    git clone https://github.com/Xgamer4515/SupermercadoABC.git
    ```
2. Compile o código-fonte usando um compilador C++:
    ```
    g++ main.cpp menu.cpp calculation.cpp -o SupermercadoABC
    ```
3. Execute o executável:
    ```
    ./SupermercadoABC
    ```
4. Siga as instruções na tela para fazer seus pedidos e ver os resultados dos cálculos.

## Contribuições

Contribuições são bem-vindas! Se você tiver alguma ideia, sugestão ou relatório de bug, abra um problema ou envie um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
