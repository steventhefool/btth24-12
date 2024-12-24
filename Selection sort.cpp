#include <stdio.h>
using namespace std;
int main (){
	int n;
	printf ("nhap so phan tu trong mang: ");
	scanf ("%d",&n);
	int a[n];
	for (int i =0; i<n;i++){
		printf ("nhap lan luot cac phan tu: ");
		scanf ("%d",&a[i]);
	}
	for (int i =0;i<n;i++){
		int min_index=i;
		for (int j=i+1; j <n;j++){
			if (a[j]<a[min_index]){
				min_index=j;
			}
		}
		int temp = a[i];
			a[i]=a[min_index];
			a[min_index]=temp;
	}
	for (int i=0;i<n;i++){
		printf ("%d ",a[i]);
	}
}
