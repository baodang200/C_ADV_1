#include <stdio.h>
#define MAX 10000
int arr[10000];

// 1a) Tinh tong
int tong(int n){
    int S = 0;
    int cnt = 1;
    
    while(cnt<=n){
        S += cnt;
        cnt++;
    }
    printf("Tong tu 1 den %d: %d \n", n, S);
    return 0;
}

// 1b) Tim gia tri lon nhat trong mang 
void nhap_mang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
}

int max(int a[], int n)
{
    int ln = a[0];
    for (int i = 1; i < n; i++)
        if (ln < a[i])
            ln = a[i];
    return ln;
}
 
int min(int a[], int n)
{
    int nn = a[0];
    for (int i = 1; i < n; i++)
        if (nn > a[i])
            nn = a[i];
    return nn;
}

/* void xuat(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\n", a[i]);  
    }
} */

void find(int a[], int n, int x)
{
    printf("\nNhap phan tu can tim: ");
    scanf("%d", &x);
    int vitri[MAX], cnt=0;
    for (int i=0; i<n; i++){
        if (a[i] == x){
            vitri[cnt] = i;
            i++;
            printf("Phan tu '%d' tai vi tri so: %d\n", x, vitri[cnt]);
        }
    }
}
