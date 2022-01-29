#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
int n,m,r,id[1000],amt[1000],bal[1000],pos;
double bal1,bal2,amount1,amount2;
string typ[1000],typ1,typ2;
double intro,totalin,sum=0;
cin>>intro;
cin>>r;
for(int i=0;i<r-2;i++){
cin>>id[i]>>amt[i]>>typ[i]>>bal[i];
sum+=bal[i];
}
cin>>totalin;
for(int i=0;i<r-3;i++){
    //cout<<id[i];
	if(id[i]!=id[i+1]-1)
		{
			pos=i+1;
			break;
		}

}
//cout<<sum<<" ";
if(typ[pos]=="credit")
{
	sum+=bal[pos]-amt[pos];
	bal2=bal[pos]-amt[pos];
}
else{
	sum+=bal[pos]+amt[pos];
	bal2=bal[pos]+amt[pos];
}
//cout<<bal[pos-1]<<" "<<bal1<<endl;

 bal1=((totalin*100)*(365/(double)intro))-(double)sum;
 if(bal1>bal[pos-1]){
	typ1="credit";
    //cout<<"x";
	amount1=bal1-bal[pos-1];
}
else{
 typ1="debit";
 amount1=bal[pos-1]-bal1;
}

if(bal2>bal1) {
	typ2="credit";
	amount2=bal2-bal1;
}
else {
	typ2="debit";
	amount2=bal1-bal2;
}
cout<<pos+1<<" "<<amount1<<" "<<typ1<<" "<<round(bal1)<<endl;

cout<<pos+2<<" "<<amount2<<" "<<typ2<<" "<<round(bal2)<<endl;
}