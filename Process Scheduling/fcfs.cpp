#include<iostream>
using namespace std;
int main()
{
    int n, i, j, wt[10], tat[10], bt[10], at[10], ct[10], sum=0;

    cout<<"Enter the number of processes: ";
    cin>>n;

    cout<<"Enter the arrival time and burst time for each process: \n";
    for(i=0; i<n; i++)
    {
        cout<<"Process "<<i+1<<":\n";
        cout<<"Arrival Time: ";
        cin>>at[i];
        cout<<"Burst Time: ";
        cin>>bt[i];
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            ct[i] = at[i] + bt[i];
        }
        else
        {
            if(at[i] > ct[i-1])
            {
                ct[i] = at[i] + bt[i];
            }
            else
            {
                ct[i] = ct[i-1] + bt[i];
            }
        }
    }
    for(i=0; i<n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        sum += wt[i];
    }
    float avg_wt = (float)sum/n;
    cout<<"\nProcess\t Arrival Time\t Burst Time\t CT\t Turnaround Time\t WT\n";

    for(i=0; i<n; i++)
    {
        cout<<"P"<<i+1<<"\t\t\t "<<at[i]<<"\t\t\t "<<bt[i]<<"\t\t\t "<<ct[i]<<"\t\t\t "<<tat[i]<<"\t\t\t "<<wt[i]<<"\n";
    }

    cout<<"\nAverage Waiting Time: "<<avg_wt<<"\n";
    return 0;
}
