#include <stdio.h>
// #include <iostream>
// #include <conio.h>
#define size 99
using namespace std;
int jumlah=0;
void sort(int[], int);
int main() 
{
    int x[size],i,uang,n,k,hasil[size];
    printf("Banyak pecahan yang akan ditukar : \n");
    scanf("%d", &n);
    printf("\n\nMasukan jenis pecahan yang tersedia :\n");
    
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&x[i]);
    }

    sort(x,n);

    printf("\nPecahan yang tersedia : \n");
    for (i=0;i<n;i++) {
        printf("%d",x[i]);
        printf("\n");
    }
    printf("\n");
    printf("\nMasukan Nilai yang dipecah : ");
    scanf("%d", &uang);
    printf("\n");
    for (i=0;i<n;i++) {
        hasil[i]    = uang/x[i];
        uang        = uang%x[i];
        k           = uang%x[i];
    }
    for (i=0;i<n;i++) {
        printf("Lembar %d", x[i]);
        printf("-an sebanyak : %d", hasil[i]);
        jumlah = jumlah + hasil[i];
        printf("\n \n");
    }
    
    printf("sisa %d",k);
    printf("\n \n");
    printf("jumlah pecahan minimum adalah %d",jumlah);
    // getch();
    return 0;
}

void sort(int item[], int banyak)
{
    int i,j,temp;
    for(i=0;i<banyak;i++)
    {
        for(j=0;j<banyak-1;j++)
        {
            if(item[j]<item[j+1])
            {
                temp = item[j];
                item[j]=item[j+1];
                item[j+1]=temp;
            }
        }
    }
}