#include<stdio.h>

 struct SinhVien{
        char hoTen[20];
        long mssv;
        char lop[10];
        float gpa;
};


int main()
{
   

    SinhVien sv1 = {"Tran Quang Minh", 20233536, "ETTN-K68", 3.5};
    SinhVien sv2;

    // Nhap thong tin cho sinh vien 2

    printf("Nhap thong tin cho sinh vien 2: ");
    // nhap mssv
    printf("\nNhap mssv cho sinh vien 2: ");
    scanf("%d", sv2.mssv);
    //nhap ten
    printf("\nNhap ten cho sinh vien 2: ");
    fflush(stdin);
    fgets(sv2.hoTen, sizeof(sv2.hoTen), stdin);
    //nhap lop 
    printf("Nhap lop cho sinh vien 2: ");
    fgets(sv2.lop, sizeof(sv2.lop), stdin);
    // nhap cpa
    printf("Nhap cpa cho sinh vien 2: ");
    scanf("%f", sv2.gpa);
    

}