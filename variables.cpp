//
// Created by rommac100 on 9/29/15.
//
#include <iostream>
#include "variables.h"
using namespace std;
//int room;
char dir [4] ={'n','e','s','w'};
char aDir;
string item;
string note;
bool go = false;

//notes
string noteLibrary ="'I know where you are... May god have mercy on you.' It says. There is a small stake at the bottom of the note.";
string noteKitchen ="'I have notes and weapons spread through out through the entire house. Find them if you wish to live.' You take the pistol.";

//Special Deaths.
string deathStove = " a hand reaches out from the oven. It grabs your head and smacks it into the stove. Killing you.";

//rooms strings
string wall = "You cannot not go through a wall. Give another direction.";
string door = "You cannot go through a door. Especially since it has been locked.";
string hallway1 = "The door slams behind you. You are in a hallway. You can go in all four directions, except North."; //first hallway statement
string hallway = "You are in a hallway. You can go in all four directions, except North.";
string bedroom = "You are in bedroom approximately North. Where do you wish to go?";
string frontDoor = "You are at the front door. You reach for the door nob to open it. But it does not budge. You slam your body against it and it still doesn't open.";
string deathMessage = "Count Orlock caught you. He tears you into little pieces.";
string library = "You are in a library. There is a couch in the middle of the room. It is surrounded by bookshelves filled to brim with books. Behind the couch there is a table with a note.";
string kitchen = "You are in a Kitchen. There is a note and a pistol on a coutertop. Other objects in the kitchen are an industrial oven, and a stove on top. The oven/stove is located south.";
string stove = "You go to the stove. You go to touch it and";
string stovenom = " and notice that it is slightly warm. Like it had been used recently.";

//Weapon kills.
string itemStake = "A creature comes behind you and tries to scratch at your flesh. You turn around and shove a stake in it. You live.";
string itemPistol = "A creature comes behind you and tries to tear at your flesh. You turn around and shoot it straight in the head. You live.";
