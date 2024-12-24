#include <stdio.h>
using namespace std;
int main (){
	int n;
	printf ("nhap vao so phan tu trong mang: ");
	scanf ("%d",&n);
	int numbers [n];
	for (int i =0; i<n;i++){
		printf ("Nhap gia tri cua tung phan tu trong mang (tang dan hoac giam dan): ");
		scanf ("%d",&numbers[i]);
	}
	int search_value;
	int start =0,end=sizeof(numbers)/sizeof(int);
	printf ("Nhap vao gia tri can tim kiem: ");
	scanf ("%d",&search_value);
	int mid;
	while (start <=end){
		mid =(start +end)/2;
		if (numbers[mid]==search_value){
			break;
		}
		else if (numbers[mid]>search_value){
			end=mid;
		}
		else if (numbers [mid]<search_value){
			start = mid;
		}
	}
	if (numbers[mid]==search_value){
		printf ("Gia tri %d o vi tri %d trong mang.",search_value,mid);
	}
	else {
		printf ("Gia tri %d khong co xuat hien trong mang.",search_value);
	}
	return 0;
}
