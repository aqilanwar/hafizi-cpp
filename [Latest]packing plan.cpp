#include <stdio.h>
#include <math.h>

void displayPackaging();
void displayDelivery ();

int main() {
	int method , result ,quan , logistic , holdresult;
	float boxvol , partvol, palletvol , lorryvol , container20ft ,container40ft , logvol  ;
	boxvol = 250*250*250; // box volume in mm
	palletvol = 500*500*500; // vol of pallet in mm
	lorryvol = 2500 * 1000 * 800 ; // vol of lorry in mm
	container20ft = 4000 *2000 *1500; // vol of container20ft in mm
	container40ft = 6000 *2000 *1500; // vol of container40ft in mm
	
	float length , height , width;
	displayPackaging();
	printf("\nPlease enter the method of packaging [1/2/3] : ");
	scanf("%d" , &method) ;

	printf("\nPlease enter the quantity of product : ");
	scanf("%d" , &quan) ;	

	//calculation of volume for product
	printf("\nPlease enter the volumatric shape of product in mm : \n");
	
	for(int i=0;i<3;i++){
		if(i == 0){
			printf("1.Length [mm] : ");
			scanf("%f" , &length) ;
		}else if(i == 1){
			printf("2.Height [mm] : ");
			scanf("%f" , &height) ;
		}else if(i == 2){
			printf("3.Width [mm] : ");
			scanf("%f" , &width) ;	
		}
	}

	
	if(method == 1){
		result = length*height*width*quan ;
		printf("\nThe wrapping plastic to be used for the selected product : %d unit" ,quan);
	}
	else if(method == 2){
		partvol = (length*height*width*quan)/ boxvol;
		result = ceil(partvol);
		printf("\nThe box to be used for the selected product : %d unit" , result);
	}
	else if(method == 3){
		partvol = (length*height*width*quan)/ palletvol;
		result = ceil(partvol);
		printf("\nThe wooden pallet to be used for the selected product : %d unit" , result);
	}
	
	displayDelivery();
	printf("\nPlease enter the method of logistic [1/2/3] :" );
	scanf("%d" , &logistic) ;	
	
	if(logistic == 1){
		logvol = result/lorryvol ;
		holdresult = ceil(logvol);
		printf("\nThe lorry that needed to deliver the product : %d unit" ,holdresult);
	}
	else if(logistic == 2){
		logvol = result/container20ft ;		
		holdresult = ceil(logvol);
		printf("\nThe 20ft container that needed to deliver the product : %d unit" , holdresult);
	}
	else if(logistic == 3){
		logvol = result/container40ft ;		
		holdresult = ceil(logvol);
		printf("\nThe 40ft container that needed to deliver the product : %d unit" , holdresult);
	}		
}

void displayDelivery(){
	printf("\n---------------------------------------\n");		
	printf("TYPES OF LOGISTIC AVAILABLE\n" );
	printf("---------------------------------------\n");	
	printf("\n1. One ton lorry : Max Load 1000kg : Load Size [Max]-2.5m(L) X 1.5m(W) X 0.8m(H)- Cost : RM500 per unit" );
	printf("\n2. 20 ft container : Max Load 10000kg : Load Size [Max]-4.0m(L) X 2.0m(W) X 1.5m(H)- Cost : RM950 per unit" );
	printf("\n3. 40 ft container : Max Load 15000kg : Load Size [Max]-6.0m(L) X 2.0m(W) X 1.5m(H)- Cost : RM1400 per unit" );
}

void displayPackaging(){
	printf("---------------------------------------\n");	
	printf("\tLIST OF PACKAGING METHOD \n");
	printf("---------------------------------------\n");
	for(int i=0;i<3;i++){
		if(i == 0)
			printf("1.Plastic Wrapping [1pc for each product]\n");
		else if(i == 1)
			printf("2.Box [250mm (L) X 250mm (W) X 250mm (H)]\n");
		else if(i == 2)
			printf("3.Wooden Pallet [500mm (L) X 500mm (W) X 500mm (H)]\n");
	}	
	printf("---------------------------------------\n");
}
	
