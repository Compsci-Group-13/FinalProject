#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <Windows.h>

#include "Character.h"

using namespace std;

//text,input,event,
void myEvent1(Character& Hero, Character& Enemy) {

    int input;
    string choice;

    cout << "You leave your home. You decide to go for a walk\n";
    Sleep(2000);
    cout << endl;
    cout << "You encounter an old lady.....\n";
    Sleep(2000);
    cout << "She asks you if you want the red pill or blue(type red or blue)\n ";
    Sleep(2000);
    //choice
    cin >> choice;

    if (choice == "red") {

        cout << "You ended up falling asleep on the side of a mountain.\n";
        Sleep(2000);
        cout << "You wake up and see the same old lady....\n" << endl; //will be changed
        Sleep(2000);
        cout << "BUT NOW SHES A MONSTER!!!!!";
        Sleep(2000);
        cout << "what do you want to do ...type 1 to attack it our type 2 to run away\n?";
        cin >> input;
        if (input == 1) {
            cout << "you have entered fighting mode you attacked the lady with a random rock on the floor \n";
            Enemy.damageHealth(Hero.getAttack());
            cout << "the ladys health is " << Enemy.getHealth() << "\n";
            Sleep(2000);
            while (Enemy.getHealth() > 0) {
                cout << "what is you next move 1 attack or  2 run away;\n";
                cin >> input;
                if (input == 1) {
                    cout << "you have attacked the lady...\n";
                    Sleep(2000);
                    Enemy.damageHealth(Hero.getAttack());
                    cout << "the ladys health is " << Enemy.getHealth() << "\n";
                    Sleep(2000);
                    if (Enemy.getHealth() == 0) {
                        break;
                    }
                    Hero.damageHealth(Enemy.getAttack());
                    cout << "monster lady attacked you, your new health is " << Hero.getHealth() << " \n";

                }

                else if (input == 2) {
                    cout << "you ran away from the lady...";
                    Sleep(2000);
                    cout << "Her long fangs have came up and attacked you as you ran down the hill";
                    Hero.reduceStamina(2);
                    cout << "your stamina is now at" << Hero.getStamina();
                    cout << "as you ran for your life you find a small town shed...";
                    Sleep(2000);
                    cout << "you run into the shed only to find the monster had been standng before you there before you....\n";
                    Sleep(2000);
                    cout << "you faught with your hardest might. but soon after a howl in the distance scared off the monster\n";
                    cout << " ";
                    break;
                }
            }

        }
        cout << "did you really deafeat the monster or was it just your imagination you wake up back inside your bed\n";

    }

}

void myEvent2() {
    string choice;
    int x;
    x = 0;
    cout << "Its a nice day out and you suddenly get hit by a bus and wake up in a differnt world. In this world you wonder around.\n";
    Sleep(2000);
    cout << "You get the option of either going to town or the forest what do you choose to do.\n" << endl;
    Sleep(2000);
    cout << "To go to the forest press 'F' or to go to the town press 'T' \n" << endl;

    cin >> choice;

    if (choice == "T") {
        cout << "You have decided to go to town." << endl;

        cout << "You walk through the town and meet a knight. He is recruiting anyone that wants to join as long as they show knowledge. At last your long await dream will finally happen. (its not your dream but lets go with that anways.)  " << endl;
        cout << "He asks you to choose a weapon depending on which weapon you choose he will allow you to become a knight." << endl;

        cout << "Choose either 'sword', 'shield', or 'bow'";

        cin >> choice;

        if (choice == "sword") {
            cout << "You chose the sword. Interesting choice you chose the most basic weapon of all. Unoriginal. Not accepted." << endl;

            cout << "all your hopes and dreams are gone. You close your eyes about to cry but then suddenly wake up back in your room" << endl;
        }
        else if (choice == "shield") {
            cout << "You chose the shield. Thats kind of boring. Not accepted." << endl;
            cout << "Youre so shocked about not being able to accomplish your dreams you faint. You wake up back in your room." << endl;
        }

        else if (choice == "bow") {
            cout << "You chose the bow. You are accepted. Its shows you are a person of culture i mean what. Anyways you go to find a job to do but you are suddenly ran over by a herd of bulls. You are back in your world. Reverse isekai... I mean wow what a shame." << endl;
        }
    }
    else if (choice == "F") {

        cout << "You chose to wander the forest. Seems pleasant but you have been walking for hours and you get hungry. You make some primitive weapon using what you can to go hunt. You manage to hunt something. You can either eat it or find a town and sell it. what do you choose. " << endl;

        cout << "'S' to sell it or 'E' to eat it. " << endl;

        cin >> choice;
        if (choice == "E") {
            cout << "You chose to eat the meat. You start chowing down but realizes it tastes pretty weird. I bet. Literally just found a random animal and ate it. Weirdo. Anyways yiu start to feel funny. You think you may be poisoned. You run to look for help. You see an old lady but collapse in front of her. Its too late you are dying. You close your eyes and wake up at your house." << endl;
            cout << "it was all a dream" << endl;
        }
        else if (choice == "S") {

            cout << "You chose to sell it. Wont risk it huh? Understandable lets go." << endl;
            cout << "You manage to find a town and ask a around a market to see who would be willing to buy. You encounter a scary butcher." << endl;
            cout << endl;

            cout << "He asks: 'How much are you willing to sell it for,' " << endl;
            cout << "You dont have a clue what type of animal it even is or if it was safe to eat so you take a guess on how much to ask for." << endl;
            cout << endl;

            cout << "You dont know about this worlds currency so take a guess from 1-10 and hope that it falls within a decent price range." << endl;

            cin >> x;
            switch (x) { //switch statement 
            case 1:
                cout << "No its to low something must be wrong with it.";
                break;
            case 2:
                cout << "No something has to be wrong with it to be so low";
                break;
            case 3:
                cout << "Its low but hes not convinced";
                break;
            case 4:
                cout << "Seems good";
                break;
            case 5:
                cout << "No too high";
                break;
            case 6:
                cout << "The heck is wrong with you";
                break;
            case 7:
                cout << "Youre ridiculous";
                break;
            case 8:
                cout << "No go away";
                break;
            case 9:
                cout << "WOW get out of here ";
                break;
            case 10:
                cout << "Youre insane";
                break;
            }
            cout << endl;
            cout << "The butcher suddenly realizes that there was something wrong with the meat. POISON!! He grabs you and hurls you believing you attempted to sell him poisoned meat. You hit your head and wake up back at home" << endl;
        }

    }

}

void myEvent3(Character& Hero, Character& Enemy) {
    string choice;
    int guess1, guess2, guess3;

    guess1 = 0;
    guess2 = 0;
    guess3 = 0;

    cout << "Another day another adventure am i right? Lets see what the world has to offer today. \n";
    cout << "You leave your house and as you walk you encounter a squad of killer robots. Its one of those kind of days huh. \n";
    Sleep(2000);

    cout << "Choose what you would like to do. 'R' to run away or 'F' to fight. \n";
    cout << endl;
    Sleep(2000);

    cin >> choice;

    if (choice == "R") {
        cout << "You chose to run. I won't call you any names don't worry. Lets continue with our adventure \n";
        cout << "The robots begin to chase you. What the heck thats not how these types of games usually go.\n";
        cout << "You have no choice. You must fight. Go get em champ. \n";

    }

    else if (choice == "F") {
        cout << "Wow youre brave huh. I like your style lets go. You look at the robots and get ready. \n";
        cout << endl;
    }

    cout << "It seems like they planned to fight no matter what. Okay lets beat them up. \n";
    cout << endl;
    Sleep(2000);

    cout << "Okay youre probaly wondering what? How am i supposed to attack or with what. Well you magically have super awesome moves called 'attack' yea you like that creativity huh. Well its called plot holes the game is full of them but yea you can attack. \n";
    cout << endl;
    Sleep(2000);

    cout << "To attck the robot press '1' or you can wimp out and loose some stamina up to you if you press '2'. \n";
    Sleep(2000);

    cin >> choice;

    if (choice == "1") {
        cout << "You attacked the robot! \n";
        Enemy.setHealth(Hero.getAttack());
        cout << "its health is " << Enemy.getHealth() << "\n";
        while (Enemy.getHealth() > 0) {
            cout << "what is you next move 1 to attack or 2 to run away;\n";
            cin >> choice;
            if (choice == "1") {
                cout << "you have attacked the robot...\n";

                Enemy.damageHealth(Hero.getAttack());
                cout << "robots health is " << Enemy.getHealth() << "\n";
                if (Enemy.getHealth() == 0) {
                    break;
                }
                Hero.damageHealth(Enemy.getAttack());
                cout << "the robot attacked you, your new health is " << Hero.getHealth() << " \n";

            }

            else if (choice == "2") {
                cout << "you ran away from the scary robot...";
                cout << "Its running after you. If it had a brain i would say its crazy";
                Hero.setStamina(2);
                cout << "your stamina is now at" << Hero.getStamina();
                cout << "You run as fast as you can into a hardware store...";
                cout << "....\n";
                cout << "you struggle to get away from it but suddenly some old lady walks in an tells the robot... 01101000 01100101 01110011 00100000 01100011 01101111 01101111 01101100,\n";
                cout << "The robot gives you a thumbs up and leaves you alone. Wait it has thumbs? \n";
                cout << endl;
                break;
                Sleep(2000);
            }
        }
    }
    cout << "Well that was weird huh. You continue down the path as you stay alert for anymore weirdos to appear. \n";
    Sleep(2000);

    cout << "Since we aren't doing much lets play a game. Im going to ask you random questions and give you some answers to choose from. \n";
    Sleep(2000);

    cout << "It may be random but the people making this are running out of ideas on what to do so why not. Alright lets get started. \n";
    Sleep(2000);

    cout << "Ok I will ask you the questions (that i totally didnt find on random trivia websites) and you will choose from 1, 2, or 3" << endl;
    cout << endl;
    Sleep(2000);

    cout << "Question one: Which Mario character has appeared in all but one 'Mario Party' game? \n";
    Sleep(2000);

    cout << "1: Daisy \n";
    cout << "2: Waluigi \n";
    cout << "3: Wario \n";

    cin >> guess1;
    switch (guess1) { //switch statement 
    case 1:
        cout << "Incorrect \n";
        break;
    case 2:
        cout << "Nopeeeee \n";
        break;
    case 3:
        cout << "You are right! Well arent you the smart one \n ";
        break;

    }
    cout << "Okay lets do another. Which African nation has the most pyramids?\n";
    Sleep(2000);

    cout << "1: Sudan \n";
    cout << "2: Egypt \n";
    cout << "3: Libya \n";

    cin >> guess2;
    switch (guess2) { //switch statement 
    case 1:
        cout << "YESSSS \n ";
        break;
    case 2:
        cout << "HA nah you would think right? \n";
        break;
    case 3:
        cout << "XXXXWRONGXXX \n";
        break;
    }

    cout << "Alright last one. George Washington never knew that dinosuars existed. True or false. \n";
    Sleep(2000);

    cout << "1: True \n";
    cout << "2: False \n";

    cin >> guess3;

    switch (guess3) { //switch statement 
    case 1:
        cout << "True! surprising huh. \n ";
        break;
    case 2:
        cout << "Wrong I wonder what he would think now \n";
        break;
    }
    cout << endl;

    Sleep(2000);
    cout << "Well that was fun for like 2 minutes. Lets just send you back home since Im fresh out of trivia questions. \n";

}

void myEvent4(Character& Hero, Character& Enemy) {
    string choice;

    cout << "you have woken up from a stange dream....\n";
    Sleep(2000);
    cout << "You find yourself looking out the windows of your home\n" << endl;
    Sleep(2000);
    cout << "you see a red fox going into the back woods if your home \n" << endl;
    Sleep(2000);
    cout << "do you choose to go follow the fox and find what secreats it hold or do choose to ignore it?\n";
    Sleep(2000);
    cout << "type Follow or Ignore\n";
    cin >> choice;

    if (choice == "Follow") {
        cout << "You have decided to Follow this fox..." << endl;
        cout << "You see the red fox running away from you as if something is trying to get its attention...";
        Sleep(2000);
        cout << "as you follow the fox you can smell something putrid in the distance\n";
        Sleep(2000);
        cout << "you take a whiff of the smell... youre body cant handle the intenst smell";
        cout << "you throw up life points as if you were in a video game\n";
        cout << " a diplay bar magicly pop up saying Heros health is now ....";
        Sleep(2000);
        Hero.damageHealth(Enemy.getAttack());
        cout << Hero.getHealth();
        cout << "you make fun of the display of your health saying if i am actual in a game would i be able to do this...";
        cout << "choose what finger to bite off type index or middle ";

        cin >> choice;

        if (choice == "index") {
            cout << "You chose the index finger ." << endl;
            Sleep(2000);
            cout << "you bit of your index finger that attracted the red fox back towards you\n";
            Sleep(2000);
            cout << "the red fox comes towards you and takes sneak attack at your index finger\n ";
            cout << "he runs off with your index finger!!!!!!!";
            cout << "do you chose to chase after it type yes or no";
            cin >> choice;

            if (choice == "yes") {
                cout << " you chase after the fox with all of your might \n";
                Sleep(2000);
                Hero.reduceStamina(1);
                cout << "the bar again has popped up about your stamina you should look out for it\n ";
                cout << Hero.getStamina();
                cout << "you trapped the fox before it is able to escape again\n";
                Sleep(2000);
                cout << "you grab the fox and remove your finger from its mouth\n";
                Sleep(2000);
                cout << " you ran back home to find your keys for your car\n";
                cout << "when you suddelny woke up from this werid dream you had\n";
                cout << "you question if it was even real as you wake up from your bed";
            }


            else if (choice == "middle") {
                cout << "You chose the middle finger. Thats kind of boring.\n" << endl;
                Sleep(2000);
                cout << "you ask yourself why would you get rid of bird finger\n" << endl;
                Sleep(2000);
                cout << "ironically a bird comes and takes your finger from you!!!!!\n";
                cout << "you run and chase after the bird trying to ger your finger from the bird\n";
                Sleep(2000);
                cout << "as you run towards the bird you notice it flew back into its nest\n";
                Sleep(2000);
                cout << "the bird starts feeding its babies with your finger\n";
                cout << "do you choose to attack the nest or just leave it alone\n";
                cout << "type attack or leave it";
                cin >> choice;

                if (choice == "attack") {
                    cout << " you choose to attack the bird nest\n";
                    Sleep(2000);
                    cout << " all of the birds in the forest came and attacked you\n";
                    Sleep(2000);
                    cout << "you were knocked out and woke up in your bed";
                    Sleep(2000);
                }

                else if (choice == "leave") {
                    cout << "you chose to leave the nest alone\n";
                    Sleep(2000);
                    cout << "as you were walking home you get hit in the head with a nut\n ";
                    Sleep(2000);
                    cout << "it wasnt a NUT it was your finger you ran back home trying to sitch it up ";
                }
            }


        }

    }
    else if (choice == "Ignore") {
        cout << "you chose to ignore the fox...";
        Sleep(2000);
        cout << "on your way back from walking into the forest \n";
        Sleep(2000);
        cout << "you have noticed that there has been a new trial open a beaming glowing light is coming from there\n ";
        Sleep(2000);
        cout << " do you choose to follow this new trail\n";
        cout << "type yes or no \n";
        cin >> choice;

        if (choice == "yes") {
            cout << "you chose to walk through the new trail\n";
            Sleep(2000);
            cout << "as you walked through this new trail\n";
            Sleep(2000);
            cout << "you noticed the leaves of all trees start falling \n";
            Sleep(2000);
            cout << "you feel a type of precnese near you as if its breath down your neck";
            cout << " do you chose to turn around and look?";
            cout << " type yes or no \n";
            cin >> choice;

            if (choice == "yes") {
                cout << " you build enough courage to go ahead and look into at whats behind you \n";
                Sleep(2000);
                cout << "you turn around and are in SHOCK.....";
                Sleep(2000);
                cout << "you see the same fox from the beganing of the adventure \n";
                cout << " you looked unimpreessed from the fox\n";
                Sleep(2000);
                cout << "the fox showed you way outside of the forest\n";

            }

            else if (choice == "no") {
                cout << " you chose to ignore the preacne and run for your dear life!!! \n";
                Sleep(2000);
                cout << "The eninity behind you only seem ti get bigger.....";
                Sleep(2000);
                cout << "you kept on RUNNING for your dear life and wonder what could it even be behind you\n";
                Sleep(2000);
                cout << " you fall out of your bed and hear scratches on your door .....\n";
                Sleep(2000);
                cout << "as you opened the door you see a baby fox again giving you a treat\n";
                Sleep(2000);
                cout << "confused you acpeat the treat and go back to bed\n";

            }



        }
        else if (choice == "no") {
            cout << "you chose not to not follow the new trail\n";
            Sleep(2000);
            cout << "you notice that the trial is calling you name as if it wants you to walk in there\n";
            Sleep(2000);
            cout << "you ignore the voices again as they dont spark intrest in you \n";
            Sleep(2000);
            cout << "the voices attempted again to get your atention by grabbing you by the hand\n";
            cout << "do you chose to ignore the voices or look into them";
            cout << "type ignore or look";
            cin >> choice;
            if (choice == "ignore") {
                cout << "you ingored the voices";
                Sleep(2000);
                cout << "That wasnt the best choice to choose...";
                Sleep(2000);
                cout << "the voices have been angered they attacked you to death";
                cout << "you woke up in the hostpial wondering if it was a dream\n";
            }
            else if (choice == "look") {
                cout << "you chose to look into the voices...";
                Sleep(2000);
                cout << " you acepted the voices that are within the trails...";
                Sleep(2000);
                cout << "as you turned around it was only just a old lady that had gotten lost in the forest with you";
                cout << "the old lady asked you if you were lost you asked for dierctions\n";
                Sleep(2000);
                cout << "you thank the lady for showing you the way out but a feeling in your gut says other wise until you home...";
            }

        }


    }



}