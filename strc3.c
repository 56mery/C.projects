//öğrenci adını, derslere göre notlarını alan ve ekrana yazdıran program

#include <stdio.h>
struct ders
{
    int lc;
    int mat1;
    int fizik1;
    int pd;
    int bmg;
};

struct ogr
{
    char ad[20];
    char soyad[20];
    struct ders ders;
} ogr[7];

int main()
{
    int i;

    for (i = 0; i < 7; ++i)
    {
        printf("%d. ogrencinin adini giriniz:", i + 1);
        scanf("%s", ogr[i].ad);
        printf("%d ogrencinin soyadini giriniz:", i + 1);
        scanf("%s", ogr[i].soyad);
        printf("%d. ogrencinin lineer cebir notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.lc);
        printf("%d. ogrencinin calculus notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.mat1);
        printf("%d. ogrencinin fizik notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.fizik1);
        printf("%d. ogrencinin programlama notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.pd);
        printf("%d. ogrencinin bilgisayara giris notunu giriniz:", i + 1);
        scanf("%d", &ogr[i].ders.bmg);
    }

    for (i = 0; i < 7; i++)
    {
        puts(ogr[i].ad);
        puts(ogr[i].soyad);
        printf("linner notu:%d\n", ogr[i].ders.lc);
        printf("mat1 notu:%d\n", ogr[i].ders.mat1);
        printf("fizik1 notu:%d\n", ogr[i].ders.fizik1);
        printf("programlamanotu:%d\n", ogr[i].ders.pd);
        printf("bmg notu:%d\n\n\n", ogr[i].ders.bmg);
    }

    return 0;
}
