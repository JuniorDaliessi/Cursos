Algoritmo "cadastro_de_produtos"

  tipo produto = registro
  codigo: inteiro
  nome: caractere
  quantidade: inteiro
  valor: real
  fimregistro
  
  funcao selecionaMenu():inteiro
  var
    menu: inteiro
  inicio
    escreval()
    escreval("SELECIONE O MENU DESEJADO")
    escreval()
    escreval("    1 - Cadastrar Produtos")
    escreval("    2 - Listar todos")
    escreval("    3 - Listar 1 produto específico ")
    escreval("    4 - Sair")
    escreval("")
    escreva("    Digite uma opção: ")
    leia(menu)
    escreval("")

    retorne menu
    limpatela
  
  fimfuncao
  
  //Regra 1 - Controlar o cadastro para que não haja códigos idênticos.
  funcao existeCodigo(cod:inteiro):logico
  var
    aux:inteiro
  inicio
  
    retorne falso
    para aux de 1 ate indice passo 1 faca
      se (listaProdutos[aux].codigo = cod)entao
        retorne verdadeiro
      fimse
    fimpara
  fimfuncao
  
  funcao quantDeCadastro():inteiro
    var x: inteiro

    inicio

      escreval("VOCÊ PODE CADASTRAR ATÉ 100 PRODUTOS")
      escreval()
      escreva("QUANTOS PRODUTOS VOCÊ DESEJA CADASTAR ? ")
      leia (x)
      escreval()
      repita
        se (x > 100) entao
          escreval("NEGADO ! O LIMITE E DE 100 PRODUTOS")
          escreval()
          escreva("QUANTOS PRODUTOS VOCÊ DESEJA CADASTAR ? ")
          leia (x)
       fimse
    ate(x <= 100)
    retorne x
   fimfuncao
  
// 2.1 – Cadastrar Produtos
  procedimento cadastrarProduto()
    var
      prod: produto
      aux: inteiro
      achou:logico
    inicio
      escreval("VOCÊ ESCOLHEU CADASTRAR PRODUTOS")
      escreval()
      se (indice < quantCad)entao
      indice <- indice + 1
        repita // 1 - Controlar o cadastro para que não haja códigos idênticos.
          escreva("    Digite o código: ")
          leia(prod.codigo)
          achou <- existeCodigo(prod.codigo)
          se(achou = verdadeiro)entao
          limpatela
          escreval("CÓDIGO EXISTENTE, TENTE OUTRO!")
          escreval("")
          fimse
        ate(achou = falso)
       
       escreva("    Digite o nome: ")
       leia(prod.nome)
       escreva("    Digite o valor: ")
       leia(prod.valor)
       escreva("    Digite a Qauntidade: ")
       leia(prod.quantidade)
       listaProdutos[indice] <- prod
//Regra 2 - Informar ao usuário se produto foi cadastro ou não.
       limpatela
       escreval("PRODUTO ",indice,"/",quantCad," CADASTRADO COM SUCESSO !")

     senao
       escreval("VOCÊ JA CADASTROU ",indice,"/",quantCad, " PRODUTOS! LIMITE ATINGIDO")
     fimse
    fimprocedimento
    
// 2.2 – Listar todos (Aqui liste 3 características armazenadas)
    procedimento listarTodos()
    var
      aux:inteiro
    
    inicio
    escreval("VOCÊ ESCOLHEU LISTAR TODOS")
      escreval()
    se (indice > 0) entao
      para aux de 1 ate indice passo 1 faca
        escreval("    Codigo ",listaProdutos[aux].codigo)
        escreval("    Nome ",listaProdutos[aux].nome)
        escreval("    Valor R$ ",listaProdutos[aux].valor)
        escreval("    Quantidade ",listaProdutos[aux].quantidade)
        escreval("")
      fimpara
    senao
      escreval("NENHUM PRODUTOFOI CADASTRADO AINDA")
    fimse

    fimprocedimento
    
//2.3 - Listar 1 produto específico (Aqui liste 3 características armazenadas)
    procedimento listarProdutoEspecifico()
    var
      aux:inteiro
      cod:inteiro
      achou:logico
    inicio
      escreval("VOCÊ ESCOLHEU PESQUISAR PRODUTOS")
      escreval()

      se (indice > 0) entao
        escreva("    Digite o código do produto: ")
        leia(cod)
        
        achou <- falso
        para aux de 1 ate indice passo 1 faca
          se (listaProdutos[aux].codigo = cod)entao
            escreval("")
            escreval("PRODUTO ENCONTRADO")
            escreval("")
            escreval("    Codigo ",listaProdutos[aux].codigo)
            escreval("    Nome ",listaProdutos[aux].nome)
            escreval("    Valor R$ ",listaProdutos[aux].valor)
            escreval("    Quantidade ",listaProdutos[aux].quantidade)
            escreval("")
            achou <- verdadeiro
          fimse
        fimpara
//Regra 3 - Informar ao usuário que o produto não foi encontrado caso ocorra.
          se (achou = falso)entao
          escreval("")
          escreval("PRODUTO NÃO ENCONTRADO !")
          fimse

     senao
      escreval("NENHUM PRODUTO FOI CADASTRADO AINDA")
     fimse
    
    fimprocedimento

Var
  listaProdutos: vetor[1..100] de produto
  indice: inteiro
  opcao: inteiro
  quantCad: inteiro


Inicio
// 2 – Um menu que apresente os seguintes módulos (procedimentos / funções)
  indice <- 0
  quantCad <- quantDeCadastro()
  cadastrarProduto()
  
  repita
    opcao <- selecionaMenu()

  escolha(opcao)
    caso 1
    //Cadastrar Produtos
    cadastrarProduto()
    caso 2
    //Listar todos
    listarTodos()
    caso 3
    //Listar 1 produto específico
    listarProdutoEspecifico()
    caso 4
    //Sair
    escreval("FIM DO PROGRAMA")
    outrocaso
    escreval("OPÇÃO INVÁLIDA")
  fimescolha
    ate(opcao = 4)

Fimalgoritmo