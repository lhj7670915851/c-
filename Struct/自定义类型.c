/**
 * @file typedef.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * ①先按常规方法定义变量
 * ②将变量名换成新类项名
 * ③在最前面加typedef
 * ④然后就可以用新类型名去定义变量了
 * 相比起宏定义的直接替换，typedef是对类型的封装
 */
 #include<stdio.h>
 int main(void)
 {
	int a = 10;
	printf("a = %d", a);
	return 0;
 }
