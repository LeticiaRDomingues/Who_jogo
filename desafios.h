/*
	FUNCÕES NESSE ARQUIVO
int desafio2();
int desafio1();
void Proxima_fase();

*/






/*
     ------------ DESAFIO 1 ------------
	* o usuario perdera apos tentar 3 vezes 
	* retorna 1 se perder e 0 se ganhar 
	
	
	resultado: 1 2 3
*/

int desafio1()
{
	
	system("color 02"); //Deixando o texto verde no preto
	
	FILE* ptr = fopen("Desafio1.txt", "r" );  
	if(ptr == NULL)// testando ponteiro.
	{
		printf("ERROR");
	//	return 0;	
	}
	
	// mostra caracter por caracter do arquivo que o ptr estao apontando 
	char ch;
	while((ch = fgetc(ptr)) != EOF)
	{	//ate chegar ao caracter EOF
										
		printf("%c",ch);
	}
	
	
	sleep(2); 
	printf("\n\n>> Pense um pouco..."); 
	sleep(10); 
	
	printf("\n\n>> Precisa de ajuda? Deixa eu te dar uma maozinha...\n"); 
	system("calc");//abrir calculadora 
	
	
	//DONE - controlar a quantidade de erros 
	//DONE - o usuario perdera apos tentar 3 vezes 
	
	/*
	Resposta: 
	1, 2 e 3, porque:
	1 + 2 + 3 = 6 e 1 x 2 x 3 = 6*/
	
	sleep(12); 
	int i, alg1, alg2, alg3, count = 0;
	for(i = 0; i < 3; i++) //tentar ate 3 vezes 
	{
		
		printf(">> qual e a resposta? (insira em ordem crescente separado por um espaco. ex: x x x) \n"); 
		scanf("%i %i %i", &alg1, &alg2, &alg3); //obter dados do usuario
		system("cls");
		sleep(3); printf("..."); sleep(3); printf("processando...");  sleep(3); 
		
		//VERIFICAR RESPOSTAS
		if(alg1 == 1 && alg2 == 2 && alg3 == 3)
		{ //ACERTOU 
			
			return 0;
			
		}
		else
		{ //errou
			count++;
			system("cls");
			if(i != 2){
				printf("Tente novamente! Voce errou\n");	
			}
			
			alg1 == 0;
			alg2 == 0;
			alg3 == 0;
		}	
	}
	
	return 1; 
	
}


/*

    ------------ DESAFIO 2 ------------  
	* o usuario perdera apos tentar 3 vezes 
	* retorna 1 se perder e 0 se ganhar 
	
	resultado: 12
*/

int desafio2()
{
	
	system("color 02"); //Deixando o texto verde no preto
	
	FILE* ptr = fopen("Desafio2.txt", "r" );  
	if(ptr == NULL)// testando ponteiro.
	{
		printf("ERROR");
	//	return 0;	
	}
	
	// mostra caracter por caracter do arquivo que o ptr estao apontando 
	char ch;
	while((ch = fgetc(ptr)) != EOF)
	{	//ate chegar ao caracter EOF
										
		printf("%c",ch);
	}
	
	sleep(5); 
	int i, alg1, count = 0;
	for(i = 0; i < 3; i++) //tentar ate 3 vezes 
	{
		
		printf("\n>> qual e a resposta?"); printf("\n>>> ");
		scanf("%i", &alg1); //obter dados do usuario
		system("cls");
		sleep(3); printf("..."); sleep(3); printf("processando...");  sleep(3); 
		
		//VERIFICAR RESPOSTAS
		if(alg1 == 12)
		{ //ACERTOU 
			
			return 0;
			
		}
		else
		{ //errou
			count++;
			system("cls");
			if(i != 2)
			{
				printf("Tente novamente! Voce errou");	
			}
				
		}	
	}
	
	return 1; 
	
}

/*

    ------------ DESAFIO 2 ------------  
	* o usuario perdera apos tentar 1 vez 
	* retorna 1 se perder e 0 se ganhar 
	
	resultado: 1265
*/

int desafio3()
{
	
	system("color 02");
	printf(">>Mal posso acreditar que voce realmente passou pelos primeiros dois desafios!\n");
	sleep(3);//tempo de espera
	
	printf("\n>>Isso e' incrivel, agora vamos para o ultimo dos desafios! o desafio numero tres...\n");
	sleep(3);//tempo de espera
	system("cls");
	
	printf("\n>>Qual era a senha apresentada no comeco do jogo?");
	printf("\n>>DICA: escreva tudo minusculo, a resposta e uma frase, voce so tem uma chance\n");
	int resp;
	int senha = 1265;
	
	printf("\n>>Qual e' a resposta?: \n");
	
	scanf("%i", &resp);
		
	if(resp == senha){//ACERTOU
		return 0;
	}
	else{//ERROU
		return 1;
	}

}



//---------PROXIMA FASE ------------
void Proxima_fase()
{ //MOSTRAR QUE ACERTOU 
	system("cls");	
	system("color 02"); //Deixando o texto verde no preto
	FILE* ptr = fopen("proxima_fase.txt", "r" );  
	
	if(ptr == NULL)// testando ponteiro.
	{
		printf("ERROR");
	//	return 0;	
	}
	
	// mostra caracter por caracter do arquivo que o ptr estao apontando 
	char ch;
	while((ch = fgetc(ptr)) != EOF){	//ate chegar ao caracter EOF
										
		printf("%c",ch);
	}
	printf("\n");
	fclose(ptr);
	sleep(4);
	system("cls");
}
