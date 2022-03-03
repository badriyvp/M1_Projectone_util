/**
 * @file programm.h
 * @author pavan
 * @brief project is about scoreboard
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef PROGRAMM_H
#define PROGRAMM_H
#include<stdio.h>

// function declaration of scoreboard//
/**
 * @brief here it is going to score about century
 * 
 * @param r1 
 * @param w1 
 * @return int 
 */
int scoreboard(int r1, int w1);

// function declaration of name//
/**
 * @brief function taking address by value and respond according
 * 
 * @param r2 
 * @param w2 
 * @return int 
 */
int name(int *r2,int *w2);

// function declaration of cricket//
/**
 * @brief about total score
 * 
 * @param m1 
 * @param m2 
 * @return int 
 */
int cricket(int m1,int m2);

// function declaration of manofthematch //
/**
 * @brief about mvp
 * 
 * @param total 
 * @param wic 
 * @return int 
 */
int manofthematch(int total, int wic);

#endif