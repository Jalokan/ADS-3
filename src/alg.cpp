// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
	int leftborder = 0;
	int rightborder = size - 1;
	while (leftborder <= rightborder) {
		int center = (leftborder + rightborder) / 2;
		if (*(arr + center) == value) {
			return center;
		}
		else if (*(arr + center) < value) {
			leftborder = center + 1;
		}
		else {
			rightborder = center - 1;
		}
	}
	return 0; 
}
