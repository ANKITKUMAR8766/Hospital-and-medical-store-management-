// Function to sort hospitals by beds price (ascending) 
void sortByPrice(struct Hospital hospitals[], int n) { 
	// Implement sorting logic: bubble sort 
	for (int i = 0; i < n - 1; i++) { 
		for (int j = 0; j < n - i - 1; j++) { 
			if (hospitals[j].price > hospitals[j + 1].price) { 
				struct Hospital temp = hospitals[j]; 
				hospitals[j] = hospitals[j + 1]; 
				hospitals[j + 1] = temp; 
			} 
		} 
	} 
}
