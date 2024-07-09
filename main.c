#include <stdio.h>

void fibonacci(int n){
    int s1 = 0, s2 = 1, sonrakiSayi;
    printf("Fibonacci serisi: %d %d",s1,s2);

    for(int i = 3; i < n; i++){
        sonrakiSayi = s1 + s2;
        printf(" %d", sonrakiSayi);
        s1 = s2;
        s2 = sonrakiSayi;
    }
}

int main() {

    int n;

    printf("Fibonacci serisinin kac basamagini hesaplamak istiyorsunuz?\n");
    scanf("%d",&n);

    printf("Hesaplamak istediginiz basamak sayisi: %d\n",n);

    if(n<1){
        printf("Girdiginiz sayi 0'dan buyuk olmalidir.");
    }
    else if(n==1){
        printf("Girdiginiz sayi 1'den farkli olmalidir.");
    }
    else{
        fibonacci(n);
    }


    return 0;
}
