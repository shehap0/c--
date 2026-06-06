#include <iostream>
using namespace std;

int main(){
    int rows,columns; cin>>rows>>columns;
    bool test=true;
    for (int i = 0; i < (rows/2); i++)
    {
        for (int w = 0; w < columns; w++)
        {
            cout<<"#";
        }

        cout<<"\n";
        
        for (int y = 0; y < columns-1; y++)
        {       if(test){
                cout<<".";
                if(y==columns-2){cout<<"#"; test=false;}
                }else
                {
                    if(y==0){cout<<"#";}
                    cout<<".";
                    if(y==columns-2){test=true;}
                }
        }
        cout<<"\n";
        if(i+1==rows/2)
        {
            for (int q = 0; q <columns; q++)
            {
                cout<<"#";
            }
            
        }
    }
    

    return 0;
}