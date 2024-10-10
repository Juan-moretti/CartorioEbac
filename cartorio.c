#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��o de texto po regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

   int registro() // Fun��o responsavel por cadastras os usu�rios  no sistema
  {
		      	
     //inicio cria��o de variaveis/string 	
   	 char arquivo[40];; // sting arquivo do tipo 40
   	 char cpf[40]; // sting CPF do tipo 40
   	 char nome[40]; // sting nome do tipo 40
   	 char sobrenome[40]; // sting sobrenome do tipo 40
   	 char cargo[40]; // sting cargo do tipo 40
   	 //final cria��o de variaveis/string
   	 
   	 printf("Digite o CPF a ser cadastrado: "); //coletando informa��es do usu�rio
   	 scanf("%s", cpf); // %S refere-se a string
   	 
   	 strcpy(arquivo, cpf); // responsavel por copiar os valres das string
   	 
   	 FILE *file; // cria o aqrquivo
   	 file = fopen(arquivo,"w"); // cria o arquivo e o "W" significa escrever
   	 fprintf(file,cpf); // salvo o valor da variavel
   	 fclose(file); // fechar o arquivo 
   	 
   	 file = fopen(arquivo,"a"); // cria o arquivo e o "a" siginifica atualizar a informa��a
   	 fprintf(file,","); // salvar o valor da variavel eo "," siginifica espa�o
   	 fclose(file); // fechar o arquivo 
   
   	 printf("Digite o nome a ser cadastrado: ");//coletando informa��es do usu�rio
   	 scanf("%s",nome); // %S refere-se a string
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informa��a
   	 fprintf(file,nome); // salvo o valor da variavel
   	 fclose(file); // fechar o arquivo 
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informa��a
   	 fprintf(file,","); // salvar o valor da variavel eo "," siginifica espa�o
   	 fclose(file); // fechar o arquivo 
   	 
   	 printf("Digite o sobrenome a ser cadastrado: ");//coletando informa��es do usu�rio
   	 scanf("%s",sobrenome); // %S refere-se a string
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informa��a
   	 fprintf(file,sobrenome); // salvo o valor da variavel
   	 fclose(file); // fechar o arquivo 
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informa��a
   	 fprintf(file,","); // salvar o valor da variavel eo "," siginifica espa�o
   	 fclose(file); // fechar o arquivo 
   	 
   	 printf("Digite o cargo a ser cadastrado: "); //coletando informa��es do usu�rio
   	 scanf("%S",cargo); // %S refere-se a string
   	 
   	 file = fopen(arquivo, "a"); // cria o arquivo e o "a" siginifica atualizar a informa��a
   	 fprintf(file,cargo); // salvo o valor da variavel
     fclose(file); // fechar o arquivo 
   	 
   	 system("pause"); // pausa do sistema
   	 
   }
   
   
    int consulta() // fun��o responsavel pela consulta dos usu�rios no sistema
    {
    	setlocale(LC_ALL, "Portuguese"); // Definindo a Linguagem
    	
    	char cpf[40]; // sting CPF do tipo 40
    	char conteudo[200]; // string conteudo tamanho 200 
    	
    	printf("Digite o CPF a ser consultado: ");// armazenar informa��es do usu�rio CPF 
        scanf("%s",cpf); // salvando o conjunto de variaveis (string cpf)	
        
        FILE *file; // chamando o arquivo file
        file = fopen(cpf,"r"); // abrindo arquivo cpf ( r siginifica ler )
        
        if(file == NULL) // valida��o caso nao for encontrada informa�oes no arquivo 
        {
	     printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n"); // informa��es do usu�rio n�o localizada
		}
        
        while(fgets(conteudo, 200, file) != NULL) // salvando na variavel procurando o arquivo 
       {
	    printf("\nEssas s�o as informa��es do usuario: "); // informa��es do usu�rio informadas
        printf("%s", conteudo);	// salvandfo o conteudo dentro da string
        printf("\n\n");	// espa�o
    	}
         system("pause"); // pausa do sistema
         
   }
     int deletar() // fun��o responsavel pela deletar dos usu�rios no sistema
	 {
	 	char cpf[40]; // sting CPF do tipo 40
	 	
	 	printf("Digite o CPF a ser deletado: "); // informa��es do usu�rio
	 	scanf("%s",cpf); // salvando o conjunto de variaveis (string cpf)
	 	
	 	remove(cpf); // removendo cpf
	 	
	 	FILE *file; // chamando o arquivo file
	 	file = fopen(cpf,"r"); // abrindo arquivo cpf ( r siginifica ler )
	 	
	 	if(file == NULL) // valida��o caso nao for encontrada informa�oes no arquivo 
	 	{
	 		printf("O usu�rio n�o se encontra no sistema!.\n"); // informa�oes do usuario nao encontrada
	 		
	 		system("pause"); // pausa do sistema
		 }
	 	
	 
	 }   
   int main() //come�o da fun��o 
   {
     int opcao=0; // Definindo vari�veis 
     int laco=1; // come�� do la�o
   
     for(laco=1;laco=1;) // repeti��o	
   {
   
     system("cls"); // responsavel por limpar a tela

     setlocale(LC_ALL, "Portuguese"); // Definindo a Linguagem
   
     printf("### Cart�rio Da EBAC ###\n\n"); // inicio do menu 
     printf("Escolha a op��o desejada do menu:\n\n"); // pagina inicial do menu 
     printf("\t1 - Registrar nomes\n"); // priemra op��o do menu 
     printf("\t2 - Consultar nomes\n"); // segunda op��o do menu 
     printf("\t3 - Deletar nomes\n\n"); // terceira op�ao do menu 
     printf("Opc�o: "); // fim do menu
  
     scanf("%d", &opcao); // armazenando a escolha do usu�rio
  
     system("cls");	// responsavel por limpar a tela	
  
    switch(opcao) // inicio da sele��o do menu 
     { 
     
     case 1:
     registro(); // inicio da chamada de fun��es // registro de nomes
     break; // fechando a chave
     
     case 2:
     consulta();// consulta de usuario 
     break;// fechando a chave
     
     case 3:
     deletar();// deletar usuario 
     break;	// fechando a chave
               //fim da chamada de fun��es
     default:
     printf("Essa opc�o n�o est� disponivel!\n");
	 system("pause"); // pausa do sistema
     break;// fechando a chave
     }
     }
     }
