Algoritmo "folha de pagamento"

 Var

    nomeColaborador: caractere
    salarioFixo, salarioFinal: real
    vS:vetor[1..4] de real
    nS, c: inteiro
    
    procedimento somaSalario(a,b,c,d: real)
        var totalVendas, comissao, salarioFinal: real
        inicio
        totalVendas <- a+b+c+d
        comissao <- (totalVendas /100)* 10
        salarioFinal <- salarioFixo+comissao
        escreval("Nome do Colaborador: ", nomeColaborador)
        escreval("Tota de vendas no mês: R$", totalVendas)
        escreval("Salário Final do Mês: R$", salarioFinal)
    fimprocedimento

Inicio

   c <- 0
   enquanto (c < 4) faca
         escreval("Informe o Nome do Colaborador:")
         leia(nomeColaborador)
         escreval ("Informe o Salário Fixo de ", nomeColaborador,":")
         leia(salarioFixo)

         para nS de 1 ate 4 faca
              escreval("Informe o valor de Venda da Semana ",nS, ":")
              leia(vS[nS])
         fimpara
         somaSalario(vS[1],vS[2],vS[3],vS[4])

              c <- c + 1
     fimenquanto

Fimalgoritmo