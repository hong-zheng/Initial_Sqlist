#include "Sql.h"

void test(){
	Sql sl;
	SqlInit(&sl);
	insert_back(&sl, 1234);
	insert_back(&sl, 12);
	insert_back(&sl, 34);
	PrintSql(&sl);
}

// ��ʼ�����Ա�
void SqlInit(Sql* sl){
	if (NULL == sl){
		return;
	}
	// ��ʼ������Ϊ4��
	sl->capacity = mod;
	// Ϊ��������ռ�
	sl->arr = (int*)malloc(sizeof(int)*sl->capacity);
	// ��ʼ��СΪ0
	sl->size = 0;
}

// ���Ա����
// β��
void insert_back(Sql* sl, int key){
	if (NULL == sl){
		return;
	}
	// ���жϲ���һ��Ԫ���Ƿ�����,���������
	if (isFull(sl)){
		sl->arr = exCapacity(sl);
	}
	printf("��ӵ�[%d]����[%d]�ɹ���\n", sl->size+1,key);
	sl->arr[sl->size++] = key;
}
// ͷ��
void insert_head(Sql* sl, int key){
	if (NULL == sl){
		return;
	}
	
	// ���жϲ���һ��Ԫ���Ƿ�����
}

// ָ��λ�ò���
void insert_pos(Sql* sl, int pos, int key){
	if (NULL == sl){
		return;
	}
}
//Initial linear table, framing

// ���Ա�ɾ��

// ͷɾ��
void del_head(Sql* sl){
	if (NULL == sl){
		return;
	}
}
// βɾ��
void del_back(Sql* sl){
	if (NULL == sl){
		return;
	}
}
// ָ��λ��ɾ��
void del_pos(Sql* sl, int pos){
	if (NULL == sl){
		return;
	}
}

// ����Ԫ�ز���λ��,����λ��pos
int get_pos(Sql* sl, int key){
	if (NULL == sl){
		return;
	}
}
// ����λ�÷���Ԫ��
int get_element(Sql* sl, int pos){
	if (NULL == sl){
		return;
	}
}

// ��ӡ���Ա�
void PrintSql(Sql* sl){
	if (NULL == sl){
		return;
	}
	for (int i = 0; i < Size(sl);i++){
		printf("[%d]: %d \n",i+1,sl->arr[i]);
	}
	printf("�����ϣ�\n");
}
//�鿴���Ա��е�Ԫ�ظ���
int Size(Sql* sl){
	if (NULL == sl){
		return;
	}
	return sl->size;
}
// �����Ա��������
void sortSql(Sql* sl){
	if (NULL == sl){
		return;
	}
}

// �ж�����Ԫ��ʱ���Ա��Ƿ�����
// �������1�����򷵻�0
int isFull(Sql* sl){
	if (sl->capacity == Size(sl)){
		// ���
		return 1;
	}
	// �����
	return 0;
}
// �����Ա�����
int* exCapacity(Sql* sl){
	sl->capacity += mod;
	int* src = sl->arr;
	sl->arr = (int*)malloc(sizeof(int)*sl->capacity);
	memcpy(sl->arr,src,sizeof(int)*Size(sl));
	return sl->arr;
}

int main(){
	test();
	system("pause");
	return 0;
}