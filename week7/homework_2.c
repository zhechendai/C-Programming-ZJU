/*
 * @Date: 2020-07-12 20:44:04
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-12 20:47:37
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 


#include <stdio.h>
 
int main()
{
	int n;
	scanf("%d", &n);
	//将读入的n用来初始化一个n*n的二维数组 
	int arr[n][n];
	int i, j;
	//初始化二维数组 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]); 
		}
	}
	
	int flag = 0;
	int row = 0, column = 0, k;
	for (i = 0; i < n; i++) {
		//行值i固定,进行同行比较,退出循环时得到此行最大值的列值column   
		for (j = 0; j < n; j++) {
			//列值column相同时,无需比较 
			if (j == column)
			continue;
			//找本行中最大的 
			else if (arr[i][column] < arr[i][j])
			column = j;
		}
		//列值column固定,进行同列比较,退出循环时得到此列最小值的行值row    
		for (k = 0; k < n; k++) {
			//行值row相同时,无需比较  
			if (row == k)
			continue;
			//找本列中最小的 
			if (arr[row][column] > arr[k][column]) {
				row = k;
			}
		}
		//判断row是否等于i 
		if (row == i) {
				flag = 1;
				break;
			}	
	}
	if (flag) {
			printf("%d %d", row, column);
	} else {
			printf("NO");
		}

    return 0;

}