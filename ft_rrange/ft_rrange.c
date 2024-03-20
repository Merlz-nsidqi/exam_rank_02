#include <stdlib.h>


int *ft_rrange(int start, int end)
{
	int *res;
	int i = 0;
	int t = 1;
	int n = end - start;

	if (n < 0)
		n = n * -1;
    n++;
	res = (int *)malloc(sizeof(int) * n);
	if (res)
	{
		if (start < end)
			t = -1;
		while (i < n)
		{
			res[i] = end;
			end = end + t;
			i++;
		}
	}
	return (res);
}

// int main(){
//     int *r = ft_rrange(-1, 2);
//     int i = 0;
//     // while (i < 2934){
//     //     printf("%d ", r[i]);
//     //     i++;
//     // }
// }