/**
 * @file ö������.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void  main() { 
    enum SEASONS {SPRING=1, SUMMER, AUTUMN, WINTER}; //����ö������  enum SEASONS   
    enum SEASONS season;//������һ��ö�����ͱ��� season(���� enum SEASONS )
    printf("��������ϲ���ļ���: (1. spring, 2. summer, 3. autumn 4 winter): ");
    scanf("%d", &season);
    switch (season) {
    case SPRING:
        printf("��ϲ���ļ����Ǵ���");
        break;
    case SUMMER:
        printf("��ϲ���ļ���������");
        break;
    case AUTUMN:
        printf("��ϲ���ļ���������");
        break;
    case WINTER:
        printf("��ϲ���ļ����Ƕ���");
        break;
    default:
        printf("��û��ѡ����ϲ���ļ���");
    }
    getchar();
    getchar();
  
}
