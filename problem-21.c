// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là chèn phần tử X vào vị trí K trong mảng sau đó in ra mảng. Lưu ý K bắt đầu từ 1
#include <stdio.h>

int main() {
    int n, x, k;
    scanf("%d%d%d", &n, &x, &k);
    int a[n + 1]; // Tăng kích thước mảng để chứa phần tử mới
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    k--; // Chuyển đổi k từ 1-based index sang 0-based index
    for(int i = n; i > k; i--){
        a[i] = a[i - 1]; // Dịch chuyển phần tử sang phải
    }
    a[k] = x; // Chèn phần tử x vào vị trí k
    n++; // Tăng kích thước mảng sau khi chèn
    for(int i = 0; i < n ; i++){ 
        printf("%d ", a[i]);
    }
    return 0;
}