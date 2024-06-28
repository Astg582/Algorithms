#include <iostream>


int partiton(int* arr, int p, int r){
	int x = arr[r];
	int i = p - 1;

	for( int j = p; j < r; ++j){
		if(arr[j] <= x){
			std::swap(arr[++i], arr[j]);
		}
	}

	std::swap(arr[++i], arr[r]);
	return i;
}  


void quick(int* arr, int p, int r){
	if( p < r ){
		int q = partiton(arr, p, r);
		quick(arr, p, q - 1);
		quick(arr, q + 1, r);
	}
} 


int main(){
	const int s = 10;
	int arr[s] = {};

	std::cout << "enter to arr" << std::endl;
	for(int i  = 0; i < s; ++i){
		std::cin >> arr[i];
	}
	quick(arr, 0, s - 1);
	std::cout << std::endl;
	for(int i = 0; i < s; ++i){
		std::cout << arr[i];
	}
	std::cout << std::endl;

	return 0;
}
