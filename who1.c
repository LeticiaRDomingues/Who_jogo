#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#include "desafios.h" // (desafio 1, desafio 2, desafio 3, proxima fase)
#include "introducao.h" //(termo de privacidade, apresentacao_parte1, apresentacao_parte2)
#include "finais.h" //(Desistencia, player_vence, elliot_vence)

int main()
{
	
	apresentacao_parte1();

	
	system("cls");
	printf("Antes de começar, leia nossos termos e condicoes de privacidade\n");
	Sleep(100);
    //--TERMO DE PRIVACIDADE --------------------------------
	int I_result;
	I_result = termo_de_privacidade(); //armazena resultado para usar na condicional


    //CONDICIONAL PRINCIPAL -----------------------------

	if(I_result == 0)
	{ //ACEITOU CONTINUAR
	
			//Ir para desafio 1

			funcionamento(); 	//explicar como o jogo funciona
			system("cls");
			printf(">> Antes de entrar no desafio 1...\n>> Iremos precisar do seu email: ");
			system("cls");
			I_result = desafio1(); 
			
			if(I_result == 0){//Ir para desafio 2
				Proxima_fase();
			    I_result = desafio2();
			    
			    if(I_result == 0){ //Ir para desafio 3
			    	Proxima_fase();
			    	I_result = desafio3();
			    	
			    	if(I_result == 0){
			    		//JOGADOR NAO E INVADIDO
			    		player_vence();
					}
					else{
						//INVASAO
						elliot_vence();
					}
			    
				}
				else{
					//INVASAO
					elliot_vence();
				}
				//TODO receber resultado da fase 2
				
			}
			else{
				//INVASAO
				elliot_vence();
			}
		}
		else
		{//fechar aplicacao
			
			
			system("exit");		
		}
	

	return 0;
}




      

                                                     
