// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự từ nhỏ đến lớn kèm theo tần suất của nó
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
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
    // Đếm tần suất và in kết quả
    int i = 0;
    while(i < n){
        int j = i + 1;
        while (j < n && a[j] == a[i]) j++;
        printf("%d %d\n", a[i], j - i);
        i = j; // Cập nhật i đến vị trí tiếp theo
    }
    return 0;
}