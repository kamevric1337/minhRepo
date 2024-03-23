#include<stdio.h>
#include<stdio.h>

enum trang_thai{
    nam_thu_nhat,
    nam_thu_hai,
    nam_thu_ba,
    nam_thu_tu,
};

struct Date{
    int ngay;
    int thang;
    int nam;
};

struct SinhVien{
        long mssv;
        char hoTen[20];
        Date ngay_sinh;
        char lop[10];
        float GPA;
        trang_thai trang_thai;
};

int main()
{
    SinhVien sv1 = {20233536, "Tran Quang Minh", {11, 11, 2005}, "ETTN-K68", 3.5, nam_thu_nhat};
    SinhVien sv2;
    printf("\n\n---------< Nhap thong tin cho sinh vien 2: >-------");
    // Nhap mssv cho sinh vien
    printf("\nNhap mssv cho sv2: ");
    scanf("%d", &sv2.mssv);

    // Nhap ngay - thang - nam
        // Nhap ngay sinh cho sinh vien(VD:11)
    printf("Nhap ngay sinh: ");
    scanf("%d", &sv2.ngay_sinh.ngay);
        // Nhap thang sinh (VD:3)
    printf("Nhap thang sinh: ");
    scanf("%d", &sv2.ngay_sinh.thang);
        // Nhap nam sinh cho sinh vien(VD:2001)
    printf("Nhap nam sinh: ");
    scanf("%d", &sv2.ngay_sinh.nam);

    // Nhap ten cho sinh vien
    printf("Nhap ten cho sv2: ");
    fflush(stdin);
    fgets(sv2.hoTen, 20, stdin);
    // Nhap lop cho sinh vien
    printf("Nhap lop cho sv2: ");
    fgets(sv2.lop, 10, stdin);
    // Nhap GPA cho sinh vien
    printf("Nhap CPA cho sv2: ");
    scanf("%f", &sv2.GPA);

    SinhVien nhomSV[10];
    int so_sinh_vien;
    // Nhap thong tin cho cac sinh vien
    printf("\n------------->> Nhap so sinh vien muon nhap: ");
    scanf("%d", &so_sinh_vien);

    for (int i = 0; i < so_sinh_vien; i++)
    {
        printf("\n --->Nhap thong tin cho sinh vien thu %d", i + 1);
        printf("\nNhap mssv cho sv: ");
        scanf("%d", &nhomSV[i].mssv);
    // Nhap ngay - thang - nam
        // Nhap ngay sinh cho sinh vien(VD:11)
        printf("Nhap ngay sinh: ");
        scanf("%d", &nhomSV[i].ngay_sinh.ngay);
        // Nhap thang sinh (VD:3)
        printf("Nhap thang sinh: ");
        scanf("%d", &nhomSV[i].ngay_sinh.thang);
        // Nhap nam sinh cho sinh vien(VD:2001)
        printf("Nhap nam sinh: ");
        scanf("%d", &nhomSV[i].ngay_sinh.nam);

    // Nhap ten cho sinh vien
        printf("Nhap ten cho sv: ");
        fflush(stdin);
        fgets(nhomSV[i].hoTen, 20, stdin);
    // Nhap lop cho sinh vien
        printf("Nhap lop cho sv: ");
        fgets(nhomSV[i].lop, 10, stdin);
    // Nhap GPA cho sinh vien
        printf("Nhap CPA cho sv: ");
        scanf("%f", &nhomSV[i].GPA);
    }
    

}