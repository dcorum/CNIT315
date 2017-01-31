#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#ifndef M_PI
#				define M_PI acos(-1.0)
#endif

int main() {

				float tubWidth;
				float tubDepth;
				float tubCalc;
				
				float poolDepthShallow;
				float poolDepthDeep;
				float poolWidth;
				float poolLength;
				float poolLengthWalkin;
				float poolLengthShallow;
				float poolLengthDeep;
				float poolCalc;
				float poolDeepCalc;
				float poolShallowCalc;
				float poolWalkinCalc;
				float poolDeepToShallowTriangle;
				float poolDeepToShallowRec;
				bool yesNo = true;
				int i; 
				
				
				while(yesNo)
				{
				//float lastVar = 3;
				char lastVar = ' ';	
				float tubWidth =0;
				float tubDepth=0;
				
				float poolDepthShallow=0;
				float poolDepthDeep=0;
				float poolWidth=0;
				float poolLength=0;
				float poolLengthWalkin=0;
				float poolLengthShallow=0;
				float poolLengthDeep=0;
				
				while(tubWidth < 8 || tubWidth > 14){
				printf("Please enter Width of the hot tub (8.0 - 14.0):");
				scanf("%f",&tubWidth);
				}				
				
				while(tubDepth < 3 || tubDepth > 5){
				printf("Please enter Depth of the hot tub (3.0 - 5.0):");
				scanf("%f",&tubDepth);
				}
				
				//tubCalc = (((pow((tubWidth/2),2)) * (tubDepth-.5)) * M_PI);
				printf("The volume of the Hot Tub will equal %.2f \n",tubCalc);
				printf("The Hot tub will hold %.2f gallons \n",(tubCalc*7.481));
				
				while(poolLength < 35 || poolLength > 60){
				printf("Please enter Length of the pool (35.0 - 60.0):");
				scanf("%f",&poolLength);
				}
				
				while(poolWidth < 15 || poolWidth > 30){
				printf("Please enter Width of the pool (15.0 - 30.0):");
				scanf("%f", &poolWidth);
				}
				
				while(poolLengthWalkin < 5 || poolLengthWalkin > 11.7){
				printf("Please enter Length of the pool walk-in (5.0 - 11.7):");
				scanf("%f",&poolLengthWalkin);
				}
				
				while(poolDepthShallow < 2 || poolDepthShallow > 5){
				printf("Please enter Depth of the pool shallow end (2.0 - 5.0):");
				scanf("%f",&poolDepthShallow);
				}
				
				while(poolLengthShallow < 10 || poolLengthShallow > 11.7){
				printf("Please enter Length of the pool shallow end (10.0 - 11.7):");
				scanf("%f",&poolLengthShallow);
				}
				
				while (poolDepthDeep < 6 || poolDepthDeep > 12){
				printf("Please enter Depth of the pool deep end (6.0 - 12.0):");
				scanf("%f",&poolDepthDeep);
				}
				
				while (poolLengthDeep < 12 || poolLengthDeep > 17.5){
				printf("Please enter Length of the pool deep end (12.0 - 17.5):");
				scanf("%f",&poolLengthDeep);
				}
				
				poolDeepCalc = poolLengthDeep * (poolDepthDeep-.5) * poolWidth;
				poolShallowCalc = poolLengthShallow * (poolDepthShallow-.5) * poolWidth;
				poolWalkinCalc = ((poolLengthWalkin * (poolDepthShallow-.5))/2) * poolWidth;
				poolDeepToShallowTriangle = (((poolDepthDeep-.5) - (poolDepthShallow-.5)) * (poolLength - 																		(poolLengthDeep + poolLengthShallow + poolLengthWalkin)) / 2) * poolWidth;
				poolDeepToShallowRec = ((poolLength - (poolLengthDeep + poolLengthShallow + poolLengthWalkin)) * 															 (poolDepthShallow-.5)) * poolWidth;
				poolCalc = poolDeepCalc + poolShallowCalc + poolWalkinCalc + poolDeepToShallowTriangle + poolDeepToShallowRec;
				
				
				printf("The Volume of the pool will equal %.2f \n",poolCalc);
				printf("The pool will hold %.2f gallons \n",(poolCalc*7.481));
				
				printf("Total gallons for both: %.2f \n",((poolCalc*7.481)+(tubCalc*7.481)));
				printf("Total cost for both: %.2f \n",(((poolCalc*7.481)+(tubCalc*7.481))/10));
				
				printf("Do you want to start over with another dimension? (y/n): ");
				
				
				while(lastVar == ' '){

				scanf("\n%c",&lastVar);
				printf("%c\n",lastVar);
				if(lastVar == 'n'){

				 yesNo = false;
			
				
				}
				}
			}

				return 0;
}

