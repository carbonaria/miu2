#include <iostream>
#include <cctype>
#include <string>
using namespace std;
// взять, перевести нижний регистр в верхний и наоброт
auto reg_trans(string q) {
    string w;
    for( int i=0; i<q.size(); i++) {
        if (isupper(q[i])) w += tolower(q[i]);
        else if (islower(q[i])) w += toupper(q[i]);
        else{
            cout<<"err"<<endl;
            break;
        }
    }
    return w;
}


int main() {
     
    char q[100];
    string w;
    cout<<"dlsc:"<<endl;
    cin>>q;
    w=reg_trans(q);
    cout<<w;
    
}