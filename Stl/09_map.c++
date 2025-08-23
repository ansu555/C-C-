#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,int> m;

    m["tv"]=100;
    m["mobile"]=200;
    m["laptop"]=300;
    m["tab"]=120;
    m["desktop"]=300;



    m.emplace("camera",25);
    for(auto p: m )
    {
        cout<< p.first << " : " << p.second << endl;
    }

    if(m.find("laptop") != m.end()){
        cout<<"laptop is present"<<endl;
    }
    else{
        cout<<"laptop is absent"<<endl;
    }
 cout<<"count= "<<m.count("laptop")<< endl;
    return 0 ;

}