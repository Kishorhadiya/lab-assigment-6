#include<iostream>

   using namespace std;

    class customer
    {
           int x;
           int y;
           int z;


     public:
          void getdata(int a, int b,int c){
            x=a;
            y=b;
            z=c;
          }
          void display(void){
            cout<<x<<endl;
            cout<<y<<endl;
            cout<<z<<endl;
          }
          void operator +(){
            x=-x;
            y=-y;
            z=-z;
          }


    };

int main(){
    customer c1;
    c1.getdata(2,-3,8);
    c1.display();
    +c1;
    c1.display();
    return 0;
}
