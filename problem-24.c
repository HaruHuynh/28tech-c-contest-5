// Cho mảng số nguyên A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm tổng của mọi dãy con liên tiếp cỡ K của mảng A[]
#include <stdio.h>
int main() {
    int n,k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int sum = 0;
    for(int i = 0; i < k; i++) sum += a[i]; // Tính tổng của dãy con đầu tiên
    printf("%d ", sum);

    for(int i = k; i < n; i++){
        sum = sum - a[i - k] + a[i];
        printf("%d ", sum);
    }
    return 0;
}
