#include <stdio.h> 
struct SinhVien{
    char TenSV[50];
    char MaSV[50];
    char Lop[50];
    int NamSinh;
    
};
void Nhap(SinhVien sv[], int n)
{
    for(int i=0; i<n; i++){
        printf("\nNhap thong tin sinh vien thu %d:",i+1);
        printf("\nNhap ten sinh vien:");
        fflush(stdin);
        gets(sv[i].TenSV);
        printf("\nNhap ma sinh vien:");
        fflush(stdin);
        gets(sv[i].MaSV);
        
        printf("\nNhap lop:");
        fflush(stdin);
        gets(sv[i].Lop);
        
        printf("\nNhap nam sinh:");
        scanf("%d", &sv[i].NamSinh);
        
      
        
	
    }
}
void Xuat(SinhVien sv[], int n)
{
    printf("thong tin sinh vien\n");
    
    for(int i=0; i<n; i++)
	{
        printf("%s \t %s \t %s \t %d \t \n",sv[i].TenSV,sv[i].MaSV,sv[i].Lop,sv[i].NamSinh);
    
    }
}
int main(){ 
	float diemXT;
    SinhVien sv[100];
    int n; 
    printf("Nhap so sinh vien:");
    scanf("%d",&n);
    Nhap(sv,n);
    Xuat(sv,n);
    printf("diem xet tuyen: ");
    scanf("%f",&diemXT);
    
}
