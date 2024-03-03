#include <iostream>

int main() {
    int X, Y;
    std::cin >> X >> Y;

    int childrenTickets = Y / 2;  // Initialize with an assumption
    int adultTickets = childrenTickets + X;
    int seniorTickets = 2 * childrenTickets;

    while ((adultTickets * 5 + childrenTickets * 2 + seniorTickets * 3) != Y) {
        // Decrement children's tickets if the total is not equal to Y
        childrenTickets--;
        adultTickets = childrenTickets + X;
        seniorTickets = 2 * childrenTickets;

        // If children's tickets reach zero, break the loop
        if (childrenTickets == 0) {
            break;
        }
    }

    std::cout << "Number of children tickets sold: " << childrenTickets << std::endl;
    std::cout << "Number of adult tickets sold: " << adultTickets << std::endl;
    std::cout << "Number of senior tickets sold: " << seniorTickets << std::endl;

    return 0;
}
