#include <stdio.h>
int checkprimenumber(int n){
	int j, flag = 1;

	for(j=2; j<=n/2; j++){
		if(n%j==0){
			flag=0;
			break;
		}
	}
	return flag;
}
int main(){
	int n1,n2,i,flag;

	printf("두 정수를 입력하시오: ");
	scanf("%d%d",&n1,&n2);
	printf("두 소수 %d와 %d는: ",n1,n2);

	for (i=n1+1; i<n2; i++){
		flag = checkprimenumber(i);

		if(flag == 1)
			printf("%d ",i);	
	}
	return 0;
}