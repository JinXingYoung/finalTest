/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
  */

#include<stdio.h>
#include"include/my_stack.h"

#define LEN 10

int top=0;
int base=0;
int s[LEN];

void stack_push(int x){
	s[top]=x;
	top++;
}

int stack_pop(){
	if(top>0){
		top--;
		return (s[top]);
	}
	else
		printf("Stack is empty!");
}

int stack_capacity(){
	return LEN;
}

int stack_size(){
	return top;
}

int stack_is_empty(){
	return (top==0);
}

int stack_is_full(){
	return (top==LEN);
}
