int main()
{
    char str[20];
    int i, j, sayac, max = 0;
    int syc[20];

    printf("bir cümle giriniz:");
    gets(str);

    for (i = 0; i < 20; i++)
    {
        syc[i] = 0;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        sayac = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                sayac++;
            }
        }
        syc[i] = sayac;
    }

    for (i = 0; i < 20; i++)
    {
        if (max < syc[i])
        {
            max = syc[i];
        }
    }

    printf("cümlede en cok tekrar eden karakterin tekrar sayisi %d", max);

    return 0;
}
