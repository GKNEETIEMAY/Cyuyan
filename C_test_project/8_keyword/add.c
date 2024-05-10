int g_val1 = 2024; // 全局变量

// static修饰全局变量，改变了变量的作用域，
// 让静态的全局变量只能在源文件内部使用
// 出了源文件无法使用
static int g_val2 = 2024;
//声明相加函数，可以被其他文件调用
//普通的函数具有外部链接属性
int Add(int a, int b)
{
    return a+b;
}
//static声明的函数，改变了函数的链接属性
// 让此函数只能在源文件内部使用
// 出了源文件无法使用，只具有内部链接属性
static int Sub(int a, int b)
{
    return a-b;
}