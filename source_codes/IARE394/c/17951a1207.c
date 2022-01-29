#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,r,sl[1234],amount[1234],balance[1234],fault[1234],f;
    double balance1,balance2,amount1,amount2,interest,tinterest,sum=0;
    string cd[1234],cd1,cd2;
    cin>>interest;
    cin>>r;
    for(int i=0;i<r-2;i++){
    cin>>sl[i]>>amount[i]>>cd[i]>>balance[i];
    sum+=balance[i];
    }
    cin>>tinterest;
    int kk=sl[r-3];
    for(int i=0;i<kk;i++){
        fault[i]=0;
    }
    int j=0;
    for(int i=0;i<kk && j<r-3;i++,j++){
        fault[sl[j]-1]=sl[j];
    }
     for(int i=0;i<kk;i++){
        if (fault[i]==0){
            f=i;
            break;
        }
    }
   
    if(cd[f]=="debit")
    {
        sum+=balance[f]+amount[f];
        balance2=balance[f]+amount[f];
    }
    else{
        sum+=balance[f]-amount[f];
        balance2=balance[f]-amount[f];
    }
    balance1=((tinterest*100)*(365/(double)interest));
    balance1-=(double)sum;
    if(balance1<balance[f-1]){
        cd1="debit";
        amount1=balance[f-1]-balance1;
    }
    else{
        cd1="credit";
        amount1=balance1-balance[f-1];
    }
    if(balance2<balance1) {
        cd2="debit";
        amount2=balance1-balance2;
    }
    else {
        cd2="credit";
        amount2=balance2-balance1;
    }
    cout<<f+1<<" "<<amount1<<" "<<cd1<<" "<<round(balance1)<<endl;
    cout<<f+2<<" "<<amount2<<" "<<cd2<<" "<<round(balance2)<<endl;
}