#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mystring.h"

int mystrlen(char* s) {

  char* c = s;
  int count = 0;
  while (*c) {
    count++;
    c++;
  }
  return count;

}

char* mystrcpy( char* dest, char* source) {

  char* d = dest;
  while(*source) {
    *d = *source;
    d++;
    source++;
  }
  *d = *source;
  return dest;

}

char* mystrncat(char *dest, char* source, int n) {

  char* c = source;
  char* d = dest;
  int count = 0;
  while (*d) {
    d++;
  }
  while (*c && (count < n)) {
    *d = *c;
    c++;
  }
  *d = *c;
  return dest;

}

int mystrcmp(char *s1, char *s2) {

  int ret = 0;
  while (*s1 && *s2) {
    if (*s1 != *s2) {
      if ((int)*s1 > (int)*s2) {
        ret = 1;
        break;
      }
      else if ((int)*s1 < (int)*s2) {
        ret = -1;
        break;
      }
      else {
        ret = 0;
        break;
      }
    }
    else {
      s1++;
      s2++;
    }
  }
  if (*s1 && !*s2) {
    ret = 1;
  }
  if (!*s1 && *s2) {
    ret = -1;
  }
  return ret;

}

char* mystrchr(char *s, char c) {

  int truthes = 0;
  while (*s && !truthes) {
    if (*s == c) {
      truthes = 1;
    }
    else {
      s++;
    }

  }
  if (*s == c) {
    truthes = 1;
  }
  if (truthes) {
    return s;
  }
  else {
    return NULL;
  }

}
