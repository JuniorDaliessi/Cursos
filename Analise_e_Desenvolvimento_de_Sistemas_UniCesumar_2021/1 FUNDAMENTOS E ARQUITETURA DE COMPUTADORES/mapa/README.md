# Fundamentos e Arquitetura de Computadores
# Sobre a atividade

Invariavelmente, todos os dias você utiliza muitos conceitos de lógica. Para isso, você não precisou estudar uma lógica formal ou se graduar em matemática para esse fim. Você sabe que se girar um botão do fogão e apertar um outro, o fogo deve se acender, isso é o esperado. Se não acender, ocorreu algum erro, você sabe que esse não é o comportamento lógico.

Então você vai fazer algo muito importante no seu dia: esquentar a água para fazer um café. Para isso, o girar de um botão e o apertar de outro são duas informações que podemos considerar como "entradas" do seu sistema (fogão). Você sabe que se ambas as entradas forem acionadas ao mesmo tempo, a "saída" deve ser o fogo na chama do fogão relacionada ao botão. Se uma das "premissas" ou "proposições" de entrada forem falsas, não acenderá o fogo.
Proposição é uma sentença declarativa, afirmativa e que deve exprimir um pensamento de sentido completo, podendo ser escrita na forma simbólica ou na linguagem usual. (…) Dizemos que o valor lógico de uma proposição é a verdade (1) se a proposição é verdadeira; é a falsidade (0) se a proposição é falsa." (DAGHLIAN, 2012, p.26, grifos do autor)
* Este livro está disponível na Biblioteca Digital.

Como nem tudo na vida é simples, a maioria das tarefas que efetuamos envolve mais de uma proposição de entrada. Quando alguém precisa tomar uma decisão importante, você já deve ter ouvido a frase: "São muitas variáveis a serem consideradas".

Neste MAPA, vamos considerar que você tem que montar um circuito que responda a alguma situação real com 4 proposições de entrada diferentes. Quais serão essas proposições? Isso não importa para nós agora, por isso as chamaremos de A, B, C e D.

Também nos aproveitaremos um pouco da aleatoriedade, portanto vamos criar uma tabela-verdade para essas 4 proposições de entrada e teremos uma coluna que indica a saída (como 0 ou 1). Para completar as entradas seguiremos o procedimento padrão de criação de tabela-verdade, para a saída usaremos o seu RA, ou melhor, parte de seu RA.

Como proceder:

1. Pegue os quatro últimos números do seu RA, ignore o dígito.

Exemplo: RA 12345678-0, pegue 5678.

2. Converta esse número para binário (com 16 bits/dígitos). Suas contas devem aparecer na resolução.

Exemplo: 0001 0110 0010 1110.

3. Monte uma tabela-verdade para 4 entradas (A, B, C e D). Sua tabela terá, obrigatoriamente, 16 linhas de combinações de entradas.

4. Pegue o número binário de 16 bits que você obteve no passo 2 e preencha a coluna de saída (S) com esses dígitos, em ordem.

5. A partir da sua tabela-verdade, desenhe a expressão lógica equivalente à tabela (não é necessário simplificar a expressão).

6. Desenhe o circuito equivalente à expressão obtida.

Sua entrega deve conter os 6 passos acima.

DICAS

Para tornar mais interessante, como um exercício mental, você pode inventar 4 proposições para as entradas e uma para a saída para ver como isso funcionaria no mundo real. Por ser uma tabela-verdade aleatória, pode até gerar resultados engraçados ou curiosos.

Por exemplo:

Saída: "Eu vou ao cinema."

Proposições:

A: Está chovendo.

B: Tem filme bom em cartaz.

C: Hoje é sábado.

D: Tenho carona.

Observer a linha abaixo (hipotética) da tabela-verdade:

|    A  |   B   |  C    |   D   |    S  |
| ---- | ---- | ---- | ---- | ---- |
|    0  |    1  |    1  |     0 |   1   |



Essa linha, de acordo com as premissas acima, significaria:

"Se não está chovendo, se tem filme bom em cartaz, se hoje é sábado e não tenho carona, então vou ao cinema."

Um ótimo trabalho a todos.

DAGHLIAN, Jacob. Lógica e álgebra de Boole. 4. ed. São Paulo: Atlas, 1995. 167 p., ISBN 85-224-1256-1

# Resolução
### 1. Pegue os quatro últimos números do seu RA, ignore o dígito.

## RA 2 1 0 2 (2 9 7 7) – 5

### 2. Converta esse número para binário (com 16 bits/dígitos). Suas contas devem aparecer na resolução

|   RA/2   |   =   |    RESTO  |
| ---- | ---- | ---- |
|     2977/2 |1448  |    1  |
|    1448/2  | 744  |    0  |
|    744/2  |  372  |    0  |
|     372/2 |  186   |    0  |
|   186/2   |   93   |     0 |
|   193/2   |   46  |     1 |
|    46/2  |   23   |   0   |
|   23/2   |   11   |   1   |
|   11/2   |   5   |   1   |
|   5/2   |   2   |   1   |
|   2/2   |   1   |   0   |
|   1/2   |   0   |   1   |

## 2977(10) = 0000 1011 1010 0001(2)

### 3. Monte uma tabela-verdade para 4 entradas (A, B, C e D). Sua tabela terá, obrigatoriamente, 16 linhas de combinações de entradas

![tab1](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/mapa/tbl1.png?raw=true)

### 4. Pegue o número binário de 16 bits que você obteve no passo 2 e preencha a coluna de saída (S) com esses dígitos, em ordem.

![tab2](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/mapa/tbl2.png?raw=true)

### 5. A partir da sua tabela-verdade, desenhe a expressão lógica equivalente à tabela (não é necessário simplificar a expressão)
 
 Para obtermos uma expressão booleana a partir da tabela verdade:
  
  1° Precisamos definir quantas entradas tem o circuito, no caso 
  acima são quatro. 
  
  2° Precisamos definir o número de combinações possíveis, no caso 
  acima é 42 ,então vamos ter 16 possibilidades que vai de (0 a 15) 
  
  3° Montar a expressão se baseando apenas nas saídas que são 
  iguais a 1.
  
  OBS: As saídas iguais a 0 são formadas automaticamente pela lógica do circuito
  
  ![tab2](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/mapa/tbl3.png?raw=true)
  
  ### S=(~A.B.~C.~D)+(~A.B.C.~D)+(~A.B.C.D)+(A.~B.~C.~D)+(A.~B.C.~D)+(A.B.C.D)

### 6. Desenhe o circuito equivalente à expressão obtida.

![tab2](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/mapa/circt.png?raw=true)
  

Junior Daliessi

[https://www.linkedin.com/in/juniordaliessi](https://www.linkedin.com/in/juniordaliessi/)





