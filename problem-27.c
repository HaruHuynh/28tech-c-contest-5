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
        dem[a[i]]++; // đếm số lần xuất hiện của a[i]
        if(a[i] > max) max = a[i];
    }
    for(int i = 0; i <= max; i++){
        if(dem[i] != 0){ // nếu dem[i] khác 0 nghĩa là i đã xuất hiện trong mảng
            printf("%d %d\n", i, dem[i]); // in ra giá trị i và tần suất dem[i]
        }
    }
    return 0;

    //Lưu ý: a[i] là giá trị trong mảng, không phải là chỉ số của mảng
    // dem[i] là số lần xuất hiện của giá trị i trong mảng
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