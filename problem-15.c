// Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau
#include <stdio.h>
#define ll long long 

int main() {
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    ll max1 = -1e9;
    ll max2 = -1e9;
    for(int i = 0; i < n; i++){
        if(a[i] > max1){
            max2 = max1;
            max1 = a[i];
        }else if(a[i] > max2){
            max2 = a[i];
        }
    }
    printf("%lld %lld\n", max1, max2);
    return 0;
}