// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.
#include <stdio.h>
#include <math.h>
 //0=>92
 #define ll long long
 ll F[100]; // luu cai cac so fibonacci tu thu 0 toi thu 92

 void ktao() {
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; i++) {
        F[i] = F[i - 1] + F[i - 2];

    }
 }

 int check(ll n){
    for(int i = 0; i <= 92; i++) {
        if(F[i] == n) return 1;
    }
    return 0;
 }

// int checkFibo (long long n){
//     if(n == 0 || n == 1) return 1;
//     long long fn1 = 1, fn2 = 0;
//     for(int i = 2; i <= 92; i++){ // 92 là số Fibonacci lớn nhất có thể biểu diễn bằng long long
//         long long fn = fn1 + fn2;
//         if(fn == n) return 1; //is Fibo number
//         fn2 = fn1;
//         fn1 = fn;
//     }
//     return 0;
// }

int main() {
    ktao();
    int n;
    scanf("%d", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    // int check = 0;
    int ok = 0;
    for(int i = 0; i < n; i++){
        if(check(a[i])){
            printf("%lld ", a[i]);
            ok = 1;
        }
        // if(checkFibo(a[i])){
        //     printf("%lld ", a[i]);
        //     check = 1;
        // }
    }
    if(!ok) printf("NONE");
    return 0;
}