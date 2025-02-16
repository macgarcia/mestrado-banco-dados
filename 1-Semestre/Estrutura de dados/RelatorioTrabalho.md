<style>
body {
    font-size: 16px;
    text-align: justify;
}
</style>

Nome: Marcos Antonio Carlos Garcia

RA: 840121

## TRABALHO DE ESTRUTURA DE DADOS

****

![Estrutura principal](C:\Users\macga\Desktop\code.png)

Começamos com a leitura do arquivo e a construção das estruturas com os dados e a alocação das estruturas em um vetor de mesmo tipo. Logo após isso fazemos a criação da estrutua "Hash" e a alocação dos dados nessa estrutura. Por fim temos uma ação para recuperar as informações sobre o processo.

***


### 1 Criação da estrutura Hash

![Estrutura principal](C:\Users\macga\Desktop\code02.png)
Temos a definição da estrutura e seus comportamentos no arquivo de cabeçalho. A criação se dá no método acima chamado "criar_tabela_hash", alocando espaço em memoria, faz a verificação se houve erro e alimenta os espaços da tabela com nulo. O tamanho é definido pela variavel de pré processamento MAX_LISTA, que esta definida no documento de cabeçalho.

![Estrutura principal](C:\Users\macga\Desktop\code03.png)
Aqui temos a definição de como os identificadores da tabela hash serão gerados para cada elemento a ser inserido na estrutura.

![Estrutura principal](C:\Users\macga\Desktop\code04.png)
Esse comportamento aloca nossos dados em uma lista encadeada dinâmica. Primeiramente fazemos o calculo para criar o hash de identificação da estrutura, buscamos na tabela se há algum dado com o hash gerado. Não havendo fazemos a atribuição dos dados no indice correspondente. Mas se há dados para o mesmo indice, percorremos até o local em que deve ser feita a alocação dos novos dados.

![Estrutura principal](C:\Users\macga\Desktop\code05.png)
Aqui fazemos a leitura dos dados para fazer a aferição de algumas questões.

## Resultados

![Estrutura principal](C:\Users\macga\Desktop\code06.png)
Resultado para uma estrutura com 10 posições na tabela Hash. Teremos 10 listas, a média de elementos de cada lista será 228 com 2277 colisões e sem posições ociosas.
****
![Estrutura principal](C:\Users\macga\Desktop\code07.png)
Resultado para uma estrutura com 100 posições na tabela Hash. Teremos 100 listas, a média de elementos de cada lista será 22 com 2187 colisõese sem posições ociosas.
****
![Estrutura principal](C:\Users\macga\Desktop\code08.png)
Resultado para uma estrutura com 1.000 posições na tabela Hash. Teremos 1.000 listas, a média de elementos de cada lista será 2 com 1390 colisões com 103 posições ociosas.
****
![Estrutura principal](C:\Users\macga\Desktop\code09.png)
Resultado para uma estrutura com 10.000 posições na tabela Hash. Teremos 10.000 listas, a média de elementos de cada lista será 0 com 174 colisões com 7887 posições ociosas.
****
