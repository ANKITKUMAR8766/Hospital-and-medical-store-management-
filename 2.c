// Function to print hospital data 
void printHospital(struct Hospital hosp) { 
	printf("Hospital Name: %s\n", hosp.name); 
	printf("City: %s\n", hosp.city); 
	printf("Total Beds: %d\n", hosp.beds); 
	printf("Price per Bed: $%.2f\n", hosp.price); 
	printf("Rating: %.1f\n", hosp.rating); 
	printf("Reviews: %d\n", hosp.reviews); 
	printf("\n"); 
}
