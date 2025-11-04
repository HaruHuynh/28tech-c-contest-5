// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    int count = 0;
    for(int i = 0; i < n; i++){
        int check = 1;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                check = 0;
                break;
            }
        }
        if(check == 1){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
