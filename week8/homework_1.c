/*
 * @Date: 2020-07-13 18:04:10
 * @Author: Dai Zhechen
 * @Github: https://github.com/zhechendai
 * @LastEditTime: 2020-07-13 18:07:11
 * @Copyright ©️ 2020 Dai Zhechen. All Rights Reserved.
 */ 

#include <stdio.h>

int main()
{
	char str;
	int num = 0;

	scanf("%c", &str);

	while (str != '.') {
		if (str == ' ') {
			if (num != 0) {
				printf("%d ", num);
				num = 0;
			}
		}
		else {
				++num;
		}
		scanf("%c", &str);
	}
	if (str == '.') {
		if (num != 0) {
			printf("%d\n", num);
		}
	}

	return 0;
}

/* 发现更巧的代码，如下 */

// #include <stdio.h>
// int main()
// {
//     char str;
//     int num = 0;

//     while (1) {
//         scanf("%c", &str);
//         if (str == '.') {
//             if (num != 0) {
//                 printf("%d\n", num);
//                 break;
//             }
//         }
//         if (str == ' ') {
//             if (num != 0) {
//                 printf("%d ", num);
//                 num = 0;
//             }
//         }
//         else {
//             ++num;
//         }
//     }

//     return 0;
// }
