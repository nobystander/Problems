#include<cstdio>

int main()
{
	int h,m,a;
	scanf("%d:%d %d",&h,&m,&a);
	m += a;
	h += m/60;
	m%=60;
	h%=24;
	printf("%02d:%02d\n",h,m);
	return 0;
}
