// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là in ra các phần tử là số chẵn ở chỉ số chẵn, nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".
#include <stdio.h>

int checkEven(int a[], int n){
    int found = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && a[i] % 2 == 0){
            printf("%d ", a[i]);
            found = 1;
        }
    }
    if(!found) {
        printf("NONE");
    }
    return found;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    checkEven(a, n);
    return 0;
}