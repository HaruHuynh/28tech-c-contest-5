/* Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất.
Ví dụ : mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.
Gợi ý : Đưa những số nhỏ về tập có ít phần tử, những số lớn về tập có nhiều phần tử thì độ lệch sẽ lớn nhất.
Đầu vào
Dòng đầu tiên là 2 số N và K.
Dòng thứ 2 là N số trong mảng A

Giới hạn
1≤ K < N ≤ 10^5
0 ≤ A[i] ≤ 10^7

Đầu ra
In ra hiệu lớn nhất có thể.
*/

#include <stdio.h>
#include <stdlib.h> 

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    qsort(a, n, sizeof(int), compare);
    long long sumK = 0;
    for(int i = 0; i < k; i++){
        sumK += a[i];
    }
    long long res1 = (sum - sumK) - sumK;
    long long res2 = sumK - (sum - sumK);
    if(res1 > res2) printf("%lld", res1);
    else printf("%lld", res2);
    return 0;
}



