#include <iostream>
#include<cmath>
using namespace std;
int main(){
int h,k,n,id[1000],amount[1000],balance[1000],r;
double balance1,balance2,amount1,amount2;
string type[1000],type1,type2;
double intn,totalin,sum=0;
cin>>intn;
cin>>n;
for(int i=0;i<n-2;i++){
cin>>id[i]>>amount[i]>>type[i]>>balance[i];
sum+=balance[i];
}
cin>>totalin;
for(int i=0;i<n-3;i++){
	if(id[i]!=id[i+1]-1)
		{
			r=i+1;
			break;
		}

}

if(type[r]=="credit")
{
	sum+=balance[r]-amount[r];
	balance2=balance[r]-amount[r];
}
else{
	sum+=balance[r]+amount[r];
	balance2=balance[r]+amount[r];
}


 balance1=((totalin*100)*(365/(double)intn))-(double)sum;
 if(balance1>balance[r-1]){
	type1="credit";
	amount1=balance1-balance[r-1];
    }
else{
 type1="debit";
 amount1=balance[r-1]-balance1;
}

if(balance2>balance1){
	type2="credit";
	amount2=balance2-balance1;
}
else {
	type2="debit";
	amount2=balance1-balance2;
}
cout<<r+1<<" "<<amount1<<" "<<type1<<" "<<round(balance1)<<endl;

cout<<r+2<<" "<<amount2<<" "<<type2<<" "<<round(balance2)<<endl;
}
