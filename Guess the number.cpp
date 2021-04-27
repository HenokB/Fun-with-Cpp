#include<iostream>
using namespace std;

int main()
{
	int s=5;
	int g;
	cout<<"|-----------------|"<<endl;  
	cout<<"|      Welcome    |"<<endl;
	cout<<"|-----------------|"<<endl;  
	cout<<"Enter your guess between 0 and 10: ";
	cin>>g;
	while(s!=g){
		if(g>s){
			cout<<"your guess is high"<<endl;
			cin>>g;
			
		}
		else if (g<s){
			cout<<"your guess is low"<<endl;
			cin>>g;
		}
	
	}
	cout<<"|-----------------|"<<endl;  
	cout<<"| That is correct |"<<endl;
	cout<<"|-----------------|"<<endl;    
}