# Fundamentos e Arquitetura de Computadores
# Sobre a atividade

"Uma cor no modelo de cores RGB pode ser descrita pela indicação da quantidade de vermelho, verde, e azul que contém. Cada uma pode variar entre o mínimo (completamente escuro) e máximo (completamente intenso). Quando todas as cores estão no mínimo, o resultado é preto. Se todas estão no máximo, o resultado é branco. Se todos os valores forem iguais ou muito próximos, a resultante é cinzento; à medida que um dos valores se afastar dos outros dois a cor resultante será um tom progressivamente mais “viva” e menos “pastel”.

Uma das representações mais usuais para as cores é a utilização da escala de 0 a 255, frequentemente encontrada em computação pela conveniência de se guardar cada valor em 1 byte (8 bits). Daí que se usem nesta notação apenas valores discretos, com uma granularidade que, no entanto, é muito inferior à acuidade visual humana — já que 256³ é superior a dezesseis milhões de combinações, cada uma identificando uma cor.

Estes três valores são habitualmente apresentados em números decimais ou em números hexadecimais (e, neste caso, habitualmente identificados como tais por via do prefixo "#"). Sendo esta última base um submúltiplo de 256, a notação com dois algarismos para cada componente resulta numa sequência alfanumérica de comprimento fixo =6, facilmente sequenciável e por isso usual em programas de edição de imagem. Vai assim de 00 (mais escuro, =0) até FF (mais claro, =255)."
RGB. Wikipédia, a enciclopédia livre. Disponível em: https://pt.wikipedia.org/wiki/RGB. Acesso em 09 dez, 2020.

Resumindo, todas as tonalidades diferentes de cores do padrão RGB podem ser representadas em um código com 6 algarismos em hexadecimal, 2 algarismos para vermelho, 2 algarismos para verde e 2 algarismos para o azul. Usando este padrão, dizemos um valor de cada cor a ser usada entre 0 e 255 (ou 00 e FF, em hexadecimal).

No exemplo abaixo, vemos um programa de edição de imagens que mostra os valores para as cores tanto em decimal, quanto o código em hexadecimal, para notarmos a equivalência. No exemplo, o sistema ainda usa mais um código para opacidade/transparência, mas não vamos utilizar isso em nossa atividade.


![Imagem 1](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/atividade%201/cores.png?raw=true) 

Suponha que você está trabalhando a interface de um sistema, onde precisa ajustar a cor #58FAAC, mas o seu sistema de construção de imagens utiliza a representação decimal para vermelho, verde e azul. Para encontrar os valores certos em decimal para preencher no sistema, faça o seguinte:

1. Identifique os valores em hexadecimal para cada cor: vermelho, verde e azul (2 algarismos em hexadecimal para cada).
2. Realize a conversão dos valores em hexadecimal para binário para cada uma das cores primárias, apresentando seus cálculos.
3. Realize a conversão dos valores em binário para decimal para cada uma das cores primárias, apresentando seus cálculos.

# Resolução
### 1. Identifique os valores em hexadecimal para cada cor: vermelho, verde e azul  (2 algarismos em hexadecimal para cada)

Hexadecimal = 0 1 2 3 4 5 6 7 8 9 A B C D E F

##    #58FAAC
     (Vermelho = 58) (Verde = 15 10) (Azul = 10 12)  

### 2. Realize a conversão dos valores em hexadecimal para binário para cada uma das cores primárias, apresentando seus cálculos Vermelho

![Vermelho](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/atividade%201/Vermelho.png?raw=true)

![Verde](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/atividade%201/Verde.png?raw=true)
![Web 1](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/atividade%201/Verde1.1.png?raw=true)

![Web 1](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/atividade%201/Azul.png?raw=true)

### 3. Realize a conversão dos valores em binário para decimal para cada uma das cores primárias, apresentando seus cálculos.

```
Vermelho 58(16) = 1011000(2)
1.2
6 + 0.2
5 + 1.2
4 + 1.2
3 + 0.2
2 + 0.2
1 + 0.2
1
64 + 0 + 16 + 8 + 0 + 0 + 0 = 88
1011000(2) = 88(10)

```

```
Verde 15 10(16) = 11111010(2)
1.2 + 1.2
6 + 1.2
5 + 1.2
4 + 1.2
3 + 0.2
2 + 1.2
1 + 0.2
0
128 + 64 + 32 + 16 + 8 + 0 + 2 + 0 = 250
11111010(2) = 250(10)
```

```
Azul 10 12(16) = 10101100(2)
1.2
7 + 0.2
6 + 1.2
5+ 0.2
4 + 1.2
3 + 1.2
2 + 0.2
1 + 0.2
0
128 + 0 + 32 + 0 + 8 + 4 + 0 + 0 = 172
10101100(2) = 172(10)
```
![img1](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/1%20FUNDAMENTOS%20E%20ARQUITETURA%20DE%20COMPUTADORES/atividade%201/img1.jpg?raw=true)

Junior Daliessi

[https://www.linkedin.com/in/juniordaliessi](https://www.linkedin.com/in/juniordaliessi/)
