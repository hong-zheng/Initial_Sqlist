#include "Sql.h"

void test(){
	Sql sl;
	SqlInit(&sl);
	insert_back(&sl, 1234);
	insert_back(&sl, 12);
	insert_back(&sl, 34);
	PrintSql(&sl);
}

// 初始化线性表
void SqlInit(Sql* sl){
	if (NULL == sl){
		return;
	}
	// 初始化容量为4个
	sl->capacity = mod;
	// 为数组申请空间
	sl->arr = (int*)malloc(sizeof(int)*sl->capacity);
	// 初始大小为0
	sl->size = 0;
}

// 线性表插入
// 尾插
void insert_back(Sql* sl, int key){
	if (NULL == sl){
		return;
	}
	// 先判断插入一个元素是否会溢出,若溢出扩容
	if (isFull(sl)){
		sl->arr = exCapacity(sl);
	}
	printf("添加第[%d]个数[%d]成功！\n", sl->size+1,key);
	sl->arr[sl->size++] = key;
}
// 头插
void insert_head(Sql* sl, int key){
	if (NULL == sl){
		return;
	}
	
	// 先判断插入一个元素是否会溢出
}

// 指定位置插入
void insert_pos(Sql* sl, int pos, int key){
	if (NULL == sl){
		return;
	}
}
//Initial linear table, framing

// 线性表删除

// 头删除
void del_head(Sql* sl){
	if (NULL == sl){
		return;
	}
}
// 尾删除
void del_back(Sql* sl){
	if (NULL == sl){
		return;
	}
}
// 指定位置删除
void del_pos(Sql* sl, int pos){
	if (NULL == sl){
		return;
	}
}

// 根据元素查找位置,返回位置pos
int get_pos(Sql* sl, int key){
	if (NULL == sl){
		return;
	}
}
// 根据位置返回元素
int get_element(Sql* sl, int pos){
	if (NULL == sl){
		return;
	}
}

// 打印线性表
void PrintSql(Sql* sl){
	if (NULL == sl){
		return;
	}
	for (int i = 0; i < Size(sl);i++){
		printf("[%d]: %d \n",i+1,sl->arr[i]);
	}
	printf("输出完毕！\n");
}
//查看线性表中得元素个数
int Size(Sql* sl){
	if (NULL == sl){
		return;
	}
	return sl->size;
}
// 对线性表进行排序
void sortSql(Sql* sl){
	if (NULL == sl){
		return;
	}
}

// 判断增加元素时线性表是否会溢出
// 溢出返回1，否则返回0
int isFull(Sql* sl){
	if (sl->capacity == Size(sl)){
		// 溢出
		return 1;
	}
	// 不溢出
	return 0;
}
// 给线性表扩容
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