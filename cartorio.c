#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocação de texto po região
#include <string.h> //biblioteca responsável por cuidar das string

   int registro() // Função responsavel por cadastras os usuários  no sistema
  {
		      	
     //inicio criação de variaveis/string 	
   	 char arquivo[40];; // sting arquivo do tipo 40
   	 char cpf[40]; // sting CPF do tipo 40
   	 char nome[40]; // sting nome do tipo 40
   	 char sobrenome[40]; // sting sobrenome do tipo 40
   	 char cargo[40]; // sting cargo do tipo 40
   	 //final criação de variaveis/string
   	 
   	 printf("Digite o CPF a ser cadastrado: "); //coletando informações do usuário
   	 scanf("%s", cpf); // %S refere-se a string
   	 
   	 strcpy(arquivo, cpf); // responsavel por copiar os valres das string
   	 
   	 FILE *file; // cria o aqrquivo
   	 file = fopen(arquivo,"w"); // cria o arquivo e o "W" significa escrever
   	 fprintf(file,cpf); // salvo o valor da variavel
   	 fclose(file); // fechar o arquivo 
   	 
   	 file = fopen(arquivo,"a"); // cria o arquivo e o "a" siginifica atualizar a informaçõa
   	 fprintf(file,","); // salvar o valor da variavel eo "," siginifica espaço
   	 fclose(file); // fechar o arquivo 
   
   	 printf("Digite o nome a ser cadastrado: ");//coletando informações do usuário
   	 scanf("%s",nome); // %S refere-se a string
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informaçõa
   	 fprintf(file,nome); // salvo o valor da variavel
   	 fclose(file); // fechar o arquivo 
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informaçõa
   	 fprintf(file,","); // salvar o valor da variavel eo "," siginifica espaço
   	 fclose(file); // fechar o arquivo 
   	 
   	 printf("Digite o sobrenome a ser cadastrado: ");//coletando informações do usuário
   	 scanf("%s",sobrenome); // %S refere-se a string
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informaçõa
   	 fprintf(file,sobrenome); // salvo o valor da variavel
   	 fclose(file); // fechar o arquivo 
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informaçõa
   	 fprintf(file,","); // salvar o valor da variavel eo "," siginifica espaço
   	 fclose(file); // fechar o arquivo 
   	 
   	 printf("Digite o cargo a ser cadastrado: "); //coletando informações do usuário
   	 scanf("%S",cargo); // %S refere-se a string
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informaçõa
   	 fprintf(file,cargo); // salvo o valor da variavel
     fclose(file); // fechar o arquivo 
   	 
   	 system("pause"); // pausa do sistema
   	 
   }
   
   
    int consulta() // função responsavel pela consulta dos usuários no sistema
    {
    	setlocale(LC_ALL, "Portuguese"); // Definindo a Linguagem
    	
    	char cpf[40]; // sting CPF do tipo 40
    	char conteudo[200]; // string conteudo tamanho 200 
    	
    	printf("Digite o CPF a ser consultado: ");// armazenar informações do usuário CPF 
        scanf("%s",cpf); // salvando o conjunto de variaveis (string cpf)	
        
        FILE *file; // chamando o arquivo file
        file = fopen(cpf,"r"); // abrindo arquivo cpf ( r siginifica ler )
        
        if(file == NULL) // validação caso nao for encontrada informaçoes no arquivo 
        {
	     printf("Não foi possivel abrir o arquivo, não localizado!.\n"); // informações do usuário não localizada
		}
        
        while(fgets(conteudo, 200, file) != NULL) // salvando na variavel procurando o arquivo 
       {
	    printf("\nEssas são as informações do usuario: "); // informações do usuário informadas
        printf("%s", conteudo);	// salvandfo o conteudo dentro da string
        printf("\n\n");	// espaço
    	}
         system("pause"); // pausa do sistema
         
   }
     int deletar() // função responsavel pela deletar dos usuários no sistema
	 {
	 	char cpf[40]; // sting CPF do tipo 40
	 	
	 	printf("Digite o CPF a ser deletado: "); // informações do usuário
	 	scanf("%s",cpf); // salvando o conjunto de variaveis (string cpf)
	 	
	 	remove(cpf); // removendo cpf
	 	
	 	FILE *file; // chamando o arquivo file
	 	file = fopen(cpf,"r"); // abrindo arquivo cpf ( r siginifica ler )
	 	
	 	if(file == NULL) // validação caso nao for encontrada informaçoes no arquivo 
	 	{
	 		printf("O usuário não se encontra no sistema!.\n"); // informaçoes do usuario nao encontrada
	 		
	 		system("pause"); // pausa do sistema
		 }
	 	
	 
	 }   
   int main() //começo da função 
   {
     int opcao=0; // Definindo variáveis 
     int laco=1; // começõ do laço
   
     for(laco=1;laco=1;) // repetição	
   {
   
     system("cls"); // responsavel por limpar a tela

     setlocale(LC_ALL, "Portuguese"); // Definindo a Linguagem
   
     printf("### Cartório Da EBAC ###\n\n"); // inicio do menu 
     printf("Escolha a opção desejada do menu:\n\n"); // pagina inicial do menu 
     printf("\t1 - Registrar nomes\n"); // priemra opção do menu 
     printf("\t2 - Consultar nomes\n"); // segunda opção do menu 
     printf("\t3 - Deletar nomes\n\n"); // terceira opçao do menu 
     printf("Opcão: "); // fim do menu
  
     scanf("%d", &opcao); // armazenando a escolha do usuário
  
     system("cls");	// responsavel por limpar a tela	
  
    switch(opcao) // inicio da seleção do menu 
     { 
     
     case 1:
     registro(); // inicio da chamada de funções // registro de nomes
     break; // fechando a chave
     
     case 2:
     consulta();// consulta de usuario 
     break;// fechando a chave
     
     case 3:
     deletar();// deletar usuario 
     break;	// fechando a chave
               //fim da chamada de funções
     default:
     printf("Essa opcão não está disponivel!\n");
	 system("pause"); // pausa do sistema
     break;// fechando a chave
     }
     }
     }
