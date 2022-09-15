# ALGORÍTMOS E LÓGICA DE PROGRAMAÇÃO I - 52/2021 

# Sobre o projeto

Olá, Caro aluno!
Nossa atividade Mapa envolverá a construção de um algoritmo em pseudocódigo, mas antes, vamos a analisar o artigo abaixo:
 
O QUE É ALGORITMO E COMO ELE VAI AJUDAR SUA EMPRESA A VENDER ONLINE

Você sabe o que é algoritmo e reconhece a sua importância para gerar novas vendas online? O artigo de hoje demonstra a relevância de compreender os algoritmos dos mecanismos de busca para o sucesso dos negócios que estão inseridos no meio digital.
Para conferir todas as informações sobre o assunto, siga a leitura!
 
Entenda o que é algoritmo e o que ele tem a ver com vendas online
 
Fazer um site ou um e-commerce é um dos primeiros passos que uma empresa deve tomar para ser reconhecida no meio digital e gerar vendas. No entanto, criar uma plataforma digital para a sua marca não é o bastante. É preciso investir em diferentes técnicas para atrair um bom tráfego orgânico e, consequentemente, mais clientes para o negócio.
Nesse sentido, é necessário entender a relevância dos algoritmos para o aumento de vendas online.
De acordo com a PWI, podemos compreender o algoritmo como uma sequência lógica de instruções, que precisam ser seguidas para a execução de determinada tarefa ou para a resolução de algum problema.
O Google, por exemplo, possui uma série de algoritmos que determinam o seu funcionamento. Dessa forma, os algoritmos são os responsáveis por transformar as perguntas em respostas para o usuário que está realizando suas buscas.
Em outras palavras: o algoritmo impacta diretamente na experiência do usuário.
Ao buscar o termo “comprar coleira para cachorro”, por exemplo, o usuário que está navegando no Google encontrará diversos sites que vendem o produto à sua disposição. Assim, o que determina as páginas que estão melhor posicionadas pelo termo de busca são justamente os algoritmos do Google.
Para alcançar o melhor resultado de busca, o algoritmo do Google utiliza parâmetros denominados fatores de ranqueamento. Dessa forma, para que o seu site obtenha um bom ranqueamento, ele deve seguir diferentes fatores e estar em constante atualização (afinal, os algoritmos do Google sofrem alterações constantemente).
Para vender melhor, existem duas opções: ou você faz uso de anúncios pagos para o acesso ao seu e-commerce ou aposta em técnicas de SEO para que o site usufrua de resultados orgânicos. Se a segunda opção for a de sua escolha, não há outra maneira senão adaptar o site aos parâmetros do Google.
 
Como tornar meu site atrativo aos algoritmos do Google?
Estratégias corretas podem tornar o seu site mais atrativo para os algoritmos do Google. Entre as diferentes opções existentes, merecem destaque as técnicas de SEO, que melhoram o tráfego de seu site de maneira orgânica.
 
No artigo publicado pela Marke que oferece dicas para melhorar o tráfego orgânico, explicamos que para um site consiga visitas orgânicas com maior frequência, é preciso investir nas técnicas de Search Engine Optimization (SEO).
A otimização de um site envolve diversas questões, as quais estão relacionadas à tecnologia – como responsividade, codificação e velocidade de carregamento do site -, mas também ao conteúdo, claro.
Assim, três dicas importantes para tornar o seu site mais atrativo aos algoritmos do Google são: a otimização da estrutura, do conteúdo do site e a criação de um blog.
 
(O QUE É ALGORITMO E COMO ELE VAI AJUDAR SUA EMPRESA A VENDER ONLINE. Marke, 2018. Disponível em: <https://marke.com.br/o-que-e-algoritmo-e-como-ele-vai-ajudar-sua-empresa-a-vender-online/> Acesso em 28 mar. 2021.)
 
Partindo da análise do artigo da Marke, uma das dicas importantes para tornar o seu site mais atrativo e possuir uma otimização do conteúdo que será exibido em seu site.

Imagine que você é um profissional contratado para desenvolver uma proposta de página mais dinâmica para uma empresa hipotética.
Desta forma, o seu foco nesta atividade será desenvolver um ALGORITMO EM PSEUDOCÓDIGO (português estruturado) de forma que contenha uma estrutura de armazenamento para o conteúdo de páginas dinâmicas. Mas o que armazenar? Vamos lá!

Acesse o e-commerce da americanas.com, e entre na seção de celulares e smartphones, por exemplo. Note que a página está repleta de informações sobre celulares e smartphones na forma de imagens, banners e promoções. Enfim, estamos cercados de informações atuais daquele tema que está sendo produzido pela própria americanas.com.  
No menu à esquerda, encontramos três submenus contendo: últimos lançamentos, top marcas, top modelos e categorias.
No conteúdo central, encontramos diversos tipos de ofertas e, quando acessado qualquer imagem ou qualquer item dos submenus, é apresentado informações específicas daquele item tais como: nome do produto, preço, quantidade em estoque, fabricante, marca, tipo do chip, Sistema Operacional entre outras características.

Desta forma, em seu PSEUDOCÓDIGO, você deverá utilizar a estrutura de dados heterogêneas para armazenar em memória as especificações de um celular. De acordo com Leal e Oliveira (2020, p. 157) “As estruturas de dados heterogêneas permitem o agrupamento de informações de diferentes tipos de dados, sendo denominadas registros”.

Diante do exposto, você precisa desenvolver seu algoritmo em pseudocódigo e atender aos seguintes critérios:
1 – Estrutura de Registro para armazenar 100 aparelhos celulares
2 – Um menu que apresente os seguintes módulos (procedimentos / funções)
2.1 – Cadastrar Produtos
2.2 – Listar todos (Aqui liste 3 características armazenadas)
2.3 - Listar 1 produto específico (Aqui liste 3 características armazenadas)
 
Considere as seguintes regras: 
1 - Controlar o cadastro para que não haja códigos idênticos.
2 - Informar ao usuário se produto foi cadastro ou não.
3 - Informar ao usuário que o produto não foi encontrado caso ocorra.

Dicas para realizar a atividade Mapa:
1. Durante as aulas o professor irá fornecer dicas que podem ser utilizadas para a confecção das suas atividades, sendo assim, é de suma importância participar da aula ao vivo, ou assisti-las posteriormente.
2. Assistir o vídeo explicativo da atividade Mapa.
3. Não utilizar software para testar o algoritmo neste momento.

# Resolução
```
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
```


# Tecnologias utilizadas
Algorítimo em Portugol

# Autor
[https://www.linkedin.com/in/juniordaliessi](https://www.linkedin.com/in/juniordaliessi/)






























