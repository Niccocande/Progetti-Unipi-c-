#include <iostream>
using namespace std;

int main(){
    int b, e, i, x;
    i=1;
    cout<<" Insert b: " <<endl;
    cin>>b;
    x =b;
    cout<<"Insert e: "<<endl;
    cin>>e;
    if (b==0 && e==0)
        cout<< b <<" elevato alla "<< e <<" vale: "<<"Non definito";
    else if (e==0)
        cout << b << " elevato alla " << e << " vale: "<< "1";
    else if (e<0){
        i=-1;
        while (i > e) {
            x = x * b;
            i--;
        }
        cout << b << " elevato alla " << e << " vale: 1/"<< x;
      }
    else {
        while (i < e) {
            x = x * b;
            i++;
        }
        cout << b << " elevato alla " << e << " vale: "<< x;
    }
    return 0;
}
