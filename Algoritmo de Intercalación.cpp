#include <iostream>
using namespace std;

public static void burbuja(int[] vector, String[] vector2, String[] vector3)
{
    for (int i = 0; i < vector.length - 1; i++)
    {
        for (int j = 0; j < vector.length - i - 1; j++)
        {

            if (vec[j] > vec[j + 1])
            {
                // Se ordena el vector de enteros
                int auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;

                // Se ordena el vector de cadenas
                String auxiliar = vector2[i];
                vector2[i] = vector2[j];
                vector2[j] = auxiliar;

                // Se ordena el segundo vector de cadenas
                auxiliar = vector3[i];
                vector3[i] = vector3[j];
                vector3[j] = auxiliar;
            }
        }
    }
}
