// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là đếm xem trong mảng có bao nhiêu số chẵn, bao nhiêu số lẻ, tổng các phần tử là số chẵn, tổng các phần tử là số lẻ.
#include <stdio.h>

int countEven(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int countOdd(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            count++;
        }
    } 
    return count;
}

int sumEven(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            sum += a[i];
        }
    }
    return sum;
}

int sumOdd(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d\n", countEven(a, n));
    printf("%d\n", countOdd(a, n));
    printf("%d\n", sumEven(a,n));
    printf("%d\n", sumOdd(a, n));

    // int chan = 0, le = 0, tongchan = 0, tongle = 0;
    // for(int i = 0; i < n; i++) {
    //     if(a[i] % 2 == 0) {
    //         ++chan;
    //         tongchan += a[i];
    //     }
    //     else {
    //         ++le;
    //         tongle += a[i];
    //     }
    // }
    // printf("%d\n%d\n%d\n%d\n", chan, tongchan, le, tongle);
    return 0;
}