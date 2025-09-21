#include <iostream>
using namespace std;

int main(){
    //!storing the marks of subjects
    int marks[5] = {66,67,68,69,70};
    string sub[5]={"Math","Phy","Chem","Eng","Com"};
    for(int i=0;i<5;i++){
        cout<<sub[i]<<" = "<<marks[i]<<endl;
    }

    return 0;
}