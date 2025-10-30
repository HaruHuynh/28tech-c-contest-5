// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính trung bình cộng của các số là số nguyên tố trong dãy. Dữ liệu đảm bảo có ít nhất 1 phần tử là số nguyên tố trong dãy.
#include <stdio.h>
#include <math.h>
int isPrime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

double avePrime(int a[], int n){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
            sum += a[i];
            count++;
        }
    }
    return (double) sum / count;
}

int main(){
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%.3lf\n", avePrime(a, n));
    return 0;
}