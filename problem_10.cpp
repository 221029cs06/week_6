#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    
    srand (( unsigned) time(NULL));
    int a;
    int b;
    cin>>a>>b;
    for(int i=0; i<10; i++){
        cout<<a+(rand()%(b-a+1))<<endl;
    }
    return 0;
}
