#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main(int argc, char * argv[])
{
    int wc_char = 0;
    int wc_word = 1;
    int wc_line = 1;
    char filename[80];
    FILE *fp = NULL;
    if (argc == 3)
    {
        fp = fopen(argv[2], "r");
        if (fp == NULL)
        {
            printf("打开有误！\n");
            printf("请按enter键继续....");
            _getch();
            exit(0);
            //...
        }
            char ch;
            
           
            while (1)
         {   ch = fgetc(fp);
              wc_char++;
              if (ch == ' '||ch==',')
            {
                wc_word++;
            }
            else if (ch == '\n')
            {
                wc_word++;
                wc_line++;
            }
            else if (ch == EOF)
            {
                break;
            }
			 
          }
        if (strcmp(argv[1],"-c")==0)
        {
            printf("The char count is %d\n", wc_char);
            fp = fopen("result.txt","w");
            fprintf(fp,"字符数：%d\n", wc_char); 
        }
        else if (strcmp(argv[1],"-w")==0)
        {
            printf("The word count is %d\n", wc_word);
            fp = fopen("result.txt","w");
            fprintf(fp,"单词数：%d\n", wc_word); 
        }
        else if (strcmp(argv[1],"-l")==0)
        {
            printf("The line count is %d\n", wc_line);
            fp = fopen("result.txt","w");
            fprintf(fp,"行数：%d\n", wc_line); 
        }
        
        fclose(fp);
    }
	if (argc == 4)
    {
        fp = fopen(argv[3], "r");
        if (fp == NULL)
        {
            printf("打开有误！\n");
            printf("请按enter键继续....");
            _getch();
            exit(0);
            //...
        }
            char ch;
            
           
            while (1)
         {   ch = fgetc(fp);
              wc_char++;
              if (ch == ' '||ch==',')
            {
                wc_word++;
            }
            else if (ch == '\n')
            {
                wc_word++;
                wc_line++;
            }
            else if (ch == EOF)
            {
                break;
            }
			 
          }
        if (strcmp(argv[1],"-c")==0&&strcmp(argv[2],"-w")==0)
        {
            printf("The char count is %d\n", wc_char);
            printf("The word count is %d\n", wc_word);
            fp = fopen("result.txt","w");
            fprintf(fp,"字符数：%d\n单词数：%d\n", wc_char,wc_word); 
        }
        if (strcmp(argv[1],"-c")==0&&strcmp(argv[2],"-l")==0)
        {
            printf("The char count is %d\n", wc_char);
            printf("The line count is %d\n", wc_line);
            fp = fopen("result.txt","w");
            fprintf(fp,"字符数%d\n行数：%d\n", wc_char,wc_line); 
        }
        if (strcmp(argv[1],"-w")==0&&strcmp(argv[2],"-l")==0)
        {
            printf("The word count is %d\n", wc_word);
            printf("The line count is %d\n", wc_line);
            fp = fopen("result.txt","w");
            fprintf(fp,"单词数：%d\n行数：%d\n", wc_word,wc_line); 
        }
        
        fclose(fp);
    }
    if (argc == 5)
    {
        fp = fopen(argv[4], "r");
        if (fp == NULL)
        {
            printf("打开有误！\n");
            printf("请按enter键继续....");
            _getch();
            exit(0);
            //...
        }
            char ch;
            
           
            while (1)
         {   ch = fgetc(fp);
              wc_char++;
              if (ch == ' '||ch==',')
            {
                wc_word++;
            }
            else if (ch == '\n')
            {
                wc_word++;
                wc_line++;
            }
            else if (ch == EOF)
            {
                break;
            }
			 
          }
        if (strcmp(argv[1],"-c")==0)
        {
            printf("The char count is %d\n", wc_char);
            
        }
        else if (strcmp(argv[1],"-w")==0)
        {
            printf("The word count is %d\n", wc_word);
           
        }
        else if (strcmp(argv[1],"-l")==0)
        {
            printf("The line count is %d\n", wc_line);
            
        }
        if (strcmp(argv[2],"-c")==0)
        {
            printf("The char count is %d\n", wc_char);
           
        }
        else if (strcmp(argv[2],"-w")==0)
        {
            printf("The word count is %d\n", wc_word);
            
        }
        else if (strcmp(argv[2],"-l")==0)
        {
            printf("The line count is %d\n", wc_line);
            
        }
        if (strcmp(argv[3],"-c")==0)
        {
            printf("The char count is %d\n", wc_char);
           
        }
        else if (strcmp(argv[3],"-w")==0)
        {
            printf("The word count is %d\n", wc_word);
            
        }
        else if (strcmp(argv[3],"-l")==0)
        {
            printf("The line count is %d\n", wc_line);
           
        }
         fp = fopen("result.txt","w");
            fprintf(fp,"字符数：%d\n单词数：%d\n行数：%d\n", wc_char,wc_word,wc_line); 
        fclose(fp);
    }
}
