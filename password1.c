#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void attack()
{	
	printf("ATTACK\n");       //attack函数
	system("pause");
}

int fuc(){
	//while(1){
	char password[6] = "ABCDE";
	password[5]='\0';
	char str[6];
	str[5]='\0';
	FILE *fp;
	if((fp=fopen("./password.txt","r"))) //打开D盘的password.txt文件
	fscanf(fp,"%s",str);           //将str的内容写入fp
	if(!strncmp(password,str,6))  
	{  //判断str是否与password相同
		printf("OK.\n");
	}
	else{
		printf("NO.\n"); 
	}
	return 0;

	//}          //运行func函数
}
int main()
{
	fuc();
	return 0;
}
