#include <stdio.h>

int main() {
    float diem;

    // Nhap diem tu ban phim
    printf("Nhap diem trung binh cua sinh vien (0 - 10): ");
    scanf("%f", &diem);

    // Kiem tra tinh hop le va phan loai ket qua
    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
    } 
    else if (diem >= 9.0) {
        printf("Xep loai: Xuat sac\n");
    } 
    else if (diem >= 8.0) {
        printf("Xep loai: Gioi\n");
    } 
    else if (diem >= 6.5) {
        printf("Xep loai: Kha\n");
    } 
    else if (diem >= 5.0) {
        printf("Xep loai: Trung binh\n");
    } 
    else if (diem >= 3.5) {
        printf("Xep loai: Yeu\n");
    } 
    else {
        printf("Xep loai: Kem\n");
    }

    return 0;
}
