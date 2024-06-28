#include <iostream>


int partision(int* arr, int f, int e);
void quickSort(int* arr, int f, int e);







int main(){
	const int s = 10;
	int arr[s];
	std::cout << "Enter to arr for sort" << std::endl;
	for(int i = 0; i < s; ++i){
		std::cin >> arr[i];
	}
	quickSort(arr, 0, s-1);

	for(int i = 0; i < s; ++i){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}


int partision(int* arr, int f, int e){
	int i = f;
	int j = e - 1;
	int pivot = e;
	
	while(i < j){
		while(arr[i] < arr[pivot]){
			++i;
			if(arr[j] < arr[pivot]){
				std::swap(arr[i], arr[j]);
			}

			while(arr[j] > arr[pivot]){
				--j;
			}
		}
		if(arr[i] > arr[j]){
			std::swap(arr[i], arr[j]);
		}
		
		std::swap(arr[i], arr[pivot]);
	}
	return i;
}


void quickSort(int* arr, int f, int e){
	if(f < e){
		int p = partision(arr, f, e);
		quickSort(arr, f, p - 1);
		quickSort(arr, p + 1, e);
	}
}



