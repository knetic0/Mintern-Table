#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int ans;
	printf("2^2 or 2^3 or 2^4?\n =>");
	scanf("%d", &ans);
	if(ans == 4){
	   int i,j;
	   int rows[4][2] = {{0,0},{0,1},{1,0},{1,1}};
	   for(i = 0; i<4;i++){
		   printf("M%d. => ", i);
		   for(j = 0;j<2;j++){
		      printf("%d",rows[i][j]);
	      }
	      printf("\n");
	   } 
	 }  if(ans == 8){
		   int k, l;
		   int rows8[8][3] = {{0,0,0},{0,0,1},{0,1,0},{0,1,1},{1,0,0},{1,0,1},{1,1,0},{1,1,1}};
		   for(k = 0; k<8; k++){
			   printf("M%d. =>", k);
			   for(l = 0; l<3; l++){
				   printf("%d", rows8[k][l]);
			   }
			   printf("\n");
		   }		   
       } if(ans == 16){
		   int m, n;
		   int rows16[16][4] = {{0,0,0,0},{0,0,0,1},{0,0,1,0},{0,0,1,1},{0,1,0,0},{0,1,0,1},{0,1,1,0},{0,1,1,1},{1,0,0,0},{1,0,0,1},{1,0,1,0},{1,0,1,1},{1,1,0,0},{1,1,0,1},{1,1,1,0},{1,1,1,1}};
		   for(m = 0; m<16; m++){
			   printf("M%d. =>", m);
			   for(n = 0; n<4; n++){
			     printf("%d", rows16[m][n]);
		       }
		       printf("\n");
		   } 
	   }
       
	
	return 0;
}
