8.4
Code snip: 

int main()  { 
   char **s; 
   char foo[] = "Hello World"; 
   *s = foo; 
   printf("s is %s\n",s); 
   s[0] = foo; 
   printf("s[0] is %s\n",s[0]); 
   return(0); 
}

Lỗi: 
	- Khai báo con trỏ s không an toàn. Khi khai báo mà chưa sử dụng ngay
ta cần gán nó cho NULL hoặc nullptr (since C++11) để tránh dangling pointer.
	- *s = foo gây ra lỗi tham chiếu đến con trỏ NULL. Ta cần dynamically alocate 
memory cho s trước.
	- param 2 của hàm printf() phải là địa chỉ của 1 string, nhưng s là 1 level-2 pointer
Tức là s trỏ đến địa chỉ của 1 string, chứ s không phải địa chỉ của 1 string
 -----	       --------  	
|  s  |   ---> |  foo  |
 -----         -------- 

		   |
		   |
		Đây mới là thứ ta cần

Do đó cần thay s bởi *s. 
//    printf("s is %s\n",*s); 


