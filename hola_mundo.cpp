#include<iostream>
using namespace std;
long double factorial(int);
int main(){
	int a,b,n;
	cout<<"HOlA MUNDO";
	cout<<"\nPrimer numero ";
	cin>>a;
	cout<<"\nSegundo numero ";
	cin>>b;
	cout<<"resultado= "<<a+b;
	
	cout << "\n\nFactorial \nIntroduzca numero: ";
    cin >> n;
    cout << "\nfactorial: " << factorial(n) << endl;
    
	return 0;
} 
long double factorial(int n)
{
    long double fact;
    if (n==0)
        return 1;
    else
         return n*factorial(n-1);
} 
