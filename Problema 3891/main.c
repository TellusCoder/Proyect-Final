#include <stdio.h>
#include <stdlib.h>

int numeroPerfecto (int num)
{
    //Bloque declarativo de variable
    int i, cont ;
    // Bloque de instrucciones
     cont=0;
      for(i=1;i<num;i++)  
      {
          // Bloque de instrucciones
          if(num%i==0)
          {
              // Bloque de instrucciones
              cont+=i;     
          } 
      }        
   return cont ; 
}
int numeroPrimo (int n)
{
    //Bloque declarativo de variable
    int i, cont ;
    //Bloque de instrucciones
     cont = 0;
      for(i=1;i<=n;i++)
      {
    //Bloque de instrucciones
       if(n%i==0)
       {
           //Bloque de instrucciones
           cont++; 
       } 
        }
   return cont ; 


}

int main(int argc, char const *argv[])
{
    //Bloque declarativo de variable 
    int numero,parono, primo, result;
    //Bloque de instrucciones 
    printf( "\n Introduzca un n%cmero entero: ",163);
    scanf( "%d", &numero );
    
    parono = numero % 2 ;

    if (parono ==0 )
    {
        //Bloque de instrucciones
        printf("\nEl n%cmero %d es par \n",163, numero );
    }
    else
    {
        
        //Bloque de instrucciones
        printf("\nEl n%cmero %d es impar \n",163, numero );
    }

    //llamado de la funcion 
    primo =numeroPrimo(numero);
    if (primo == 2 )
    {
        //Bloque de instrucciones
        printf("El n%cmero %d es primo \n",163, numero );
    }
    else
    {
        
        //Bloque de instrucciones
        printf("El n%cmero %d no es primo  \n",163, numero );
    }

    //llamado de la funcion 
    result = numeroPerfecto(numero);
    if (result == numero)
    {
        //Bloque de instrucciones
        printf("El n%cmero %d es perfecto \n",163, numero );
    }
    
    else
    {
        //Bloque de instrucciones
        printf("El n%cmero %d no es perfecto \n",163, numero );
    }

    printf("\nFin del Programa\n\n ");
    system ("PAUSE");
    return 0;
}

