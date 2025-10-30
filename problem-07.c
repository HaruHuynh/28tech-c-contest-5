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
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            int diff = abs(a[i] - a[j]);
            if(diff < min){
                min = diff;
            }
        }
    }
    printf("%d", min);
    return 0;
}