// Cho mảng số nguyên A[] gồm N phần tử và số nguyên X , hãy đếm xem trong mảng có bao nhiêu số lớn hơn X và bao nhiêu số nhỏ hơn X.
#include <stdio.h>

int countMin(int a[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < x)
        count++;
    }
    return count; 
}

int countMax(int a[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > x)
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    printf("%d\n", countMin(a, n, x));
    printf("%d\n", countMax(a, n, x));

    /*
    int lon = 0, nho = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > x) {
            ++lon;
        }
        else if(a[i] < x) {
            ++nho;
        }
    }
    printf("%d\n%d", nho, lon);
    */
    return 0;
}

