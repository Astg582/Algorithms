#include <iostream>


void select(int* arr, const int size){
	for(int i = 0; i < size - 1; ++i){
		int min = i;
		int j = i + 1; 
		while(j < size){
			if( arr[j] < arr[min]){
				min = j;
			}
			j++;
		}

		if(min != i){
			std::swap(arr[i], arr[min]);
		}
	}

}




int main(){
	int arr[8];
	std::cout << " enter to arr" << std::endl;
	for(int i = 0; i < 8; ++i){
		std::cin >> arr[i];
	}
	std::cout << std::endl;
	select(arr, 8);

	for(int i = 0; i < 8; ++i){
		std::cout << arr[i] << " ";
	}
}
