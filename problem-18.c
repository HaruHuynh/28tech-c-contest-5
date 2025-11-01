// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1 số trái dấu với nó đứng cạnh nó.
#include <stdio.h>
#define ll long long 
int main() {
    int n;
    scanf("%d", &n);
    ll a[n];
    for(int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    for(int i = 0; i < n; i++) {
        if ((i > 0 && a[i] * a[i-1] < 0) || 
            (i < n-1 && a[i] * a[i+1] < 0)) {
            printf("%lld ", a[i]);
        }
    }
    return 0;
}
