 // c1.h (������)
 #include<string.h>
 #include<ctype.h>
 #include<malloc.h> // malloc()��
 #include<limits.h> // INT_MAX��
 #include<stdio.h> // EOF(=^Z��F6),NULL
 #include<stdlib.h> // atoi()
 #include<io.h> // eof()
 #include<math.h> // floor(),ceil(),abs()
 #include<process.h> // exit()
 #include<Windows.h>
 #include<math.h>
 #include <time.h>
//  #include<iostream.h> // cout,cin
 // �������״̬����
 #define TRUE 1
 #define FALSE 0
 #define OK 1
 #define ERROR 0
 #define INFEASIBLE -1
 //Status �Ǻ��������ͣ���ֵ�Ǻ������״̬���룬��OK��
 typedef int Status;
 
 VOID SetColor(UINT uFore, UINT uBack) {
	 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	 SetConsoleTextAttribute(handle, uFore + uBack * 0x10);
 }
 