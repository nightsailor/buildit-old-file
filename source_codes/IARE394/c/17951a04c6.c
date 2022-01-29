#include <iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c,id[1000],amount[1000],balance[1000],pos;
double balance1,balance2,amount1,amount2;
string type[1000],type1,type2;
double intr,totalin,sum=0;
cin>>intr;
cin>>c;
for(int i=0;i<c-2;i++){
cin>>id[i]>>amount[i]>>type[i]>>balance[i];
sum+=balance[i];
}
cin>>totalin;
for(int i=0;i<c-3;i++){
	if(id[i]!=id[i+1]-1)
		{
			pos=i+1;
			break;
		}

}

if(type[pos]=="credit")
{
	sum+=balance[pos]-amount[pos];
	balance2=balance[pos]-amount[pos];
}
else{
	sum+=balance[pos]+amount[pos];
	balance2=balance[pos]+amount[pos];
}


 balance1=((totalin*100)*(365/(double)intr))-(double)sum;
 if(balance1>balance[pos-1]){
	type1="credit";
	amount1=balance1-balance[pos-1];
    }
else{
 type1="debit";
 amount1=balance[pos-1]-balance1;
}

if(balance2>balance1){
	type2="credit";
	amount2=balance2-balance1;
}
else {
	type2="debit";
	amount2=balance1-balance2;
}
cout<<pos+1<<" "<<amount1<<" "<<type1<<" "<<round(balance1)<<endl;

cout<<pos+2<<" "<<amount2<<" "<<type2<<" "<<round(balance2)<<endl;
}
