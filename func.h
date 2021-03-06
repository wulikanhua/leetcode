//
// Created by 11135 on 2018/4/14.
//

#ifndef LEETCODE_FUNC_H
#define LEETCODE_FUNC_H

#include <stdbool.h>

/**
 * 002结构体
 */
struct ListNode {
    int val;
    struct ListNode *next;
};


int* twoSum(int* nums, int numsSize, int target);
int reverse(int x);
bool isPalindrome(int x);
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
int lengthOfLongestSubstring(char* s);
int romanToInt(char* s);
char* longestCommonPrefix(char** strs, int strsSize);
bool isValid(char* s);
void printHeart();
int removeDuplicates(int* nums, int numsSize);
#endif //LEETCODE_FUNC_H
