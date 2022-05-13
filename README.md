# **MAXIMA SOMA**
### **PROPOSTA**
> Em uma lista A temos um conjunto de elementos inteiros
positivos ou não (_A1, A2, . . . , An_). Elabore uma função que consiga encontrar
neste conjunto a máxima soma.
### **LOGICA**
1. Inicialmente, como forma da facilitar a constante leitura de valores, foi criado um arquivo com a quantidade desejada de valores para cada teste, sendo assim,
o primeiro passo envolvendo a logica do programa se da em ler o arquivo o qual contem os valores.
   - Para tal tarefa, no arquivo **_main.cpp_** foi criada a funcao **_read_file()_**, a qual recebe um endereco de memoria de uma lista.
      - Funcionamento da funcao **_read_file()_**:
      1. Recebe o endereco de uma Lista anteriormente criada;
      2. Usando a biblioteca **<fstream>**, a leitura do arquivo é realizada da forma convencional;
      3. Para cada linha dor arquivo existe um, e somente um, valor, o qual é lido como uma string e transformado em inteiro por meio da funcao
  built-in **_stoi()_**, sendo, em sequencia, salvo em uma variavel do tipo **_Item_**;
      4. O valor dessa variavel é usado como parametro a fim de ser inserido na lista, usando a funcao **_list_insert()_**;
      5. O laço se repete ate que o arquivo seja lido por completo.
  2. Apos a leitura do arquivo, as funcoes usadas estarao presentes na funcao **main**, a qual sera utilizada como forma de "chamar" todos os recursos
necessarios a fim de, de fato, solucionar o problema.
    - Funcoes utilizadas na funcao **main**: 
       - **_create_empty_list()_**: cria uma lista vazia, estrutura utilizada como base para o funcionamento do programa;
       - **_read_file()_**: realiza a leitura do arquivo e a insercao na lista anteriormente criada;
       - **_list_maxsum()_**: responsavel por, de fato, realizar o que se é pedido.
  3. A solucao do problema, como ja mencionado anteriormente, se da dentro da funcao **_list_maxsum()_**, a qual segue a seguinte logica:
     - Entende-se que, a fim de que todos os sub-arrays sejam comparados, é necessario que as posicoes fiquem em constante movimento, isto é: a posicao inicial
  se desloca uma casa a frente, a posicao final se mantem, em seguida, a posicao inicial volta a sua origem, a posicao final regressa uma posicao em sentido ao inicio,
  e, por fim, ambas as posicoes se deslocam na uma casa a frente, repetindo a logica ate que elas "se encontrem";
     - Seguindo tal logica, foi implementado o metodo da bolha, utilizando o dois loopings for, um ninhado ao outro;
        - **PRIMEIRO FOR:** utilizando a variavel **i**, trava um valor a fim de ser comparado com todos os outros, ate que tenha o mesmo tamanho da lista, chegando em sua posicao final;
        - **SEGUNDO FOR:** utilizando a variavel **j**, enquanto **i** se moveu a fim de criar a soma em um novo array, **j** vai de **i** até que tenha o mesmo tamano da lista, chegando em sua posicao final;
     - De tal forma, todas as somas dentro do looping **for** com a variavel **j** sao computadas, de forma que a esteja sempre comparando com a atual maior soma;
     - Caso a nova soma presente dentro do segundo **for** seja maior, a soma maior se tornara a soma presente, sendo ela o valor a ser comparado nas proximas iteracoes
     salvando sua posicao inicial como sendo **i** (onde o valor inicial é travado em relacao a posicao da lista), e sua posicao final como **j**, onde seu maior valor foi constatado.
### **CORRECAO DE ERROS**
1. No presente topico, serao constatados erros que foram previamente percebidos e, portanto, resolvidos.
    - **_Todos os valores negativos ou neutros:_** anteriormente, caso todos os valores fossem negativos, nunca entrariam na condicional de ser maior que a atual soma,
  haja visto que a mesma foi inicializada como 0, portanto, foi se criado um novo for, antes da implementacao da logica supracitada, como forma de independente do
  valor ser positivo ou negativo, sendo ate mesmo neutro, haver uma comparacao na qual os mesmos tenham de fato a possibilidade de entrar.


### **OBSERVACOES**
1. Para correto funcionamento do programa:
   - A variavel global **MAXTAM** deve receber a quantidade total ou maior que a quantidade total de linhas presentes no arquivo;
   - Somente arquivos do tipo **.txt** sao aceitos;
   - Deve-se ter em mente que numeros, e apenas numeros, podem estar presentes no arquivo, sem " " (_espaco simples_) e nenhum outro tipo de caractere nao numerico.
   - Deve haver somente um algorismo por linha, independentemente de seu tamanho;  
   - O nome do arquivo devera ser inserido na linha 9 do codigo, dentro da funcao **_file.open()_**:
      - Exemplo: file.open("nomedoarquivo.txt")
   - Numeros negativos, positivos e neutros sao aceitos;
   - Caso aparecam dois sub-arrays com a mesma soma, sera computada e mostrada ao usuario a ultima a ter aparecido.

  ### **COMPILACAO E EXECUCAO**
- A compilacao e execucao do arquivo se dao por meio do arquivo **Makefile** presente no repositorio, seguindo se seguinte ordem
de comandos, voce estara apto a compilar e executar o codigo.
  
| Comando | Resultado do comando |
| --- | --- |
| make clean | Apaga a ultima compilacao contida na pasta build. |
| make | Realiza uma nova compilacao utilizando g++, salvando-a na pasta build. |
| make run | Executa o programa caso a compilacao tenha sido concluida com exito. |
  
  ### SOCIAL MEDIA
- Twitter: @farinellizin
- Instagram: @farinellizin
- Telegram: @farinellizin
- E-mail: lucasfcpinho@gmail.com