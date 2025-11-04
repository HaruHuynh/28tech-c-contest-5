// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự xuất hiện trong mảng kèm theo tần suất của nó, mỗi giá trị chỉ liệt kê một lần.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++){
        int check = 1; // Kiểm tra xem a[i] đã được in chưa
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){ 
                check = 0; // Đã in rồi
                break; 
            }
        }
        if(check == 1){ // Chưa in
            int dem = 1; // Đếm tần suất xuất hiện của a[i]
            for(int j = i + 1; j < n; j++){
                if(a[i] == a[j]) dem++;
            }
            printf("%d %d\n", a[i], dem);
        }
    }
    return 0;
}