#include <iostream>
#include "NBAChamps.h"
#include <fstream>
#include <sstream>
//#include <cstdlib>
#include <string>
//#include <vector>
//#include <algorithm>
//Ian Fawaz Final Project 4/26/16
using namespace std;

int main(int argc, char *argv[])
{
    NBAChamps network;
    ifstream inFile;
    string data;

    inFile.open(argv[1]);
    if(inFile.good()){

        while(getline(inFile, data)){
            stringstream ss(data);
            string year;
            string champs;
            string results;
            string runnersup;
            getline(ss, year, ',');
            getline(ss, champs, ',');
            getline(ss, results, ',');
            getline(ss, runnersup, ',');
            
            //cout << "" << endl;
            network.insertYear(year, champs, results, runnersup);
            //cout << "" << endl;

            
        }
        //cout<<"a"<<endl;
    }
    else{
        cout << "File unsuccessfully opened" << endl;
    }
    inFile.close();
    string choice;
    string year;
    string team;
    string team2;
    
    //int intyear = atoi(year.c_str());
    cout << "======NBA Finals Results======" << endl;
    cout << "1. Print List of Finals Results" << endl;
    cout << "2. Find Year" << endl;
    cout << "3. Individual Team Championships" << endl;
    cout << "4. Number of Times a Team Has Been Runner-Up" << endl;
    cout << "5. Individual Team Finals Appearances" << endl;
    cout << "6. Years a Team Has Won the NBA Finals" << endl;
    cout << "7. Years a Team Has Lost the NBA Finals" << endl;
    cout << "8. Years a Team Has Been to the NBA Finals" << endl;
    cout << "9. NBA Finals Matchups Between Two Teams" << endl;
    cout << "10. Quit" << endl;
    
    getline(cin,choice);

    while (choice != "10"){
        if (choice == "1"){
            network.printTableContents();
            
        }
        else if (choice == "2"){
            cout << "Enter year:" << endl;
            getline(cin, year);
            network.findSeason(year);
        }
        else if (choice == "3"){
            cout << "Make sure that you enter the full team name including the city,\n e.g. Orlando Magic, Golden State Warriors."<<endl;
            cout << "Enter team:" << endl;
            getline(cin, team);
            cout<<"The "<<team<<" have "<<network.ChampNumber(team)<<" championships."<<endl;
            /*
            if (network.ChampNumber(team) == 0){
                if (team != "Phoenix Suns" &&team != "Cleveland Cavaliers" &&team != "Indiana Pacers" &&team != "Utah Jazz" &&team != "Orlando Magic" &&team != "Denver Nuggets" &&team != "Charlotte Hornets" &&team != "Charlotte Bobcats" &&team != "New Orleans Hornets" &&team != "New Orleans Pelicans" &&team != "Los Angeles Clippers" &&team != "Memphis Grizzlies" &&team != "Minnesota Timberwolves" &&team != "Toronto Raptors"){
                    //network.ChampNumber(team) = 0;
                    cout << "Team not found. Make sure that you enter the full team name\nincluding the city, e.g. Orlando Magic, Golden State Warriors."<<endl;
                }

                
            //else if(team == "Denver Nuggets" ||team == "Charlotte Hornets" ||team == "Charlotte Bobcats" ||team == "New Orleans Hornets" ||team == "New Orleans Pelicans" ||team == "Los Angeles Clippers" ||team == "Memphis Grizzlies" ||team == "Minnesota Timberwolves" ||team == "Toronto Raptors"){
            else{  
                cout<<"The "<<team<<" have "<<network.ChampNumber(team)<<" championships."<<endl;
            }
        }
            if (network.ChampNumber(team)>0){
                cout<<"The "<<team<<" have "<<network.ChampNumber(team)<<" championships."<<endl;
        }*/
    }
        else if (choice == "4"){
            cout << "Make sure that you enter the full team name including the city,\n e.g. Orlando Magic, Golden State Warriors."<<endl;
            cout << "Enter team:" << endl;
            getline(cin, team);/*
            if (network.RunnersUpNumber(team) == 0){
                if (team!= "Chicago Bulls" &&team != "Denver Nuggets" &&team != "Charlotte Hornets" &&team != "Charlotte Bobcats" &&team != "New Orleans Hornets" &&team != "New Orleans Pelicans" &&team != "Los Angeles Clippers" &&team != "Memphis Grizzlies" &&team != "Minnesota Timberwolves" &&team != "Toronto Raptors"){
                    //network.ChampNumber(team) = 0;
                    cout << "Team not found. Make sure that you enter the full team name\nincluding the city, e.g. Orlando Magic, Golden State Warriors."<<endl;
                }

                
            //else if(team == "Denver Nuggets" ||team == "Charlotte Hornets" ||team == "Charlotte Bobcats" ||team == "New Orleans Hornets" ||team == "New Orleans Pelicans" ||team == "Los Angeles Clippers" ||team == "Memphis Grizzlies" ||team == "Minnesota Timberwolves" ||team == "Toronto Raptors"){
            else{  
                cout<<"The "<<team<<" have been NBA Finals Runners-Up "<<network.RunnersUpNumber(team)<<" times."<<endl;
            }
        }
            if (network.RunnersUpNumber(team)>0){
                cout<<"The "<<team<<" have been NBA Finals Runners-Up "<<network.RunnersUpNumber(team)<<" times."<<endl;
        }*/
            cout<<"The "<<team<<" have been NBA Finals Runners-Up "<<network.RunnersUpNumber(team)<<" times."<<endl;
        }
        else if (choice == "5"){
            cout << "Make sure that you enter the full team name including the city,\n e.g. Orlando Magic, Golden State Warriors."<<endl;
            cout << "Enter team:" << endl;
            getline(cin, team);/*
            if (network.ChampNumber(team) == 0){
                if (team != "Denver Nuggets" &&team != "Charlotte Hornets" &&team != "Charlotte Bobcats" &&team != "New Orleans Hornets" &&team != "New Orleans Pelicans" &&team != "Los Angeles Clippers" &&team != "Memphis Grizzlies" &&team != "Minnesota Timberwolves" &&team != "Toronto Raptors"){
                    //network.ChampNumber(team) = 0;
                    cout << "Team not found. Make sure that you enter the full team name\nincluding the city, e.g. Orlando Magic, Golden State Warriors."<<endl;
                }

                
            //else if(team == "Denver Nuggets" ||team == "Charlotte Hornets" ||team == "Charlotte Bobcats" ||team == "New Orleans Hornets" ||team == "New Orleans Pelicans" ||team == "Los Angeles Clippers" ||team == "Memphis Grizzlies" ||team == "Minnesota Timberwolves" ||team == "Toronto Raptors"){
            else{  
                cout<<"The "<<team<<" have been to the NBA Finals "<<network.FinalsAppearances(team)<<" times."<<endl;
            }
        }
            if (network.ChampNumber(team)>0){
                cout<<"The "<<team<<" have been to the NBA Finals "<<network.FinalsAppearances(team)<<" times."<<endl;
        }*/
            cout<<"The "<<team<<" have been to the NBA Finals "<<network.FinalsAppearances(team)<<" times."<<endl;
        }
        else if (choice == "6"){
            cout << "Make sure that you enter the full team name including the city,\n e.g. Orlando Magic, Golden State Warriors."<<endl;
            cout << "Enter team:" << endl;
            getline(cin, team);
            cout<<"The "<<team<<" won the NBA Finals in: "<<endl;
            network.ListChampYears(team);
        }
        
        else if (choice == "7"){
            cout << "Make sure that you enter the full team name including the city,\n e.g. Orlando Magic, Golden State Warriors."<<endl;
            cout << "Enter team:" << endl;
            getline(cin, team);
            cout<<"The "<<team<<" lost the NBA Finals in: "<<endl;
            network.ListRunnersUpYears(team);
        }
        
        else if (choice == "8"){
            cout << "Make sure that you enter the full team name including the city,\n e.g. Orlando Magic, Golden State Warriors."<<endl;
            cout << "Enter team:" << endl;
            getline(cin, team);
            cout<<"The "<<team<<" went to the NBA Finals in: "<<endl;
            //network.ListRunnersUpYears(team);
            //network.ListChampYears(team);
            network.ListFinalsYears(team);
        }
        else if (choice == "9"){
            cout << "Make sure that you enter the full team name including the city,\n e.g. Orlando Magic, Golden State Warriors."<<endl;
            cout << "Enter first team:" << endl;
            getline(cin, team);
            cout << "Enter second team:" << endl;
            getline(cin, team2);
            cout<<"Here are the list of matchups between the "<<team<<" and the "<<team2<<"."<<endl;
            network.ListMatchups(team, team2);
        }
         else {
            cout << "not an option" << endl;
        }
        cout << "======NBA Finals Results======" << endl;
        cout << "1. Print List of Finals Results" << endl;
        cout << "2. Find Year" << endl;
        cout << "3. Individual Team Championships" << endl;
        cout << "4. Number of Times a Team Has Been Runner-Up" << endl;
        cout << "5. Individual Team Finals Appearances" << endl;
        cout << "6. Years a Team Has Won the NBA Finals" << endl;
        cout << "7. Years a Team Has Lost the NBA Finals" << endl;
        cout << "8. Years a Team Has Been to the NBA Finals" << endl;
        cout << "9. NBA Finals Matchups Between Two Teams" << endl;
        cout << "10. Quit" << endl;
        
        getline(cin,choice);
    }
    cout << "Goodbye!" << endl;
    return 0;
}