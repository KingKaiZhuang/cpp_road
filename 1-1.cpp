#include <iostream>
using namespace std;

int main(){
	int scores[20];
	int count;
	cin>>count;
	for(int i = 0;i < count;i++){
		cin>>scores[i];
	}
	int big = -1;
	int small = 101;
	
	for(int i = 0;i < count;i++){
		if(scores[i] < 60){
			if(scores[i] > big){
				big = scores[i]; 
			}
		}else if(scores[i] < small)
			small = scores[i];
		}		
	}
	
	for(int i = 0;i < count;i++){
		for(int j = 0;j < count;j++){		
			if(scores[j] > scores[j+1]){
				int temp = scores[j];
				scores[j] = scores[j+1];
				scores[j+1] = temp;			
			}
		}
	}
	
	
	for(int i = 0;i < count;i++){
		cout<<scores[i]<<" ";
	}
	cout<<endl;
	
	if(big == -1){
		cout<<"bast case"<<endl;
	}else{
		cout<<big<<endl;
	}
	
	if(small == 101){
		cout<<"worst case";
	}else{
		cout<<small;
	}	
	
	return 0;
}
