// Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng.
// Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó.
#include <stdio.h>
#define ll long long

// ll small(ll a[], int n){
//     int min_value = a[0];
//     int min_index = 0;
//     for(int i = 1; i < n; i++){
//         if(a[i] <= min_value){ // de lay vi tri cuoi cung neu co nhieu so nho nhat = nhau
//             min_value = a[i];
//             min_index = i;
//         }
//     }
//     return min_index;
// }

// ll large(ll a[], int n){
//     int max_value = a[0];
//     int max_index = 0;
//     for(int i = 1; i < n; i++){
//         if(a[i] > max_value){ // de lay vi tri dau tien neu co nhieu so lon nhat = nhau
//             max_value = a[i];
//             max_index = i;
//         }
//     }
//     return max_index;
// }

int main() {
    int n;
    scanf("%d", &n);
    ll a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    } 
    int min = 1e9, max = -1e9, min_pos, max_pos;
    for(int i = 0; i < n; i++) {
        if(a[i] <= min) {
            min = a[i];
            min_pos = i;
        }
        if(a[i] > max) {
            max = a[i];
            max_pos = i;
        }
    }
    printf("%d %d\n", min_pos, max_pos);
    // printf("%d %d\n", small(a, n), large(a, n));
    return 0;
}

