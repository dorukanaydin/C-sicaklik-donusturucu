#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Öncelikle çevrilecek sıcaklık birimini seçtiren ardından birimi çeviren program

int main()
{
   int islem;
   double cel,C;
   double fah,F;
   double kel,K;
   char secim;
   
   system("COLOR A");

   printf("1.Fahrenhayttan santigrata cevirmek\n");
   printf("2.Fahrenhayttan kelvine cevirmek\n");
   printf("3.Santigrattan fahrenhayta cevirmek\n");
   printf("4.Santigrattan kelvine cevirmek\n");
   printf("5.Kelvinden fahrenhayta cevirmek\n");
   printf("6.Kelvinden santigrata cevirmek\n");
   printf("\nBir islem seciniz:");
   scanf("%d",&islem);

   
   switch (islem)
   {
   case 1:
    
    printf("Cevrilmesini istediginiz fahrenhayt degerini giriniz: ");
    scanf("%lf",&fah);
   
    C = (fah - 32) / 1.8;
    
    printf("%.2lf fahrenhayt %.2lf santigrata esittir.",fah,C);
    break;
   
    case 2:
    
    printf("Cevrilmesini istediginiz fahrenhayt degerini giriniz: ");
    scanf("%lf",&fah);

    K = 0.56 * (fah - 32) + 273.15;

    printf("%.2lf fahrenhayt %.2lf kelvine esittir.",fah,K);
    break;

    case 3:

    printf("Cevrilmesini istediginiz santigrat degerini giriniz: ");
    scanf("%lf",&cel);

    F = (1.8 * cel) + 32;

    printf("%.2lf santigrat %.2lf fahrenhayta esittir.",cel,F);
    break;

    case 4:

    printf("Cevrilmesini istediginiz santigrat degerini giriniz: ");
    scanf("%lf",&cel);

    K = cel + 273.15;
    
    printf("%.2lf santigrat %.2lf kelvine esittir.",cel,K);
    break;

    case 5:

    printf("Cevrilmesini istediginiz kelvin degerini giriniz: ");
    scanf("%lf",&kel);

    F = 1.8 * (kel - 273.15) + 32;

    printf("%.2lf kelvin %.2lf fahrenhayta esittir.",kel,F);
    break;

    case 6:

    printf("Cevrilmesini istediginiz kelvin degerini giriniz: ");
    scanf("%lf",&kel);

    C = kel - 273.15;

    printf("%.2lf kelvin %.2lf santigrata esittir.",kel,C);
    break;

   }

printf("\nAna menuye donmek ister misiniz? (e:evet h:hayir) : ");
scanf("%c",&secim);
           
secim = getchar();

    if (secim == 'e')
       {
           return main();
       }
    else
        {
               exit(0);
        } 
}