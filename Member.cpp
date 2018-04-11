/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Member.cpp
 * Author: Yoni
 * 
 * Created on April 8, 2018, 1:51 PM
 */
#include "Member.h"
#include <valarray>
#include <vector>
#include <iostream>
using namespace std;


void Member::setFollowers(int x){
    Followers = x;  
}

void Member::setFollowing(int x){
    Following = x;  
}

void Member::addFollowers(Member &member){
    TheFollowers.push_back(&member);
    Followers++;
}

void Member::addFollwing(){
    Following++;
}
void Member::removeFollowers(){
    Followers--;
}
void Member::removeFollowing(){
    Following--;
}
void Member::follow(Member &member){
    if(this->id!=member.id){
for(int i=0;i<Following;i++){
	if(TheFollowings[i]->id == member.id)
		return;
        
}
	TheFollowings.push_back(&member);
         Following++;
        member.addFollowers(*this);
    }
}
void Member::unfollow(Member &member){
	for(int i=0;i<Following;i++){
		if(TheFollowings[i]->id == member.id){
                    member.removeFollowers();
			TheFollowings.erase(TheFollowings.begin()+i);
                Following--;
	}
        }
	
}
int Member::numFollowing(){
    return this->Following;
}
int Member::numFollowers(){
    return this->Followers;
}


  int Member::count(){
      return count1;
}
 int Member::count1=0;
