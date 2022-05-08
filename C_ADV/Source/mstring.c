#include <stdio.h>

int compare(int Mang1[], int Mang2[])
{
    for(int i=0; i<10; i++){
        if(Mang1[i]!=Mang2[i]){
        return 0;
        }
        else{ 
        return 1;
        }
    }
    return 0;
}

void nhapvitrichen(int *k, int n) 
{
	*k = -1;
	while(*k < 0 || *k >= n) {
		printf("Nhap gia tri 0 <= k < %d", n);
		scanf("%d", k);
	}
}

