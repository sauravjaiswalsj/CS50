#include<stdio.h>
struct book{
	char name;
	char author;
	int callno;
};
void display(struct book *);

int main(){
	struct book b1[2];
	for(int i=0;i<2;i++){
		scanf("%c%c%d",&b1[i].name,&b1[i].author,&b1[i].callno);
	}
	display(b1);
	return 0;
}
void display(struct book *b){
	printf("%c\n%c\n%d\n",b->name,b->author,b->callno);
}

