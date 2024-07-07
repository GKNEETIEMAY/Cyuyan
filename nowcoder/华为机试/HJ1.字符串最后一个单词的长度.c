/**
 * @nc app=nowcoder id=8c949ea5f36f422594b306a2300315da topic=37 question=21224 lang=C
 * 2024-07-08 00:00:43
 * https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da?tpId=37&tqId=21224
 * [HJ1] 字符串最后一个单词的长度
 */

/** @nc code=start */

#include <stdio.h>
#include<string.h>
int find(char *nums,int numsSize){
    int co=0;//记录
    for (int i=numsSize-1; i>=0; i--) {
        if(nums[i]!=' '){
            co=co+1;
        }
        else {
        break;
        }
    
    }
    return co;
}
int main() {
    char arr[5000];
    int length;
    int final_word_length;
    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr,"\n")]=0;
    length=strlen(arr);
    final_word_length=find(arr,length);
    printf("%d\n",final_word_length);
    return 0;
}

/** @nc code=end */
