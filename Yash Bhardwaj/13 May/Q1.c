#include<stdio.h>

void main(){
	int a[3][3],i=0,j=0,r_max[3],max=-9999;
	
	printf("Enter the element:");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The matrix is:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			r_max[i]=-9999;
			if(r_max[i]<a[i][j]){
				r_max[i]=a[i][j];
			}
		}
	}
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		if(max < a[i][j]){
			max = a[i][j];
		}
	}
}

for(i=0;i<3;i++){
	printf("The maximum of %d row is %d\n",i+1,r_max[i]);
}
printf("the maximmum of the matrix is %d",max);
}
