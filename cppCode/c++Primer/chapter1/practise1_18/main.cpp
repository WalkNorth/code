#include <iostream>

int main()
{
    int currVal = 0, newVal = 0;
    if (std::cin >> currVal) {
        int cnt = 1;
        while(std::cin >> newVal) {
            if (newVal == currVal) {
                ++cnt;
            } else {
                std::cout << currVal << "occurs "
                          << cnt << " times" << std::endl;
                currVal = newVal;
                cnt = 1;
            }
        }

        std::cout << currVal << "occurs "
                  << cnt << " times" << std::endl;
    }
    
    return 0;
}