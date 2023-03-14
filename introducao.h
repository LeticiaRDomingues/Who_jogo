

//--MOSTRA OS TERMOS DE CONDICOES NA TELA e retorna 1 ou 0 -----------------------------------------
int termo_de_privacidade()     					                                       
{
	system("color 02"); //Deixando o texto verde no preto
    //ARQUIVAMENTO - mostrar conteudo
	
	FILE* ptr = fopen("termo_de_privacidade.txt", "r" ); 
	if(ptr == NULL)// testando ponteiro.
	{
		printf("ERROR");
		return 0;	
	}
	// mostra caracter por caracter do arquivo que o ptr estao apontando 
	char ch;
	while((ch = fgetc(ptr)) != EOF){	//ate chegar ao caracter EOF
	
		printf("%c",ch);
		
	}
	fclose(ptr);
	
	
	Sleep(100);
	int resp_tentativa1, resp , count = 0;


    //RECEBER RESPOSTA 	
	//Controle para aceitar as condicoes - retorna somente 0(ok) ou 1 (nao aceito)
	do 
	{
		printf("Insira:\n");
		printf("0 - Eu aceito todos os termos e condicoes\n");
		printf("1 - Prefiro nao continuar a instalacao\n>>>>:");
		scanf("%i", &resp);
		
		
		if(count >= 1){ //Errou + de 1 vezes
			printf("\nPor favor, coloque uma resposta valida!!!\n");
		}
		count ++;
		
	}while(resp != 0 && resp != 1);
	
	system("cls");


    //usuario nao aceitou -> fazer mudar de ideia
	if(resp == 1){						
		return resp_tentativa1 = desistencia();	//o valor que a funcao retornar sera armazenado e sera retornado para a funcao principal
	}
	else{
		return 0;
	}
}






//-- COMO FUNCIONA O JOGO
void funcionamento()
{
	system("color 02"); //Deixando o texto verde no preto
	FILE* ptr = fopen("como_funciona.txt", "r" );  
	if(ptr == NULL)// testando ponteiro.
	{
		printf("ERROR");
		//return 0;	
	}
	
	// mostra caracter por caracter do arquivo que o ptr estao apontando 
	char ch;
	while((ch = fgetc(ptr)) != EOF){	//ate chegar ao caracter EOF
										
		printf("%c",ch);
	}
	printf("\n");
	fclose(ptr);
	Sleep(1000);
	system("pause");
	
	
}

/*Abertura*/

void apresentacao_parte1(){
		FILE* ptr = fopen("output_apresentacao.txt", "r" ); 	//abre um arquivo 
	
	
	// mostra caracter por caracter do arquivo que o ptr está apontando 
	char ch;
	int press = 0;
	
	printf("\n>>Aperte 1 para pular a introducao, ou 0 para continuar...\n\n");
	scanf("%i", &press);
	
	if(press == 1 ){
	    system("cls");//limpando a tela
		apresentacao_parte2();
	}
	else if(press == 0){
	    system("cls");//limpando a tela
		printf("\n\n CARREGANDO...");
		
	system("color 02"); //Deixando o texto verde no preto
	sleep(5);//tempo de espera
	system("cls");//limpando a tela
	
	while((ch = fgetc(ptr)) != EOF){	//pega o caracter, armazena em ch. Enquanto o caracter dentro do ch for diferente do tipo EOF, mostrar o que está em ch;
										//EOF é um nome especial em C que significa fim de um arquivo (End of File)
		printf("%c",ch);
		system("color 02"); //Para mudar a cor do texto
	}
	fclose(ptr);
	
	sleep(2);//tempo de espera
	system ("cls");//limpando a tela
	
	apresentacao_parte2();//Mandando para outra funcao

	}
	else{
		printf("\n\n>>Precisa aprender a seguir instrucoes se quiser jogar esse jogo, seja um player bonzinho e abra o programa novamente.\n\n\n\n\n");
		sleep(3);//tempo de espera
	}
	system("pause");
}

void apresentacao_parte2(){
	
	system("color 02");

   printf("\n\n >>Ola!! E' um prazer te conhecer, caro usuario!\n");
   sleep(4);//tempo de espera
   
   printf("\n >>Voce deve estar muito ansioso para comecar logo sua experiencia com o jogo, certo?\n");
   sleep(4);//tempo de espera
   
   printf("\n >>Muito bem, antes de tudo, eu gostaria de me apresentar!!\n");
   sleep(5);//tempo de espera
   
   system("cls");//limpando a tela
		//mostrar conteúdo do arquivo smile_ok
		FILE* ptrApre = fopen("elliot_se_apresentando.txt", "r");//abrir arquivo
		
		char sh;
		while((sh = fgetc(ptrApre)) != EOF){			//mostrar cada caracter até o final do arquivo
			printf("%c", sh);
			//usleep(5000000*10000000);//tempo de espera
		}
		sleep(5);//tempo de espera
		fclose(ptrApre);//Fechando arquivo
		
		
		printf("\n\n\n\n");
		sleep(8);//tempo de espera
		system("cls");
		
		printf("\n >>Meu objetivo e tornar o seu trabalho mais simples, para que voce possa usar seu programa logo!\n");
		sleep(5);//tempo de espera
		
		printf("\n >>Mas nao se engane!\n");
		sleep(5);//tempo de espera
		
		printf("\n >>Eu nao sou um assistente qualquer!\n");
		sleep(5);//tempo de espera
		system("cls");
		
		printf("\n >>Como um assistente de instalacao virtual para jogos\n");
		sleep(5);//tempo de espera
		
		printf("\n >>A intencao e que voce se divirta em cada momento.\n");
		sleep(5);//tempo de espera	
}




