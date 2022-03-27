#include<stdio.h>
#include<stdio.h>
#include<string.h>
/*int cal(int d,int m,int y){
int l=y%100,cc,yc,f;
int leap=((y%4==0)?(0):(1));
yc=l/4+l;
yc%=7;
//int f=y/100;
if(f==17)  cc=4;
else if(f==18) cc=2;
else if(f==19) cc=0;
else if(f==20) cc=6;
else if(f==21) cc=4;
else if(f==22) cc=2;
int mc[13]={0,3,3,6,1,4,6,2,5,0,3,5};//1-1=0,1
int ans=(yc+mc[m-1]+cc-leap)%7;//13+mc[0]=1-1+6+3/2=
return ans;
}*/
int main()
{
int n,n1,i,d,m,d1,m1,d2,m2;
char t1[10],t2[10],t3[10],t4[10];
char info[100],info1[100];
FILE *b;
FILE *a;
do{
printf("welcome");
printf("\n1.new \n2.mine \n3.exit");
scanf("%d",&n);
switch(n){
// add claender
case 1:
printf("enter name for your calender: ");
scanf("%s",t1);
b=fopen("x.txt","a+");
while((fscanf(b,"%s /n",t2))!=EOF){
if(strcmp(t1,t2)==0){
 i=1;
 break;
}
}
if(i==1){
 printf("name is taken");
}
else {
     fprintf(b,"%s calender \n",t1);
     printf("\n sucessfully register");
}
fclose(b);
break;

//my calender

case 2:
printf("Enter cal name:");
scanf("%s",t3);
b=fopen("x.txt","a+");
while((fscanf(b,"%s /n",t4))!=EOF){
if(strcmp(t3,t4)==0){
 i=1;
 fclose(b);
 break;
}
}
if(i==1){
a=fopen(t3,"a+");
if(a!=NULL) {
printf("\n opened \n");
fclose(a);
do{
printf("\n 1.add \n 2.search \n 3.back");
scanf("%d",&n1);
switch(n1){

case 1:// my calender(add date)
a=fopen(t3,"w+");
if(a==NULL) printf("doesnt exit");
printf("\n enter date :");
scanf("%d",&d);
printf("bi\n enter month :");
scanf("%d",&m);
printf("enter info :");
scanf("%s",info);
fprintf(a,"\n %d %d %s",d,m,info);
printf("\n\n added");
fclose(a);
break;

case 2: // my calender(search)
a=fopen(t3,"r");
printf("\n enter date :");
scanf("%d",&d2);
printf("\n enter month : ");
scanf("%d",&m2);
while((fscanf(a,"%d %d %s",&d1,&m1,info1))!=EOF){
if(d2==d1 &&m2==m1){
printf("\n %s",info1);
break;
}
else {
printf("no info");
}
}
fclose(a);
break;
case 3: // mycalender exit
break;
}
}while(n1!=3);
}
else {
     printf("\n not present");
}
fclose(a);
break;


case 3:  // exit
printf("\n\t\t\t\t Thank YOU  ");
break;
}
}
}while(n!=3);
}