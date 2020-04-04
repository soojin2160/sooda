//#pragma warning(disable : 4996)
//#include <stdio.h>
//
//int main() {
//	int n,sum=0;
//	int prime = 0, frime = 0;
//	int i, j = 0;
//
//	while (1) {
//
//		scanf_s("%d", &n);
//
//
//		if (n == -1){
//			if (j <= i) 
//				sum++;
//			break;
//		}		
//		if (prime == 1&&frime == 0) {
//			frime = 1;
//			j = n;
//			if (i <= j) 
//				sum++;	
//			continue;
//		}
//		if (prime == 0) {
//			prime = 1;
//			i = n;
//			continue;
//		}
//		
//		if (j <= i && j <= n && frime == 1) 
//			sum++;
//		
//		i = j;
//		j = n;
//	}
//
//	printf("%d", sum);
//	
//	return 0;
//}