#include <iostream>
using namespace std;

void username(string url,int userindex)
{
    int i=0;
    cout<<"username: ";
    while (i>=0)
    {
        if(url[userindex+i]=='&') {break;}
        cout<<url[i+userindex];
        i++;
    }
    cout<<"\n";
}




                        //                              40 9index
int main(){   //0123456789012345678901234567890123456789012345678901234567890  
    string url="http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager"; 
    
    // http://www.{word}.{word}/{word}/{word}?username={word}&pwd={word}&profile={word}&role={word}&key={word}
    int userindex=url.find("username")+9;

    username(url,userindex);
    


    return 0;
}