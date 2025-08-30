#include<iostream>
using namespace std;
class arraydemo{
 public:
     int n, total=0, i=0,avg=0;
    int array1[10];
public :
void setsize(){
    cout<<"enter size of array";
    cin>>n;
}
void makearray(){
    for(i =0;i<n;i++){
        cout<<"enter ele"<<endl;
        cin>>array1[i];
    }
}
void calc(){
	for(i=0;i<n;i++){
    
total+=array1[i];
}
    avg=total/n;
}
void display(){
    for(i=0;i<n;i++){
        cout<<"arr["<<i<<"]"<<"="<<array1[i]<<endl;
    }
    cout<<"avg="<<avg<<endl;
    cout<<"total="<<total<<endl;
}

};
int main(){
    arraydemo a;
    a.setsize();
    a.makearray();
    a.calc();
    a.display();
}