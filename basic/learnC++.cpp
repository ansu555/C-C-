#include<iostream>

using namespace std ; // if you want to use std namespace then you have to place std:: before every function

void testFunction(string name){
    cout<< "hey " << name ;
}
int main(){
    cout<<"hey string!" << endl; // or "\n"
    cout<<"hey string!"<<"\n";
//  an int store only 2**31 to (2**31)-1
//     for store larger value use long and for much more larger value use "long ong"

    

//string 

string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " <<s2 ; // => anik das
 // now for for both "anik" and "das" take in a single string use "getline" 
 // in "getline single line will pickup not second lin"
//  getline(cin,s1);
//  cout << s1 << endl;

 string s ="string";
 cout << s[2] << endl;
 int len = s.size(); // to find length of string or array
 cout<< s[len-1];
    
// function
    string name2 ;
    cin>> name2;
    testFunction(name2);
    return 0;
}
