#include <iostream>
using namespace std;
int main (){
	int n;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0; i<n;i++){
		printf ("nhap phan tu thu %d: ",i+1);
		scanf ("%d",&a[i]);
	}
	printf ("mang chua duoc sap xep: ");
	for (int i =0; i < n; i++){
		printf ("%d ", a[i]);
	}
	printf ("\n");
	for (int i=0;i<n;i++){
		for (int j=i+1;j< n;j++){
			if (a[j]<a[i]){
				int temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf ("mang da duoc sap xep: ");
	for (int i =0; i < n; i++){
		printf ("%d  ",a[i]);
	}
	return 0;
}
