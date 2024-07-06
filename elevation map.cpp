#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trapWater(vector<int>& height) {
    if(height.empty()) return 0;

    int n = height.size();
    int waterTrapped = 0;
    
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    
    leftMax[0] = height[0];
    for(int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }
    
    rightMax[n - 1] = height[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }
    
    for(int i = 0; i < n; i++) {
        waterTrapped += min(leftMax[i], rightMax[i]) - height[i];
    }
    
    return waterTrapped;
}

int main() {
    vector<int> elevationMap;
    int n, element;
    
    cout << "Enter the number of elements in the elevation map: ";
    cin >> n;
    
    cout << "Enter the elements of the elevation map: ";
    for(int i = 0; i < n; i++) {
        cin >> element;
        elevationMap.push_back(element);
    }
    
    int result = trapWater(elevationMap);
    cout << "The amount of water that can be trapped is: " << result << " units" << endl;
    
    return 0;
}


