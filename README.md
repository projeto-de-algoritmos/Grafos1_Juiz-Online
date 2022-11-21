# Grafos1_Juiz-Online

**Número da Lista**: 35<br>
**Conteúdo da Disciplina**: Grafos 1<br>

## Alunos
|Matrícula | Aluno |
| -- | -- |
| 18/0023161  |  Luíz Gustavo Ferreira Rocha |
| 19/0038969  |  Victor Hugo Carvalho Silva |

## Sobre 
&emsp;As questões presentes neste repositório foram retiradas do juiz eletrônico online [beecrowd](https://www.beecrowd.com.br/) com o fim de exercitar os conhecimentos da dupla em relação ao conteúdo de Grafos 1.

## Screenshots
Adicione 3 ou mais screenshots do projeto em funcionamento.
![Questão 2959 em execução](screenshots/2959.png)

## Instalação 
**Linguagem**: C e Python 3.10.<br>

## Uso
### 2959 | Credo com ParaTudo!

&emsp;Harari era um jovem muito inteligente e que gostava muito de comer e beber. Certo dia, saiu com seus amigos, e após uma noitada de muitas risadas e bons drink’s, teve a ideia de comprar um iogurte de gengibre muito bom que estava em moda no momento, chamado ParaTudo. Ao tomar com seus amigos, percebeu que o iogurte realmente parava todo o seu sistema digestivo e todo mundo entrou em pânico precisando ir cada um para sua respectiva casa.

&emsp;Devido aos bons drinks que tomaram, os amigos estavam perdidos na cidade, e tinham medo de não conseguir chegar em suas casas, ainda mais que muitas ruas estavam interditadas devido ao Carnaval que estava por chegar.

&emsp;Dado o número de bairros da cidade e suas conexões (todas essas conexões sendo possíveis de ser atravessadas pelos dois sentidos), responda às várias perguntas de Harari e seus amigos, em que cada pergunta deve responder se, a partir de um bairro A, é possível chegar a um bairro B pelas conexões disponíveis.

#### Entrada

&emsp;A primeira linha da entrada contém três inteiros **N** (0 < **N** ≤ 400), **M** (0 ≤ **M** ≤ (( **N** -1)* **N** ))/2) e **P** (0 ≤ **P** ≤ 105), indicando respectivamente o número de bairros, o número de conexões da cidade de Harari e quantas perguntas foram feitas. As próximas **M** linhas descrevem as conexões, em que cada linha há 2 inteiros, **A** e **B** (0 < **A** , **B** ≤ **N**) indicando que tal conexão conecta esses dois bairros. As próximas **P** linhas descrevem as perguntas feitas, onde, em cada linha, haverá dois inteiros, **K** e **L**, perguntando se é ou não possível ir de **K** a **L** pelas conexões disponíveis.

#### Saída

Para cada pergunta, deve haver uma das seguintes respostas:
&emsp;“Lets que lets”, se é possível chegar de um bairro ao outro;
&emsp;“Deu ruim”, se não é possível chegar de um bairro ao outro.
<br>

##### Execute no terminal
```
python3 ccpt.py 
```
##### Exemplo de Entrada
~~~
8 5 9
7 3
5 1
2 7
5 2
4 2
7 2
8 2
3 2
6 2
4 8
7 6
3 8
2 5
4 3

~~~

##### Exemplo de Saída
~~~
Lets que lets
Deu ruim
Lets que lets
Deu ruim
Deu ruim
Deu ruim
Deu ruim
Lets que lets
Lets que lets
~~~


## Outros 
Quaisquer outras informações sobre seu projeto podem ser descritas abaixo.




