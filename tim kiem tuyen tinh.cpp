#include <stdio.h>
using namespace std;

int main (){
	int n;
	printf ("nhap vao so phan tu cua mang: ");
	scanf ("%d",&n);
	int a[n],x,index=-1;
	for (int i =0;i<n;i++){
		printf ("nhap vao gia tri cua phan tu: ");
		scanf ("%d",&a[i]);
	}
	printf ("gia tri cua cac phan tu trong mang la: ");
	for (int i =0;i<n;i++){
		printf ("%d ", a[i]);
	}
	printf ("\nnhap vao gia tri can tim: ");
	scanf ("%d",&x);
	for (int i =0; i<n;i++){
		if (a[i]==x){
			index=i;
			break;
		}
	}
	if (index!=-1){
		printf ("Vi tri cua %d trong mang la: %d",x,index);
	}
	else if (index==-1){
		printf ("%d khong co xuat hien trong mang.",x);
	}
	return 0;
}
