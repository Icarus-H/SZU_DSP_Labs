#include <stdio.h>

#define DEMO1 1         //LED������� ����ֹͣ����������
#define DEMO2 2         //�������
#define DEMO3 3         //������SPIʵ�� �����
#define DEMO4 4         //�жϹ����CPU����
#define DEMO5 5         //LED������� �������ѡ����
#define DEMO6 6         //���Ź���������
#define DEMO7 7         //�������
#define DEMO8 8         //ģ���ź�AD�ɼ�

#define RUN_DEMO  DEMO8 //ѡ������ʵ�����

/**
 * main.c
 */
int main(void)
{
#if    RUN_DEMO == DEMO1
    demo1();
#elif  RUN_DEMO == DEMO2
    demo2();
#elif  RUN_DEMO == DEMO3
    demo3();
#elif  RUN_DEMO == DEMO4
    demo4();
#elif  RUN_DEMO == DEMO5
    demo5();
#elif  RUN_DEMO == DEMO6
    demo6();
#elif  RUN_DEMO == DEMO7
    demo7();
#elif  RUN_DEMO == DEMO8
    demo8();

#endif

	return 0;
}
