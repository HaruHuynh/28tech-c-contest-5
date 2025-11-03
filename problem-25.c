// Cho mảng số nguyên A[] có không quá 10000 phần tử. Hãy xác định xem mảng là mảng chẵn hay mảng lẻ, mảng chẵn được định nghĩa là mảng mà số lượng số chẵn nhiều hơn số lượng số lẻ, ngược lại. Trong trường hợp số lượng số chẵn bằng số lượng số lẻ thì mảng được gọi là mảng chẵn lẻ.
// Gợi ý : Dùng vòng lặp while để đọc hết các số trong luồng vào
// int n; 
// while(cin >> n){
//     // Xử lý n
// }

#include <stdio.h>
int main() { 
    int n = 0, a[10000];
    int tmp;

    while(scanf("%d", &tmp) != -1){ // Đọc đến khi hết luồng đầu vào
        a[n] = tmp; // Lưu số vào mảng (không thực sự cần thiết trong bài này)
        n++;
    }
    int chan = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) chan++;
    }
    if(chan > n - chan)
        printf("CHAN\n");
    else if(chan < n - chan)
        printf("LE\n");
    else
        printf("CHANLE\n");
    return 0;
}
