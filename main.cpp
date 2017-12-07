#include <cstdlib>
#include <string>
#include <iostream>

#include "Queue.h"
using std::string;
using std::cin;
using std::cout;
using std::endl;
    


int main() {
    
    Queue<int> nums;
    int i = 1;
    int j = 2;
    int k = 3;
    int e = 55;
    int q = 0;
    nums.push(i);
    nums.push(j);
    nums.push(k);
    nums.push(e);
    nums.push(q);
    
    nums.test_print();
    
    cout << nums.front() << endl;
    
    if(nums.empty() == false){
        cout <<"there is shit in the queue" << endl;
    } else
        cout << "there is no shit in the queue" << endl;
    
    cout << "size: " << nums.size() << endl;
    int deleted_element = nums.pop();
    cout << nums.front() << endl;
    cout << "size: " << nums.size() << endl;
    cout << deleted_element;
            
    
    return 0;
}

