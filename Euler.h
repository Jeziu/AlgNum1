#include "Func.h"
using namespace funkcje;
class Euler {
    public:
    static double SumTaylorFromBegin(double x, int n)
    {
        double result = 0.0;
        for (int i = 0; i < n; i++)
        {
            result += ((power(x,i))/fact(i));
        }
        return result;
    }
    static double SumTaylorFromEnd(double x, int n)
    {
        double result = 0.0;
        double tab[n];
        for (int i = 0; i < n; i++)
        {
            tab[i] = ((power(x,i))/fact(i));
        }
        for (int i = n-1; i >= 0; i--)
        {
            result+=tab[i];
        }
        return result;
    }
    
    static double SumBasedOnPreviouFromBegin(double x, int n)
    {
        double result = x;
        for (int i = 1; i < n; i++)
        {
            result += result * (x / i);
        }
        
        return result;
    }
    static double SumBasedOnPreviouFromEnd(double x, int n)
    {
        double tab[n];
        double result = 1.0;
        tab[0] = x;

        for (int i = 1; i < n; i++)
        {
            tab[i] = tab[i-1] * (x / i);
        }

        for (int i = n-1; i >= 0; i--)
        {
            result += tab[i];
        }
        return result;
    }
    
};
