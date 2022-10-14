<div align="center">

## Análise e Aplicação de Linguagens de Programação
####  Centro Federal de Educação Tecnológica de Minas Gerais - CEFET-MG
#### Bárbara Braga Gualberto Correa, barbarabgual@gmail.com
#### Divinópolis, 28 de Setembro de 2022 

</div>

<div align="justify">

__*Abstract. Big data computing applications demand high performance, high portability and high throughput. Choosing the ideal programming language, taking into account all these criteria, is not a trivial task. Thus, we chose two programming languages ​​with different characteristics to solve the same problem and evaluate how both perform in the face of the proposed work, the C and Python languages. We compare the languages ​​with respect to their specifics, problem solving ability, security level, reliability, language and class paradigms.*__

__*Resumo. Grandes aplicações computacionais de dados exigem um alto desempenho, alta portabilidade e alta produtividade. Escolher a linguagem de programação ideal, levando em consideração todos esses critérios, não é uma tarefa trivial. Dessa forma, escolhemos duas linguagens de programação com características distintas para resolver o mesmo problema e avaliar como ambas se saem diante do trabalho proposto, as linguagens C e Python. Comparamos as linguagens em relação a suas especificidades, capacidade de resolução do problema, nível de segurança, confiabilidade, paradigmas de linguagem e classe.*__ 

Palavras-chave: Python, C, nível de segurança, confiabilidade, paradigmas.

## 1. Introdução

Com a eclosão da informática o computador passou a ser útil em todos segmentos da sociedade, possuindo uma infinidade de tarefas e missões. Para que o computador execute tarefas ou operações é necessário que ele seja programado. A forma de pensar em soluções para determinados problemas aumenta consideravelmente tendo em vista o estudo de mais de uma linguagem de programação (LP). 

As primeiras linguagens, influenciadas pela programação em linguagem de máquina, utilizavam-se de uma sequência monolítica de comandos e de desvios condicionais e incondicionais para determinar o fluxo de controle da execução do programa. Neste contexto, surgiu a programação estruturada, baseado na ideia de organizar o fluxo de controle, incentivando a divisão do programa em subprogramas e em blocos aninhados de comandos. Possui como linguagem representante o C.

Com o avanço da informática, os softwares têm se tornado cada vez maiores e mais complexos. O paradigma orientado a objetos (POO), considerado uma evolução do estruturado, sugere a diminuição da distância entre a modelagem computacional e o mundo real, focando as abstrações de dados como elemento básico de programação. Em função do exposto, procura-se, neste trabalho, dentre os diversos tipos de LPs existentes, comparar as linguagens C e Python, focando-se nas propriedades desejáveis para uma linguagem de programação. O objetivo era ler o arquivo proposto, tratar os dados neles contidos, construir n matrizes deslizando por todo o arquivo e calcular a inversa de cada matriz gerada. Por fim, realizar uma análise dos critérios de avaliação na resolução deste problema em específico.


## 2. Fundamentação Teórica

### 2.1 Confiabilidade

#### 2.1.1 Tratamento de exceções

Tratamento de exceções é a habilidade de um programa de interceptar erros em tempo de execução (além de outras condições não usuais detectáveis pelo programa), tomar medidas corretivas e então, continuar melhorando a confiabilidade. Tal facilidade é chamada de tratamento de exceções. As linguagens Ada, C++, Java e C# contêm recursos extensivos para tratamento de exceções, mas tais funções são praticamente inexistentes em algumas linguagens amplamente utilizadas, por exemplo C.

#### 2.1.2 Verificação de tipos

A verificação de tipos é a execução de testes para detectar erros de tipos em um programa, tanto por parte do compilador, quanto durante a execução de um programa. Ela é um fator importante na confiabilidade de uma linguagem. Como a verificação de tipos em tempo de execução é dispendiosa, a verificação em tempo de compilação é mais desejável. Além disso, quanto mais cedo os erros nos programas forem detectados, mais barato será fazer todos os reparos necessários. 

### 2.2 Facilidade de Aprendizado

Tanto a legibilidade quanto a facilidade de escrita influenciam a confiabilidade. Um programa escrito em uma linguagem que não suporta maneiras naturais de expressar os algoritmos exigidos necessariamente usará estratégias artificiais. É menos provável que estratégias artificiais estejam corretas para todas as situações possíveis. Quanto mais fácil é escrever um programa, maior a probabilidade de ele estar correto. A legibilidade afeta a confiabilidade tanto nas fases de escrita quanto nas de manutenção do ciclo de vida. Programas difíceis de ler são também difíceis de escrever e modificar.

### 2.3 Portabilidade

A portabilidade é a característica chave na escolha de uma linguagem de programação para desenvolver um projeto. Um projeto desenvolvido com uma LP que possa ser distribuído em diversas plataformas sem a necessidade de reescrever ou adaptá-lo tem uma enorme vantagem sobre outras que não tem esta característica. 

### 2.4 Legibilidade

Um dos critérios mais importantes para julgar uma linguagem de programação é a facilidade com que os programas podem ser lidos e entendidos. Antes de 1970, o desenvolvimento de software era amplamente pensado em termos da escrita de código. A principal característica positiva das linguagens de programação era a eficiência. As construções das linguagens foram projetadas mais do ponto de vista do computador do que do dos usuários. 

A legibilidade deve ser considerada no contexto do domínio do problema. Por exemplo, se um programa que descreve um cálculo é escrito em uma linguagem que não foi projetada para tal uso, ele pode não ser natural e ser desnecessariamente complexo, tornando complicada sua leitura (quando, em geral, seria algo simples).

#### 2.4.5 Paradigma de Linguagem e Classe

Paradigma de programação é um meio de se classificar as linguagens de programação baseado em suas funcionalidades. As linguagens podem ser classificadas em vários paradigmas.
Um paradigma de programação fornece e determina a visão que o programador possui sobre a estruturação e execução do programa. Por exemplo, em programação orientada a objetos, os programadores podem abstrair um programa como uma coleção de objetos que interagem entre si, enquanto em programação funcional os programadores abstraem o programa como uma sequência de funções executadas de modo empilhado.
Alguns paradigmas estão preocupados principalmente com as implicações para o modelo de execução da linguagem, como permitir efeitos colaterais, ou se a sequência de operações está definida pelo modelo de execução. Outros paradigmas estão preocupados principalmente com o modo que o código está organizado, como o agrupamento de código em unidades junto com o estado que é modificado pelo código. Outros ainda estão preocupados principalmente com o estilo de sintaxe ou gramática.
Metodologia 

### 3.1 Estrutura do arquivo

Na linguagem C, o código apresenta um arquivo makefile (um script que consta as instruções de como gerar um binário), o arquivo de leitura em csv e uma pasta src. A pasta src apresenta cinco arquivos, sendo eles o main.c, responsável pela chamada das principais funções, e os arquivos arquivo.h, arquivo.c, matrix.h e matrix.c. Os dois primeiros arquivos, arquivo.hpp e arquivo.cpp, são responsáveis pela leitura do arquivo csv, transformar os caracteres em número, remover as aspas e preencher os valores em uma matriz.  Os dois últimos, matrix.h e matrix.c, são responsáveis pela impressão da matriz, por todas as funções responsáveis pelo cálculo da inversa e pela criação e abertura de um arquivo txt, onde serão armazenadas as inversas das matrizes calculadas. 

Em Python, o código apresenta apenas um arquivo main.py e o arquivo de leitura em csv. O código main.py é responsável pela leitura, tratamento, criação da matriz e sua inversão, além de armazenar todas as inversas em um arquivo separado.

### 3.2 Bibliotecas utilizadas

Em C, seis bibliotecas diferentes foram utilizadas, dentre elas temos: 
stdio.h, biblioteca padrão de entrada e saída de dados em c;
stdlib.h, biblioteca padrão com funções envolvendo alocação de memória, controle de processos, conversões;
math.h, biblioteca que apresenta funções de matemática básica;
string.h, manipulação de cadeias de caracteres e regiões de memória;
stddef.h, biblioteca para as macros NULL, offsetof e os tipos ptrdiff_t, wchar_t, e size_t;
time.h, manipulação de datas e horários de modo padrão

Em Python, a biblioteca NumPy e a Time foram chamadas. NumPy é denominada dessa forma devido a abreviação de Numerical Python (Python Numérico) e é uma biblioteca de código aberto destinada a realizar operações em arrays multidimensionais. É executada próximo ao hardware, ou seja, apresenta eficiência, e foi desenvolvida para computação científica. Já a biblioteca time retorna o tempo atual em segundos passados desde 1/1/1970. Apesar de ser um número de ponto flutuante, a precisão desse número não é muito grande, além de a própria chamada da função time() já trazer consigo um overhead.

### 3.3 Estrutura do algoritmo

#### 3.3.1 C
    
O código é dividido em dois pedaços, o primeiro onde o arquivo csv é lido e seus valores são tratadas e armazenados em uma matriz, e o segundo, onde a matriz inversa é calculada e seu resultado é armazenado em um arquivo texto. 

Na main, a função para abrir o arquivo é chamada, nela, os valores do arquivo são lidos, delimitados por vírgula, e passam por um tratamento para a retirada das aspas duplas. O valor então é transformado em um número flutuante e a medida que eles são lidos, são enviados para uma função que preenche a matriz. A cada matriz completa, a função para calcular a inversa é chamada, que consta no arquivo matrix.c. Esta leitura é feita de 12 em 12 vezes até o término do arquivo.

Após a chamada da função de cálculo da inversa, o método utilizado para tal foi o de Gauss-Jordan. O método Gauss-Jordan é uma variante da eliminação gaussiana na qual a operação de redução de linha é realizada para encontrar o inverso de uma matriz.

Dessa forma, para encontrar o inverso da matriz, as seguintes etapas foram seguidas pelo programa:

A função aumenta matriz é utilizada para formar a matriz aumentada pela matriz identidade;
A função ordena a matriz é chamada para facilitar os cálculos da inversa.
A função escalona é chamada para escalonar a matriz, e é responsável por:
Multiplicar cada elemento da linha por um número flutuante diferente de zero.
Substituir uma linha pela soma dela mesma e um múltiplo constante de outra linha da matriz.
Por fim, a matriz inversa é calculada e seus resultados são armazenados em um arquivo de texto criado pelo próprio código. O tempo de execução do programa é mostrado na tela.

#### 3.3.2. Python

Em Python, a primeira etapa consistiu no tratamento da base de dados: as linhas não importantes foram retiradas e o valor foi lido. O arquivo foi separado em vários pequenos arquivos de matrizes 12 por 12, com os valores separados por vírgula. Em seguida, lê-se esses arquivos e a cada leitura, a função de inversão da biblioteca numpy é chamada. A função tem como argumentos a matriz, sua altura e sua largura, e a inversa da matriz é calculada e armazenada em uma matriz resultado. As matrizes inversas são armazenadas cada uma em um arquivo diferente, para facilitar a visualização posteriormente. Para tratamento, caso a determinante da matriz seja zero, sua inversão não é calculada.  Por fim, o tempo de execução do programa é mostrado na tela.

## 4. Resultados e Discussão

### 4.1 Confiabilidade

#### 4.1.1 Tratamento de exceções 

Python tem suporte nativo ao tratamento de exceções, incluindo a definição de novos tipos de exceção. As exceções definidas pelo usuário utilizam o conceito de herança da orientação a objetos. Exception é a classe base na qual todas as outras exceções são derivadas e como existe a unificação entre classes e tipos, e subclasses são subtipos. Ao tratar uma exceção de um determinada classe todas as subclasses dessa exceção também serão tratadas. 

No código em python, as exceções try e exception foram utilizados em uma função criada para testar se o arquivo existe, caso contrário o programa é encerrado.

```c
def ChecaArquivo():
   try:
       open("matrix.csv", 'r')
       return True
   except IOError:
       print("Error: Arquivo não existe.")
       return False
```

Diferentemente da linguagem Python, a linguagem C não apresenta recursos específicos para tratamento de exceções, como os blocos try-catch e funções/métodos que disparam exceções. Os programadores geralmente utilizam o valor de retorno da função para indicar algum erro, como ocorre nas funções de alocação dinâmica, por exemplo. Essa abordagem é adequada à proposta da linguagem de ser uma linguagem de médio nível eficiente, porém nem sempre é adequada ao desenvolvimento do software. Em uma função onde todo valor de retorno é válido, essa abordagem mostra-se ineficaz, e a elegância do código seria ameaçada para resolver tal problema. 

No código em C, apenas o tratamento de abertura de arquivos é feito, mas utilizando o comando if básico de praticamente toda linguagem de programação.

   if (arq == NULL)
   {
       printf("Problemas na abertura do arquivo.\n");
       return;
   }


#### 4.1.2 Verificação de Tipos
    
A checagem de tipos do C é estática. Cada entidade no programa possui um tipo e precisa ser usado em concordância com o tipo ao qual pertence. Para tipos definidos pelo usuário, o usuário, no caso o programador, tem flexibilidade para definir quais operações e conversões são aceitáveis. Consequentemente, o compilador pode detectar inconsistências em tipos primitivos do C e em tipos definidos pelo usuário. 
    
Já Python é uma linguagem dinamicamente tipada e ao mesmo tempo fortemente tipada, também possui a inferência dos tipos. Porém, o sistema de verificação de tipos não realiza a conversão implícita de um tipo de dados para outro, levantando uma exceção quando tipos inconsistentes são utilizados. Python realiza uma nova vinculação de nome e espaço a cada atribuição de valor a uma variável, inferindo o tipo de dados do valor recebido. Além disso, ela não possui definição de tipos nos parâmetros de funções ou métodos, deixando a cargo do programador o tratamento dos tipos recebidos e retornados.     

### 4.2 Facilidade de Aprendizado

Python apresenta sintaxe clara, limpa e sólida que a transforma em uma linguagem de fácil aprendizado. Além de ser uma linguagem de altíssimo nível, ainda possui licença compatível com a licença GPL da Free Software Foundation, isso faz dela uma linguagem independente de fornecedores exclusivos.

A linguagem C é mais fácil que o C++, apresenta poucos conceitos e bastante ortogonalidade,  a  exigência  de  uso de ponteiros aumenta  a dificuldade de aprendizado.

### 4.3 Portabilidade

Python é portável, ou seja, desenvolve-se um programa uma única vez e o compila para que seja executado em qualquer plataforma como, por exemplo, Windows ou Linux. Para executar um programa em Python, basta ter o interpretador Python. A portabilidade é vantajosa pois reduz muitas horas de trabalho.

Assim como Python, C pode ser compilada em diferentes arquiteturas, seja de hardware ou de software. É possível usar C no Mac ou PC, com Linux ou Windows. Isso pode parecer algo simples, mas na verdade nem todas as linguagens funcionam assim. 

### 4.4 Legibilidade

A filosofia de design do Python é baseada em uma sintaxe não-tradicional e minimalista, girando em torno da legibilidade. Isso é feito usando-se espaço em branco para delinear escopos em vez das mais tradicionais chaves e ponto-e-vírgula. Pode-se notar essa diferença ao visualizar o código implementado, Python utiliza apenas um arquivo com poucas linhas. Apesar de importar uma biblioteca diferente, que faz parte de praticamente todo o programa, um programador iniciante consegue facilmente entender o que ocorre no algoritmo.

```python
if (ChecaArquivo()):
   arq = open("matrix.csv", 'r')
   cont = primeiro = 0
   arquivo = 1
   t = ""
 
   for x in arq:
       if(primeiro == 0):
           primeiro += 1
           continue
 
       t = Tratamento(x, t)
       cont += 1
 
       if cont == 12:
           cont = 0
           Armazena(primeiro, t)
           primeiro += 1
           t = ""
 
   #print(primeiro)
   primeiro = primeiro-1
 
   for i in range(1, primeiro):
       #print(i)
       matrix = np.genfromtxt("arquivos/"+str(i)+'.csv', delimiter=',')
       if np.linalg.det(matrix) != 0:
           np.savetxt("inversas/"+str(i)+'.csv',
                      np.linalg.inv(matrix), delimiter=",")
           #print(np.linalg.inv(matrix))
       else:
           np.savetxt("inversas/"+str(i)+'.csv',
                      "Inversa não pode ser calculada pois determinante é igual a zero")
```

Já C, uma linguagem fortemente tipada e que necessita normalmente do dobro ou mais de linhas em Python para escrever o mesmo código, não é tão simples. Ela possui identificadores livres, palavras reservadas mnemônicas e estruturas de controle básicas, uma boa estruturação do código com os separadores e isolamento de expressões.

Por outro lado, é uma linguagem de amplas possibilidades, não limitando o programador, logo há diversas formas de se implementar uma solução mesmo que ela seja a errada, obrigando o programador a saber exatamente o que está fazendo, caso contrário, encontrará vários problemas. O próprio criador da linguagem alerta os programadores quanto a isto. O fato de também possuir muitos componentes básicos faz com que seja difícil a sua leitura, pois há diversas estruturas e tokens diferentes. Isso pode aumentar o leque de opções, porém pode fazer com que o programador se perca. 

No código feito em C, é possível que ocorra uma confusão na legibilidade do programa, principalmente na sobrecarga de operadores como o “*”, que foi bastante utilizado para o armazenamento da matriz e pode ser tanto utilizado para multiplicação quanto para ponteiros.

```c
Data **matrix = malloc(MAXTAM * sizeof(Data *)); // cria linha
 
   for (int i = 0; i < MAXTAM; i++)
       matrix[i] = (Data *)malloc(2 * MAXTAM * sizeof(Data)); // cria coluna
```

### 4.5 Paradigma da Linguagem e Classe

A linguagem de programação C segue o paradigma de Programação Imperativa. Este paradigma é o mais antigo de todos os paradigmas de programação. Ele se baseia no modo de funcionamento do computador, ou seja, é influenciado pela arquitetura do computador. Isto é refletido na execução sequencial baseada em comandos e no armazenamento de dados alterável, conceitos que são baseados na maneira pela qual computadores executam os programas a nível de linguagem de máquina. O termo “imperare” em Latim significa “comandar”. O paradigma imperativo foi predominante nas linguagem de programação, pois tais linguagens são mais fáceis de traduzir para uma forma adequada para execução na máquina. 

Linguagens imperativas são caracterizadas por três conceitos: variáveis, atribuições e sequência.  As variáveis mantém o estado de um programa imperativo e são  associadas com localizações de memória que correspondem a um endereço e um valor de armazenamento. O valor da variável pode ser acessado e alterado direta ou indiretamente, através de um comando de atribuição ou de um comando de leitura. O comando de atribuição introduz uma dependência de ordem no programa: o valor de uma variável é diferente antes e depois de um comando de atribuição. O resultado do processamento de um programa depende da ordem na qual os comandos são escritos e executados, ou seja, da sequência na qual os comandos estão escritos. 

Python é uma linguagem multiparadigma, ou seja, é uma linguagem de programação de alto nível, interpretada, imperativa, orientada a objetos e de tipagem dinâmica (não exigem declarações de tipos de dados, pois são capazes de escolher que tipo utilizar dinamicamente para cada variável, podendo alterá-lo durante a compilação ou a execução do programa) e forte (exigem que o tipo de dado de um valor seja do mesmo tipo da variável ao qual este valor será atribuído).


## 5. Conclusão

Python é uma linguagem orientada a objetos, interpretada e compilada em tempo de execução, possui suporte a tratamento de exceções e de erros, tipagem dinâmica e ampla documentação. Isso transforma Python numa linguagem apropriada para desenvolvimento rápido de aplicações e, ao mesmo tempo, permite que o código seja mantido facilmente. Logo, Python foi uma ótima escolha de linguagem para resolução do problema proposto, seu tempo de execução para determinante e matriz inversa foi ínfimo e com apenas poucas linhas, facilidade de escrita e legibilidade, pode ser implementada facilmente por qualquer programador.

A linguagem C, por outro lado, não foi das melhores escolhas, ela apresenta pouca legibilidade, é de difícil aprendizado e não é voltada para realizar cálculos matemáticos complexos. O cálculo da inversa não foi custoso para o programa porém o cálculo da determinante foi descartado devido ao longo tempo de processamento, visto que é uma função recursiva. Apresentava poucas bibliotecas voltadas para a resolução do problema de matrizes e as que existiam, eram pagas. Logo, não é uma linguagem projetada para tal funcionalidade, visto que sua implementação foi desnecessariamente complexa e complicada, quando, como pudemos ver em Python, pode ser algo extremamente simples de ser feito.

## 6. Referências

BAJUELOS, Antonio L. Tipologia das linguagens de programação. Aveiros,2002.Disponível em: <http://www.ncc.up.pt/~michel/PPBD/> acesso em: 15 maio 2005.

BOOTLE, Stan K. Dominando o turbo C. 2.ed. Rio de Janeiro: Ciência Moderna, 1989.
DEITEL, H.M. Como programar em C. Rio de janeiro: LTC Editora, 1999.

HELOÍSA, Maria. Paradigmas de linguagens de programação.bDisponível em:b< http://www.dc.ufscar.br/~heloisa/LP_intro.pdf > acesso em: 10 maio 2005.

HUBBARD, John R. Teoria e problemas de programação em C ++. 2. ed. Porto Alegre: Bookman, 2003.

NEWMAN, Alexander. Usando Java. Rio de Janeiro: Campus, 1997.UFSM. Diferentes Paradigmas de Programação. Santa Maria, 2000. Disponível em: <http://www-usr.inf.ufsm.br/~eljunior/elc117/t1/#toc1> acesso em: 15 maio 2005.

VAREJÃO, Flávio Miguel. Linguagem de programação:conceitos e técnicas. Rio de Janeiro: Elsevier,2004



</div>
