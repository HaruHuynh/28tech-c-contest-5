// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là xây dựng mảng F cũng có N phần tử trong đó F[0] = A[0] và F[i] = F[i - 1] + A[i] với mọi i >= 1. Như vậy bạn thử nghĩ xem F[i] lưu giá trị gì?
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int f[n]; // Mảng F cần xây dựng
    f[0] = a[0]; // Khởi tạo phần tử đầu tiên của mảng F
    for(int i = 1; i < n; i++){
        f[i] = f[i - 1] + a[i]; // Tính F[i] dựa trên F[i-1] và A[i]    
    }
    for(int i = 0; i < n; i++){
        printf("%d ", f[i]);
    }
    return 0;
}