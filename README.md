# lista-telefonica
contacto telefonica
/* Desafio 3

   Cadeira: PI

   Docente: Professor Francisco Melo Pereira

   Data: 26/04/2021

   Autor: Francisco Bica Vicente 22007528
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include "biblio_chico.h"
#define MAX 10

main(){
    int tipo;
    int retornar,continuar;
    int i=0;
    int atributo;

    setlocale(LC_ALL,"Portuguese");
    while(1){


    menu();


    printf("Escolha uma das opçoes:");
    scanf("%i",&tipo);

     switch (tipo){
            case 1:

                while(1){
                   FILE *outfile;
                   outfile = fopen ("francisco_vicente.dat", "ab+");

                    verif_nome(utilizador[i].nome);
                    fflush(stdin);

                    verif_numero(utilizador[i].numero);
                    fflush(stdin);

                    verif_morada(utilizador[i].morada);
                    fflush(stdin);

                    verif_postal(utilizador[i].codico_postal);
                    fflush(stdin);

                    verif_cidade(utilizador[i].cidade);
                    fflush(stdin);

                    verif_pais(utilizador[i].pais);
                    fflush(stdin);


                    fwrite(&utilizador[i],sizeof(parametros_formulario), 1 , outfile);

                    i++;

                    fclose(outfile);

                    printf("\n Quer continuar a inserir contactos s/n? \n");

                    continuar= getche();
                    toupper(continuar);

                    if(continuar=='s'){

                       system("cls");

                    }else if (continuar=='n'){

                       system("cls");
                        break;
                    }else {

                        printf("\nOpcao invalida\n");
                        printf("Irá retornar ao menu principal\n\n");
                        system("pause");
                        system("cls");
                        break;

                    }

               }

               break;


            case 2:
                pesquisa_sequencial();
                system("cls");
               break;

            case 3:
                mostrar_dados();
                system("pause");
                system("cls");
                break;

            case 4:
                submenu();
                scanf("%i",&atributo);
                 if(atributo==1){

                      buscar_nome();
                      system("pause");
                      system("cls");

                }else if(atributo==2){

                   buscar_numero();
                   system("pause");
                   system("cls");

                }else if(atributo==3){

                   buscar_morada();
                   system("pause");
                    system("cls");

                }else if(atributo==4){

                  buscar_postal();
                  system("pause");
                  system("cls");

                }else if(atributo==5){

                  buscar_cidade();
                  system("pause");
                  system("cls");

                }else if (atributo==6){

                  buscar_pais();
                  system("pause");
                  system("cls");

                }else{

                system("cls");
                }

                break;

            case 5:

                modificar_registo();
                system("pause");
                system("cls");
                break;

            case 6:
                number_eliminar();
                system("cls");
                break;

            case 7:

              apaga_ficheiro();
              system("pause");
              system("cls");

                break;

            case 8:
              system("cls");
              about();
              system("pause");
              system("cls");
                break;

             case 0:
                printf("\nObrigado pela sua escolha, volte sempre.\n\n");
                exit(0);
                break;


            default:

                printf("insira uma opcao valida!!\n");

                break;
          }


        }

}
#ifndef BIBLIO_CHICO_H_INCLUDED
#define BIBLIO_CHICO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<locale.h>
#define MAX 10

#endif // BIBLIO_CHICO_H_INCLUDED

int menu(){
    int tipo;


    printf("Apresenta-se em baixo um programa que ilustra uma agenda\n\n");
    printf("************************************************************************************************************************\n");
    printf("1. Criaçao de registos\n");
    printf("2. Consulta sequencial\n");
    printf("3. Listagem de registos no ecra\n");
    printf("4. Consulta com busca por qualquer dos atributos\n");
    printf("5. Modificar contacto\n");
    printf("6. Remover contacto\n");
    printf("7. Apagar ficheiro de contactos\n");
    printf("8. About\n");
    printf("0. Sair do programa\n\n\n");

    printf("************************************************************************************************************************\n");


}

typedef struct parametros_formulario{

    char nome[20];
    char numero[10];
    char morada[30];
    char codico_postal[10];
    char cidade[20];
    char pais[20];

}parametros_formulario;

parametros_formulario utilizador[100];

int i=0;

void verif_nome(char* nome){
 int  i, b;
            int numero_utilizador;
            char vetor_armazenar[20];


            for(b=0;b <10; b++){
                vetor_armazenar[b]= NULL ;
            }
            system("cls");

            printf("Nome: ");

            for(i=0;i<20;i++)
            {
               numero_utilizador = getche();



                if ((numero_utilizador >= 65) && (numero_utilizador<=90 )||( numero_utilizador>= 97) && ( numero_utilizador<= 122)|| (numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;


                }else if (numero_utilizador==8){


                        if(i<=0){

                            i--;
                            vetor_armazenar[i+1]=0;
                            system("cls");
                            printf("Nome:%s",vetor_armazenar);

                        } else  {

                          i=i-2;

                          vetor_armazenar[i+1]=0;
                          system("cls");


                          printf("Nome:%s",vetor_armazenar);

                    }

                }else if (numero_utilizador == 13){
                    system("cls");
                   printf("Nome:%s",vetor_armazenar);
                    break;

                }

                else
                {


                    i--;

                    printf("\nNao corresponde a condição presente no menu\n");

                    if(vetor_armazenar[i]!=NULL){
                           system("cls");
                    printf("Nome:%s",vetor_armazenar);
                 }


                }

            }

    strcpy(nome,vetor_armazenar);
}


void verif_numero(char* numero){

           int  i, b;
            int numero_utilizador;
            char vetor_armazenar[10];


            for(b=0;b <10; b++){
                vetor_armazenar[b]= NULL ;
            }
            system("cls");

            printf("Numero: ");

            for(i=0;i<10;i++)
            {
               numero_utilizador = getche();



                if ((numero_utilizador >=48) && (numero_utilizador<=57)){
                        vetor_armazenar[i] = (char) numero_utilizador;


                }else if (numero_utilizador==8){


                        if(i<=0){

                            i--;
                            vetor_armazenar[i+1]=0;
                            system("cls");
                            printf("Numero:%s",vetor_armazenar);

                        } else  {

                          i=i-2;

                          vetor_armazenar[i+1]=0;
                          system("cls");


                          printf("Numero:%s",vetor_armazenar);

                    }

                }else if (numero_utilizador == 13){
                    system("cls");
                   printf("Numero:%s",vetor_armazenar);
                    break;

                }

                else
                {


                    i--;

                    printf("\nNao corresponde a condição presente no menu\n");

                    if(vetor_armazenar[i]!=NULL){
                            system("cls");
                    printf("Numero:%s",vetor_armazenar);
                 }


                }

            }

    strcpy(numero,vetor_armazenar);
}

void verif_morada(char* morada){

            int  i, b;
            int numero_utilizador;
            char vetor_armazenar[30];


            for(b=0;b <30; b++){
                vetor_armazenar[b]= NULL ;
            }
            system("cls");

            printf("Morada: ");

            for(i=0;i<30;i++)
            {
               numero_utilizador = getche();



                if ((numero_utilizador >= 33) && (numero_utilizador<=255 )||(numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;


                }else if (numero_utilizador==8){


                        if(i<=0){

                            i--;
                            vetor_armazenar[i+1]=0;
                            system("cls");
                            printf("Morada:%s",vetor_armazenar);

                        } else  {

                          i=i-2;

                          vetor_armazenar[i+1]=0;
                          system("cls");


                          printf("Morada:%s",vetor_armazenar);

                    }

                }else if (numero_utilizador == 13){
                    system("cls");
                   printf("Morada:%s",vetor_armazenar);
                    break;

                }

                else
                {


                    i--;

                    printf("\nNao corresponde a condição presente no menu\n");

                    if(vetor_armazenar[i]!=NULL){
                            system("cls");
                    printf("Morada:%s",vetor_armazenar);
                 }


                }

            }

    strcpy(morada,vetor_armazenar);
}
void verif_postal(char* codico_postal){
           int  i, b;
            int numero_utilizador;
            char vetor_armazenar[10];


            for(b=0;b <10; b++){
                vetor_armazenar[b]= NULL ;
            }
            system("cls");

            printf("Código-Postal: ");

            for(i=0;i<10;i++)
            {
               numero_utilizador = getche();



                if ((numero_utilizador >=48) && (numero_utilizador<=57)||(numero_utilizador==45)){
                        vetor_armazenar[i] = (char) numero_utilizador;


                }else if (numero_utilizador==8){


                        if(i<=0){

                            i--;
                            vetor_armazenar[i+1]=0;
                            system("cls");
                            printf("Código-Postal:%s",vetor_armazenar);

                        } else  {

                          i=i-2;

                          vetor_armazenar[i+1]=0;
                          system("cls");


                          printf("Código-Postal:%s",vetor_armazenar);

                    }

                }else if (numero_utilizador == 13){
                    system("cls");
                   printf("Código-Postal:%s",vetor_armazenar);
                    break;

                }

                else
                {


                    i--;

                    printf("\nNao corresponde a condição presente no menu\n");

                    if(vetor_armazenar[i]!=NULL){
                            system("cls");
                    printf("Código-Postal:%s",vetor_armazenar);
                 }


                }

            }

    strcpy(codico_postal,vetor_armazenar);
}

void verif_cidade(char* cidade){
            int  i, b;
            int numero_utilizador;
            char vetor_armazenar[20];


            for(b=0;b <20; b++){
                vetor_armazenar[b]= NULL ;
            }
            system("cls");

            printf("Cidade: ");

            for(i=0;i<20;i++)
            {
               numero_utilizador = getche();



                if ((numero_utilizador >= 65) && (numero_utilizador<=90 )||( numero_utilizador>= 97) && ( numero_utilizador<= 122)|| (numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;


                }else if (numero_utilizador==8){


                        if(i<=0){

                            i--;
                            vetor_armazenar[i+1]=0;
                            system("cls");
                            printf("Cidade:%s",vetor_armazenar);

                        } else  {

                          i=i-2;

                          vetor_armazenar[i+1]=0;
                          system("cls");


                          printf("Cidade:%s",vetor_armazenar);

                    }

                }else if (numero_utilizador == 13){
                    system("cls");
                   printf("Cidade:%s",vetor_armazenar);
                    break;

                }

                else
                {


                    i--;

                    printf("\nNao corresponde a condição presente no menu\n");

                    if(vetor_armazenar[i]!=NULL){
                            system("cls");
                    printf("Cidade:%s",vetor_armazenar);
                 }


                }

            }

    strcpy(cidade,vetor_armazenar);
}

void verif_pais(char* pais){
           int  i, b;
            int numero_utilizador;
            char vetor_armazenar[20];


            for(b=0;b <20; b++){
                vetor_armazenar[b]= NULL ;
            }
            system("cls");

            printf("Pais: ");

            for(i=0;i<20;i++)
            {
               numero_utilizador = getche();



                if ((numero_utilizador >= 65) && (numero_utilizador<=90 )||( numero_utilizador>= 97) && ( numero_utilizador<= 122)|| (numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;


                }else if (numero_utilizador==8){


                        if(i<=0){

                            i--;
                            vetor_armazenar[i+1]=0;
                            system("cls");
                            printf("Pais:%s",vetor_armazenar);

                        } else  {

                          i=i-2;

                          vetor_armazenar[i+1]=0;
                          system("cls");


                          printf("Pais:%s",vetor_armazenar);

                    }

                }else if (numero_utilizador == 13){
                    system("cls");
                   printf("Pais:%s",vetor_armazenar);
                    break;

                }

                else
                {


                    i--;

                    printf("\nNao corresponde a condição presente no menu\n");

                    if(vetor_armazenar[i]!=NULL){
                            system("cls");
                    printf("Pais:%s",vetor_armazenar);
                 }


                }

            }

    strcpy(pais,vetor_armazenar);
}

void leitura_ficheiro(){
    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "a+");
}

void escrita_ficheiro(){
    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "a+");
    fwrite(&utilizador,sizeof(utilizador), 1 , outfile);

}

 void mostrar_dados(){
    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "rb");
   while(fread(&utilizador,sizeof(parametros_formulario),1,outfile)==1)
        {
                        printf("\nNome : %s ",  utilizador->nome);
                        printf("\nNumero : %s ", utilizador->numero);
                        printf("\nMorada : %s ", utilizador->morada );
                        printf("\nCodigo Postal : %s ",utilizador->codico_postal);
                        printf("\nCidade : %s ", utilizador->cidade);
                        printf("\nPais: %s ",    utilizador->pais);
                        printf("\n*************************************************\n");
        }

     printf("\nPrima uma tecla para continuar.");
     getche();
     fclose(outfile);
}


void buscar_nome(){
	char busca[15];
	busca[15]=0;



    verif_nome(&busca);

    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "rb");



	printf("\n\n\nBuscar contato\n");


	while(fread(&utilizador,sizeof(parametros_formulario), 1, outfile)==1){



		if(strcmpi(busca,utilizador->nome)==0){ // Comparar ambas
            printf("Nome: %s\n", utilizador->nome);
			printf("Numero: %s\n", utilizador->numero);
			printf("Morada: %s\n", utilizador->morada);
			printf("Codigo-Postal: %s\n", utilizador->codico_postal);
			printf("Cidade: %s\n", utilizador->cidade);
			printf("Pais: %s\n", utilizador->pais);
            printf("\n*********************************************\n");

		}

	}
       fclose(outfile);
}

void buscar_numero(){
    char busca[15];
	busca[15]=0;



   verif_numero(&busca);

    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "rb");



	printf("\n\n\nBuscar contato\n");


	while(fread(&utilizador,sizeof(parametros_formulario), 1, outfile)==1){



		if(strcmpi(busca,utilizador->numero)==0){ // Comparar ambas
            printf("Nome: %s\n", utilizador->nome);
			printf("Numero: %s\n", utilizador->numero);
			printf("Morada: %s\n", utilizador->morada);
			printf("Codigo-Postal: %s\n", utilizador->codico_postal);
			printf("Cidade: %s\n", utilizador->cidade);
			printf("Pais: %s\n", utilizador->pais);
            printf("\n*********************************************\n");

		}

	}
        fclose(outfile);
}

void buscar_morada(){
    char busca[15];
	busca[15]=0;



    verif_morada(&busca);

    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "rb");



	printf("\n\n\nBuscar contato\n");


	while(fread(&utilizador,sizeof(parametros_formulario), 1, outfile)==1){



		if(strcmpi(busca,utilizador->morada)==0){ // Comparar ambas
            printf("Nome: %s\n", utilizador->nome);
			printf("Numero: %s\n", utilizador->numero);
			printf("Morada: %s\n", utilizador->morada);
			printf("Codigo-Postal: %s\n", utilizador->codico_postal);
			printf("Cidade: %s\n", utilizador->cidade);
			printf("Pais: %s\n", utilizador->pais);
            printf("\n*********************************************\n");

		}

	}
fclose(outfile);
}

void buscar_postal(){
    char busca[15];
	busca[15]=0;



    verif_postal(&busca);

    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "rb");



	printf("\n\n\nBuscar contato\n");


	while(fread(&utilizador,sizeof(parametros_formulario), 1, outfile)==1){



		if(strcmpi(busca,utilizador->codico_postal)==0){ // Comparar ambas
            printf("Nome: %s\n", utilizador->nome);
			printf("Numero: %s\n", utilizador->numero);
			printf("Morada: %s\n", utilizador->morada);
			printf("Codigo-Postal: %s\n", utilizador->codico_postal);
			printf("Cidade: %s\n", utilizador->cidade);
			printf("Pais: %s\n", utilizador->pais);
            printf("\n*********************************************\n");

		}

	}
fclose(outfile);
}


void buscar_cidade(){
    char busca[15];
	busca[15]=0;



    verif_cidade(&busca);

    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "rb");



	printf("\n\n\nBuscar contato\n");


	while(fread(&utilizador,sizeof(parametros_formulario), 1, outfile)==1){



		if(strcmpi(busca,utilizador->cidade)==0){ // Comparar ambas
            printf("Nome: %s\n", utilizador->nome);
			printf("Numero: %s\n", utilizador->numero);
			printf("Morada: %s\n", utilizador->morada);
			printf("Codigo-Postal: %s\n", utilizador->codico_postal);
			printf("Cidade: %s\n", utilizador->cidade);
			printf("Pais: %s\n", utilizador->pais);
            printf("\n*********************************************\n");

		}

	}
fclose(outfile);
}


void buscar_pais(){
    char busca[15];
	busca[15]=0;



    verif_pais(&busca);

    FILE *outfile;
    outfile = fopen ("francisco_vicente.dat", "rb");



	printf("\n\n\nBuscar contato\n");


	while(fread(&utilizador,sizeof(parametros_formulario), 1, outfile)==1){



		if(strcmpi(busca,utilizador->pais)==0){ // Comparar ambas
            printf("Nome: %s\n", utilizador->nome);
			printf("Numero: %s\n", utilizador->numero);
			printf("Morada: %s\n", utilizador->morada);
			printf("Codigo-Postal: %s\n", utilizador->codico_postal);
			printf("Cidade: %s\n", utilizador->cidade);
			printf("Pais: %s\n", utilizador->pais);
            printf("\n*********************************************\n");

		}

	}
fclose(outfile);
}

void submenu(){
    printf("1. Nome\n");
    printf("2. Numero\n");
    printf("3. Morada\n");
    printf("4. Codigo_Postal\n");
    printf("5. Cidade\n");
    printf("6. Pais\n");
    printf("0. retornar ao menu\n\n");

    printf("Escolha por qual atributo deseja procurar:");


}

void about(){
    printf("\n Nome: Programa em c que representa uma agenda telefonica.\n");
    printf("\n Versão do Programa: 1.0\n");
    printf("\n Criado por: Francisco Vicente.\n");
    printf("\n Instituição: Instituto Superior Manuel Teixeira Gomes. \n");
    printf("\n Orientador do projeto: Prof.Francisco Melo Pereira. \n");
    printf("\n Objetivo do programa: Facilitar a organização dos contactos telefonicos para o utilizador. \n");
    printf("\n Instruções:\n\n O programa apresenta um menu principal em que o utilizador escolhe uma das opções de acordo com aquilo que deseja.\n\n Deverá seguir os passos que a opção escolhida apresenta.\n\n Para sair do programa pressiona o numero 0.\n");
    printf("\n Maximos: Nome(20 carateres), Numero(10 carateres), Morada(30 carateres),Codigo-Postal(10 carateres),Cidade(20carateres) e Pais(20 carateres)\n");
    printf("\n Data de criação: 01/05/2021. \n");
    printf("\n\n");
}

apaga_ficheiro()

{
  char  eleminar,  confirmacao;
  system("cls");

  FILE *outfile;
  outfile = fopen("francisco_vicente.dat","rb");


  if(outfile== NULL)
   {
     printf("Ficheiro ainda nao foi criado");
     getch();
     printf("\n\n");
    return menu;
   }
  fclose(outfile);

  printf("\nQuer apagar o fichero :\n S ou (N): ");
  fflush(stdin);

  eleminar = getche();
   eleminar= toupper( eleminar);

  switch( eleminar)
   {
    case 'S':
      printf("\n\nTem a certeza que quer apagar o fichero :\n S ou (N): ");
      fflush(stdin);

    confirmacao = getche();
    confirmacao = toupper( confirmacao);

      if( confirmacao == 'S')
       {
          remove ("francisco_vicente.dat");
          printf("\n\nFicheiro Eliminado com sucesso...\n\nRetornando ao menu...");
       }
      break;

    case 'N':
      printf("\n\nRetornando ao menu...");
      break;

    default:
      printf("\n\nOpcao invalida");
      break;
   }


}



void pesquisa_sequencial(){
    char caminho;
    int a=0;


    FILE *outfile;
    outfile = fopen("francisco_vicente.dat", "rb");

    if(outfile == NULL)
   {
     printf("Nao e possivel possivel abrir o ficheiro...");
     getch();
     exit(1);
   }

    while(fread(&utilizador, sizeof(struct parametros_formulario), 1,outfile)==1){
            printf("Nome: %s\n", utilizador->nome);
			printf("Numero: %s\n", utilizador->numero);
			printf("Morada: %s\n", utilizador->morada);
			printf("Codigo-Postal: %s\n", utilizador->codico_postal);
			printf("Cidade: %s\n", utilizador->cidade);
			printf("Pais: %s\n", utilizador->pais);
            printf("\n*********************************************\n");


        caminho = (char)getche();
        printf("%i", a);

        switch(caminho)
      {
        case 'a':
         if(a== 0)
          {
             fseek(outfile, 0*sizeof(parametros_formulario), SEEK_SET);
             a=0;

          }
         else
          {
             fseek(outfile, -2*sizeof(parametros_formulario), SEEK_CUR);
             printf("\nContacto anterior\n");
             a--;

          }break;

        case 'd':
         if(a < MAX)
          {
             fseek(outfile, 0*sizeof(parametros_formulario), SEEK_CUR);
             printf("\n\n\n\nConsulta seguinte\n\n\n\n");
             a++;

          }break;

         default :
         fseek(outfile, -1*sizeof(parametros_formulario), SEEK_CUR);
         system("cls");
         printf("\nDigite a tecla A ou S por favor...\n\n");
         break;
     }
   }
}


void number_eliminar(){
    char procurar[10];
    procurar[10] = 0;
    int apagar = 0;

    FILE *outfile, *ft;
    outfile = fopen("francisco_vicente.dat", "rb+");
    ft = fopen("temp.dat", "wb+");

    printf("\nIntroduza o numero do contacto que quer apagar: \n");
    scanf("%s", &procurar);


    while(fread(&utilizador, sizeof(parametros_formulario), 1, outfile) == 1){

        if(strcmpi(utilizador->numero, procurar) > 0){
            fwrite(&utilizador, sizeof(parametros_formulario),1, ft);
        }
        else if(strcmpi(utilizador->numero, procurar) == 0){
            apagar = 1;
        }
    }

    fclose(outfile);
    fclose(ft);


    if(apagar== 1){
        printf("\nContacto apagado\n");
        remove("francisco_vicente.dat");
        rename("temp.dat", "francisco_vicente.dat");
    }
    else{
        remove("temp.dat");
        printf("\nnao existe\n");
        printf("\nA sair...\n");
    }


    printf("\n");
    system("pause");
}



void modificar_registo(){
    int flag=0;
    char  pesquisa[50];

    FILE *outfile;
    outfile=fopen("francisco_vicente.dat","r+");

    if(outfile==NULL)
{
    printf("\n Dados de contacto ainda nao introduzidos. \n");
    exit(1);
}


printf("\n Insira o nome de contacto para modificar: \n");
verif_nome(pesquisa);

while(fread(&utilizador,sizeof(parametros_formulario),1,outfile)==1){
if(strcmp(utilizador->nome,pesquisa)==0){

printf("Nome: %s\n", utilizador->nome);
printf("Numero: %s\n", utilizador->numero);
printf("Morada: %s\n", utilizador->morada);
printf("Codigo-Postal: %s\n", utilizador->codico_postal);
printf("Cidade: %s\n", utilizador->cidade);
printf("Pais: %s\n", utilizador->pais);
printf("\n**\n");

verif_nome(utilizador->nome);
verif_numero(utilizador->numero);
verif_morada(utilizador->morada);
verif_postal(utilizador->codico_postal);
verif_cidade(utilizador->cidade);
verif_pais(utilizador->pais);

fseek(outfile,-sizeof(parametros_formulario),1);
fwrite(&utilizador,sizeof(parametros_formulario),1,outfile);
fclose(outfile);

}

}



}

