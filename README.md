# Alejandro Fonseca & Leonardo Nava
# Wildlife Movement Cycle Detection - Algo 1
 
 ## Overview
This program analyzes the movement paths of animals based on recorded GPS coordinates to determine if an animal has revisited a location. It uses **graph theory** and **Depth-First Search (DFS)** to detect cycles in the movement data.
 
 ## Prerequisites
 To compile and run this C++ program, ensure you have:
 - A **C++ compiler** (e.g., `g++` for GCC).
 - A terminal or command prompt for execution.
 
 ---
 
 ## Installation & Compilation
 
 ### **1. Clone the Repository**
 ```sh
 git clone https://github.com/alejandro-garf/AlgoProject1.git
 cd Algo1
 ```
 
 ### **2. Compile the Program**
 Using **GCC** (recommended):
 ```sh
 g++ -o cycle_detection main.cpp
 ```
 
 ### **3. Run the Program**
 ```sh
 ./cycle_detection
 ```
 
 ---
 
 ## Usage
 Upon running the program, it will prompt you to:
 1. Enter the number of movement pairs.
 2. Enter pairs of coordinates representing animal movements.
 
 The program will then analyze the movement path and determine if a cycle (loop) exists.
 
 ---
 
 ## Test Cases
 
 ### **Test Case 1: Cycle Detected**
 #### **Input:**
 ```
 Enter the number of movement pairs: 7
 Enter the movement pairs (start and end coordinates):
 0 1
 1 2
 2 3
 3 4
 4 5
 5 2
 4 6
 ```
 #### **Output:**
 ```
 Loop detected
 ```
 
 ### **Test Case 2: No Cycle**
 #### **Input:**
 ```
 Enter the number of movement pairs: 5
 Enter the movement pairs (start and end coordinates):
 0 1
 1 2
 2 3
 3 4
 4 5
 ```
 #### **Output:**
 ```
 No loop detected
 ```

 ---

 Here’s the README file for your C++ program in the same format:  

---

# Circular Road Trip - Algo 2

## Overview  
This program determines the **optimal starting city** for a circular road trip where a vehicle must complete the journey without running out of fuel using the  **greedy algorithms** and **fuel balance tracking** to efficiently compute the valid starting city.  

## Prerequisites  
To compile and run this C++ program, ensure you have:  
- A **C++ compiler** (e.g., `g++` for GCC).  
- A terminal or command prompt for execution.  

---

## Installation & Compilation  

### **1. Clone the Repository**  
```sh
git clone https://github.com/alejandro-garf/AlgoProject1.git
cd Algo2
```

### **2. Compile the Program**  
Using **GCC** (recommended):  
```sh
g++ -o find_starting_city main.cpp
```

### **3. Run the Program**  
```sh
./find_starting_city
```

---

## Usage  
Upon running the program, it will prompt you to:  
1. Enter the number of cities.  
2. Input the distances between consecutive cities.  
3. Enter the amount of fuel available at each city.  
4. Provide the miles per gallon (MPG) of the vehicle.  

The program will then compute and output the **index of the optimal starting city** for completing the full circular journey.  

---

## Test Cases  

### **Test Case 1: Optimal Start Exists**  
#### **Input:**  
```
Enter the number of cities: 5  
Enter city distances: 5 25 15 10 15  
Enter fuel available: 1 2 1 0 3  
Enter MPG: 10  
```
#### **Output:**  
```
The preferred starting city is: 4
```

### **Test Case 2: Edge Case - Minimum Fuel at Start**  
#### **Input:**  
```
Enter the number of cities: 4  
Enter city distances: 10 20 30 10  
Enter fuel available: 2 3 4 1  
Enter MPG: 10  
```
#### **Output:**  
```
The preferred starting city is: 1
```

---
