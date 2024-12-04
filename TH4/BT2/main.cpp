#include "business.h"
#include "premium.h"
#include "deluxe.h"
#include <algorithm> 
#include <iostream>
int main()
{   
    Deluxe a(1, 2, 3), b(4, 5, 6);
    Premium c(2, 5), d(3, 6);
    Business e(4);
    int ans = std::max({a.DoanhThu() + b.DoanhThu(), c.DoanhThu() + d.DoanhThu(), e.DoanhThu()});
    std::cout<<ans<<std::endl;
    if (ans == a.DoanhThu() + b.DoanhThu()) std::cout<<"Deluxe has a highest revenue";
    else if (ans == c.DoanhThu() + d.DoanhThu()) std::cout<<" Premium has a highest revenue";
    else std::cout<<" Business has a highest revenue";
    return 0;
}