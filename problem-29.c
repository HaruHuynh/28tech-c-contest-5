// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy số có giá trị nhỏ nhất
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
        dem[a[i]]++; // đếm số lần xuất hiện của a[i]
        if(a[i] > max) max = a[i];
    }
    int tanSuat = 0, res;
    for(int i = 0; i <= max; i++){
        if(dem[i] > tanSuat){ // tìm tần suất lớn nhất
            tanSuat = dem[i];
            res = i; // lưu giá trị tương ứng với tần suất lớn nhất
        }
    }
    printf("%d %d", res, tanSuat);
    // for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    // int maxCount = 0;
    // int maxValue = 0;
    // for(int i = 0; i < n; i++){
    //     int count = 0;
    //     for(int j = 0; j < n; j++){
    //         if(a[i] == a[j]) count++;
    //     }
    //     if(count > maxCount || count == maxCount && a[i] < maxValue){
    //         maxCount = count;
    //         maxValue = a[i];
    //     }        
    // }
    // printf("%d %d", maxValue, maxCount);
    return 0;
}