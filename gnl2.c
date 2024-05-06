//sonsuz dongüde 0<x<100 arası en küçük A3 asal sayisi ve en büyük A3 asal sayisini bulan ve toplayan program

#include <stdio.h>

int main()
{
    int a, x, sayi, mindeger = 0, maxdeger = 0, toplam = 0;
    for (a = 1; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else
            {
                mindeger = sayi;
                printf("mindeger: %d \n", mindeger);
                goto otherLoop;
            }
        }
    }

otherLoop:
    for (a = 2; a < 10; a++)
    {
        sayi = (a * 10) + 03;

        for (x = 3; x < sayi; x++)
        {
            if (sayi % x == 0)
                break;

            else
            {
                maxdeger = sayi;

                if (maxdeger > 80)
                {
                    printf("max değer: %d\n", maxdeger);
                    toplam = maxdeger + mindeger;
                    printf("toplam: %d\n", toplam);
                    break;
                }

                else
                    continue;
            }
        }
    }
    return 0;
}
