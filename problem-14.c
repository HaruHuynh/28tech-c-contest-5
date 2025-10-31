// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.
#include <stdio.h>
#include <stdio.h>
#define ll long long

ll gcd(ll a, ll b){
    while(b != 0){
       ll temp = a % b;
       a = b;
       b = temp;
    }
    return a;
}

int main() {
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    ll result = a[0];
    for(int i = 1; i < n; i++){
        result = gcd(result, a[i]);
    }
    printf("%lld", result);
    return 0;
}