#include <stdio.h>
#include <math.h>
#include <string.h>

void displayMenu();
void displayResult(int,int,float,char*,float,float,float,float);
int main() {
	
	int material , quan , i = 0 , result;
	float width , length , height , thick , totalheight , rawprice , rawVolume , cusVolume , calVolume , totalPrice , time1 ,time2, time3, time4;
	char materialtype[20] ;
	
	displayMenu();
	printf("Please enter type of material [1]Alloy [2]Aluminum : ");	
	scanf("%d" , &material) ;
	
	rawVolume = 1*0.5*0.01 ;
	
	if(material == 1){
		rawprice = 150;
		strcpy(materialtype , "Alloy");
	}else if(material == 2){
		rawprice = 100;
		strcpy(materialtype , "Aluminium");
	}
	
	printf("\n\n\t[PART PARAMETER] \n");	
	printf("1.Part Quantity : ");
	scanf("%d" , &quan) ;
	
	do{
		printf("\n\n[NOTE] Your total of length + height MUST be less than / equal to 1m \n");
		printf("2.Part Length (in m) : ");
		scanf("%f" , &length) ;
		printf("3.Part Height (in m) : ");
		scanf("%f" , &height) ;	
		totalheight = length + height ;
		
		if(totalheight > 1)
			printf("\n\n[ERROR] Your total of length + height is bigger than 1m \n");

	}while(totalheight>1);

	do{
		printf("4.Part Width (in m) [less than 0.5m]:");	
		scanf("%f" , &width) ;
		
		if(width > 0.5)
			printf("\n\n[ERROR] Your width is bigger than 0.5m \n");
		
	}while(width>0.5);
	
	do{
		printf("5.Part Thickness (in m) [less than 0.01m]:");	
		scanf("%f" , &thick) ;
		
		if(thick > 0.01)
			printf("\n\n[ERROR] Your thickness is bigger than 0.01m \n");
		
	}while(thick > 0.01);
	
	
	cusVolume = totalheight * thick * width; 
	
	calVolume = (quan *cusVolume) / rawVolume ;
	result = ceil(calVolume);
	totalPrice = rawprice * result ;
	
	time1 = (2* quan);
	time2 = (5* quan) ;
	time3 = (0.25* quan) ;
	time4 = (30*quan) ;
	
	displayResult(result,quan,totalPrice,materialtype,time1,time2,time3,time4);
	

	
}
void displayResult(int result,int quan,float totalPrice,char *materialtype,float time1,float time2,float time3,float time4){
	printf("\n\nThe total raw material required to fabricate the part is : %d pieces for %d unit." , result , quan );
	printf("\nThe cost need for the part purchase is RM %.2f" , totalPrice );

	printf("\n\n\n[THE PRODUCT DESIGN STRUCTURE (PROCESS FLOW) ]");
	
	for(int i=0;i<4;i++){
		if(i==0){
			printf("\n\nFirst process : Cutting the raw material into pieces");
			printf("\nMaterial Type : %s" , materialtype);
			printf("\nQuantity : %d" , quan);
			printf("\nTime taken to finish the product cutting [each pieces take 2 minutes to complete] : %.0f minutes" , time1);
		}else if(i==1){
			printf("\n\nSecond process : Punching hole");
			printf("\nMaterial Type : %s" , materialtype);
			printf("\nQuantity : %d" , quan);
			printf("\nTime taken to finish the product hole punching [each pieces take 5 minutes to complete] : %.0f minutes" , time2);	
		}else if(i==2){
			printf("\n\nThird process : 90 degree folding for the height");
			printf("\nMaterial Type : %s" , materialtype);
			printf("\nQuantity : %d" , quan);
			printf("\nTime taken to finish the product folding [each pieces take 0.25 minutes to complete] : %.2f minutes" , time3);
		}else if(i==3){
			printf("\n\nForth process : Powder coating");
			printf("\nMaterial Type : %s" , materialtype);
			printf("\nQuantity : %d" , quan);
			printf("\nTime taken to finish powder coating [each pieces take 30 minutes to complete] : %.0f minutes" , time4);	
		}
	}

}

void displayMenu(){
	printf("---------------------------------------\n");	
	printf("\tPRODUCTION PLANNING \n");
	printf("---------------------------------------\n");	
	printf("[Available Type of raw material]\n\n");
	printf("Alloy plate : 1m X 0.5m X 0.01m (5kg)\n");
	printf("Aluminium plate : 1m X 0.5m X 0.01m (3kg)\n");
}
