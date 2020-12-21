//#include <iostream>
//
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
//ok


#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
    FILE *Inputfile;
    Inputfile = fopen("../input.txt", "r");
    char *s, m[100];
    fgets(s, 100, Inputfile);//读取100个字符
    printf("%s", s);//输出读取的字符串（不读取换行后的字符）

    cout<<"-----------------"<<endl;
    fgets(m, 100, Inputfile);//读取100个字符
    puts(m);//输出读取的字符串（不读取换行后的字符），前面已经读出了第一行字符，第二次读取时，直接读取第二行字符

    fclose(Inputfile);

    /*
//  fprintf()函数是向文件中写入。而printf()是向屏幕输出
    FILE *fp;
    fp = fopen ("../file.txt", "w+");//括号里./file.txt和file.txt时是一样的，文件均生成在cmake-builld-debug文件夹下面
    fprintf(fp, "%s %s %s %d", "A", "B", "cc", "123");
    fclose(fp);
    */  //ok
    return(0);

}
//ok