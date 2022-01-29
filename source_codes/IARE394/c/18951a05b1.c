#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
int n,m,r,id[1000],amount[1000],bal[1000],pos;
double bal1,bal2,amt1,amt2;
string type[1000],type1,type2;
double intr,totalin,sum=0;
cin>>intr;
cin>>r;
for(int i=0;i<r-2;i++){
cin>>id[i]>>amount[i]>>type[i]>>bal[i];
sum+=bal[i];
}
cin>>totalin;
for(int i=0;i<r-3;i++){//cout<<id[i];
	if(id[i]!=id[i+1]-1)
		{
			pos=i+1;
			break;
		}

}
//cout<<sum<<" ";
if(type[pos]=="credit")
{
	sum+=bal[pos]-amount[pos];
	bal2=bal[pos]-amount[pos];
}
else{
	sum+=bal[pos]+amount[pos];
	bal2=bal[pos]+amount[pos];
}
//cout<<bal[pos-1]<<" "<<bal1<<endl;

 bal1=((totalin*100)*(365/(double)intr))-(double)sum;
 if(bal1>bal[pos-1]){
	type1="credit";//cout<<"x";
	amt1=bal1-bal[pos-1];
}
else{
 type1="debit";
 amt1=bal[pos-1]-bal1;
}

if(bal2>bal1) {
	type2="credit";
    amt2=bal2-bal1;
}
else {
	type2="debit";
	amt2=bal1-bal2;
}
cout<<pos+1<<" "<<amt1<<" "<<type1<<" "<<round(bal1)<<endl;

cout<<pos+2<<" "<<amt2<<" "<<type2<<" "<<round(bal2)<<endl;

}