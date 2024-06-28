#include <iostream>

void insertion(int* arr, int size){
	int i = 1;
	int j, k;
	while(i < size){
		j = i - 1;
		k = arr[i];
		while(j >= 0 && arr[j] > k){
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = k;
		++i;
	}
}


int main(){
	int arr[8];
	std::cout << " enter to arr" << std::endl;
	for(int i = 0; i < 8; ++i){
		std::cin >> arr[i];
	}

	insertion(arr, 8);

	for(int i = 0; i < 8; ++i){
		std::cout << arr[i];
	}
}
