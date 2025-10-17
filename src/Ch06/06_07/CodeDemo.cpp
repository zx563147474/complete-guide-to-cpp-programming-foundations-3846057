// Complete Guide to C++ Programming Foundations
// Challenge 06_07
// Calculate Rhythm Game Scores, by Eduardo Corpeño

#include <iostream>
#include <cstdint>
#include <vector>

// Function to calculate score based on milliseconds difference 
// You still need to make the bonus multiplier optional with a default value
double CalculateScore(int millisecondsDiff, double bonusMultiplier = 1.0){
    double score = 0.0;

    // Write your code here
    if (millisecondsDiff <= 50)
    {
        score = 100.0;
    } 
    else if (millisecondsDiff <= 100)
    {
        score = 70.0;
    }
    else if (millisecondsDiff <= 200)
    {
        score = 50.0;
    }
    else
    {
        score = 0.0;
    }

    
    return score * bonusMultiplier;
}

// Overloaded function to calculate score based on seconds difference 
// You still need to make the bonus multiplier optional with a default value
double CalculateScore(double secondsDiff, double bonusMultiplier = 1.5){
    double score = 0.0;
    
    // Write your code here
    if (secondsDiff*1000 <= 50)
    {
        score = 100.0;
    } 
    else if (secondsDiff*1000 <= 100)
    {
        score = 70.0;
    }
    else if (secondsDiff*1000 <= 200)
    {
        score = 50.0;
    }
    else
    {
        score = 0.0;
    }

    return score * bonusMultiplier;
}

// Function to call both overloaded functions and return a vector of results
std::vector<double> GetScores(int millisecondsDiff, double secondsDiff, double bonusMultiplier1, double bonusMultiplier2) {
    std::vector<double> results;
    results.push_back(CalculateScore(millisecondsDiff));                   // Call the function using milliseconds with the default multiplier
    results.push_back(CalculateScore(millisecondsDiff, bonusMultiplier1));  // Call the function using milliseconds with a custom multiplier
    results.push_back(CalculateScore(secondsDiff));                        // Call the function using seconds with the default multiplier
    results.push_back(CalculateScore(secondsDiff, bonusMultiplier2));       // Call the function using seconds with a custom multiplier
    
    return results;
}

int main(){
    // Example 1
    int millisecondsDiff = 45;    // Input for the function using milliseconds
    double secondsDiff = 0.12;    // Input for the function using seconds
    double bonusMultiplier1 = 1.3;  // Custom multiplier for the function using milliseconds
    double bonusMultiplier2 = 1.75;  // Custom multiplier for the function using seconds

    // Get the results from the GetScores function
    std::vector<double> learnerResult = GetScores(millisecondsDiff, secondsDiff, bonusMultiplier1, bonusMultiplier2);

    std::cout << "Your code returned: { ";
    auto vectPtr = learnerResult.begin();
    while (vectPtr != learnerResult.end()){
        std::cout << *vectPtr << " ";
        vectPtr = next(vectPtr, 1);
    }
    std::cout << "}" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
