#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
int main(){
int n,m,r,tid[1000],tamount[1000],tbal[1000],tpos;
double tbal1,tbal2,amt1,amt2;
string type[1000],type1,type2;
double intr,totalin,sum=0;
cin>>intr;
cin>>r;
for(int i=0;i<r-2;i++){
cin>>tid[i]>>tamount[i]>>type[i]>>tbal[i];
sum+=tbal[i];
}
cin>>totalin;

for(int i=0;i<r-3;i++){
	if(tid[i]!=tid[i+1]-1)
		{
			tpos=i+1;
			break;
		}

}
if(type[tpos]=="credit")
{
	sum+=tbal[tpos]-tamount[tpos];
	tbal2=tbal[tpos]-tamount[tpos];
}
else{
	sum+=tbal[tpos]+tamount[tpos];
	tbal2=tbal[tpos]+tamount[tpos];
}

 tbal1=((totalin*100)*(365/(double)intr))-(double)sum;
 if(tbal1>tbal[tpos-1]){
	type1="credit";
	amt1=tbal1-tbal[tpos-1];
}
else{
 type1="debit";
 amt1=tbal[tpos-1]-tbal1;
}

if(tbal2>tbal1){
	type2="credit";
	amt2=tbal2-tbal1;
}
else {
	type2="debit";
	amt2=tbal1-tbal2;
}
cout<<tpos+1<<" "<<amt1<<" "<<type1<<" "<<round(tbal1)<<endl;

cout<<tpos+2<<" "<<amt2<<" "<<type2<<" "<<round(tbal2)<<endl;
return 0;
}