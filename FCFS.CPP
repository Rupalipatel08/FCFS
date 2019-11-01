#include<conio.h>
#include<iostream.h>
int main()
{
 clrscr();
 int at[50],bt[50],ct[50],wt[50],tat[50],ttat=0,twt=0,atat,awt,i,n;
 cout<<"enter no. of processes:";
 cin>>n;
 cout<<"enter arrival time and burst time:";
 for(i=0;i<n;i++)
 {cout<<"p"<<i+1;
  cin>>at[i]>>bt[i];}
 for(i=0;i<n;i++)
 {if(i==0)
   ct[i]=bt[i];
  else
   ct[i]=bt[i]+ct[i-1];
 }
 for(i=0;i<n;i++)
 {wt[i]=ct[i]-at[i];}
 for(i=0;i<n;i++)
 {
  tat[i]=wt[i]+bt[i];
  ttat+=tat[i];
  twt+=wt[i];
 }
 cout<<"processes"<<"\t"<<"  AT    BT     CT    WT     TAT "<<endl;
 cout<<"-------------------------------------------------------------"<<endl;
 for(i=0;i<n;i++)
 { cout<<"p"<<i+1<<"\t\t"<< at[i]<<"\t" << bt[i]<<"\t"<< ct[i]<<"\t"<<   wt[i]<<"\t"<<   tat[i]<<endl;}
 atat=ttat/n;
 awt=twt/n;
 cout<<"average tat:"<<atat<<endl;
 cout<<"average wt:"<<awt<<endl;
 getch();
 return 0;
 }



