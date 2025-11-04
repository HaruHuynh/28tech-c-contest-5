// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?
// Bai nay chi phu hop khi du lieu 0 <= A[i] <= 10^7

#include <stdio.h>
int dem[10000001]; // mảng đánh dấu các số đã xuất hiện
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int max = -1e9;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        // danh dau la a[i] da xuat hien
        dem[a[i]] = 1;
        if(a[i] > max) max = a[i];
    }
    int count = 0;
    for(int i = 0; i <= max; i++){
        if(dem[i] != 0) count++;
    }
    printf("%d", count);
    // int count = 0;
    // for(int i = 0; i < n; i++){
    //     int check = 1;
    //     for(int j = 0; j < i; j++){
    //         if(a[i] == a[j]){
    //             check = 0;
    //             break;
    //         }
    //     }
    //     if(check == 1){
    //         count++;
    //     }
    // }
    // printf("%d", count);
    return 0;
}
