#include <stdio.h> //�[�J���Y��stdio.h 
#include <stdlib.h> //�[�J���Y��stdlib.h 
#include <time.h> //�[�J���Y��time.h 
void ran(void); //�ŧi�Ƶ{��ran() 
void bubble(void); //�ŧi�Ƶ{��bubble 
int G[10]; //�ŧi�}�CG[] 
int input=0,output=0; //�ŧi�ܼ�input,output 
int i,c,j,k; //�ŧi�ܼ�i,c,j,k 
int main (void){ //�D�{���}�l 
	ran(); //����Ƶ{��ran() 
	printf("\n"); //���� 
	bubble(); //����Ƶ{��bubble() 
	scanf("%d",&input); //��X"input"�ܿù� 
for(i=0;i<=9;i++){ //for�j��0-9 
	if(G[i]==input){ //�p�G�}�CG[]�����ܼ�input�h����H�U�{�� 
	printf("��%d��",i+1); //��X'��"i+1"��'�ܿù� 
		output=1; //�N�ƭ�'1'�ǭȦ��ܼ�output 
	} //���󦡵��� 
} //�j�鵲�� 
if(output==0){ //�p�G�ܼ�output����ƭ�0�h����H�U�{�� 
	printf("error"); //��Xerror�ܿù� 
}
	return 0; //�^�Ǽƭ�0 
} //�D�{������
void bubble(void){ //�Ƶ{��bubble�}�l 
int temp; //�ŧi�ܼ�temp 
	for(c = 0; c <=9; c++){ //for�j��0-9 
		for(k= c; k < 10; k++){ //for�j��c-9 
			if( G[k] < G[c] ) { //�p�G�}�CG[k]�p��}�CG[c]�h����H�U�{�� 
				temp = G[k]; //�N�ƭ�G[k]�N�J�ܼ�temp 
				G[k] = G[c]; //�N�ƭ�G[c]�N�J�ܼ�G[k] 
				G[c] = temp; //�N�ƭ�temp�N�J�ܼ�G[c] 
		} //�j�鵲�� 
	} //�j�鵲�� 
} //�Ƶ{������ 
for(j =0;j<=8;j++){ //for�j��0-8 
	printf("%d,",G[j]); //��X�ƭ�"G[j]"�ܿù� 
	} //�j�鵲�� 
	printf("%d",G[9]); //��X�ƭ�"G[9]"�ܿù� 
} //�Ƶ{������ 

void ran (void){ //�Ƶ{��ran�}�l 

	srand(time(NULL)); //�]�w�p����ɶ����üƺؤl�X 

	for(i=0;i<=10;i++){ //for�j��0-10 
		G[i]=(rand()%91)+10; //�N�üƼƭȥN�J�ܼ�G[i] 
        } //�j�鵲�� 
        for(i=0;i<=10;i++){ //for�j��0-10 
		for(j=i+1;j<=10;j++){ //for�j��i+1-10 
			if(G[i]==G[j]){ //�p�G�ܼ�G[i]�����ܼ�G[j]�h����H�U�{�� 
				G[i]=(rand()%91)+10; //�N�üƼƭȥN�J�ܼ�G[i] 
							if(G[i]==G[j]){ //�p�G�ܼ�G[i]�����ܼ�G[j]�h����H�U�{�� 
				printf(""); //��X""�ܿù� 
				G[i]=(rand()%91)+10; //�N�üƼƭȥN�J�ܼ�G[i] 
				if(G[i]==G[j]){ //�p�G�ܼ�G[i]����G[j]�h����H�U�{�� 
				G[i]=(rand()%91)+10; //�N�üƼƭȥN�J�ܼ�G[i] 
			} //���󦡵��� 
		} //���󦡵���			
    } //���󦡵��� 
} //�j�鵲�� 
} //�j�鵲�� 
for(j =0;j<=8;j++){ //for�j��0-8 
		printf("%d,",G[j]); //��X�ܼƼƭ�G[j]�ܿù� 
	} //�j�鵲�� 
	printf("%d",G[9]); //��X�ܼƼƭ�G[9]�ܿù� 
} //�Ƶ{������ 
