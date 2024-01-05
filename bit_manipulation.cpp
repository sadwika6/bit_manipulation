#include<bits/stdc++.h>
using namespace std;
string Printbinary(int n)
{
	for(int i=7;i>=0;i--)
	{
		/*if(n&(1<<i))
        {
            s+='1';
        }
        else
        {
            s+='0';
        }*/
        cout<<((n>>i)&1);
        //return k;
	}
    cout << "\n";
}
void EvenOdd(int n)
{
    if(n&1)
    {
        cout<<"Odd"<<endl;
    }
    else
    {
        cout<<"Even"<<endl;
    }
}
void AlphaBinary()
{
    for(char c='A';c<='D';c++)
    {
        cout<<c<<" ";
        Printbinary(c);
        cout<<endl;
    }
}
int UtoL(char ch)
{
    return (ch|(1<<5));
}
int main()
{
	int n;
	cin>>n;
	Printbinary(n);
    //check even or odd
    EvenOdd(n)
    //binary representation of Alphabet
    AlphaBinary();
    //conversion of uppercase to lowercase
    char ch,ch2;
    cin>>ch;
    cout << UtoL(ch) << endl;
    //ch=(ch|(' '));
    //conversion of lowercase to uppercase
    cin>>ch2;
    cout << LtoU(ch2)
    //ch2=(ch2&('_'));// ~(1<<5)='_'
    cout<<ch2<<endl;
    //whether the given number o power of 2 or not
    int p;
    cin>>p;
    if((p&(p-1))==0)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }





    
	return 0;

}                                                               