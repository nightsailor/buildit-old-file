import math
A=float(input())
R=int(input())
Tid=[0]*(R-2)
amt=[0]*(R-2)
dct=[0]*(R-2)
tot=[0]*(R-2)
s=0
for i in range(R-2):
    lis=[x for x in input().split()]
    Tid[i]=int(lis[0])
    amt[i]=int(lis[1])
    dct[i]=lis[2]
    tot[i]=int(lis[3])
    s+=tot[i]
intr=float(input())
for i in range(R-2):
    if Tid[i]!=Tid[i+1]-1:
        pos=i+1
        break
if dct[pos]=="debit":
    bal2=amt[pos]+tot[pos]
    s+=bal2
else:
    bal2=tot[pos]-amt[pos]
    s+=bal2
bal1=((intr*100)*(365/A))-s
bal1=round(bal1,0)
bal1=int(bal1)
s+=bal1
if bal1>bal2:
    type2="debit"
    amt2=bal1-bal2
else:
    type2="credit"
    amt2=bal2-bal1
if tot[pos-1]>bal1:
    type1="debit"
    amt1=tot[pos-1]-bal1
else:
    type1="credit"
    amt1=bal1-tot[pos-1]
print(pos+1,amt1,type1,bal1)
print(pos+2,amt2,type2,bal2)
