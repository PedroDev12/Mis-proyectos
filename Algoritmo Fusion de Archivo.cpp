#include <stdio.h>
#include <iostream>
using namespace std;
main ()
{
    FILE *f_ent1, *f_ent2, *f_salida;
    int reg1, reg2, regs;

    f_ent1=fopen("C:\\Users\\Dell\\Documents\\Archivos\\entrada1.txt", "rt");
    f_ent2-fopen("C:\\Users\\Dell\\Documents\\Archivos\\entrada2.txt", "rt");
    f_salida=fopen("C:\\Users\\Dell\\Documents\\Archivos\\salida.txt", "wt");

    if(f_ent1!=NULL && f_ent2!=NULL && f_salida!=NULL)
    {
        fscanf(f_ent1,"%d\n",&reg1);
		fscanf(f_ent2,"%d\n",&reg2);
        
        while(!feof(f_ent1) && !feof(f_ent2))
        {
            if(reg1<=reg2)
            {
                fprintf(f_salida,"%d\n",reg1);
                fscanf(f_ent1, "%d\n", &reg1);
            }
            else
            {
                fprintf(f_salida,"%d\n",reg2);
				fscanf(f_ent2,"%d\n",&reg2);
            }
        }

        while(!feof(f_ent1))
        {
            fscanf(f_ent1,"%d\n",&reg1);
            fprintf(f_salida, "%d\n", reg1);
        }
        while(!feof(f_ent2))
        {
            fscanf(f_ent2, "%d\n", &reg2);
            fprintf(f_salida, "%d\n", reg2);
        }
        
        printf("\nMezcla realizada");
    }
    
    if(f_ent1!=NULL)
        fclose(f_ent1);
    
    if(f_ent2!=NULL)
        fclose(f_ent2);
    
    if(f_salida!=NULL)
        fclose(f_salida);
    
    getchar ();
}
