import java.util.*;
class SPS
{
    int m;
     void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n,i,p,ch;
        System.out.println("enter length of array and element to be searched");
        n=sc.nextInt();
        m=sc.nextInt();
        int a[]=new int[n];
        System.out.println("ENTER"+n+"elements");
        for(i=0;i<n;i++)
        a[i]=sc.nextInt();
        SPS ob1=new SPS();
        p=ob1.check(a);
        if(p==0)
        {
            System.out.println("ENTER 1 FOR BINARY SEARCH AND 2 FOR LINEar search");
            ch=sc.nextInt();
            if(ch==1)
             ob1.binsort(a);
             else
             ob1.linear(a);
            }
            else
            ob1.binary(a);
        }
        int check(int a[])
        {
            int i;
            for(i=0;i<a.length-1;i++){
                if(a[i]<a[i+1])
            continue;
            else
            break;
        }
        if(i==a.length)
        return 1;
        else return 0;
    }
    void binsort(int a[])
    {
        int i,j,temp,s=0,e=a.length-1,mid;
        for(i=0;i<a.length;i++)
        {
            for(j=0;j<a.length-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }}
            while(s<=e)
            {
                mid=(s+e)/2;
                if(a[mid]==m)
                break;
                else if(a[mid]<m)
                s=mid+1;
                else
                e=mid-1;
            }
            if(s>e)
            System.out.println("NUMBER NOT FOUND");
            else
            System.out.println("NUMBER FOUND");
        }
        void linear(int a[])
        {
            int i;
            for( i=0;i<a.length;i++){
            if(a[i]==m)
            break;
        }
        if(i==a.length)
        System.out.println("NUMBER NOT FOUND");
        else
        System.out.println("NUMBER FOUND");
    }
    void binary(int a[])
    {
        int s=0,e=a.length-1,mid,i,j;
        while(s<=e)
            {
                mid=(s+e)/2;
                if(a[mid]==m)
                break;
                else if(a[mid]<m)
                s=mid+1;
                else
                e=mid-1;
            }
            if(s>e)
            System.out.println("NUMBER NOT FOUND");
            else
            System.out.println("NUMBER FOUND");
        }
    }

