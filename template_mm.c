#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
        
        char choice;

        printf("\n Halo!, Kamu mau pakai rumus yang mana hari ini?\n");
        printf("\n 1.Pythagoras \n 2.Jarak Kecepatan dan Waktu \n 3.Luas Segitiga \n");
        printf("\n Input : ");
        scanf("%c", &choice);

        system("cls");

        switch(choice){

            case '1': {

                int a;
                int b;

                printf("\nRUMUS PYHTAGORAS\n");

                printf("\nSilahkan masukkan nilai pertama: ");
                scanf("%d", &a);

                printf("Silahkan masukkan nilai kedua: ");
                scanf("%d", &b);
                
                float result = sqrt (a*a + b*b);
                printf("\nHasilnya adalah : %.2f", result);

                break;
            }
            case '2': {

            char input;

                printf("Kamu mau mencari apa?");
                printf("\n1.Jarak\n2.Kecepatan\n3.Waktu\n");
                printf("Input: ");
                getchar();
                scanf("%c", &input);

                system("cls");
                if(input == '1'){

                    int kecepatan;
                    int waktu;
                    int jarak;

                    printf("Berapa kecepatan kamu (Dalam Km/h)?: ");
                    scanf("%d", &kecepatan);
                    printf("Waktu yang sudah kamu lalui? (Dalam Jam): ");
                    scanf("%d", &waktu);

                    jarak = kecepatan * waktu;

                    printf("Jarak yang sudah kamu lalui adalah : %dKm", jarak);
                }
                else if(input == '2'){

                    int jarak;
                    int waktu;

                    printf("Berapa Km jarak yang sudah kamu lalui?: ");
                    scanf("%d", &jarak);
                    printf("Berapa jam kamu menempuh jarak tersebut?: ");
                    scanf("%d", &waktu);

                    float kecepatan;
                    kecepatan = jarak / waktu;
                
                    printf("Kecepatan rata rata kamu adalah : %.2f", kecepatan);
                }
            }
        }
        
        
        system("pause");
 
    return 0;

}