#include <stdio.h>
#include <string.h>

#define MAX 100
#define NUM_STUDENTS 5

struct SinhVien {
    int id;
    char name[MAX];
    int age;
    char phoneNumber[MAX];
};

int main() {
    struct SinhVien svArray[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        svArray[i].id = i + 1;

        printf("\nNhap thong tin cho sinh vien thu %d:\n", i + 1);

        printf("Nhap ten sinh vien: ");
        fgets(svArray[i].name, MAX, stdin);
        svArray[i].name[strcspn(svArray[i].name, "\n")] = '\0';

        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &svArray[i].age);
        getchar();

        printf("Nhap so dien thoai sinh vien: ");
        fgets(svArray[i].phoneNumber, MAX, stdin);
        svArray[i].phoneNumber[strcspn(svArray[i].phoneNumber, "\n")] = '\0';
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nSinh vien thu %d:\n", svArray[i].id);
        printf("ID: %d\n", svArray[i].id);
        printf("Ten: %s\n", svArray[i].name);
        printf("Tuoi: %d\n", svArray[i].age);
        printf("So dien thoai: %s\n", svArray[i].phoneNumber);
    }

    return 0;
}

