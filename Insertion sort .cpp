#include <stdio.h>
using namespace std;
int main (){
	int n;
	printf ("Nhap vao so phan tu cua mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i =0;i<n;i++){
		printf ("nhap vao gia tri cua phan tu: ");
		scanf ("%d",&a[i]);
	}
	for (int i =1;i<n;i++){
		int min_value = a[i];
		int j=i-1;
		while (j>=0 && a[j]>min_value){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=min_value;
	}
	printf ("Mang sau khi sap xep la: \n");
	for (int i =0;i<n;i++){
		printf ("%d ",a[i]);
	}
	return 0;
}
