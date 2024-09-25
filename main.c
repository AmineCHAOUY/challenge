#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159


void Menu() {
    printf("===== Menu the CHALENGE \n");
    printf("Challenge 1 : \n");
    printf("Challenge 2:\n");
    printf("Challenge 3: \n");
    printf("Challenge 4: \n");
    printf("Challenge 5: \n");
    printf("Challenge 6: \n");
    printf("Challenge 7: \n");
    printf("Challenge 8: \n");
    printf("Challenge 9: \n");
    printf("Challenge 10: \n");
    printf("Challenge 11: \n");
    printf("Challenge 12: \n");
    printf("Challenge 13: \n");
    printf("14. Quitter\n");
    printf("Veuillez choisir une option: ");
}


void Challenge1() {
    int  age;
    char name,email ;
   char sexe ;
    printf("My name is:\t ");
    scanf("%s\n",&name);
    printf("Email: \t ");
    scanf("%s\n",&email);
    printf("Age: \t");
    scanf("%d \n",&age);
    printf("Sexe: \t");
    scanf("%d \n",&sexe);
}

void Challenge2() {
    float k,c,p=273.15;
printf("enter your number  \t");
scanf("%.2f \n",&c);
k= c + p;

printf("Total : %.2f",k);
}


void Challenge3 (){
  float km , yards ;
   printf("donne kilometres en yards");
   scanf("%f",&km);
   yards= km * 1093,61;
   printf("le resultat est :%f",yards);
}
void Challenge4 (){
  float vitasKm , ms ;
  printf("donne kilometres en m_par_s :");
  scanf("%.2f",&vitasKm);
  ms= vitasKm * 0,27778;
  printf("le resultat est : %.2f",ms);


}
void Challenge5 (){
     float c ;
    printf("entre la temperature en celius:");
    scanf("%f",&c);
    if (c<0){
        printf("l'etat du l'eau dans cette temperature est : solide");
    }else if (c<100){
        printf("l'etat du l'eau dans cette temperature est: liquide");
    }else {
        printf("l'etat du l'eau dans cette temperature est : gaz");
    }
}
void Challenge6 (){
   int a,b;
   printf("Enter Number A:\t");
   scanf("%d \n",&a);
   printf("Enter Number B:\t");
   scanf("%d \n",&b);
   printf("Total A+B: %d",a+b);
}
void Challenge7 (){
  float numero1, numero2, numero3;
    float resultas;
    float poid1 = 2.0, poid2 = 3.0, poid3 = 5.0;

    printf("\nEntrez le premier nombre: ");
    scanf("%f", &numero1);
    printf("\nEntrez le deuxieme nombre: ");
    scanf("%f", &numero2);
    printf("\nEntrez le troisieme nombre: ");
    scanf("%f", &numero3);



    resultas = ((numero1 * poid1  + numero2 * poid2 +  numero3 * poid3) / (poid1 + poid2 + poid3));



    printf("the result of this caluculation is : %.2f", resultas);
}
void Challenge8 (){
  float a , b ,c ,d;
    printf("enter number 1:");
    scanf("%f",&a);
    printf("enter number 2:");
    scanf("%f",&b);
    printf("enter number 3:");
    scanf("%f",&c);
    d = a*b*c*1/3;
    printf("Moyenne géométrique :  %f\t",d);
}
void Challenge9 (){
  float x,y,z;
    float x2,y2,z2;
    float t1,t2,t3;
    printf("enter la valeur X : ");
    scanf("%f",&x);
    printf("enter la valeur X2 : ");
    scanf("%f",&x2);
    t1=sqrt(pow(x2-x,2));
   // printf("%.2f \n" ,t1);
     printf("enter la valeur  Y: ");
    scanf("%f",&y);
    printf("enter la valeur Y2 : ");
    scanf("%f",&y2);
    t2=sqrt(pow(y2-y,2));
   // printf("%.2f \n" ,t2);
    printf("enter la valeur  Z: ");
    scanf("%f",&z);
    printf("enter la valeur 2 : ");
    scanf("%f",&z2);
    t3=sqrt(pow(z2-z,2));
   // printf("%.2f \n" ,t3);
    printf("%f ",t1+t2+t3);
}
void Challenge10 (){
 float valeur,r,t;
   printf("enter le rayon de la sphère ");
   scanf("%f",&r);
   t=pow(r,3);
   valeur = (0,4/0,3)*PI*t;
   printf("La valeur de Volume : %.2f",valeur);
}
void Challenge11 (){
  float Surface ,longueur , largeur;
   printf("enter la longueur :");
   scanf("%f",&longueur);
   printf("enter la largeur:");
   scanf("%f",&largeur);
   Surface = longueur*largeur;
   printf("Total SURFACE: %.2f",Surface);
}
void Challenge12 (){
  int  number , a , b , c ,d;
   printf("enter number :");
   scanf("%d",&number);
   a=(number/1000) ;
   b= (number / 100) % 10;
   c= (number / 10) % 10;
   d=number%10;
   printf ("L'inverse du nombre est : %d%d%d%d\n",a,b,c,d);

}
void Challenge13 (){
  void Binaire(int n)
{
    if (n > 1)
        {
        Binaire(n >> 1);
    }
    printf("%d", n & 1);
}

int main() {
    int numbre;

    printf("Entrez un numbre entier : ");
    scanf("%d", &numbre);

    printf("Valeur binaire : ");
    Binaire(numbre);
    printf("\n");

    printf("Valeur hexadécimale : %d \n", numbre);


}
void Exit();
}
int main() {
    int choix;

    do {
        Menu();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                Challenge1();
                break;
            case 2:
                Challenge2();
                break;
            case 3:
                Challenge3();
                break;
            case 4:
                Challenge4();
                break;
            case 5:
                Challenge5();
                break;
            case 6:
                Challenge6();
                break;
            case 7:
                Challenge7();
                break;
            case 8:
                Challenge8();
                break;
            case 9:
                Challenge9();
                break;
            case 10:
                Challenge10();
                break;
            case 11:
                Challenge11();
                break;
            case 12:
                Challenge12();
                break;
            case 13 :
                Challenge13();
                break;
            case 14 :
                printf("Quitter le programme...\n");
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }

        printf("\n");

    } while (choix != 14);

    return 0;
}
