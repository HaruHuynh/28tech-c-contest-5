// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là chèn phần tử X vào vị trí K trong mảng sau đó in ra mảng. Lưu ý K bắt đầu từ 1
#include <stdio.h>

int main() {
    int n, x, k;
    scanf("%d%d%d", &n, &x, &k);
    int a[n + 1]; // Tăng kích thước mảng để chứa phần tử mới
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    k--; // nghĩa là chèn vào đúng vị trí theo 1-based (VD: vị trí 5 theo 1-based → đúng giữa 4 và 5)
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