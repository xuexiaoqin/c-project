#include <stdio.h>
char arr[1024];
int index=0;

int main(){

    printf("进入敏感词管理系统\n");
    while(1){
        int code=0;
        printf("1 --- 添加一个敏感词\n");
        printf("2 --- 删除一个敏感词\n");
        printf("3 --- 显示所有敏感词\n");
        printf("4 --- 替换敏感词\n");
        printf("5 --- 退出\n");

        printf("请输入功能编号\n");
        scanf("%d",&code);
        if(code == 1){

        }
        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            printf("退出系统\n");
            break;
        }

    }

    return 0;

}