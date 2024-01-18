#include<stdio.h>
int main(){
    int a;
    printf("Enter Numer");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        printf("%d\n",a*i);
    }
    return 0;
}