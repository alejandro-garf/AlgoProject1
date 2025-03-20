// Alejandro Fonseca & leonardo Nava

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/**
 * Performs Depth-First Search (DFS) to detect cycles in the graph.
 * @param node - The current node being visited.
 * @param parent - The node from which the current node was reached.
 * @param graph - Adjacency list representation of the movement paths.
 * @param visited - Set to track visited nodes.
 * @return true if a cycle is detected, false otherwise.
 */

bool detectCycle(int node, int parent, unordered_map<int, vector<int>> &graph, unordered_set<int> &visited) {
    visited.insert(node); // Mark the node as visited

    // Traverse all adjacent nodes
    for (int neighbor : graph[node]) {
        if (visited.find(neighbor) == visited.end()) {
            // If the neighbor hasn't been visited, recursively check for cycles
            if (detectCycle(neighbor, node, graph, visited)) {
                return true;
            }
        } else if (neighbor != parent) {
            // If we encounter a visited node that isn't the parent, a cycle is found
            return true;
        }
    }
    return false;
}

/**
 * Constructs a graph from given movement paths and detects cycles.
 * @param numPairs - Number of movement pairs (edges).
 * @param movementData - Vector of coordinate pairs representing movements.
 */

void analyzeMovement(int numPairs, vector<pair<int, int>> &movementData) {
    unordered_map<int, vector<int>> graph;

    // Construct the adjacency list from movement data
    for (auto &[start, end] : movementData) {
        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    unordered_set<int> visited;

    // Check for cycles in each connected component
    for (const auto &[node, _] : graph) {
        if (visited.find(node) == visited.end()) {
            if (detectCycle(node, -1, graph, visited)) {
                cout << "Loop detected" << endl;
                return;
            }
        }
    }

    cout << "No loop detected" << endl;
}

int main() {
    int numPairs;

    cout << "Enter the number of movement pairs: ";
    cin >> numPairs;

    vector<pair<int, int>> movementData(numPairs);

    cout << "Enter the movement pairs (start and end coordinates):" << endl;
    for (int i = 0; i < numPairs; i++) {
        cin >> movementData[i].first >> movementData[i].second;
    }

    // Analyze the movement data for cycle detection
    analyzeMovement(numPairs, movementData);

    return 0;
}
