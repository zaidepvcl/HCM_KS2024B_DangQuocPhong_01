#include <stdio.h>
const int MAX_SIZE = 100;

int size = 0;
int main(void) {
    int array[MAX_SIZE];
    // xây menu
    while(1){
     printf("========menu=======\n");
    printf("1.nhap so phan tu gia tri cho mang\n");
    printf("2.in ra gia tri cac phan tu trong mang theo dang (arr[0]=1,arr[1]=5...)\n");
    printf("3.diem so luong cac so hoan hao co trong mang\n");
    printf("4.tim gia tri lon thu 2 trong mang \n");
    printf("5.them 1 phan tu ngau nhien vao trong mang \n");
    printf("6.xoa vi tri tai mot vi tri cu the\n");
    printf("7.xap xep mang theo thu tu tang dan\n");
    printf("8.tim kiem mot so co trong mang khong\n");
    printf("9.sap xep mang cho so chan dung truoc so le dung sau\n");
    printf("10.dao nguoc thu tu cac phan tu co trong mang\n");
        printf("================================\n");
        int choice;
        printf("Moi ban nhap chuc nang : ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                int n;
                printf("Moi ban nhap so luong phan tu cho mang");
                scanf("%d",&n);
                if(n<=0 || n> MAX_SIZE){
                    printf("n ko hop le, vui long nhap tu 1 - %d \n", MAX_SIZE);
                    break;
                }
                for (int i = 0; i < n; ++i) {
                    printf("Nhap array[%d] = ",i);
                    scanf("%d",array+i);
                }
                size = n;
                printf("Ban vua nhap thanh cong cho %d phan tu \n");
                break;
            case 2:
                
                if(size == 0){
                    printf("Mang chua co phan tu nao\n");
                } else{
                    printf("Danh sach cac phan tu trong mang la : \n");
                    for (int i = 0; i < size; ++i) {
                        printf("arr[i]=%d ",array[i]);
                    }
                }
                printf("\n");
                break;
            case 3: {
                int count = 0;
                for (int i = 0; i < currentSize; i++) {
                    int sum = 0;
                    for (int j = 1; j < arrayInt[i]; j++) {
                        if (arrayInt[i] % j == 0) {
                            sum += j; 
                        }
                    }
                    if (sum == arrayInt[i]) {
                        count++;
                    }
                }
                printf("Co %d so hoan hao trong mang", count);
                break;
            }

            case 4:
                
                break;
            case 5:
                
                int deleteIndex;

                printf("Moi ban nhap vi tri can xoa");
                scanf("%d",&deleteIndex);
                if(editIndex <0 ||editIndex >= size ){
                    printf("Vi tri ko hop le \n");
                    break;
                }
                for (int i = deleteIndex; i < size -1 ; ++i) {
                    array[i] = array[i+1];
                }
                size--;
                printf("Xoa thanh cong\n1"
                       "");
                break;
            case 6:
               int deleteIndex;

                printf("Moi ban nhap vi tri can xoa");
                scanf("%d",&deleteIndex);
                if(editIndex <0 ||editIndex >= size ){
                    printf("Vi tri ko hop le \n");
                    break;
                }
                for (int i = deleteIndex; i < size -1 ; ++i) {
                    array[i] = array[i+1];
                }
                size--;
                printf("Xoa thanh cong\n1"
                       "");
                break;
                case 7:
                 for (int i = 1; i < n; i++) {
                    int key = array[i];
                    int j = i - 1;
                    while (j >= 0 && array[j] > key) {
                       array[j + 1] = array[j];
                        j = j - 1;
                    }
                    array[j + 1] = key;
                    }
                    printf("so tu nho den lon: \n");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                case 8:
                    int flag=0;
                    printf("nhap so ban muuon tim ");
                    scanf("%d", &array+i);
                    for(int i=0;i< size;i++){
                    if (thinh[i] == n) {
                    printf("Phan tu %d co trong mang.\n", n, array+i);
                    flag = 1; 
                    break;
                    }
                    if(flag==0){
                    printf("phan tu %d ko co trong mang \n",array+i);
                    }  
                case 9:
                break;
                case 10:
                break;  
            default:
                printf("Lua chon ko hop le, vui long nhap lai\n");
                break;
        }
        
    }
    return 0;
}
