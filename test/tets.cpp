/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Member.h"

void test(){
    
    Member Elhanan,Amit;
    Elhanan.follow(Amit);
    // double follow
    cout << "  " << Elhanan.numFollowers() << " " <<  Elhanan.numFollowing();//0 1
    Amit.follow(Elhanan);
    cout << "  " << Elhanan.numFollowers() << " " <<  Elhanan.numFollowing();//1 1
    Amit.follow(Elhanan);
    cout << "  " << Elhanan.numFollowers() << " " <<  Elhanan.numFollowing();//1 1
}
void test2(){
    Member Elhanan,Amit;
    //follow back
    Elhanan.follow(Amit);
    Amit.follow(Elhanan);
    cout << "  " << Elhanan.numFollowers() << " " <<  Elhanan.numFollowing();//1 1
    cout << "  " << Amit.numFollowers() << " " <<  Amit.numFollowing();//1 1  
}