#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, t;
	int a[10];
	printf("请输入要排序的数据：");
	for ( i = 0 ; i < 10 ; i ++ ) {
		scanf(" %d ", & a[i]);
	}
	for ( i = 0 ; i < 9 ; i++  )
		for ( j = 0 ; j < 9 - i ;  j++ ) {
			if ( a[j] > a[j + 1] ) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	printf("排序过后的结果为：");
	for ( i = 0 ; i < 10 ; i++ ) {
		printf(" %d ", a[i]);
	}
	return 0;
}