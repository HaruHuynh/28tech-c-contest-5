// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn : Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố
// Gợi ý :
// Đối với mỗi chỉ số i xây dựng 1 vòng for duyệt từ 0 tới i - 1 để tính tổng các số bên trái của i, 1 vòng for duyệt từ i + 1 tới N - 1 để tính tổng các phần tử nằm bên phải của i => Kiểm tra cả 2 tổng là số nguyên tố thì in ra chỉ số i, chú ý reset biến tổng trái và phải tại mỗi vòng lặp.

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j < i; j++){
            leftSum += a[j];
        }
        for(int j = i + 1; j < n; j++){
            rightSum += a[j];
        }
        if(isPrime(leftSum) && isPrime(rightSum)){
            printf("%d ", i);
        }
    }
    return 0;
}
