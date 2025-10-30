// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng của bạn có bao nhiêu số có cùng giá trị nhỏ nhất. Ví dụ mảng A = {1, 2, 1, 3, 5} thì số nhỏ nhất trong mảng là 1 xuất hiện 2 lần.
#include <stdio.h>

int count(int a[], int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            count++;
        }
    }
    return count;
}

int min(int a[], int n){
    int min = 1e9;
    for(int i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int mini = min(a, n);
    printf("%d", count(a, n , mini));
    return 0;
}
