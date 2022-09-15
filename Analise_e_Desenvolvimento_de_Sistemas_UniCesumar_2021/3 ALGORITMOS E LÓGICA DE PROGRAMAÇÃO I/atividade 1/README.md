# ALGORÍTMOS E LÓGICA DE PROGRAMAÇÃO I - 52/2021 

# Sobre o projeto

Atualmente, o desenvolvimento de software é uma das atividades mais valorizadas no mercado de trabalho, principalmente as voltadas para o ambiente web, mais específico o uso mobile.  Isso se dá pelo crescimento de novas soluções tecnológicas que surgem dia a dia para mudar a maneira como fazíamos determinada tarefa.
Dentro deste contexto de expansão nesta área, você, aluno (a) dos cursos de TI, vislumbra um dia ser um desenvolvedor de sistemas, ou engenheiro, ou arquiteto de softwares, ou gestor de projetos, ou até um CEO, enfim, independente da sua meta, todos passam pelo mesmo caminho inicial, algoritmos.
O Algoritmo, é a descrição de passos ordenados finitos executáveis para solução de um problema, sendo assim, a sua utilização nos proporciona compreender o domínio do contexto do problema a ser resolvido. Desta forma, nesta atividade iremos construir um algoritmo para uma solução tecnológica simples.

Analise a situação problema abaixo:
A empresa TECINFO, é uma empresa situada na cidade de Maringá -PR, e trabalha no ramo de vendas de aplicativos mobile, sistemas web e sistemas desktops há algum tempo. Sua rotina consiste em cada venda concretizada, ser disparado uma certa quantidade de rotinas a serem executadas, como por exemplo: treinamento e instalação do aplicativo.
Uma destas rotinas, "Folha de Pagamento", apresentou um problema de cálculo e está causando um desconforto no setor financeiro da empresa. Como o sistema é antigo, ele não possui uma documentação condizente desta funcionalidade, dificultando a manutenção do mesmo. Desta forma optou-se por construir esta funcionalidade do zero.

O Gerente de Projetos solicitou a você a desenvolver um A LGORITMO EM PSEUDOCÓDIGO que atenda a especificação abaixo:
1 - Todos os vendedores devem receber um salário fixo mensal e uma comissão de 10% sobre o total de vendas efetuadas durante aquele mês. Confira a planilha que auxiliará você no desenvolvimento.
![Modelo Conceitual](https://github.com/JuniorDaliessi/Cursos/blob/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/3%20ALGORITMOS%20E%20L%C3%93GICA%20DE%20PROGRAMA%C3%87%C3%83O%20I/atividade%201/Screenshot_1.png?raw=true)

2 – Apresentar o salário final de cada colaborador

O funcionamento do algoritmo se dará da seguinte forma:
1 - Ao executar o algoritmo, ele deve solicitar:
1.1 - Nome do Colaborador
1.2 - Salário Fixo do Colaborador
1.3 - Venda total de cada semana, ou seja, você deverá lançar um total de vendas por semana, que no nosso caso serão 4 semanas.
1.4 - Logo após a entrada dos dados do colaborador, você deverá apresentar em seguida na tela.
Nome do Colaborador: xxx
Total de Vendas: R$ xxxxxx,xx
Salário do Mês: R$ xxxxxx,xx
 
1.5 – Passar para o próximo colaborador até chegar em 4 colaborares, em todos repetir todos os passos (1.1, 1.2, 1.3, e 1.4).

# Resolução
```
Algoritmo folha de pagamento
Var
 nomeColaborador: vetor[1..30] de caractere
 salarioFixo, salarioFinal: real
 vendasSemana: vetor[1..4] de real
 totalVendas, comissao: real
 nSemanas, c: inteiro
Inicio
 Escreval(“Folha de Pagamento”)
 c <- 0
 Enquanto (c < 4) faça
 Escreval ("Informe o Nome do Colaborador:")
 Leia (nomeColaborador)
 Escreval ("Informe o Salário Fixo de ", nomeColaborador,":")
 Leia (salarioFixo)
 Para nSemanas de 1 até 4 passo 1 faça
 Escreval ("Informe o valor de Venda da Semana ",
nSemanas, ":")
 Leia (vendasSemana[nSemanas])
 Fim_para
 totalVendas <- vendasSemana[1] + vendasSemana[2] + 
vendasSemana[3] + vendasSemana[4]
 comissao <- (totalVendas / 100) * 10
 salariofinal <- salarioFixo + comissao
 
 Escreval("Nome do Colaborador: ", nomeColaborador
 Escreval
 Escreval("Vendas no Mês: R$", totalVendas
 Escreval
 Escreval("Salário Final do Mês R$:", salarioFinal)
 
 c <- c + 1
 Fim_enquanto
Fim

```
![BAIXE O ESTUDO DE CASO DO ALGORÍTIMO](https://github.com/JuniorDaliessi/Cursos/raw/master/Analise_e_Desenvolvimento_de_Sistemas_UniCesumar_2021/3%20ALGORITMOS%20E%20L%C3%93GICA%20DE%20PROGRAMA%C3%87%C3%83O%20I/atividade%201/ATIVIDADE%201.1%20-%20ALGORITMOS%20E%20L%C3%93GICA%20DE%20PROGRAMA%C3%87%C3%83O%20I.pdf)

# Tecnologias utilizadas
Algorítimo em Portugol

# Autor
[https://www.linkedin.com/in/juniordaliessi](https://www.linkedin.com/in/juniordaliessi/)

































