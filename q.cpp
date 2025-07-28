#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
// взять, перевести нижний регистр в верхний и наоброт

int main() {
     
    char q[100], w[100];
    cin>>q;
    for( int i=0; i<size(q); i++) {
        if (isupper(q[i])) w[i]+=tolower(q[i]) ;
        else if(islower(q[i])) w[i]+=toupper(q[i]);
        else{
            cout<<"err"<<endl;
            break;
        }
    
    }
    cout<<w;
    
}
