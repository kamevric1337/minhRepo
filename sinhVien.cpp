#include<stdio.h>

struct SinhVien{
        long mssv;
        char hoTen[20];
        char lop[10];
        float CPA;
};



int main()
{
    // Nhap truc tiep thong tin cho sinh vien 1

    SinhVien sv1 = {20233536, "Tran Quang Minh", "ETTN", 3.5};
    printf("MSSV cua Minh la: %d", sv1.mssv);

    // Nhap thong tin cho sinh vien 2

    SinhVien sv2;
    printf("\n\nNhap thong tin cho sinh vien 2: ");
    // Nhap mssv cho sinh vien
    printf("\nNhap mssv cho sv2: ");
    scanf("%d", &sv2.mssv);
    // Nhap ten cho sinh vien
    printf("Nhap ten cho sv2: ");
    fflush(stdin);
    fgets(sv2.hoTen, 20, stdin);
    // Nhap lop cho sinh vien
    printf("Nhap lop cho sv2: ");
    fgets(sv2.lop, 10, stdin);
    // Nhap GPA cho sinh vien
    printf("Nhap CPA cho sv2: ");
    scanf("%f", &sv2.CPA);


    // Dung con tro? de nhap thong tin cho mang cac sinh vien
    SinhVien nhomSV[5];
    SinhVien*p = nhomSV;

    // chon so sinh vien muon nhap
    int N;
    printf("\nChon so sinh vien muon nhap thong tin(ko qua 10): ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        printf("\nNhap thong tin cho sinh vien thu %d", i +1);
        // Nhap mssv cho sinh vien
        printf("\nNhap mssv cho sv2: ");
        scanf("%d", &((p + i) -> mssv));
        // Nhap ten cho sinh vien
        printf("Nhap ten cho sv2: ");
        fflush(stdin);
        fgets((p + i) -> hoTen, 20, stdin);
        // Nhap lop cho sinh vien
        printf("Nhap lop cho sv2: ");
        fgets((p + i)->lop, 10, stdin);
        // Nhap GPA cho sinh vien
        printf("Nhap CPA cho sv2: ");
        scanf("%f", &((p + i ) -> CPA));
    }


   
}