<style>
body {
    font-family: "Times New Roman", Times, serif;
    font-size: 14px;
}
</style>

# Pesquisa bibliográfica - Mapeamento sistemático

<b>Nome:</b> Marcos Antonio Carlos Garcia - 840121

<b>Orientadora:</b> Profa. Dra. Marilde Terezinha Prado Santos

<b>Mestrado em ciência da computação</b>

# 1. Planejamento

## 1.1 Objetivo
Estudar, adaptar e extender limitações do modelo tradicional, fazendo com que ele acomode e
represente dados semiestruturados.

## 1.2 Questões de pesquisa
Questão 01: Quais elementos utilizados para a representação?

Questão 02: Quais ferramentas implementam essas representações?

Questão 03: Quais são os desafios para essa representação?

## 1.3 Estratégias de busca
- Utilizar palavras-chave relacionadas ao tema (em inglês e português).
- Buscar apenas artigos.

## 1.4 Fontes de pesquisa
- IEEE Xplore
- ACM Digital Library
- Scopus
- Web of Science
- CAPES

## 1.5 String de busca
- database AND data model
- sicence computer AND data struct
- (data base AND data model AND data struct) AND NOT big data.

## 1.6 Critérios de seleção

#### Critérios de inclusão
Artigos publicados em conferências ou periódicos com Qualis-CC CAPES.

Publicações entre 1970 e 2025.

Estudos com foco em bancos de dados relacionais.

#### Critérios de exclusão
Artigos que não estão disponíveis em texto completo.

Estudos duplicados.

Publicações fora do escopo, como bancos de dados NoSQL.

# 2. Planejamento

## 2.1 Lista de estudos extraidos

[Artigo 01] - Titulo: <i>A relational approach to database design</i>
- Fonte: ACM Digital Library - Qualis A3
- Link: https://doi-org.ez31.periodicos.capes.gov.br/10.1145/323275.323315

[Artigo 02] - Titulo: <i>Document processing in a relational database system</i>
- Fonte: ACM Digital Library - Qualis A3
- Link: https://doi-org.ez31.periodicos.capes.gov.br/10.1145/357431.35743

[Artigo 03] - Titulo: <i>Extending the Scope of Relational Languages</i>
- Fonte: IEEE Xplore - Qualis A3
- Link: https://ieeexplore-ieee-org.ez31.periodicos.capes.gov.br/document/1695468
- Doi: 10.1109/MS.1986.232429

[Artigo 04] - Titulo: <i>OHQL: A hypertext approach for manipulating object-oriented databases</i>
- Fonte: Science Direct
- Link: https://doi.org/10.1016/0306-4573(92)90027-W

[Artigo 05] - Titulo: <i>Reverse engineering of relational database applications</i>
- Fonte: Springer - Qualis B4
- Link: https://link-springer-com.ez31.periodicos.capes.gov.br/chapter/10.1007/BFb0020523

[Artigo 06] - Titulo: <i>Schema Analysis for Database Restructuring</i>
- Fonte:  ACM Digital Library - Qualis A3
- Link: https://doi-org.ez31.periodicos.capes.gov.br/10.1145/320141.320147

[Artigo 07] - Titulo: <i>Text storage and retrieval in the ORACLE relational database management system: design study and intended applications</i>
- Fonte: Emerald insight
- Link: https://doi-org.ez31.periodicos.capes.gov.br/10.1108/eb046963

## 2.2 Seleção por titulo e resumo

[Artigo 01] - <b>Incluído</b>: A relational approach to database design
- Critério : Base teórica sólida para expandir ou comparar com outros modelos

[Artigo 02] - <b>Incluído</b>: Document Processing in a Relational Database System
 - Critério: Propõe extensões ao modelo relacional para suporte a dados textuais e ordenados, oferecendo base para adaptação a dados semiestruturados

[Artigo 03] - <b>Incluído:</b> Extending the Scope of Relational Languages
 - Critério: Examina extensões ao modelo relacional, incluindo relações aninhadas e paradigmas orientados a objetos, úteis para acomodar dados semiestruturados

[Artigo 04] - <b>Excluído:</b> OHQL: A Hypertext Approach for Manipulating Object-Oriented Databases
 - Critério: Não encontrado nota Qualis.

[Artigo 05] - <b>Incluído:</b> Reverse Engineering of Relational Database Applications
  - Critério de inclusão: Propõe técnicas de engenharia reversa para derivar visões orientadas a objetos de bancos relacionais, útil para adaptação a dados semiestruturados

[Artigo 06] - <b>Incluído:</b> Schema Analysis for Database Restructuring
 - Critério: Apresenta metodologias de análise e reestruturação de esquemas, oferecendo base para adaptar modelos relacionais a dados semiestruturados

[Artigo 07] - <b>Excluído:</b> Text Storage and Retrieval in the ORACLE Relational Database Management System: Design Study and Intended Applications
 - Critério: Não encontrado nota Qualis.

## 2.3 Leitura completa dos textos

[Artigo 01] - <b>Incluído: </b> A relational approach to database design
 - Critério: 

Design de Banco de Dados Relacional: O artigo discute a importância de um design de banco de dados que não apenas cria a estrutura, mas também documenta as restrições que devem ser aplicadas. Isso é fundamental ao lidar com dados semi-estruturados, pois você precisará considerar como essas restrições podem ser adaptadas para acomodar a flexibilidade dos dados semi-estruturados.

Chaves Primárias e Estruturas de Dados: O uso de chaves primárias e estrangeiras é essencial para garantir a integridade dos dados. No contexto de dados semi-estruturados, você pode explorar como essas chaves podem ser representadas e utilizadas para manter relacionamentos entre diferentes tipos de dados, especialmente quando a estrutura não é fixa.

[Artigo 02] - <b>Incluído: </b>Document Processing in a Relational Database System
  - Critério:

Integração de Documentos e Dados Relacionais: O artigo sugere que, ao armazenar documentos como dados comuns em um sistema de gerenciamento de banco de dados, é possível aproveitar serviços como controle de concorrência e recuperação de falhas. Isso implica que a estrutura de dados pode ser estendida para incluir documentos, facilitando a manipulação de dados semiestruturados dentro de um sistema relacional.

Novas Estruturas de Dados: O trabalho propõe a introdução de novas estruturas, como relações ordenadas e operadores de substring, que podem ser úteis para manipular dados textuais e semiestruturados. Essas extensões permitem que um sistema de banco de dados relacional suporte documentos de forma mais eficaz, permitindo a decomposição e composição de campos de texto.

[Artigo 03] - <b>Incluído: </b>Extending the Scope of Relational Languages
  - Critério:

Limitações do Modelo Relacional: O artigo discute como o modelo relacional tradicional pode ser muito restritivo para certos tipos de dados, como dados de design, imagens ou áudio. Isso é importante ao considerar como representar dados semi-estruturados, que muitas vezes não se encaixam bem em tabelas rígidas.

Incorporação de Paradigmas Alternativos: O autor sugere que a extensão do paradigma relacional para incluir características de outras linguagens, como linguagens baseadas em conjuntos, orientadas a objetos e funcionais, pode ajudar a lidar com as fraquezas do modelo relacional. Essa abordagem pode ser útil para acomodar a flexibilidade necessária para dados semi-estruturados.

Representação de Objetos Complexos: A introdução de tipos de dados complexos é discutida como uma maneira de lidar com a ambiguidade e a complexidade dos dados. Isso é relevante para dados semi-estruturados, onde a estrutura pode não ser totalmente definida.

[Artigo 05] - <b> Incluído: </b> Reverse Engineering of Relational Database Applications
 - Critério:

A engenharia reversa é uma técnica que pode ser utilizada para transformar aplicações de banco de dados relacional em especificações orientadas a objetos. Isso é importante para acomodar dados semi-estruturados, pois permite a definição de uma visão mais rica e semântica do banco de dados relacional, incluindo métodos e restrições. Essa abordagem ajuda a identificar a heterogeneidade semântica entre bancos de dados interoperáveis, facilitando a integração e a migração de dados.

[Artigo 06] - <b>Incluído: </b>Schema Analysis for Database Restructuring
  - Critério:

Definição de Esquemas de Banco de Dados: O artigo define um esquema de banco de dados como um conjunto de grupos e relações de grupos, formando um grafo conectado. Essa definição é fundamental para entender como os dados são organizados e como podem ser representados em diferentes modelos.

Classificação de Estruturas de Dados: O autor propõe uma classificação das estruturas lógicas de banco de dados, que pode ser útil para categorizar dados semiestruturados. A distinção entre relações hierárquicas e não hierárquicas é especialmente relevante, pois muitos dados semiestruturados não se encaixam perfeitamente em modelos rígidos.

## 3. Referencias

 - PRATT, Philip J. A relational approach to database design. SIGCSE Bulletin, v. 17, n. 1, p. 184–201, mar. 1985. Disponível em: https://doi-org.ez31.periodicos.capes.gov.br/10.1145/323275.323315. Acesso em: 4 jan. 2025.

 - STONEBRAKER, Michael; STETTNER, Heidi; LYNN, Nadene; KALASH, Joseph; GUTTMAN, Antonin. Document processing in a relational database system. ACM Transactions on Information Systems, v. 1, n. 2, p. 143–158, abr. 1983. Disponível em: https://doi-org.ez31.periodicos.capes.gov.br/10.1145/357431.357433. Acesso em: 4 jan. 2025.

 - KORTH, H. F. Extending the scope of relational languages. IEEE Software, v. 3, n. 1, p. 19–28, jan. 1986. doi: 10.1109/MS.1986.232429. Acesso em: 4 jan. 2025.

 - VERMEER, M. W. W.; APERS, P. M. G. Reverse engineering of relational database applications. In: PAPAZOGLOU, M. P. (Ed.). OOER '95: Object-Oriented and Entity-Relationship Modeling. ER 1995. Lecture Notes in Computer Science, v. 1021. Berlin: Springer, 1995. p. 1–18. Disponível em: https://doi-org.ez31.periodicos.capes.gov.br/10.1007/BFb0020523. Acesso em: 4 jan. 2025.

 - NAVATHE, Shamkant B. Schema analysis for database restructuring. ACM Transactions on Database Systems, v. 5, n. 2, p. 157–184, jun. 1980. Disponível em: https://doi-org.ez31.periodicos.capes.gov.br/10.1145/320141.320147. Acesso em: 4 jan. 2025.