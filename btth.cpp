#include <stdio.h>
using namespace std;
void menu (){
	printf ("MENU\n");
	printf ("1. Nhap so luong va gia tri cua phan tu. \n");
	printf ("2. In gia tri cac phan tu cua mang. \n");
	printf ("3. Su dung Insertion Sort sap xep mang giam dan va in ra.\n");
	printf ("4. Su dung Selection Sort sap xep mang tang dan va in ra. \n");
	printf ("5. Su dung Bubble Sort sap xep mang giam dan va in ra. \n");
	printf ("6. Thoat.\n");
}
int main (){
	int choice, n,a[n];
	while (1){
		menu();
		printf ("nhap vao lua chon cua ban: ");
		scanf ("%d",&choice);
		switch (choice){
			case 1:{
				printf ("Nhap so luong phan tu trong mang: ");
				scanf ("%d",&n);
				for (int i =0; i<n;i++){
					printf ("Nhap gia tri cua phan tu: ");
					scanf ("%d",&a[i]);
				}
				break;
			}
			case 2: {
				printf ("Gia tri cac phan tu cua mang la: ");;
				for (int i =0; i<n; i++){
					printf ("%d ",a[i]);
				}
				printf ("\n");
				break;
			}
			case 3: {
					for (int i =1;i<n;i++){
					int max_value = a[i];
					int j=i-1;
					while (j>=0 && a[j]<max_value){
					a[j+1]=a[j];
					j--;
				}
					a[j+1]=max_value;
				}
				break;
			}
			case 4: {
				for (int i =0; i <n-1;i++){
					int min_index=i;
					for (int j=i+1;j<n;j++){
						if (a[j]<a[i]){
						 	min_index=j;
						}
					}
					int temp = a[i];
					a[i]=a[min_index];
					a[min_index]=temp;
				}
				break;
			}
			case 5: {
				for (int i =0; i<n-1;i++){
					for (int j =i+1;j<n;j++){
					if (a[j]>a[i]){
						int temp = a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
				}
				break;
			}
			case 6: {
				printf ("Thoat khoi chuong trinh. ");
				return 0;
			}
			default: {
				printf ("Lua chon khong hop le.");
				break;
			}
		}
	}
}
