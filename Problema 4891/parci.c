#include <stdio.h>
#include<stdlib.h>
#include <time.h>
//prototipo de funcion 
void sumamat (int A [5][3],int  B[5][3], int C[5][3],int x ,int y);
void restamatriz(int A [5][3],int  B[5][3], int C[5][3],int x ,int y);
void multmatri(int A [5][3],int  B[5][3], int C[5][3],int x ,int y);

int main()
{
    //Bloque declarativo de variables 
    int arr1 [5], arr2 [5], menu, x=0,y=0, A [5][3], B [5][3],C [5][3] ;
    char resp ;
    //Bloque de instrucciones
    do
    {
        // Bloque de instrucciones
        printf ("\n\t\t MEN%c \t\t\n\n",233);
        printf ("\n 1 - Suma \n 2 - resta \n 3 - multiplicar \n 4 - aplicar todas");
        //Escoger una opcion del menu  
        printf ("\n Elija una opci%cn : ",162);
        scanf ("%d", &menu);
        printf ("\n");
        if (menu >= 1  && menu <= 4)
        {
            //Bloque de instrucciones
             //para calcular aletoria los numeros para los arreglos 
            srand ( time ( NULL ) );                
            switch (menu)  
            {
            case  1:
                //Bloque de instrucciones
                     for ( x = 0; x < 5; x++) // columnas
                         { 
                             //Bloque de instrucciones
                             arr1 [x] = 1+rand()%9;
                              //cargar  los  numeros al arreglos 2
                             printf( "\nx[%d] = %d\n", x, arr1[x]);
                         }
                         for ( x = 0; x < 5; x++) //columnas
                         {
                             //Bloque de instrucciones
                              arr2  [x] = 1+rand()%9; 
                              //cargar  los  numeros al arreglos 2
                              printf( "\nx[%d] = %d\n", x, arr2[x]);
                         }
                         printf ("\n Arreglos \n");         
                
                         for ( x = 0; x <5; x++) //columnas de 5 elemenetos 
                         {
                            //Bloque de instrucciones
                            printf("\n %i %i = %d  \n", arr1 [x], arr2 [x], arr1 [x] + arr2 [x] ); 
                         } 
                break;
            case 2 :
                         //Bloque de instrucciones
                        for ( x = 0; x < 5; x++) // columnas
                         { 
                             //Bloque de instrucciones
                             arr1 [x] = 1+rand()%9;
                              //cargar  los  numeros al arreglos 2
                             printf( "\nx[%d] = %d\n", x, arr1[x]);
                         }
                         for ( x = 0; x < 5; x++) //columnas
                         {
                             //Bloque de instrucciones
                              arr2  [x] = 1+rand()%9; 
                              //cargar  los  numeros al arreglos 2
                              printf( "\nx[%d] = %d\n", x, arr2[x]);
                         }  
                           printf ("\n Arreglos \n");      
                         for (x = 0;  x <5; x++)
                         {
                             //Bloque de instrucciones
                             printf("\n %i %i = %d  \n", arr1 [x], arr2 [x], arr1 [x] - arr2 [x] );
                         }               
            break;
            case 3:
                        //Bloque de instrucciones
                             for ( x = 0; x < 5; x++) // columnas
                         { 
                             //Bloque de instrucciones
                             arr1 [x] = 1+rand()%9;
                              //cargar  los  numeros al arreglos 2
                             printf( "\nx[%d] = %d\n", x, arr1[x]);
                         }
                         for ( x = 0; x < 5; x++) //columnas
                         {
                             //Bloque de instrucciones
                              arr2  [x] = 1+rand()%9; 
                              //cargar  los  numeros al arreglos 2
                              printf( "\nx[%d] = %d\n", x, arr2[x]);
                         }   
                             printf ("\n Arreglos \n");   
                         for (x = 0; x < 5; x++)
                         {
                             //Bloque de instrucciones
                             printf("\n %i %i = %d  \n", arr1 [x], arr2 [x], arr1 [x] * arr2 [x] );
                         }              
            break;
            case 4:
                         //Bloque de instrucciones
                        // para calcular aletoria los numero para la matriz
                     for ( x = 0; x < 5; x++) // filas
                    { 
                     //Bloque de instrucciones
                       for ( y = 0; y < 3; y++) //columnas
                    {
                      //Bloque de instrucciones
                        A [x] [y] = 1+rand()%9;
                        printf("\n Todas [%d][%d]: %d",x,y, A [x][y] );
                     }
                    }
                     for ( x = 0; x < 5; x++) // filas
                      { 
                        //Bloque de instrucciones
                       for ( y = 0; y < 3; y++) //columnas
                     {
                       //Bloque de instrucciones
                       B [x] [y] = 1+rand()%9;
                       printf("\n Todas [%d][%d]: %d",x,y, B [x][y] );
                        }
                      }

                         printf ("\n\n Matrices \n ");
                         sumamat (A,B,C,x,y);
                         printf ("\n Resta  de matrices\n\n ");
                         restamatriz (A,B,C,x,y);
                         printf ("\n multiplicaci%cn   de matrices \n\n ",162);
                         multmatri(A,B,C,x,y);
                         printf ("\n");;
                         break ;
            default:
                break;
          }
        }
        printf ("\n\n Desea continuar en la aplicacion?, Si / No : ");
        scanf ("\t%s", &resp);
        system ("cls");
        
    } while (resp == 's');

    printf("\nFin del Programa\n\n"); 
    system ("PAUSE");
         return 0;
}
void sumamat (int A [5][3],int  B[5][3], int C[5][3],int x ,int y )
{
    //Bloque de instrucciones
                    //construccion de la matrices 5*3
                    for(x=0;x<5;x++)
                    {//Bloque de instrucciones
                        for(y=0;y<3;y++)
                        {//Bloque de instrucciones
                            A [x] [y];
                            }
                        }
                        for(x=0;x<5;x++)
                        {//Bloque de instrucciones
                        for(y=0;y<3;y++)
                        {//Bloque de instrucciones
                            B [x] [y] ;
                            C [x][y]=A [x][y] + B [x][y];
                            }
                        }
                        printf("\n\n  Matriz A\n\n");
                        for(x=0;x<5;x++)
                        {//Bloque de instrucciones
                        for(y=0;y<3;y++)
                        {//Bloque de instrucciones
                            printf(" %d\t",A[x] [y]);
                            }
                             printf("\n");
                          }
                          printf("\n\n  Matriz B\n\n");
                          for(x=0;x<5;x++)
                          {//Bloque de instrucciones
                              for(y=0;y<3;y++)
                              {//Bloque de instrucciones
                              printf(" %d\t",B[x] [y]);
                              }
                              printf("\n");
                            }
                            printf("\n Suma de  Matriz \n\n");
                            for(x=0;x<5;x++)
                            {//Bloque de instrucciones
                            for(y=0;y<3;y++)
                            {
                                printf(" %d\t",C[x] [y]);
                                }  
                                printf("\n"); 
                                }
                            }
void restamatriz( int A [5][3],int  B[5][3], int C[5][3],int x ,int y )
{
        //Bloque de instrucciones
                    for(x=0;x<5;x++)
                    {//Bloque de instrucciones
                        for(y=0;y<3;y++)
                        {//Bloque de instrucciones
                            A [x] [y];
                            }
                        }
                        for(x=0;x<5;x++)
                        {//Bloque de instrucciones
                        for(y=0;y<3;y++)
                        {//Bloque de instrucciones
                            B [x] [y] ;
                            C[x][y]=A[x][y] - B[x][y];
                            }
                        }
                            for(x=0;x<5;x++)
                            {//Bloque de instrucciones
                            for(y=0;y<3;y++)
                            {
                                printf(" %d\t",C[x] [y]);
                                }  
                                printf("\n"); 
                                }
                            }    
void multmatri(int A [5][3],int  B[5][3], int C[5][3],int x ,int y )
{
        //Bloque de instrucciones
                    for(x=0;x<5;x++)
                    {//Bloque de instrucciones
                        for(y=0;y<3;y++)
                        {//Bloque de instrucciones
                            A [x] [y];
                            }
                        }
                        for(x=0;x<5;x++)
                        {//Bloque de instrucciones
                        for(y=0;y<3;y++)
                        {//Bloque de instrucciones
                            B [x] [y] ;
                            C[x][y]=A[x][y] * B[x][y];
                            }
                        }
                            for(x=0;x<5;x++)
                            {//Bloque de instrucciones
                            for(y=0;y<3;y++)
                            {
                                printf(" %d\t",C[x] [y]);
                                }  
                                printf("\n"); 
                                }
                            }
    