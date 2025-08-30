#include<iostream>
#include<vector>
using namespace std;
class arraydemo{
 public:
 	std::vector<int> array1;
    int n ,max ,min;
    
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

void comp(){
	if(n==0){
	cout<<"array is empty"<<endl;
	return;
	}
	max= array1[0];
    min= array1[0];
    for(int i=0;i<n;i++){
        if(array1[i]>max){
            max= array1[i];
        }
        if(array1[i]<min){
         min= array1[i];
	}
    }
}

void display(){
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]"<<"="<<array1[i]<<endl;
    }
    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
}

};
int main(){
    arraydemo a;
    a.setsize();
    a.makearray();
    a.comp();
    a.display();
}