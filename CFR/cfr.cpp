#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Senzor
{
    private:
    
    long time_stamp;
    int state;
    
    public:
    
    Senzor()
    {
        time_stamp = 0;
        state = 0;
    }
    Senzor(long time_stamp_in, int state_in)
    {
        time_stamp = time_stamp_in;
        state = state_in;
    }
    
    int getState()
    {
        return state;
    }
    
    long getTime()
    {
        return time_stamp;
    }
    
    void setTime(long time_stamp_in)
    {
        time_stamp = time_stamp_in;
    }
    void setState(int state_in)
    {
        state = state_in;
    }
};

int main()
{
    int n; // nr inputuri
    cin>>n;
    if (n > 3 && n <= 1000)
    {
        Senzor senz1[n];
        Senzor senz2[n];
        double speed = 0;
        long aux1;
        int  aux2;
        int i;
        int j;
        
        //citire primul senzor
        for (i = 0; i < n; i++)
        {
            cin>>aux1>>aux2;
            senz1[i].setTime(aux1);
            senz1[i].setState(aux2);
        }
        //citire al 2 lea senzor
        for (i = 0; i < n; i++)
        {
            cin>>aux1>>aux2;
            senz2[i].setTime(aux1);
            senz2[i].setState(aux2);
        }
        
        // numaram vaoanele si salvam timestampul de la fiecare 1
        int numar_vagoane = 0; // nr de vagoane
        int iter;
    
        if(senz1[0].getState() == 1 && senz1[1].getState() == 0)
            numar_vagoane++;
        if(senz1[n-1].getState() == 0 && senz1[n].getState() == 1)
            numar_vagoane++;
    
        for (iter = 1; iter < n; iter++)
        {
            if(senz1[iter - 1].getState() == 0 && senz1[iter].getState() == 1)
                numar_vagoane++;
        }
        
        //se va  calcula time1[i]-time2[i]
        long time1[numar_vagoane];
        long time2[numar_vagoane];
        int flag1 = 0;
        int flag2 = 0;
        j = 0;
        int k = 0;
        for (iter = 1; iter < n; i++)
        {
            flag1 = 0;
            flag2 = 0;

            if(senz1[0].getState() == 1)
            {
                flag1 = 1;
                time1[j] = senz1[0].getTime();
                j++;
            }

            if(senz2[0].getState() == 1)
            {
                flag2 = 0;
                time2[j] = senz2[0].getTime();
                k++;
            }
            
            if(flag1 == 0 && flag2 == 0)
            {
                if(senz1[i].getState() == 1 && senz1[i - 1].getState() == 0)
                {
                    time1[j] = senz1[i].getTime();
                    j++;
                }
                if(senz2[i].getState() == 1 && senz2[i - 1].getState() == 0)
                {
                    time2[j] = senz2[i].getTime();
                    k++;
                }
            }
         

            for(i = 0; i < numar_vagoane; i++)
            {
                speed += 2 / (time1[i] - time2[i]);
            }
           
        }
    speed = speed / 3; 
    cout<<fixed<<setprecision(2)<<speed<<" "<<numar_vagoane;
    }
    return 0;
}