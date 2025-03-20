//Alejandro Fonseca & Leonardo Nava

#include <iostream>
#include <vector>

using namespace std;

/*
 * Function to determine the preferred starting city in a circular road trip.
 * The function processes fuel availability and distance requirements to find the 
 * optimal city from which a full circular journey can be completed.
 */

int findStartingCity(const vector<int>& city_distances, const vector<int>& fuel, int mpg) {
    int num_cities = city_distances.size(); // Total number of cities

    // Convert fuel into miles the car can travel per city
    vector<int> travel_potential(num_cities);
    for (int i = 0; i < num_cities; i++) {
        travel_potential[i] = fuel[i] * mpg;
    }

    int starting_city = 0;   // Index of the potential starting city
    int fuel_balance = 0;    // Tracks fuel surplus or deficit during the journey
    int lowest_fuel = 0;     // Minimum fuel balance encountered

    // Traverse through each city to determine fuel balance
    for (int i = 0; i < num_cities; i++) {
        fuel_balance += travel_potential[i] - city_distances[i]; // Net fuel after reaching next city

        // If fuel balance goes negative, set a new potential start city
        if (fuel_balance < lowest_fuel) {
            lowest_fuel = fuel_balance;
            starting_city = i + 1; // Move start city to the next city
        }
    }

    // Ensure the result is within valid city index bounds
    return starting_city % num_cities;
}

int main() {
    // Example test case
    vector<int> city_distances = {5, 25, 15, 10, 15};
    vector<int> fuel = {1, 2, 1, 0, 3};
    int mpg = 10;

    // Compute the preferred starting city
    int result = findStartingCity(city_distances, fuel, mpg);
    
    // Output the result
    cout << "The preferred starting city is: " << result << endl;
    
    return 0;
}
