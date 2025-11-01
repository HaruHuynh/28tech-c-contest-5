// Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là liệt kê các phần tử trong mảng thỏa mãn nó lớn hơn cả phần tử đứng trước và phần tử đứng sau nó. 2 phần tử đầu tiên và cuối cùng của mảng không được coi là thỏa mãn.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];  // Sửa: dùng int thay vì ll (long long)
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Sửa: %d thay vì %lld
    }

    for(int i = 0; i < n; i++) {
        // Kiểm tra điều kiện: không phải phần tử đầu và cuối
        if (i > 0 && i < n - 1) {
            // Kiểm tra lớn hơn cả phần tử trước và sau
            if(a[i] > a[i - 1] && a[i] > a[i + 1]) {
                printf("%d ", a[i]);
            }
        } 
    }
    return 0;
}
