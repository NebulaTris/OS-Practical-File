#include<iostream>
using namespace std;
int main()
{
      int n,temp,tt=0,min,d,i,j;
      float atat=0,awt=0,stat=0,swt=0;
      cout<<"Enter no of process:";
      cin>>n;
      int a[n],b[n],e[n],tat[n],wt[n];
  
      for(i=0;i<n;i++)
      {
            cout<<"Enter arrival time: ";       
            cin>>a[i];
      }
      for(i=0;i<n;i++)
      {
            cout<<"Enter burst time: ";      
            cin>>b[i];
      }
      for(i=0;i<n;i++)
      {
         for(j=i+1;j<n;j++)
          {
                if(b[i]>b[j])
                {
                      temp=a[i];
                      a[i]=a[j];
                      a[j]=temp;

                      temp=b[i];
                      b[i]=b[j];
                      b[j]=temp;
                }
          }
      }
      min=a[0];
      for(i=0;i<n;i++)
      {
            if(min>a[i])
            {
                  min=a[i];
                  d=i;
            }
      }

      tt=min;
      e[d]=tt+b[d];
      tt=e[d];

      for(i=0;i<n;i++)
      {
            if(a[i]!=min)
            {
                  e[i]=b[i]+tt;
                  tt=e[i];
            }
      }
      for(i=0;i<n;i++)
      {

            tat[i]=e[i]-a[i];
            stat=stat+tat[i];
            wt[i]=tat[i]-b[i];
            swt=swt+wt[i];
      }
      atat=stat/n;
      awt=swt/n;
      cout<<"Process  Arrival-time  Burst-time  Waiting-time  TAT(s)\n";

    for(i=0;i<n;i++)
    {
    cout<<"P"<<i+1<<"\t\t\t"<<a[i]<<"\t\t\t"<<b[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i]<<endl;
    }
    cout<<"Average Waiting Time ="<<awt<<" Average Turnaround Time="<<atat;  
}
