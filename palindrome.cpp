#include<iostream>
#include<string>
using namespace std;
    
    bool palindrome(string str){
        bool check = true;
        int n=str.size();
        for (int i = 0; i <n; i++)
        {
            if (str[i]==str[n-1-i])
        {
            continue;
        }
        else
        {
        check = false;
        break;
        }
        }
        
        return check;
    }
int main(){
    string str;
    cin>>str;
    if (palindrome(str)){
        cout<<str<<" word is a Palindrome"<<endl;
    }
    else
    {
        cout<<str<<" word is not a Palindrome"<<endl;
    }
    return 0;
}