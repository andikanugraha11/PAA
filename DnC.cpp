#include<stdio.h>
#include<conio.h>

int a[100];
int max,min;

void maxmin(int i, int j) {
    int max1,min1,mid;
    if(i == j) {
        max=min=a[i];
    }
    else if(i == j-1) {
        if(a[i] > a[j]) {
            max = a[i];
            min = a[j];
        }
        else {
            max = a[j];
            min = a[i];
        }
    } else {
        mid = (i+j)/2;
        maxmin(i, mid);
        max1 = max;
        min1 = min;
        maxmin(mid+1, j);
        if(max < max1) max = max1;
        if(min > min1) min = min1;
    }
}

int main(){
    int i, banyak;
    printf("\n\t\t\tMaximum Dengan Minimum\n\n");
    printf("Masukkan Banyak Angka: ");
    scanf("%i", &banyak);
    printf("\nMasukkan Angka-angkanya: \n");
    
    for(i=0; i<banyak; i++) {
        printf("Masukan angka ke- %i:", i+1);
        scanf("%i", &a[i]);
    }
    printf("\nAngka-angkanya adalah: \n");
    for(i=0; i<banyak; i++)
    {
        printf("%i ", a[i]);
    }
   
    maxmin(0, banyak-1);
    printf("\nMaksimum Angka: %i\n", max);
    printf("Minimum Angka: %i", min);
    getch();
    return 0;
}