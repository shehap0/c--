#include <iostream>
using namespace std;

int main(){
    int a,b,c,biggest,mid,smallest;
    cin>>a>>b>>c;

    if (a>=b)
    {
        if (a>=c)
        {
            biggest=a;
            if (b>=c)
            {
                mid=b;
                smallest=c;
                biggest=a;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;

            }else{mid=c;
            smallest=b;
            biggest=a;
            
            cout<<smallest<<"\n";
            cout<<mid<<"\n";
            cout<<biggest<<"\n\n";
            cout<<a<<"\n";
            cout<<b<<"\n";
            cout<<c<<"\n";
            return 0;

                }
            
        }else if(c>=a)
        {
            biggest=c;
            if (b>=a)
            {
                biggest=c;
                smallest=a;
                mid=b;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;
            }else{biggest=c;
                smallest=b;
                mid=a;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;}
            
        }
        
    }else if(b>=a)
    {
        if (b>=c)
        {
            biggest=b;
            if (c>=a)
            {
                biggest=b;
                smallest=a;
                mid=c;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;
            }else{biggest=b;
                smallest=c;
                mid=a;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;}
        }else if(c>=b)
        {
            biggest=c;
            if (a>=b)
            {
                biggest=c;
                smallest=b;
                mid=a;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;
            }else{biggest=c;
                smallest=a;
                mid=b;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;}
        }else if(a>=b)
        {
            biggest=a;
            if (b>=c)
            {
                biggest=a;
                smallest=c;
                mid=b;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;
            }else{biggest=a;
                smallest=b;
                mid=c;

                cout<<smallest<<"\n";
                cout<<mid<<"\n";
                cout<<biggest<<"\n\n";
                cout<<a<<"\n";
                cout<<b<<"\n";
                cout<<c<<"\n";
                return 0;}
        }
    }
    

    return 0;
}