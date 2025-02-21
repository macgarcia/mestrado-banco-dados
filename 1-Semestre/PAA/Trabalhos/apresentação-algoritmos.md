# TRABALHO PAA - ALGORITMOS
Nome: Guilherme Silva Cardoso RA: 840122

Nome: Marcos Antonio Carlos Garcia RA: 840121
****

## Link do video: https://youtu.be/NG8a-ey7Y30

![](C:\Users\macga\Desktop\code.png)

Explicação:

Ordenação: Os preços são ordenados em ordem decrescente para garantir que os produtos mais caros venham primeiro.

Seleção do desconto: A cada grupo de três produtos consecutivos, o terceiro (o mais barato do grupo) é escolhido para o desconto.

Soma dos descontos: Os preços selecionados no passo anterior são somados para calcular o valor total do desconto.

Por que é guloso?

Sim, porque faz a melhor escolha local em cada passo (pega o menor dos três para maximizar o desconto), 
esperando que isso leve a um resultado ótimo global.

****

![](C:\Users\macga\Desktop\code01.png)

Divisão e Conquista: Exponenciação

Objetivo: Calcular (base^exp) de forma rápida.
Como funciona:

Se o expoente for 0, o resultado é 1.

Se o expoente for par, divide o expoente por 2 e calcula a potência de forma recursiva, depois eleva ao quadrado.

Se o expoente for ímpar, diminui o expoente em 1, calcula a potência recursivamente e multiplica pela base.

Eficiência: Ao dividir o expoente pela metade a cada passo, a complexidade diminui de O(n) para O(log n), tornando o algoritmo muito mais rápido.

Essa é a essência da divisão e conquista: dividir o problema em subproblemas menores e combiná-los para obter a solução final de forma eficiente.

****