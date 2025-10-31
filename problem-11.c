// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.
#include <stdio.h>

int checkFibo (long long n){
    if(n == 0 || n == 1) return 1;
    long long fn1 = 1, fn2 = 0;
    for(int i = 2; i <= 92; i++){ // 92 là số Fibonacci lớn nhất có thể biểu diễn bằng long long
        long long fn = fn1 + fn2;
        if(fn == n) return 1; //is Fibo number
        fn2 = fn1;
        fn1 = fn;
    }
    return 0;
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    int check = 0;
    for(int i = 0; i < n; i++){
        if(checkFibo(a[i])){
            printf("%lld ", a[i]);
            check = 1;
        }
    }
    if(!check) printf("NONE");
    return 0;
}