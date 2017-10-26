#include <stdio.h>
#include <conio.h>
#include <windows.h>

char stack[20];
int top=-1, n;
char arr[20];
char dfs(int ); 
char ajMat[20][20];
char b[20];

void display();
int p=0;
int main(){
	system("cls");
	char v;
	int l=0;
	printf("Masukkan jumlah node dalam graf : ");
	scanf("%d", &n);
	printf("Masukkan nama dari node dalam graf : \n");
	for(int i=0; i<n; i++){
		scanf("%s", &b[i]);
	}
	char k=b[0];
	printf("Masukkan nilai ke matriks Adjacency dalam bentuk 0 atau 1\n");
	printf("\nJika ada edge antara kedua node tersebut maka masukkan 1\n");
	for(int i=0; i<n; i++) printf("  %c", b[i]);
	for(int i =0; i<n; i++){
		printf("\n%c", b[i]);
		for(int j=0; j<n; j++){
			printf(" %c ", v=getch());
			ajMat[i][j]=v;
		}
		printf("\n\n");
	}
	for(int i=0; i<n; i++){
		l=0;
		while(k!=b[l])l++;
		k=dfs(l);
	}
	display();
	getch();
}

void display(){
	printf("Graf DFS : ");
	for(int i=0; i<n; i++) printf("%c",arr[i]);
} 

void push(char val){
	top=top+1;
	stack[top]=val;
}

char pop(){
	return stack[top];
}

bool unVisit(char val){
	for(int i =0; i<p; i++) if(val==arr[i]) return false;
	for(int i=0; i<=top; i++) if(val==stack[top]) return false;
	return true;
}

char dfs(int i){
	int k;
	char m;
	if(top==-1){
		push(b[i]);
	}
	m=pop();
	top--;
	arr[p]=m;
	p++;
	for(int j=0; j<n; j++){
		if(ajMat[i][j]=='1'){
			if(unVisit(b[j])){
				push(b[j]);
			}
		}
	}
	return stack[top];
}


