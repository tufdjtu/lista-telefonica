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
                system("cls");
                printf("Nome: ");

                if ((numero_utilizador >= 65) && (numero_utilizador<=90 )||( numero_utilizador>= 97) && ( numero_utilizador<= 122)|| (numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;
                        printf("%s",vetor_armazenar);


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

                    printf("%s",vetor_armazenar);
                    printf("\n");
                    break;

                }

                else
                {
                    i--;
                   if(vetor_armazenar[i]!=NULL){
                    printf("%s",vetor_armazenar);
                 }


                }

            }

    strcpy(nome,vetor_armazenar);
}


void verif_numero(char* numero){

           int  i=0, b;
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
               system("cls");
               printf("Numero: ");

                if ((numero_utilizador >=48) && (numero_utilizador<=57)){
                        vetor_armazenar[i] = (char) numero_utilizador;
                        printf("%s",vetor_armazenar);


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
                   printf("%s",vetor_armazenar);
                   printf("\n");
                    break;

                }

                else
                {
                    i--;
                   if(vetor_armazenar[i]!=NULL){
                    printf("%s",vetor_armazenar);
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
                system("cls");
                printf("Morada: ");

                if ((numero_utilizador >= 33) && (numero_utilizador<=255 )||(numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;
                         printf("%s",vetor_armazenar);


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
                   printf("%s",vetor_armazenar);
                   printf("\n");
                    break;

                }

                else
                {
                    i--;
                    if(vetor_armazenar[i]!=NULL){
                    printf("%s",vetor_armazenar);
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
                system("cls");
                printf("Código-Postal: ");

                if ((numero_utilizador >=48) && (numero_utilizador<=57)||(numero_utilizador==45)){
                        vetor_armazenar[i] = (char) numero_utilizador;
                         printf("%s",vetor_armazenar);


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

                   printf("%s",vetor_armazenar);
                   printf("\n");
                    break;

                }

                else
                {
                    i--;
                   if(vetor_armazenar[i]!=NULL){
                    printf("%s",vetor_armazenar);
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
                system("cls");
                printf("Cidade: ");

                if ((numero_utilizador >= 65) && (numero_utilizador<=90 )||( numero_utilizador>= 97) && ( numero_utilizador<= 122)|| (numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;
                         printf("%s",vetor_armazenar);


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

                   printf("%s",vetor_armazenar);
                   printf("\n");
                    break;

                }

                else
                {


                    i--;
                   if(vetor_armazenar[i]!=NULL){
                    printf("%s",vetor_armazenar);
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
                system("cls");
                printf("Pais: ");


                if ((numero_utilizador >= 65) && (numero_utilizador<=90 )||( numero_utilizador>= 97) && ( numero_utilizador<= 122)|| (numero_utilizador==32)){
                        vetor_armazenar[i] = (char) numero_utilizador;
                        printf("%s",vetor_armazenar);

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

                   printf("%s",vetor_armazenar);

                    break;

                }

                else
                {
                    i--;
                   if(vetor_armazenar[i]!=NULL){
                    printf("%s",vetor_armazenar);
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
    printf("\n Data de criação: 01/05/2021. \n");
    printf("\n\n");
}

 void apaga_ficheiro()

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
            printf("\n\n\n\t\tUtilize a <-contacto anterior ou d->contacto seguinte.\n\n");



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
     system("cls");
   }
    fclose(outfile);
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



void modificar_nome(){
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


verif_nome(utilizador->nome);

fseek(outfile,-sizeof(parametros_formulario),1);
fwrite(&utilizador,sizeof(parametros_formulario),1,outfile);
fclose(outfile);

}

}



}


void modificar_numero(){
    int flag=0;
    char  pesquisa[50];

    FILE *outfile;
    outfile=fopen("francisco_vicente.dat","r+");

    if(outfile==NULL)
{
    printf("\n Dados de contacto ainda nao introduzidos. \n");
    exit(1);
}


printf("\n Insira o numero de contacto para modificar: \n");
verif_numero(pesquisa);

while(fread(&utilizador,sizeof(parametros_formulario),1,outfile)==1){
if(strcmp(utilizador->numero,pesquisa)==0){

printf("Numero: %s\n", utilizador->numero);


verif_numero(utilizador->numero);

fseek(outfile,-sizeof(parametros_formulario),1);
fwrite(&utilizador,sizeof(parametros_formulario),1,outfile);
fclose(outfile);

}

}



}


void modificar_morada(){
    int flag=0;
    char  pesquisa[50];

    FILE *outfile;
    outfile=fopen("francisco_vicente.dat","r+");

    if(outfile==NULL)
{
    printf("\n Dados de contacto ainda nao introduzidos. \n");
    exit(1);
}


printf("\n Insira a morada de contacto para modificar: \n");
verif_morada(pesquisa);

while(fread(&utilizador,sizeof(parametros_formulario),1,outfile)==1){
if(strcmp(utilizador->morada,pesquisa)==0){

printf("Morada: %s\n", utilizador->morada);


verif_morada(utilizador->morada);

fseek(outfile,-sizeof(parametros_formulario),1);
fwrite(&utilizador,sizeof(parametros_formulario),1,outfile);
fclose(outfile);

}

}



}




void modificar_postal(){
    int flag=0;
    char  pesquisa[50];

    FILE *outfile;
    outfile=fopen("francisco_vicente.dat","r+");

    if(outfile==NULL)
{
    printf("\n Dados de contacto ainda nao introduzidos. \n");
    exit(1);
}


printf("\n Insira o codigo-postal de contacto para modificar: \n");
verif_postal(pesquisa);

while(fread(&utilizador,sizeof(parametros_formulario),1,outfile)==1){
if(strcmp(utilizador->codico_postal,pesquisa)==0){

printf("Codigo-postal: %s\n", utilizador->codico_postal);


verif_postal(utilizador->codico_postal);

fseek(outfile,-sizeof(parametros_formulario),1);
fwrite(&utilizador,sizeof(parametros_formulario),1,outfile);
fclose(outfile);

}

}



}



void modificar_cidade(){
    int flag=0;
    char  pesquisa[50];

    FILE *outfile;
    outfile=fopen("francisco_vicente.dat","r+");

    if(outfile==NULL)
{
    printf("\n Dados de contacto ainda nao introduzidos. \n");
    exit(1);
}



verif_cidade(pesquisa);

while(fread(&utilizador,sizeof(parametros_formulario),1,outfile)==1){
if(strcmp(utilizador->cidade,pesquisa)==0){

printf("Cidade: %s\n", utilizador->cidade);


verif_cidade(utilizador->cidade);

fseek(outfile,-sizeof(parametros_formulario),1);
fwrite(&utilizador,sizeof(parametros_formulario),1,outfile);
fclose(outfile);

}

}



}




void modificar_pais(){
    int flag=0;
    char  pesquisa[50];

    FILE *outfile;
    outfile=fopen("francisco_vicente.dat","r+");

    if(outfile==NULL)
{
    printf("\n Dados de contacto ainda nao introduzidos. \n");
    exit(1);
}


printf("\n Insira o Pais do contacto para modificar: \n");
verif_pais(pesquisa);

while(fread(&utilizador,sizeof(parametros_formulario),1,outfile)==1){
if(strcmp(utilizador->pais,pesquisa)==0){

printf("Pais: %s\n", utilizador->pais);


verif_pais(utilizador->pais);

fseek(outfile,-sizeof(parametros_formulario),1);
fwrite(&utilizador,sizeof(parametros_formulario),1,outfile);
fclose(outfile);

}

}



}







void sub_menu2(){
    int escolha;
    printf("1. Nome\n");
    printf("2. Numero\n");
    printf("3. Morada\n");
    printf("4. Codigo_Postal\n");
    printf("5. Cidade\n");
    printf("6. Pais\n");
    printf("0. retornar ao menu\n\n");

    printf("Escolha por qual atributo deseja procurar:");
    scanf("%i",&escolha);

    switch(escolha){

        case 1:
         modificar_nome();
        break;

        case 2:
         modificar_numero();
        break;


        case 3:
            modificar_morada();
        break;

        case 4:
            modificar_postal();
        break;

        case 5:
         modificar_cidade();
        break;

        case 6:
           modificar_pais();
        break;

        default:
              printf("insira uma opcao valida!!\n");
        break;
    }


}
