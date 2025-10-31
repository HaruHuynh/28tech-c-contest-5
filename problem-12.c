// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng.
// Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó.
#include <stdio.h>
#define ll long long

ll small(ll a[], int n){
    int min_value = a[0];
    int min_index = 0;
    for(int i = 1; i < n; i++){
        if(a[i] <= min_value){
            min_value = a[i];
            min_index = i;
        }
    }
    return min_index;
}

ll large(ll a[], int n){
    int max_value = a[0];
    int max_index = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > max_value){
            max_value = a[i];
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(int i = 0; i < n; i++){ 
        scanf("%lld", &a[i]);
    }
    printf("%lld %lld\n", small(a, n), large(a, n));
    return 0;
}

