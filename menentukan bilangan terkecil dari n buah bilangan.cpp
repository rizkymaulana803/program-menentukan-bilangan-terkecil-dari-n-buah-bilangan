//menentukan bilangan terkecil dari n buah bilangan
#include<iostream>
using namespace std;
int terkecil();
main()
{
	int bil1, bil2, bil3;
	cout<<"Masukkan bilangan 1=";
	cin>>bil1;
	cout<<"Masukkan bilangan 2=";
	cin>>bil2;
	cout<<"Masukkan bilangan 3=";
	cin>>bil3;
	if(bil1 < bil2)
	{
		if(bil1 < bil2)
		{
			cout<<bil1<<"Nilai terkecil";
		}
		else{
			if(bil3<bil2)
			{
				cout<<bil3<<"Nilai terkecil";
			}
		}
	}else{
		if(bil2<bil3)
		{
			cout<<bil2<<"Nilai terkecil";
		}else{
			cout<<bil3<<"Nilai terkecil";
		}
	}	
}
