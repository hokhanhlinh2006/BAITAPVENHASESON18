#include <stdio.h>
#include <string.h>

#define MAX 100
struct SinhVien {
    char name[MAX];
    int age;
    char phoneNumber[MAX];
};

int main() {
    struct SinhVien sv;

    printf("Nhap ten sinh vien: ");
    fgets(sv.name, MAX, stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.age);
    getchar();
    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv.phoneNumber, MAX, stdin);
    sv.phoneNumber[strcspn(sv.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}
