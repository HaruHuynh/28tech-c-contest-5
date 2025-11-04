// Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?
// Bai nay chi phu hop khi du lieu 0 <= A[i] <= 10^7

#include <stdio.h>
int dem[10000001]; // Vì là biến global, toàn bộ phần tử của dem được khởi tạo 0 mặc định trong C.
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int max = -1e9;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        // danh dau la a[i] da xuat hien
        dem[a[i]] = 1; // đánh dấu giá trị a[i] đã xuất hiện
        if(a[i] > max) max = a[i]; // cập nhật giá trị lớn nhất đã gặp
    }
    int count = 0;
    for(int i = 0; i <= max; i++){ // chỉ cần duyệt đến max
        if(dem[i] != 0) count++; // nếu dem[i] khác 0 nghĩa là i đã xuất hiện trong mảng
    }
    printf("%d", count);
    return 0;
    /*
    Khi đọc mảng:
	•	i=0, a[0]=3  → dem[3]=1, max=3
	•	i=1, a[1]=7  → dem[7]=1, max=7
	•	i=2, a[2]=3  → dem[3]=1 (đã là 1 rồi), max=7
	•	i=3, a[3]=0  → dem[0]=1, max=7
	•	i=4, a[4]=10 → dem[10]=1, max=10
	•	i=5, a[5]=7  → dem[7]=1, max=10
	•	i=6, a[6]=7  → dem[7]=1, max=10
	•	i=7, a[7]=2  → dem[2]=1, max=10

    */
}

// int count = 0;
// for(int i = 0; i < n; i++){
//     int check = 1;
//     for(int j = 0; j < i; j++){
//         if(a[i] == a[j]){
//             check = 0;
//             break;
//         }
//     }
//     if(check == 1){
//         count++;
//     }
// }
// printf("%d", count);