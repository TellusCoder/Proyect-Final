#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Bloque declarativo de variable 
    int edad, numeroDePulsaciones;
    char sex,resp; 

    do
    {
        printf ("\n\t\t  Pulsaciones inteligente\t\t\n ");

        //Bloque de Instrucciones
     printf("\n Ingrese Sexo (M/F): ");
     scanf("%s",& sex);
          
     if (sex =='F'|| sex =='f')
     {
         //Bloque de Instrucciones 
         printf("\n Ingrese Edad: ");
         scanf("%d",&edad);

         numeroDePulsaciones = (220 - edad)/10;
          printf ("\n El Numero de pulsaciones (220 - %d)/10 es: %d pulsaciones x segundo \n ",edad,numeroDePulsaciones);    
     }
     else if (sex == 'M' || sex == 'm')
     {
         //Bloque de Instrucciones
         printf("\n Ingrese Edad: ");
         scanf("%d",&edad);

         numeroDePulsaciones = (210 - edad)/10 ;
         printf ("\n El Numero de pulsaciones (210 - %d)/10 es: %d pulsaciones x segundo \n ",edad ,numeroDePulsaciones);
     }
     else
     {
          printf ("solo M (para MASCULINO) o F (para FEMENINO)\n");
     }
        edad = 0 ;
        printf ("Desea continuar en la aplicacion?, Si / No : ");
        scanf ("\t%s", &resp);
        
        system ("cls");  
     } while (resp == 's');

    printf ("\nFin del programa\n\n") ;

system ("PAUSE");
return 0;

}