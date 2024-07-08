/**
 * @nc app=nowcoder id=539054b4c33b4776bc350155f7abd8f5 topic=37 question=21263 lang=C
 * 2024-07-07 23:58:26
 * https://www.nowcoder.com/practice/539054b4c33b4776bc350155f7abd8f5?tpId=37&tqId=21263
 * [HJ40] 统计字符
 */

/** @nc code=start */

#include <stdio.h>
#include<string.h>

int main() {
    char str[1001];
    int space=0, english_num=0,num=0,other=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int length=strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i]==' ')
        {
            space+=1;
        }
        else if ((str[i]>='A'&&str[i]<='Z')||((str[i]>='a'&&str[i]<='z')))
        {
            english_num+=1;
        }
        else if ((str[i]>='0'&&str[i]<='9'))
        {
            num+=1;
        }
        else{
            other+=1;
        }
    }
    printf("%d\n%d\n%d\n%d\n",english_num,space,num,other);
    return 0;
}

/** @nc code=end */
