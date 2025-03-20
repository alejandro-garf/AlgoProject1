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
 git clone https://github.com/your-username/wildlife-movement-analysis.git
 cd wildlife-movement-analysis
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
