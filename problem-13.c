// Cho mảng số nguyên A[] gồm N phần tử, hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10^9+7.
#include <stdio.h>
#define MOD 1000000007
#define ll long long 

int main(){
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    ll sumPlus = 0, sumPro = 1;
    for(int i = 0; i < n; i++){
        sumPlus = (sumPlus + a[i]) % MOD;
        sumPro = (sumPro * a[i]) % MOD;
    }
    printf("%lld\n%lld\n", sumPlus, sumPro);
    return 0;
}