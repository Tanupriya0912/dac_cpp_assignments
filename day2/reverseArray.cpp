#include<iostream>
#include<vector>
using namespace std;
class arraydemo{
 public:
 	std::vector<int> array1;
    int n;
    
public :
void setsize(){
cout<<"enter size"<<endl;
cin>>n;
array1.resize(n);
}

void makearray(){
    for(int i =0;i<n;i++){
        cout<<"enter ele"<<endl;
        cin>>array1[i];
    }
}

void reverseArray(){
	if(n==0){
	cout<<"array is empty"<<endl;
	return;
	}
	for(int i=n-1;i>=0;i--){
		cout<<array1[i]<<endl;
	}
		
	}
	

};
int main(){
    arraydemo a;
    a.setsize();
    a.makearray();
    a.reverseArray();
}