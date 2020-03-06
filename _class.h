#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED

//Included Libraries
#include <iostream>
#include <vector>

//Included Headers
#include "main.h"
#include "languages.h"

class _class{
  private:

  protected:
    int level = 1;
    int hitDie;

  public:
    virtual void setStats(int* stats) = 0;
    virtual void setSaves(vector<string> *saves) = 0;
    virtual int getHitDie() = 0;
    virtual void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf) = 0;
    virtual void setStartingEquipment(vector<string> *equipment){};
    virtual int calcSpeed(){return 0;};
    virtual void addSkills(vector<string> *skills){};
    virtual void addLanguages(vector<string> *languages){};
};

class Barbarian : public _class{
  protected:
    int hitDie = 12;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[str] = *(stats + 5);
      sorted[con] = *(stats + 4);
      sorted[dex] = *(stats + 3);
      sorted[wis] = *(stats + 2);
      sorted[cha] = *(stats + 1);
      sorted[intel] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[str]);
      (*saves).push_back(stat[con]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*armorProf).push_back("Medium");
      (*armorProf).push_back("Shields");
      (*weaponProf).push_back("Simple");
      (*weaponProf).push_back("Martial");
    }
};

class Bard : public _class{
  protected:
    int hitDie = 8;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[cha] = *(stats + 5);
      sorted[dex] = *(stats + 4);
      sorted[con] = *(stats + 3);
      sorted[wis] = *(stats + 2);
      sorted[str] = *(stats + 1);
      sorted[intel] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[dex]);
      (*saves).push_back(stat[cha]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      string tool;
      (*armorProf).push_back("Light");
      (*weaponProf).push_back("Simple");
      (*weaponProf).push_back("Hand crossbows");
      (*weaponProf).push_back("Longswords");
      (*weaponProf).push_back("Rapiers");
      (*weaponProf).push_back("Shortswords");
      for(int i = 0; i < 3; i++){
        cout << "[]: ";
        cin >> tool;

        (*toolProf).push_back(tool);
      }
    }
};

class Cleric : public _class{
  protected:
    int hitDie = 8;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[wis] = *(stats + 5);
      sorted[str] = *(stats + 4);
      sorted[con] = *(stats + 3);
      sorted[cha] = *(stats + 2);
      sorted[dex] = *(stats + 1);
      sorted[intel] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[wis]);
      (*saves).push_back(stat[cha]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*armorProf).push_back("Medium");
      (*armorProf).push_back("Shields");
      (*weaponProf).push_back("Simple"); 
    }
};

class Druid : public _class{
  protected:
    int hitDie = 8;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[wis] = *(stats + 5);
      sorted[dex] = *(stats + 4);
      sorted[con] = *(stats + 3);
      sorted[cha] = *(stats + 2);
      sorted[intel] = *(stats + 1);
      sorted[str] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[intel]);
      (*saves).push_back(stat[wis]);
    }

    int getHitDie(){return hitDie;}

    void addLanguages(vector<string> *languages){
      (*languages).push_back("Druidic");
      allLangs.remove("Druidic");
    }

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*armorProf).push_back("Medium (Nonmetal)");
      (*armorProf).push_back("Shields (Nonmetal)");
      (*weaponProf).push_back("Clubs");
      (*weaponProf).push_back("Daggers");
      (*weaponProf).push_back("Darts");
      (*weaponProf).push_back("Javelins");
      (*weaponProf).push_back("Maces");
      (*weaponProf).push_back("Quarterstaffs");
      (*weaponProf).push_back("Scimitars");
      (*weaponProf).push_back("Sickles");
      (*weaponProf).push_back("Slings");
      (*weaponProf).push_back("Spears");
      (*toolProf).push_back("Herbalism Kit");
    }
};

class Fighter : public _class{
  protected:
    int hitDie = 10;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[str] = *(stats + 5);
      sorted[con] = *(stats + 4);
      sorted[dex] = *(stats + 3);
      sorted[cha] = *(stats + 2);
      sorted[wis] = *(stats + 1);
      sorted[intel] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[str]);
      (*saves).push_back(stat[con]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*armorProf).push_back("Medium");
      (*armorProf).push_back("Heavy");
      (*weaponProf).push_back("Simple");
      (*weaponProf).push_back("Martial");
    }
};

class Monk : public _class{
  protected:
    int hitDie = 8;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[dex] = *(stats + 5);
      sorted[wis] = *(stats + 4);
      sorted[con] = *(stats + 3);
      sorted[cha] = *(stats + 2);
      sorted[intel] = *(stats + 1);
      sorted[str] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[str]);
      (*saves).push_back(stat[dex]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      string tool;
      (*weaponProf).push_back("Simple"); 
      (*weaponProf).push_back("Shortswords");

      for(int i = 0; i < 5; i++)
        cout << "artisan or instrument";
      (*toolProf).push_back(tool);
    }
};

class Paladin : public _class{
  protected:
    int hitDie = 10;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[str] = *(stats + 5);
      sorted[con] = *(stats + 4);
      sorted[cha] = *(stats + 3);
      sorted[dex] = *(stats + 2);
      sorted[wis] = *(stats + 1);
      sorted[intel] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[wis]);
      (*saves).push_back(stat[cha]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*armorProf).push_back("Medium");
      (*armorProf).push_back("Heavy");
      (*armorProf).push_back("Shields");
      (*weaponProf).push_back("Simple");
      (*weaponProf).push_back("Martial");
    }
};

class Ranger : public _class{
  protected:
    int hitDie = 10;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[dex] = *(stats + 5);
      sorted[wis] = *(stats + 4);
      sorted[con] = *(stats + 3);
      sorted[cha] = *(stats + 2);
      sorted[intel] = *(stats + 1);
      sorted[str] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[str]);
      (*saves).push_back(stat[dex]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*armorProf).push_back("Medium");
      (*armorProf).push_back("Shields");
      (*weaponProf).push_back("Simple");
      (*weaponProf).push_back("Martial");
    }
};

class Sorcerer : public _class{
  protected:
    int hitDie = 6;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[con] = *(stats + 5);
      sorted[dex] = *(stats + 4);
      sorted[con] = *(stats + 3);
      sorted[wis] = *(stats + 2);
      sorted[intel] = *(stats + 1);
      sorted[str] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[con]);
      (*saves).push_back(stat[cha]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*weaponProf).push_back("Daggers");
      (*weaponProf).push_back("Darts");
      (*weaponProf).push_back("Slings");
      (*weaponProf).push_back("Quarterstaffs");
      (*weaponProf).push_back("Light crossbows");
    }
};

class Warlock : public _class{
  protected:
    int hitDie = 8;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[cha] = *(stats + 5);
      sorted[con] = *(stats + 4);
      sorted[dex] = *(stats + 3);
      sorted[wis] = *(stats + 2);
      sorted[str] = *(stats + 1);
      sorted[intel] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[wis]);
      (*saves).push_back(stat[cha]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*weaponProf).push_back("Simple");
    }
};

class Wizard : public _class{
  protected:
    int hitDie = 6;

  public:
    void setStats(int* stats){
      int sorted[6];
      sorted[intel] = *(stats + 5);
      sorted[con] = *(stats + 4);
      sorted[dex] = *(stats + 3);
      sorted[wis] = *(stats + 2);
      sorted[cha] = *(stats + 1);
      sorted[str] = *stats;

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[intel]);
      (*saves).push_back(stat[wis]);
    }

    int getHitDie(){return hitDie;}

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*weaponProf).push_back("Daggers");
      (*weaponProf).push_back("Darts");
      (*weaponProf).push_back("Slings");
      (*weaponProf).push_back("Quarterstaffs");
      (*weaponProf).push_back("Light crossbows");
    }
};

class Rogue : public _class{
  protected:
    int hitDie = 8;

  public:
    void setStats(int* stats){
      int sorted[6];
      std::string subclass;

      std::cout << "Subclass: ";
      std::cin >> subclass;

      if(subclass == "Thief"){
        sorted[dex] = *(stats + 5);
        sorted[cha] = *(stats + 4);
        sorted[str] = *(stats + 3);
        sorted[con] = *(stats + 2);
        sorted[wis] = *(stats + 1);
        sorted[intel] = *stats;
      }else if(subclass == "Assassin"){
        sorted[dex] = *(stats + 5);
        sorted[cha] = *(stats + 4);
        sorted[wis] = *(stats + 3);
        sorted[con] = *(stats + 2);
        sorted[str] = *(stats + 1);
        sorted[intel] = *stats;
      }else if(subclass == "Arcane"){
        sorted[dex] = *(stats + 5);
        sorted[intel] = *(stats + 4);
        sorted[con] = *(stats + 3);
        sorted[cha] = *(stats + 2);
        sorted[wis] = *(stats + 1);
        sorted[str] = *stats;
      }

      for(int i = 0; i < 6; i++)
        *(stats + i) = sorted[i];
    }

    void setSaves(vector<string> *saves){
      (*saves).push_back(stat[dex]);
      (*saves).push_back(stat[intel]);
    }

    int getHitDie(){return hitDie;}

    void addLanguages(vector<string> *languages){
      (*languages).push_back("Thieves' Cant");
      allLangs.remove("Thieves' Cant");
    }

    void setProfs(vector<string> *armorProf, vector<string> *weaponProf, vector<string> *toolProf){
      (*armorProf).push_back("Light");
      (*weaponProf).push_back("Simple");
      (*weaponProf).push_back("Hand crossbows");
      (*weaponProf).push_back("Longswords");
      (*weaponProf).push_back("Rapiers");
      (*weaponProf).push_back("Shortswords");
      (*toolProf).push_back("Thieves' Tools");
    }
};

#endif