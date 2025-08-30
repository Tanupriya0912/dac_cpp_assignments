#include<iostream>
using namespace std;
class arraydemo{
 public:
     int n;
    int array1[10];
public :
void setsize(){
    cout<<"enter size of array";
    cin>>n;
}
void makearray(){
    for(int i =0;i<=n;i++){
        cout<<"enter ele"<<endl;
        cin>>array1[i];
    }
}
void display(){
    for(int i=0;i<=n;i++){
        cout<<"arr["<<i<<"]"<<"="<<array1[i]<<endl;
    }
}

};
int main(){
    arraydemo a;
    a.setsize();
    a.makearray();
    a.display();
}