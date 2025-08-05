#include <stdio.h>
int main() {
    int n;
    int result=1;
    printf("Nhap 1 so nguyen duong bat ki:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        result=result*i;
    }
    printf("%d!=%d",n,result);
    return 0;
}