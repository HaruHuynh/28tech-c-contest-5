// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số A[i] , A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.
#include <stdio.h>
int countCouple(int a[], int n, int k){
    int count = 0;
    for(int i = 0; i < n - 1; i++){ 
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == k){
                count++;
            }
        }
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
    int k;
    scanf("%d", &k);
    printf("%d", countCouple(a, n, k));
    return 0;
}