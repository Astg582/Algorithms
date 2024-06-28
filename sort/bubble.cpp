#include <iostream>

void bubble(int* arr, const int size){

	for(int i = 0; i < size - 1; ++i){
		bool flag = true;

		for(int j = 0; j < size - i - 1; ++j){
			if(arr[j] > arr[j + 1]){
				std::swap(arr[j], arr[j + 1]);
				flag = false;
			}
		}  
		if(flag) return;
	} 
}


int main(){
	int arr[8];
	std::cout << " enter to arr" << std::endl;
	for(int i = 0; i < 8; ++i){
		std::cin >> arr[i];
	}
	std::cout << std::endl;
	bubble(arr, 8);

	for(int i = 0; i < 8; ++i){
		std::cout << arr[i] << " ";
	}
}
