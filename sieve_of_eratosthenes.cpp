/*Finding primes in Range [a:b] without using Sieve of Eratosthenes*/
#include<iostream>

using namespace std;

void prime_sieve(int a,int b){
    int prime[b+1]={0};
    for (int i = 2; i <= b; i++)
    {
        if(prime[i]==0){
            for (int j = i*i; j <= b; j+=i)
            {
                prime[j]=1;
            }
            
        }
    }

    for (int i = a; i <= b; i++)
    {
        if(prime[i]==0){
            cout<<i<<"  ";
        }
    }
    cout<<endl;
    

}
int main(){
    int a,b;
    cin>>a>>b;
    prime_sieve(a,b);
    return 0;
}