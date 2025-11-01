// Cho mảng số nguyên A[] gồm N phần tử, hãy lật ngược mảng A[] và in ra kết quả
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int l = 0, r = n - 1;
    while(l <= r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l; --r;
    }
    // for(int i = 0; i < n/2; i++){
    //     int temp = a[i];
    //     a[i] = a[n - 1 - i];
    //     a[n - 1 - i] = temp;
    // }
    
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
