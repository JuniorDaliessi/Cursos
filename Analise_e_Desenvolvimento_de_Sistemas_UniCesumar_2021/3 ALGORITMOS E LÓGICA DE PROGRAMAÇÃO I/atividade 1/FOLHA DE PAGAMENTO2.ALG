Algoritmo "folha de pagamento"

 Var

    nomeColaborador: caractere
    salarioFixo, salarioFinal: real
    vendasSemana:vetor[1..4] de real
    totalVendas, comicao: real
    nSemanas, c: inteiro


Inicio

      escreval("Folha de Pagamneto")
   c <- 0
   enquanto (c < 4) faca
         escreval("Informe o Nome do Colaborador:")
         leia(nomeColaborador)
         escreval ("Informe o Salário Fixo de ", nomeColaborador,":")
         leia(salarioFixo)

         para nSemanas de 1 ate 4 faca
              escreval("Informe o valor de Venda da Semana ",nSemanas, ":")
              leia(vendasSemana[nSemanas])
              totalVendas <- vendasSemana[1] + vendasSemana[2] + vendasSemana[3] + vendasSemana[4]
              comicao <- (totalVendas / 100) * 10
              salariofinal <- salarioFixo + comicao
         fimpara
         
         escreval
         escreval("***********************************************************")
         escreval
         escreval("* Nome do Colaborador: ", nomeColaborador)
         escreval
         escreval("* Salário Fixo: R$ ", salarioFixo)
         escreval
         escreval("* Total de vendas no Mês: ")
         escreval
         escreval("*** Semana 1:   R$", vendasSemana[1])
         escreval("*** Semana 2:   R$", vendasSemana[2])
         escreval("*** Semana 3:   R$", vendasSemana[3])
         escreval("*** Semana 4:   R$", vendasSemana[4])
         escreval("* TOTAL:        R$", totalVendas)
         escreval("* Comição 10%:  R$ ", comicao)
         escreval
         escreval("* Salário Final do Mês:  R$", salarioFinal)
         escreval
         escreval("***********************************************************")
         escreval
              c <- c + 1
     fimenquanto

Fimalgoritmo