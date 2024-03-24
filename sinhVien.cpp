#include<stdio.h>

struct SinhVien{
        long mssv;
        char hoTen[20];
        char lop[10];
        float GPA;
};

int main()
{
    // Nhap truc tiep thong tin cho sinh vien 1

    SinhVien sv1 = {20233536, "Tran Quang Minh", "ETTN", 3.5};
    printf("MSSV cua Minh la: %d", sv1.mssv);

    // Nhap thong tin cho sinh vien 2

    SinhVien sv2;
    printf("\n\n---------< Nhap thong tin cho sinh vien 2: >-------");
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
    scanf("%f", &sv2.GPA);


    // Dung con tro? de nhap thong tin cho mang cac sinh vien
    SinhVien nhomSV[5];
    SinhVien*p = nhomSV;

    // chon so sinh vien muon nhap
    int N; // so sinh vien muon nhap
    printf("\n--------< Chon so sinh vien muon nhap thong tin(ko qua 10): >----------");
    scanf("%d", &N);

    // Nhap thong tin cho N sinh vien
    for(int i = 0; i < N; i++)
    {
        printf("\nNhap thong tin cho sinh vien thu %d", i +1);
        // Nhap mssv cho sinh vien
        printf("\nNhap mssv cho sv: ");
        scanf("%d", &((p + i) -> mssv));
        // Nhap ten cho sinh vien
        printf("Nhap ten cho sv: ");
        fflush(stdin);
        fgets((p + i) -> hoTen, 20, stdin);
        // Nhap lop cho sinh vien
        printf("Nhap lop cho sv: ");
        fgets((p + i)->lop, 10, stdin);
        // Nhap GPA cho sinh vien
        printf("Nhap GPA cho sv: ");
        scanf("%f", &((p + i ) -> GPA));
    }
    // In thong tin cua N sinh vien
    for(int i = 0; i < N; i++)
    {
        printf("\n*******In thong in cua sinh vien thu %d", i + 1);
        // In mssv
        printf("\nMSSV: %d", (p + i) -> mssv);
        // In ten
        printf("\nHo va ten: %s", (p + i) -> hoTen);
        // In lop
        printf("Lop: %s", (p + i) -> lop);
        // In GPA
        printf("GPA: %.2f", (p + i) -> GPA);
    }

    // In thong tin cua sinh vien co GPA cao nhat
    int index = 0; // luu thu tu cua sinh vien co GPA cao nhat
    float max_GPA = 0.0; // luu gia tri GPA cao nhat
    for(int i = 0; i < N; i++) // Tinh GPA cao nhat va tim sinh vien co GPA cao nhat
    {
        if((p + i) -> GPA  > max_GPA)
        {
            index = i;
            max_GPA = (p + i) -> GPA;
        }
    }
    printf("\n*******In thong in cua sinh vien co GPA cao nhat: ");
        // In mssv
    printf("\nMSSV: %d", (p + index) -> mssv);
        // In ten
    printf("\nHo va ten: %s", (p + index) -> hoTen);
        // In lop
    printf("Lop: %s", (p + index) -> lop);
        // In GPA
    printf("GPA: %f", (p + index) -> GPA);

    // In GPA trung binh
    float sum_GPA = 0;
    for (int i = 0; i < N; i++)
    {
        sum_GPA += (p + i)->GPA;
    }
    printf("\n-------> Gpa trung binh cac sinh vien la: %.2f", sum_GPA / N);
    


}