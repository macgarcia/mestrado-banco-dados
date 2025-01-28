<style>
body {
    font-family: "Times New Roman", Times, serif;
    font-size: 16px;
    text-align: justify;
}
</style>

# ARTIGO

<b>Nome:</b> Marcos Antonio Carlos Garcia - 840121

<b>Orientadora:</b> Profa. Dra. Marilde Terezinha Prado Santos

<b>Mestrado em ciência da computação</b>

## Estudar, adaptar e extender limitações do modelo tradicional, fazendo com que ele acomode e represente dados semiestruturados

### RESUMO

Para a construção de uma boa base de dados para qualquer aplicação necessita de uma abstração do esquema de dados que nos nomeamos de MER(Modelo entidade relacionamento). Um bom modelo de dados pode gerar uma boa base coesa. O MER se baseia nas regras formais para o gerenciamento e distribuição dos dados, seguindo as definições que nomeamos formas normais. Essas formas normais definem a estrutura de como os dados serão comportados no modelo e na base de dados real. No modelo de dados nos temos uma maneira de representar os dados e suas relações para posteriormente implementar a base de dados. A modelagem de dados aborda diversas situações como relações, tipo de dados, cardinalidade, chaves(primaria e/ou estrangenira), generalizações e especializações. Dentro dessas situações iremos atacar no tipo de dados propondo uma maneira de adaptar e extender a representação de tipo de dados semiestruturados como JSON/XML. Esses dados que por sua vez é um conjunto de dados normalmente é separado e acomodado em relações seguindo um contexto que faz sentido para a modelagem. A proposta de estudar, adaptar e extender o modelo para que acomode essa situação, pode trazer uma nova abstração para o entendimento dos dados podendo facilitar a construção da base de dados.

### INTRODUÇÃO

Modelagem de dados é um grande desafio para qualquer pessoa que se propõe a realizar essa tarefa, necessitando de conhecimento geral e especifico do problema a se solucionar, podendo assim fazer a implementação de uma base de dados com proposito especifico. Profissionais deste seguimento que trabalham para gerar bases de dados a fim de solucionar problemas, tarefas ou qualquer tipo de necessidade do cotidiano se deparam com modelagem de dados. Normalmente o inicio de todos que irão trabalhar propondo alguma solução que tem uma base de dados, recorre ao MER. Na modelagem de dados é identificado contextos e assim pode-se separar os dados para que a distribuição fique coesa e granulada de acordo com aspecto de cada dado. Cada dado faz parte de um contexto que integra um séria de outras estruturas para que os dados sejam distribuidos gerando as tabelas e suas relações.