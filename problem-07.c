// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int min = 1e9;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++){
            if(abs(a[i] - a[j]) < min){
                min = abs(a[i] - a[j]);
            }
        }
    }
    printf("%d", min);
    return 0;
}