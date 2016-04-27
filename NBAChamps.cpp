#include <iostream>
#include "NBAChamps.h"
#include <string>
//#include <vector>
//#include <climits>
//#include <queue>

using namespace std;

NBAChamps::NBAChamps()
{
    //ctor
}

void NBAChamps::printTableContents(){
    bool anything = 0;
    HashElem * tmp;
    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            tmp = hashTable[x];
            while (tmp != NULL){
                cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                tmp = tmp -> next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
}

void NBAChamps::insertYear(std::string year, std::string champs, std::string results, std::string runnersup){
    HashElem * node = new HashElem(year, champs, results, runnersup);
    int index = hashSum(year);
    //cout << index << endl;
    if (hashTable[index] == NULL){
        hashTable[index] = node;
    }
    else{
        HashElem * tmp = hashTable[index];
        while(tmp -> next!=NULL){
            tmp = tmp->next;
        }
        node -> previous = tmp;
        tmp -> next = node;
        //node = tmp;
    }
}

int NBAChamps::ChampNumber(std::string name){
    int count = 0;

    bool anything = 0;
    int index = hashSum(name);
    HashElem * tmp;

    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            tmp = hashTable[x];
            //tmp->champs = hashTable[x]->champs;
            while (tmp != NULL){
                //cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                
                //count++;
                //cout<<tmp->champs<<endl;
                //cout<<hashTable[index]->champs<<endl;
                //if(hashTable[index]->champs==name){
                //cout<<tmp->champs<<endl;
                
                if(tmp->champs == name){
                    count++;
                
                }
                tmp = tmp -> next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
    
    
        return count;
    
}

int NBAChamps::RunnersUpNumber(std::string name){
    bool anything = 0;
    int index = hashSum(name);
    HashElem * tmp;
    
    int count = 0;
    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            tmp = hashTable[x];
            //tmp->champs = hashTable[x]->champs;
            while (tmp != NULL){
                //cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                
                //count++;
                //cout<<tmp->champs<<endl;
                //cout<<hashTable[index]->champs<<endl;
                //if(hashTable[index]->champs==name){
                //cout<<tmp->champs<<endl;
                
                if(tmp->runnersup == name){
                    count++;
                
                }
                tmp = tmp -> next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
    return count;
}
int NBAChamps::FinalsAppearances(std::string name){
    bool anything = 0;
    int index = hashSum(name);
    HashElem * tmp = nullptr;
    
    int count = 0;
    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            tmp = hashTable[x];
            //tmp->champs = hashTable[x]->champs;
            while (tmp != NULL){
                //cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                
                //count++;
                //cout<<tmp->champs<<endl;
                //cout<<hashTable[index]->champs<<endl;
                //if(hashTable[index]->champs==name){
                //cout<<tmp->champs<<endl;
                if(tmp->champs == name){
                    count++;
                }
                if(tmp->runnersup == name){
                    count++;
                
                }
                tmp = tmp -> next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
    return count;
}

void NBAChamps::ListChampYears(std::string name){
    bool anything = 0;
    int index = hashSum(name);
    HashElem * tmp;
    
    //int count = 0;
    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            tmp = hashTable[x];
            //tmp->champs = hashTable[x]->champs;
            while (tmp != NULL){
                //cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                
                //count++;
                //cout<<tmp->champs<<endl;
                //cout<<hashTable[index]->champs<<endl;
                //if(hashTable[index]->champs==name){
                //cout<<tmp->champs<<endl;
                
                if(tmp->champs == name){
                    cout<<tmp->year<<endl;
                    //return;
                
                }
                tmp = tmp -> next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
    //return count;
}

void NBAChamps::ListRunnersUpYears(std::string name){
    bool anything = 0;
    int index = hashSum(name);
    HashElem * tmp;
    
    //int count = 0;
    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            tmp = hashTable[x];
            //tmp->champs = hashTable[x]->champs;
            while (tmp != NULL){
                //cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                
                //count++;
                //cout<<tmp->champs<<endl;
                //cout<<hashTable[index]->champs<<endl;
                //if(hashTable[index]->champs==name){
                //cout<<tmp->champs<<endl;
                
                if(tmp->runnersup == name){
                    cout<<tmp->year<<endl;
                    //return;
                
                }
                tmp = tmp -> next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
    //return count;
}

void NBAChamps::ListFinalsYears(std::string name){
    bool anything = 0;
    //int index = hashSum(name);
    //HashElem * tmp;
    HashElem * current = nullptr;
    
    //int count = 0;
    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            //tmp = hashTable[x];
            current = hashTable[x];
            //tmp->champs = hashTable[x]->champs;
            while (current != NULL){
                //cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                
                //count++;
                //cout<<tmp->champs<<endl;
                //cout<<hashTable[index]->champs<<endl;
                //if(hashTable[index]->champs==name){
                //cout<<tmp->champs<<endl;
                
                if(current->runnersup == name || current -> champs == name){
                    cout<<current->year<<endl;
                }
                
                //tmp = tmp -> next;
                current = current ->next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
    //return count;
}

void NBAChamps::ListMatchups(std::string name1, std::string name2){
    bool anything = 0;
    //int index = hashSum(name);
    HashElem * tmp;
    int count = 0;
    //int count = 0;
    for(int x=0; x<tableSize; x++){
        if (hashTable[x]!=NULL){
            tmp = hashTable[x];
            //tmp->champs = hashTable[x]->champs;
            while (tmp != NULL){
                //cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                
                //count++;
                //cout<<tmp->champs<<endl;
                //cout<<hashTable[index]->champs<<endl;
                //if(hashTable[index]->champs==name){
                //cout<<tmp->champs<<endl;
                
                if(tmp->champs == name1 && tmp->runnersup == name2){
                    cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                    count++;
                    //return;
                
                }
                if(tmp->champs == name2 && tmp->runnersup == name1){
                    cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                    count++;
                }

                tmp = tmp -> next;
            }
            //tmp = tmp->next;
            anything = 1;
        }

    }
    if (anything == 0){
        cout << "empty" <<endl;
    }
    if (count == 0){
        cout<<"These teams have never met in the NBA Finals."<<endl;
    //return count;
}
}

void NBAChamps::findSeason(string season){
    int index = hashSum(season);
    if (hashTable[index]->year == season){
        //cout << index << ":" << NBAChamps[index]->title << ":" << NBAChamps[index]->year << endl;
        cout << hashTable[index]->year << ":"<< hashTable[index]->champs<<" "<<hashTable[index]->results<<" "<<hashTable[index]->runnersup<<endl;
        return;
    } else {
        HashElem *tmp = hashTable[index];
        while (tmp != NULL){
            if (tmp->year == season){
                cout<<tmp->year<<":"<<tmp->champs<<" "<<tmp->results<<" "<<tmp->runnersup<<endl;
                return;
            }
            tmp = tmp -> next;
        }
    }
    cout << "not found" << endl;
}
int NBAChamps::hashSum(std::string x)
//int NBAChamps::hashSum(int x)
{
    int sum = 0;
    for (int i=0;i<x.length();i++){
        sum = sum + x[i];
    }
    sum = sum % tableSize;
    return sum;
}




NBAChamps::~NBAChamps()
{
    //dtor
}