#include <stdio.h> //加入標頭檔stdio.h 
#include <stdlib.h> //加入標頭檔stdlib.h 
#include <time.h> //加入標頭檔time.h 
void ran(void); //宣告副程式ran() 
void bubble(void); //宣告副程式bubble 
int G[10]; //宣告陣列G[] 
int input=0,output=0; //宣告變數input,output 
int i,c,j,k; //宣告變數i,c,j,k 
int main (void){ //主程式開始 
	ran(); //執行副程式ran() 
	printf("\n"); //換行 
	bubble(); //執行副程式bubble() 
	scanf("%d",&input); //輸出"input"至螢幕 
for(i=0;i<=9;i++){ //for迴圈0-9 
	if(G[i]==input){ //如果陣列G[]等於變數input則執行以下程式 
	printf("第%d個",i+1); //輸出'第"i+1"個'至螢幕 
		output=1; //將數值'1'傳值至變數output 
	} //條件式結束 
} //迴圈結束 
if(output==0){ //如果變數output等於數值0則執行以下程式 
	printf("error"); //輸出error至螢幕 
}
	return 0; //回傳數值0 
} //主程式結束
void bubble(void){ //副程式bubble開始 
int temp; //宣告變數temp 
	for(c = 0; c <=9; c++){ //for迴圈0-9 
		for(k= c; k < 10; k++){ //for迴圈c-9 
			if( G[k] < G[c] ) { //如果陣列G[k]小於陣列G[c]則執行以下程式 
				temp = G[k]; //將數值G[k]代入變數temp 
				G[k] = G[c]; //將數值G[c]代入變數G[k] 
				G[c] = temp; //將數值temp代入變數G[c] 
		} //迴圈結束 
	} //迴圈結束 
} //副程式結束 
for(j =0;j<=8;j++){ //for迴圈0-8 
	printf("%d,",G[j]); //輸出數值"G[j]"至螢幕 
	} //迴圈結束 
	printf("%d",G[9]); //輸出數值"G[9]"至螢幕 
} //副程式結束 

void ran (void){ //副程式ran開始 

	srand(time(NULL)); //設定計算機時間為亂數種子碼 

	for(i=0;i<=10;i++){ //for迴圈0-10 
		G[i]=(rand()%91)+10; //將亂數數值代入變數G[i] 
        } //迴圈結束 
        for(i=0;i<=10;i++){ //for迴圈0-10 
		for(j=i+1;j<=10;j++){ //for迴圈i+1-10 
			if(G[i]==G[j]){ //如果變數G[i]等於變數G[j]則執行以下程式 
				G[i]=(rand()%91)+10; //將亂數數值代入變數G[i] 
							if(G[i]==G[j]){ //如果變數G[i]等於變數G[j]則執行以下程式 
				printf(""); //輸出""至螢幕 
				G[i]=(rand()%91)+10; //將亂數數值代入變數G[i] 
				if(G[i]==G[j]){ //如果變數G[i]等於G[j]則執行以下程式 
				G[i]=(rand()%91)+10; //將亂數數值代入變數G[i] 
			} //條件式結束 
		} //條件式結束			
    } //條件式結束 
} //迴圈結束 
} //迴圈結束 
for(j =0;j<=8;j++){ //for迴圈0-8 
		printf("%d,",G[j]); //輸出變數數值G[j]至螢幕 
	} //迴圈結束 
	printf("%d",G[9]); //輸出變數數值G[9]至螢幕 
} //副程式結束 
