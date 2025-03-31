// Function to sort hospitals by available beds (descending) 
void sortByBeds(struct Hospital hospitals[], int n) { 
	// Implement sorting logic: bubble sort 
	for (int i = 0; i < n - 1; i++) { 
		for (int j = 0; j < n - i - 1; j++) { 
			if (hospitals[j].beds < hospitals[j + 1].beds) { 
				struct Hospital temp = hospitals[j]; 
				hospitals[j] = hospitals[j + 1]; 
				hospitals[j + 1] = temp; 
			} 
		} 
	} 
}
