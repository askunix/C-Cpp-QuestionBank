#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <fcntl.h>
#include <signal.h>
#include <syslog.h>
#include <sys/resource.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>
#include<wait.h>
#include<pthread.h>

#define filepath_log "/home/hjh/HTTP_FILE/inf.log"   //将程序分析结果存在inf.log中
#define filepath "/home/hjh/HTTP_FILE/File"          //众多待分析日志所在绝对路径
#define Dest_path "./Dest/"         //创建的信息的日志信息存放目录
#define FORK_N 10
char *file_find_str = "error ";    //待匹配的字符串

#define FAC_N 65535
void big_loop(int n);
void input_information();

//char *file[2048];


typedef struct file_struct_node
{
    int _id;
    char *_strPath;
}file_struct_node;




/*函数声明*/
void daemon_init(const char *, int);    //守护进程
int readFileList(char *);         //读路径
int matchingFile_str(char *);     //匹配字符串
//int open_log_file(void);         
int get_string_count(char *, const char *);    //获取字符串出现次数
FILE *CreateNewInfFile(char *);     //以当前时间创建文件
void cheekDestEmptyFile(void);      //检查路径下的空文件并删除
void test_modify(void);        //主逻辑


void test_modify(void)
{
	time_t start, end, t;
    double time;
    char *bassPath = filepath;

    start = clock();
    //daemon_init(argv[0], 0);
    
    readFileList(bassPath);
    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n 目标日志分析完成\n");
    printf("耗时： %lf  seconds\n\n", time);
    printf("./Dest 优化\n");
    cheekDestEmptyFile();
    printf("优化完成\n\n\n");
}



void thread_t(void)
{
  int i = 0;
  for(i = 0; i< 10; ++i)
  {
    //;
    //;
    //printf("待实现的功能\n\n");
    test_modify();
   
  }
}






int main()
{
  pthread_t id;
  int i;
  int ret;
  ret = pthread_create(&id, NULL, (void *)thread_t, NULL);
  if(0 != ret)
  {
    perror("create error\n");
  }
  for(i = 0; i < 10; ++i)
  {
    printf("this is main thread\n");
  }

  pthread_join(id, NULL);
  return 0;
}


/**********************************************************************
int main(int argc, char *argv[])
{
  time_t start, end;
  double time;
  time_t t;
  char *bassPath = filepath;

  start = clock();
  //daemon_init(argv[0], 0);    //守护进程
 
  //open_log_file();      //定义一个文件句柄，将分析众多日志所得结果写到文件

  readFileList(bassPath);       //读指定文件目录

  end = clock();
  time = (double)(end - start) / CLOCKS_PER_SEC;
  printf("\n日志分析已完成\n");
  printf("耗时：%lf seconds\n\n", time);

  printf("目标文件 ./Dest 优化\n");
  cheekDestEmptyFile();
  printf("优化完成\n\n");
  return 0;
}
*******************************************************************/










void cheekDestEmptyFile()
{
  DIR *dir = NULL;
  struct dirent *ptr;
  char bass[1000];
  char *str_filePath = "./Dest";
  if((dir = opendir(str_filePath)) == NULL)
  {
    perror("open dest file failed");
    exit(-1);
  }

  //else
  while(NULL != (ptr = readdir(dir)))
  {
    if((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
    {
      continue;
    }
    else if(ptr->d_type == 8)    //file
    {
      //printf("  \n %s \n\n", ptr->d_name);
      char bass[256] = "./Dest/";
      strcat(bass, ptr->d_name);
      
     // printf("  %s \n", bass);
      
      FILE *fp;
      char ch;
      fp = fopen(bass, "r");
      if(fp == NULL)
      {
        perror("fopen");
        return;
      }
      //printf(" fp : %s\n\n", fp);
      ch=fgetc(fp);
      if(ch == EOF)
      {
        printf("删除 【%s】文件.\n", bass);
        if(remove(bass) == 0)
          ;
        else 
          perror("remove");
      }
    }
    else 
      continue;
  }
 
  
}








//线程池函数




//目录读取函数
size_t Fork_Num = 0;
int readFileList(char *bass_path)
{
  printf("\n正在分析[%s]路径下的所有日志 ...\n\n", filepath);
  DIR *dir = NULL;
  struct dirent *ptr;
  char bass[1000];
  
  //printf("opendir函数执行\n ");
  if((dir = opendir(bass_path)) == NULL){
    printf("%s\n ", dir);
    perror("open dir error ");
    exit(1);
  }

  //else 
  
while( NULL != (ptr = readdir(dir)))
  {
    if((strcmp(ptr->d_name, ".") == 0) || (strcmp(ptr->d_name, "..") == 0))
      continue;
    else if(ptr->d_type == 8) //文件
    {
      char s[32] = "./File/";
      strcat(s, ptr->d_name);
      
      //这一步匹配要开始输出相关信息了，在这创建时间命名的文件，返回文件描述符，方便后续信息输出到文件
 

/*
      pid_t pid;
      pid = vfork();
      switch(pid)
      {
        case 0:
          //child
          printf("pid : %d   ", getpid());
          matchingFile_str(s);
          //exit(0);
          break;

        case -1:
          //perror("fork");
          //exit(1);
          break;
        default:
          //printf("pid : %d\n", getpid());
          wait(NULL);
          //printf("completed\n");
          exit(0);
          //break;
      }
*/
      matchingFile_str(s);      //匹配字符串
    }
    else if(ptr->d_type == 10) //链接文件
      continue;

    else if(ptr->d_type == 4)  //目录
    {
      memset(bass, '\0', sizeof(bass));
      strcpy(bass, bass_path);
      strcat(bass, ptr->d_name);

      //创建一个进程，让进程分析文件
      readFileList(bass);
    } 
  }

  closedir(dir);
  return 1;
}







//单个文件中匹配给定的字符串
int matchingFile_str(char *str)
{
  //num_C ++;
  char *find_str = file_find_str;
  FILE *fp;
  char file_tmp_str[2048];
  int line = 1;
  time_t t;
  char *buffer;
  int string_count = 0;
  int tail_count = 0;
  int new_log_name_count = 0;
  char new_name[64];

  fp = fopen(str, "r");
  if(NULL == fp)
  {
    printf("     str: %s   fp:%s : open file error\n", str, fp);
    return -1;
  }

  t = time(NULL);
  buffer = asctime(localtime(&t));
  
  //以当前时间创建文件,将描述符拿过来
  FILE *new_file_out_inf = CreateNewInfFile(str);       //str是待分析日志
  printf("  %s  ", new_file_out_inf);

  while(fgets(file_tmp_str, sizeof(file_tmp_str), fp))//按行缓冲方式检查文件每一行
  {
    line ++;
    string_count =  get_string_count(file_tmp_str, find_str);    //在一行中获取指定字符串出现次数
    tail_count += string_count;
    if(string_count != 0)
    {
      //printf("行号:%-5d", line);
      //printf("输出所在行: %s\n", file_tmp_str);

      fprintf(new_file_out_inf, "行号：%-6d", line);
      fprintf(new_file_out_inf, "输出所在行：%s", file_tmp_str);
    }


  }
    
  if(0 != tail_count)
  {
    //每次时间更新
    //创建新的文件，返回句柄信息，并将相应信息写入对应的文件中
    //printf("时间: %s", buffer);
    //printf("日志名: %s\n", str);
    //printf("[%s]出现次数: %d\n",file_find_str, tail_count);
    //printf("****************************************************\n\n");

    fprintf(new_file_out_inf, "时间：%s", buffer);
    fprintf(new_file_out_inf, "日志名：%s\n", str);
    fprintf(new_file_out_inf, "[%s]串在原日志中出现次数：%d\n", file_find_str, tail_count);
    fprintf(new_file_out_inf, "***************************************\n\n");
    
    if(fclose(new_file_out_inf))
    {
      printf("fclose new_file_out_inf ERROR\n");
    }
  }
  //printf("PATH: %s \n", str);
  //printf("Count: %d\n\n", tail_count);
  //fclose(new_file_out_inf);
  fclose(fp);
  return -1;
}





//创建多进程代码
void Create_fork()
{
  int status;
  int i;
  for(i = 0; i < FORK_N; ++i){
    status = fork();
    if(status == 0 || status == -1)
    {
      break;
    //printf("%d\n", getppid())
    printf("%d\n\n", getpid());
     }
  if(status == -1){
    //error
    printf("进程创建出错\n");
    exit(-1);
  }
  else if(status == 0)
  {
    //child  每个子进程都会执行的代码
    
  }
  else 
  {
    //parent process
  }
  }
}









//以当前时间为名字创建文件
FILE *CreateNewInfFile(char *str)     //str是当前所分析的文件名字
{
  time_t tt;
  struct tm *newtime;
  char outfile[128];
  int i = 0;
  char *new_buffer = Dest_path;
  //nwe_buf is: /home/hjh/HTTP_FILE/Dest
  tt = time(NULL);
  strftime( outfile, 128, "inf_%Y-%m-%d_%I:%M:%S_", localtime(&tt) );
  strcat(outfile, str);
  //新的日志名字保证唯一性，并能根据日志名字找到来源
  while(outfile[i] != '\0')
  {
    if(outfile[i] == '.' || outfile[i] == '/')
    {
      outfile[i] = '_';
    }
    i++;
  }
  
  strcat(outfile, ".log");
  char dest_file_path[128] = Dest_path;
  strcat(dest_file_path, outfile);
  printf("\n新增日志: %s \n", dest_file_path);
  
  FILE *fpp = fopen(dest_file_path, "w+");
  if(NULL == fpp){
    perror("fopen error");
    exit(-1);
  }
  //printf("\n");
  return fpp;
}









//在一行中获取目标串出现的次数
int get_string_count(char *str, const char *dest)
{
  //line ++;
  char *p = str;
  int time = 0;
  while(p = strstr(p, dest))
  {
    p = p + strlen(dest);
    time++;
  }
  return time;
}






//守护进程
void daemon_init(const char* pname,int facility)
{
  int i;
  pid_t pid;
  struct rlimit rl;
  struct sigaction sa;
	//清除文件模式创建掩码
  umask(0);
  if(getrlimit(RLIMIT_NOFILE,&rl) < 0){
    perror("getrlimit() error");
    exit(-1);
  }
  if((pid = fork()) < 0){
    perror("fork() error");
    exit(-1);
  }
  //printf("父进程终止\n");
  else if(pid > 0){
    exit(0);
  }   /*父进程终止 */
  
  setsid();         /* 子进程成为会话首进程*/
  sa.sa_handler = SIG_IGN;
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = 0;
  if(sigaction(SIGHUP,&sa,NULL) < 0)
  {
    perror("sigaction() error");
    exit(-1);
  }
  if((pid = fork()) < 0)
  {
    perror("fork() error");
    exit(-1);
  }
  else if(pid > 0)
    exit(0);        /* 第一个子程进终止,保证后面操作会分配终端 */
    
  if(chdir("/")<0)    /* 改变工作目录 */
  {
    perror("chdir() error");
    exit(-1);
  }
  if(rl.rlim_max == RLIM_INFINITY)
    rl.rlim_max = 1024;
    
  for(i = 3; i < (int) rl.rlim_max; ++i)  /*关闭所有打开的文件描述字*/
  {
    close(i);
  }
  openlog(pname, LOG_PID, facility);  /*用syslogd处理错误*/
  //printf("从守护进程出来\n\n");
}

