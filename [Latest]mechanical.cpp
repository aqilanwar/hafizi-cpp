#include <stdio.h>
#include <stdlib.h>

void topView(float, float);
void frontView(float, float);
void sideView(float,float,float);

int main() {
	
	float width, height, length,thickness,diameter;
	
	printf("---------------------------------------\n");	
	printf("\tMECHANICAL DESIGN \n");
	printf("---------------------------------------\n");	
	printf("1.Enter the width [in mm] : ");
	scanf("%f" , &width);
	printf("2.Enter the length [in mm] : ");
	scanf("%f" , &length);
	printf("3.Enter the height [in mm] : ");
	scanf("%f" , &height);
	printf("4.Enter the thickness [in mm] : ");
	scanf("%f" , &thickness);
	
	topView(width,length);
	frontView(height,width);
	sideView(length,height,thickness);
}

void topView(float width, float length){
	printf("\n\n\n------------------------\n");
	printf("\tTOP VIEW      \n");
 	printf("------------------------\n\n\n");	
	printf("   [%.2f mm]    \n" , width);	
	printf("<-----Width----> \n\n" );	
	printf("----------------     ^ \n");
	printf("|              |     | \n");
 	printf("----------------     | \n");
	for(int i=0;i<3;i++){
		printf("|  |        |  |     | \n");
	}
	printf("|   -......-   |     | \n");
	printf("| O          O |     | \n");
	printf("|   _......_   |     | \n");
	for(int i=0;i<11;i++){
		if(i == 7)
	    	printf("|  |        |  |     |Length [%.2f mm] \n" , length) ;
	    else
	    	printf("|  |        |  |     | \n");
	}
	printf("|   -......-   |     | \n");
	printf("| O          O |     | \n");
	printf("|              |     | \n");
	printf("|       O      |     | \n");
	printf("|   O ***** O  |     | \n");     
	printf("|    *     *   |     | \n");  
	printf("| O *       * O|     | \n");    
	printf("|    *     *   |     | \n");    
	printf("|   O ***** O  |     | \n");    
	printf("|       O      |     | \n");
	printf("|              |     | \n");	
	printf(" -............-      v \n");
	
}
 
 void frontView(float height, float width){
	printf("\n\n\n------------------------\n");
	printf("\tFRONT VIEW      \n");
 	printf("------------------------\n\n\n");	
	printf(" _............_      ^\n");
	printf("|              |     |\n");	
	printf("|  O        O  |     |\n");
	printf("|              |     |\n");	
	printf("|              |     |\n");	
	printf("|              |     |\n");		
	printf("| O _......_ O |     |\n");
	printf("|  |        |  |     |Height [%.2f mm]\n" , height);
	printf("|  |        |  |     |\n");
	printf("|  |        |  |     |\n");
	printf("|  |        |  |     |\n");
	printf("|  |        |  |     |\n");
	printf("----------------     |\n");
	printf("|              |     |\n");
 	printf("----------------     v \n\n");
 	printf("<-----Width---->\n");
	printf("   [%.2f mm]    \n" , width);	

}

void sideView(float length , float height , float thickness){
	printf("\n\n\n------------------------\n");
	printf("\tSIDE VIEW      \n");
 	printf("------------------------\n\n\n");		
 	printf("                                                    [%.2f mm]     \n" , thickness);
	printf("                                                 <-Thickness->  \n");
	printf("                                                        ---   ^ \n");
	printf("                                                        | |   | \n");
	printf("                                                        | |   | \n");
	printf("                                                        | |   | \n");
	printf("                                                        | |   | \n");
	printf("                                                        | |   |Height [%.2f mm] \n" , height);
	printf("                                                        | |   | \n");
	printf("                                                        | |   | \n");
	printf("--------------------------------------------------------  |   |\n");
	printf("|                                                         |   |\n");
	printf("-----------------------------------------------------------   v\n");
	
	printf("\n\n<-----------------------Length---------------------------------->\n");
	printf("                         %.2f mm                                     \n\n\n\n\n\n\n\n\n\n\n", length);

}




