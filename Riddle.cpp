#include <iostream>
using namespace std;

int main() {

    unsigned int currentPosition = 0;
    currentPosition = currentPosition -1;
    cout << currentPosition << endl;
    const size_t size = 5;

    char array[size] = {'a', 'b', 'c', 'd', 'e'};

    char choice; // 'r', 'l'
    while (true) {
        cin >> choice;

        if (choice == 'r') {
        	if(currentPosition == size - 1) {
        		currentPosition = 0;	
			}
			else {
				currentPosition = currentPosition + 1;
			}
        } 
		else if (choice == 'l') {
			if(currentPosition == 0) {
				currentPosition = size - 1;
			}else {
				currentPosition = currentPosition - 1;
			}		
		}
		
        cout << array[currentPosition] << endl;
    }

    return 0;
}
