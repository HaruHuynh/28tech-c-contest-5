// Cho mảng số nguyên All gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lãy giá trị xuất hiện trước theo thứ tự trong mảng
// Input Format
// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
// Constraints
// 1<=N<=1000; 0<=A[]<=10^6;
// Output Format
// In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó
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
    int tanSuat = 0, res;
    for(int i = 0; i < n; i++){
        if(dem[a[i]] > tanSuat){ 
            tanSuat = dem[a[i]];
            res = a[i];
        }
    }
    printf("%d %d", res, tanSuat);
    return 0;
}