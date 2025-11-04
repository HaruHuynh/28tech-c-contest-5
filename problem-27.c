// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự từ nhỏ đến lớn kèm theo tần suất của nó
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
        dem[a[i]]++;
        if(a[i] > max) max = a[i];
    }
    for(int i = 0; i <= max; i++){
        if(dem[i] != 0){
            printf("%d %d\n", i, dem[i]);
        }
    }
    /*
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    // Sắp xếp mảng a theo thứ tự tăng dần
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int i = 0;
    while(i < n){
        int j = i + 1;
        while (j < n && a[j] == a[i]) j++;
        printf("%d %d\n", a[i], j - i);
        i = j;
    }
    */
    return 0;
}