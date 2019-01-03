#include <stdio.h>
#include "简单计算器.h"
//   include "简单计算器.h"  ==  简单计算器.c add();    简单计算器.c 和  简单计算器.h 相关联 。
// 搜索路径  先是当前文件夹
//  没有的话然后 搜索环境变量里面的 
int main(int argc, char const *argv[])
{
    int result = add();
	return 	0;

}
