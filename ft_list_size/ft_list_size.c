#include <libc.h>
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

//int ft_list_size(t_list *begin_list)
//{
//    int i = 0;
//    while (begin_list != NULL)
//    {
//        i++;
//        begin_list = begin_list->next;
//    }
//    return (i);
//}

//int ft_list_size(t_list *begin_list){
//    if (begin_list == NULL)
//        return 0;
//    else
//        return (1 + ft_list_size(begin_list->next));
//}

 int main()
 {
     t_list *ff = malloc(sizeof(t_list));
     t_list *f = malloc(sizeof(t_list));
     t_list *s = malloc(sizeof(t_list));
     ff->data = "a";
     ff->next = f;
     f->data = "t";
     f->next = s;
     s->data = "a";
     s->next = NULL;

     printf("%d", ft_list_size(ff));
 }
