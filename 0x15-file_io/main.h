#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#define CRT O_CREAT
#define RW O_RDWR
#define IND EI_NIDENT
#include <elf.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_fd(int fd);
char *creat_temp(char *file);
void magic_num(unsigned char *elf_i);
void check_for_elf(unsigned char *ptr_to_indx);
void class_(unsigned char *ptr_to_indx);
void data_(unsigned char *ptr_to_indx);
void version_(unsigned char *ptr_to_indx);
void OS(unsigned char *ptr_to_indx);
void abi_version(unsigned char *ptr_to_indx);
void type_(unsigned int elf_type, unsigned char *ptr_to_indx);
void entry_point(unsigned long int type_, unsigned char *ptr_to_indx);
void close_(int fd);
#endif
