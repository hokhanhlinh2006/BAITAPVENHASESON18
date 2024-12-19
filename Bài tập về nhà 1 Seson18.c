#include <stdio.h>
#include <string.h>

struct Student {
    int name;
    int age;
    int phoneNumber;
};
int main(void) {
    struct Student sv;
    strcpy(sv.name, "Linh");
    sv.age = 18;
    strcpy(sv.phoneNumber, "0123456789");
    printf("Thong tin sinh vien:\n");
    printf("Ten: %d\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %d\n", sv.phoneNumber);

    return 0;
}
