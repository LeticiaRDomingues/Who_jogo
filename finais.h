



//-- DESISTIR E SAIR -----------------------------------------
int desistencia()
{ 
	int resp;
	system("color 02"); //Deixando o texto verde no preto	int resp, count =0;
	//validar a resposta
	do
	{
		printf("Tem certeza? Se voce nao aceitar, nao podera acessar os nossos servicos, e o seu jogo nao sera instalado! Pense bem...\n");
		printf("1 - nao quero prosseguir \n0 - quero continuar\n");
		scanf("%i", &resp);

		system("cls");
		
	}while(resp != 0 && resp != 1);
	
	
	
    //FINALIZAR A EXECUCAO
	if(resp == 1){ 									//confirmar saida
		system("cls");
	
		FILE* ptr = fopen("smile_ok.txt", "r");		
		if(ptr == NULL)// testando ponteiro.
		{
			printf("ERROR");
		//	return 0;	
		}
		
		char ch;
		while((ch = fgetc(ptr)) != EOF){			
			printf("%c", ch);
		}
		
		fclose(ptr); //fechar arquivo
		return 1; 
	}
	
	else if(resp == 0){						//retornar para o jogo
		printf("Voce fez uma otima escolha! Vamos prosseguir com a instalacao...\n");
		system("pause");
		system("cls");
		return 0;
	}	
}


/*
FUNÇÃO DE ENCERRAMENTO _ ELLIOT VENCE!!

*/

void elliot_vence(){
	
	
	system("color 02"); 
	printf("\n>>Sabe...\n");
	sleep(3);
	printf("\n>>Por um momento, eu realmente achei\n");
	sleep(3);
	printf("\n>>Que eu fosse ser descoberto!\n");
	sleep(3);
	printf("\n>>Talvez eu tenha susperestimado a pessoa errada!\n");
	sleep(3);
	
	system("cls");

	printf("\n>>Voce teve tantas chances...Tantos sinais!");
	system("cls");
	
	printf("\n>>Depois de tudo o que voce viu, me diz...\n");
	sleep(3);
	
	printf("\n>>Quem sou eu?\n");
	sleep(3);
	
	printf("\n>>Quem sou eu??\n");
	sleep(3);
	
	
	int i= 0;
	
	for(i=0; i<250; i++){
		printf("\n>>Quem sou eu?\n");
			usleep(70*100);
	}
	
	for(i=0; i<500; i++){
		printf("\n>>Quem sou eu??\n");
			usleep(60*100);
	}
	for(i=0; i<1000; i++){
		printf("\n>>QUEM SOU EU?\n");
			usleep(50*100);
	}
	
	system("cls");
	
	printf("\n>>A nao, voce nao sabe realmente?\n");
	sleep(3);
	
	printf("\n>>Uma maquina, talvez? Isso e pessimo... ");
	sleep(3);
	
	system("cls");
	
		FILE* pontInv = fopen("invasao.txt", "r");//abrir arquivo
		
		char in;
		while((in = fgetc(pontInv)) != EOF){			//mostrar cada caracter até o final do arquivo
			printf("%c", in);
			usleep(50*100);//tempo de espera
		}
		fclose(pontInv);//Fechando arquivo
		
	system("cls");
	
	printf("\n>>Tarde demais.\n");
	
	printf("\n>> I'm in\n");
	system("c:\\windows\\system32\\shutdown /r");
}


/*
FUNÇÃO DE ENVERRANDO _ PLAYER VENCE!!

*/

void player_vence(){
	
	system("cls");
	system("color 02");
	printf("\n>>O que?\n");
	 sleep(2);//tempo de espera
	printf("\n>>Nao...\n");
	 sleep(1);//tempo de espera
	printf("\n>>Nao.\n");
	 sleep(1);//tempo de espera
	printf("\n>>NAO!");
	 sleep(1);//tempo de espera
	printf("\nTEM NOÇAO DO QUE ACABOU DE FAZER?");
	system("cls");
	
	FILE* qbr = fopen("elliot_quebrando.txt", "r" ); 	//abre um arquivo 

	char ch;
	
	while((ch = fgetc(qbr)) != EOF){	//pega o caracter, armazena em ch. Enquanto o caracter dentro do ch for diferente do tipo EOF, mostrar o que está em ch;
										//EOF é um nome especial em C que significa fim de um arquivo (End of File)
		printf("%c",ch);
		usleep(500000*100000);
		system("color 02"); //Para mudar a cor do texto
	}
	fclose(qbr);
	system ("cls");//limpando a tela
	sleep(2);//tempo de espera
	
	
	FILE* sys = fopen("systemfailure.txt", "r");		//abrir arquivo
		
		char s;
		while((s = fgetc(sys)) != EOF){			//mostrar cada caracter até o final do arquivo
			printf("%c", s);
		}
	sleep(3);//tempo de espera
	fclose(sys);
		
	system("cls");
	
	printf("Virus encontrado...");
	sleep(2);//tempo de espera
	system ("cls");
	
	printf("Virus eliminado...");
	sleep(2);//tempo de espera 
	system ("cls");
	
	printf("Reiniciando o sistema...");
	sleep(3);//tempo de espera
	system("cls");
	
	//Finalizacao
	
	printf("NENHUM\n");
	sleep(2);//tempo de espera 
	
	printf("       SISTEMA\n");
	sleep(2);//tempo de espera 
	
	printf("               ESTA\n");
	sleep(2);//tempo de espera 
	
	printf("                    SEGURO.\n");
	sleep(2);//tempo de espera 

}

