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
                system("cls");
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

                sub_menu2();
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




