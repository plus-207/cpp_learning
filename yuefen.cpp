#include<iostream>
using namespace std;
int main(){
	cout<<"在“分子”后输入0退出"<<endl<<endl;
	int g=0;
	while(g!=1){
		int fenzi,fenmu;
		cout<<"分子：";
		cin>>fenzi;
		int t=0,k=0,l=0,m=0,n=0;
		if(fenzi==0){
			break;
		}
		else{
		cout<<"分母：";
		cin>>fenmu;
			if(fenzi<fenmu)
			{
				t=fenzi;
			}
			else
			{
				t=fenmu;
			}
			for(int i=1;i<=t;i++){
				if(fenzi%i==0&&fenmu%i==0){
					fenzi=fenzi/i;
					fenmu=fenmu/i;
					i=1;
				}
				else{
					continue;
				}
			}
			cout<<fenzi<<"/"<<fenmu<<endl<<endl;
		}
	}
	return 0;
}
