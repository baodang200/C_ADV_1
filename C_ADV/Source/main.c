#include <stdio.h>
#include <math.h>
#include "..\Header\Calc.h"
#include "..\Header\Convert.h"
#include "..\Header\mstring.h"

#define MAX 100

int main(int argc, char const *argv[])
{
    //Calc
    int a[MAX];
    int n,x;
    printf("\nNhap so phan tu mang n = ");
    scanf("%d", &n);
    tong(n);
    nhap_mang(a, n);
    printf("max = %d\n", max(a, n));
    printf("min = %d\n", min(a, n));
    find(a,n,x);  

    //Convert
    int DEC;
    do{
        printf("\nNhap so thap phan a = ");
        scanf("%d", &DEC);
    }while(DEC<0);
    DEC_HEX(DEC);
    printf("Binary of 'a' is: %d\n", DEC_BIN(DEC)); 

    //mstring
    int tam;
    int Mang1[] = {0,0,1,2,3,4,5,6,7,8};
    int Mang2[] = {0,0,1,2,3,4,5,6,7,8};
    if(compare(Mang1, Mang2) == 1){
        printf("\n2 mang giong nhau");
    }
    else printf("\n2 mang khac nhau");
    return 0;

    
}