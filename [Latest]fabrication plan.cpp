#include <stdio.h>
#include <math.h>

void displayMenu();
void display1stProcess();
void display2ndProcess();
void display3rdProcess();
void display4thProcess();

int main() {
	float thick , power, energy ,torque1 ,torque2 ,torque3, rpm1, rpm2, rpm3 , time;
	int step , hole , part ;
	torque1 = 245166.25;
	rpm1 = 120;
	torque2 = 360;
	rpm2 = 1400;
	torque3 = 869;
	rpm3 = 320;	

	displayMenu();
		
	//1st process
	display1stProcess();

	do{
		printf("Enter thickness of material (maximum thickness is 0.01m) : ");
		scanf("%f" , &thick) ;
		
		if(thick > 0.01)
			printf("\n\n[ERROR] Your thickness is bigger than 0.01m \n");
		
	}while(thick > 0.01);
	
	printf("Enter number of step in stamping : ");
	scanf("%d" , &step)	;

	power = (torque1 * rpm1 / 9.5488);
	energy = (torque1 * rpm1 / 9.5488) * (step*0.0002778); // 0.0002778 hours for 1 step complete
	printf("Stamping machine specification : \n");
	
	for(int i=0;i<2;i++){
		if(i == 0){
			printf("1.Torque : 245,166.25 Nm \n"); //25 ton x 9,806.65 
			printf("2.Speed : 120 rpm \n\n");
		}else if(i == 1){
			printf("[Result]:\n");
			printf("1.Power : %f kW\n" , power);
			printf("2.Energy : %f kW/h\n" , energy);
		}
	}



	//2nd process
	display2ndProcess();
	
	do{
		printf("Enter thickness of material (maximum thickness is 0.01m) : ");
		scanf("%f" , &thick) ;
		
		if(thick > 0.01)
			printf("\n\n[ERROR] Your thickness is bigger than 0.01m \n");
		
	}while(thick > 0.01);
	
	printf("Enter number of holes   : ");
	scanf("%d" , &hole)	;

	power = (torque2 * rpm2 / 9.5488);
	energy = (torque2 * rpm2 / 9.5488) * (hole*0.03333); //0.03333 hours for 1 hole complete
	for(int i=0;i<2;i++){
		if(i == 0){
			printf("Stamping machine specification : \n");
			printf("1.Torque : 360 Nm \n");
			printf("2.Speed : 1400 rpm \n\n");
		}else if(i == 1){
			printf("[Result]:\n");
			printf("1.Power : %f kW\n" , power);
			printf("2.Energy : %f kW/h\n" , energy);
		}
	}

	//3rd process
	display3rdProcess();

	do{
		printf("Enter thickness of material (maximum thickness is 0.025m) : ");
		scanf("%f" , &thick) ;
		
		if(thick > 0.025)
			printf("\n\n[ERROR] Your thickness is bigger than 0.025m \n");
		
	}while(thick > 0.025);
	
	printf("Enter number of part   : ");
	scanf("%d" , &part)	;

	power = (torque3 * rpm3 / 9.5488);
	energy = (torque3 * rpm3 / 9.5488) * (part*0.00833); // 0.00833 hours for 1 part complete
	for(int i=0;i<2;i++){
		if(i == 0){
			printf("Folding machine specification : \n");
			printf("1.Torque : 869 Nm \n");
			printf("2.Speed : 320 rpm \n\n"); 
		}else if(i == 1){
			printf("[Result]:\n");
			printf("1.Power : %f kW\n" , power);
			printf("2.Energy : %f kW/h\n" , energy);
		}
	}


	
	//4th process
	display4thProcess();	
	printf("Enter number of part   : ");
	scanf("%d" , &part)	;
	
	//calculation
	time = part * 0.5 ; // 0.5 hour (30 minutes)
	printf("Folding machine specification : \n");
	printf("1.Power : 400w \n");
	printf("2.Motor Speed : 28000 rpm \n\n"); 
	printf("[Result]:\n");
	printf("1.Time taken to finish : %.2f hours" , time);	
}

void displayMenu(){
	printf("---------------------------------------\n");	
	printf("\tFABRICATION PLANNING \n");
	printf("---------------------------------------\n");	
	printf("PRODUCT : BRACKET \n");
	printf("\n[THE PROCESS INVOLVED] : \n");
	printf("1.Stamping\n");
	printf("2.Drilling\n");
	printf("3.Folding\n");
	printf("4.Powder coating\n");
	printf("---------------------------------------\n");
}
void display1stProcess(){
	printf("\n\n---------------------------------------\n");			
	printf("STAMPING PROCESS WITH 20 TONS STAMPING TOOLS\n");	
	printf("METAL STAMPING PARAMETER : \n");
	printf("---------------------------------------\n");
}
void display2ndProcess(){
	printf("\n\n---------------------------------------\n");				
	printf("DRILLING PROCESS WITH SEMI AUTO DRILLING MACHINE \n");	
	printf("DRILLING PARAMETER : \n");
	printf("---------------------------------------\n");
}
void display3rdProcess(){
	printf("\n\n---------------------------------------\n");				
	printf("FOLDING PROCESS WITH FOLDING MACHINE \n");	
	printf("FOLDING PARAMETER : \n");
	printf("---------------------------------------\n");
}
void display4thProcess(){
	printf("\n\n---------------------------------------\n");				
	printf("POWDER COATING PROCESS WITH PAINT GUN\n");	
	printf("POWDER COATING PARAMETER : \n");	
	printf("---------------------------------------\n");
}

