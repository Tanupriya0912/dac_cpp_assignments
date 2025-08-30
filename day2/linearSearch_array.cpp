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

void linearSearch(){
	int key;
	if(n==0){
	cout<<"array is empty"<<endl;
	return;
	}
	cout<<"enter key"<<endl;
	cin>>key;
	bool found=false;
	for(int i=0;i<n;i++){
		if(array1[i]==key){
		cout<<"key found at"<<"  "<<i<<"  index"<<endl;
		found =true;
		break;
		}
		
	}
	if(!found){
	cout<<"key not found"<<endl;
	}
	
}
	
};
int main(){
    arraydemo a;
    a.setsize();
    a.makearray();
    a.linearSearch();
}