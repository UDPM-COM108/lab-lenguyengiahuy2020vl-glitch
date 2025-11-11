#include <stdio.h>
#define pi 3.14

int main(){
    //bai 1: Tinh tong va 2 so nguyen
    int a, b, tong, hieu;
    printf("nhap vao 2 so: ");
    scanf("%d %d",&a,&b);
    tong= a+b;
    hieu= a-b;
    printf("tong 2 so la: %d\n", tong);
    printf("hieu 2 so la: %d\n", hieu);

    //bai 2: Tinh chu vi va dien tich HCN
    float chieudai, chieurong;
    printf("\nNhap vao chieudai va chieurong: ");
    scanf("%f %f", &chieudai, &chieurong);

    float chuvi = (chieudai + chieurong) * 2;
    float dientich = chieudai * chieurong;

    printf("chu vi hcn la: %f.2 cm\n", chuvi);
    printf("dien tich hcn la: %f.2 cm%c", dientich, 178); 

    //bài 3:tính chu vi và diện tích hình tròn
    //Input: Nhập bán kính hình tròn
    //Output: In ra chu vi và diện tích hình tròn
     float cvi, dtich;
    float bankinh;
    printf ("Nhap vao ban kinh hinh tron: ");
    scanf ("%f", &bankinh);
    cvi = 2 * pi * bankinh;
    dtich = pi * bankinh * bankinh;
    printf ("Chu vi hinh tron la: %.2f\n", cvi);
    printf ("Dien tich hinh tron la: %.2f\n", dtich);

    //bai 4 : xay dung chuong trinh tinh diem trung binh 
    float diemtoan, diemly, diemhoa, diemtb;
    printf("\nnhap vao diem toan, ly, hoa: ");
    scanf("%f %f %f", &diemtoan, &diemly, &diemhoa);
    diemtoan*=3; diemly*=2; diemhoa*=1;
    diemtb = (diemtoan + diemly + diemhoa) / 3;
    printf("diem trung binh: %.2f", diemtb);
    
    //bai 5 tinh chu vi va dien tich hinh tam giac vuong
    float canh1, canh2;
    printf("\nnhap vao 2 canh ke hinh tam giac vuong: ");
    scanf("%f %f", &canh1, &canh2);
    float chuvi_tamgiac = canh1 + canh2 + (float)(canh1*canh1 + canh2*canh2);
    float dientich_tamgiac = (canh1 * canh2) / 2;
    printf("chu vi hinh tam giac vuong: %.2f", chuvi_tamgiac);
    printf("\ndien tich hinh tam giac vuong: %.2f", dientich_tamgiac);
    return 0;
    

}