// Complete Guide to C++ Programming Foundations
// Challenge 05_09
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    double tax = 0.0;
    
    for (int i=0; i< resources.size(); i++){
        switch(resources[i].type){
            case 'B':
                tax = 0.05 * resources[i].baseCost;
                break;
            case 'L':
                tax = 0.15 * resources[i].baseCost;
                break;
            case 'E':
                tax = 0.0;
                break;
            default:
                std::cout << "The entered type of the item is wrong!" << std::endl;
        }

        result += resources[i].baseCost + tax;
    }
    return result;
}

int main(){
    
    // Example 1 resources
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
