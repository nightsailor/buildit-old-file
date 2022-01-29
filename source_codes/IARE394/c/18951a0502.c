#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
int main(){
int n,m,r,id[1000],amount[1000],ba[1000],pos;
double ba1,ba2,amt1,amt2;
string type[1000],type1,type2;
double intr,totalin,sum=0;
cin>>intr;
cin>>r;
for(int i=0;i<r-2;i++){
cin>>id[i]>>amount[i]>>type[i]>>ba[i];
sum+=ba[i];
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
	sum+=ba[pos]-amount[pos];
	ba2=ba[pos]-amount[pos];
}
else{
	sum+=ba[pos]+amount[pos];
	ba2=ba[pos]+amount[pos];
}
//cout<<bal[pos-1]<<" "<<ba1<<endl;

 ba1=((totalin*100)*(365/(double)intr))-(double)sum;
 if(ba1>ba[pos-1]){
	type1="credit";//cout<<"x";
	amt1=ba1-ba[pos-1];
}
else{
 type1="debit";
 amt1=ba[pos-1]-ba1;
}

if(ba2>ba1){
	type2="credit";
	amt2=ba2-ba1;
}
else {
	type2="debit";
	amt2=ba1-ba2;
}
cout<<pos+1<<" "<<amt1<<" "<<type1<<" "<<round(ba1)<<endl;

cout<<pos+2<<" "<<amt2<<" "<<type2<<" "<<round(ba2)<<endl;
return 0;
}