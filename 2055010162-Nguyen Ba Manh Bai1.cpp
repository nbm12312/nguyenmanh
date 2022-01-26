/*Viet chuong trình C thuc hien:
a) (1,5d) Yêu cau nguoi dùng nhap vào so nguyên n cho den khi 
thoa mãn 1<=n <= 1000000.
b) (2,5d) Viet hàm de quy tính so hang thu n cua dãy Fibonacci*/


#include <iostream>
using namespace std;
void nhap(){
	int n;
	//cout<<"Nhap so nguyen n:\n";
	do{
		cout<<"Nhap so nguyen:";
		cin>>n;
	}while(n>=1 && n<=1000000);
}
int fibonacci(int n){
	if(n==1 || n==2){
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
void a(){
	int n;
	cout<<"Nhap so hang thu n cua day Fibonacci: ";
	cin>>n;
	cout<<fibonacci(n);
}
int main(){
	nhap();
	a();
	return 0;
}








