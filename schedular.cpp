#include<iostream>
#include<ctime>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

long int f;
class Time
  {
  public:
    int d;
    void day1();
    void day2();
    void day3();
    void day4();
    void day5();
  };
    
    void Time::day1()
    {
      if(f>=21600 && f< 31800)
        {
          system("clear");
          cout<<"\n____________THE SCHEDULER___________\n";
          cout<<"\n!!!!***Good Morning***!!!!\n";
          cout<<"College is at 9:00 AM\n" ;
          d=31800-f;
          cout.flush();
          sleep(d);
          f=f+d; 
        }
      if(f>=31800 && f<35400)
         {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Object Oriented Programming \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. Hanumant Pawar\n";
           d=35400-f;
           cout.flush();
           sleep(d);
           f=f+d;
        }   
      if(f>=35400 && f<39000)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Principals Of Digital Systems \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. Y.K.Subbarao\n";
           d=39000-f;
           cout.flush();
           sleep(d);
           f=f+d;
        
        }
      if(f>=39000 && f<46200)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
            cout<<"\n\t\t\tBatch: A5\nPractical: CPP LAB\n\t\t\tLab no: 403 \n\t\t\tName of Faculty: Prof. Hanumant Pawar\n";
            cout<<"\n\t\t\t\t\t\tBatch: B5\nPractical: ECHEM LAB\n\t\t\tLab no: 016 \n\t\t\tName of Faculty: Dr. Rahul  Kadu \n";
            cout<<"\nBatch: C5\nPractical: CPP LAB\n\t\t\tLab no: 403 \n\t\t\tName of Faculty: Prof. Monica Ravishankar\n";
           d=46200-f;
           cout.flush();
           sleep(d);
           f=f+d;
        }
      
      if(f>=46200 && f<52200)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\t!!!Activity Time and Lunch Break!!!\n";
           d=52200-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=52200 && f<55500)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Professional Communication \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. Jayashri Nalkar\n";
           d=55500-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }        
      if(f>=55500 && f<59100)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: DEAC \n\t\t\tVenue: 019 \n\t\t\tName of Faculty: Prof. Vikas Kulal\n";
           d=59100-f;
           cout.flush();
           sleep(d);
                  
        }  
      else
        {
           system("clear");
           cout<<"\n\t\t\tCollege is Over!!\n";
        }

    }
    
    
    void Time::day2()
    {  
     if(f>=21600 && f< 31800)
        {
          system("clear");
          cout<<"____________THE SCHEDULER___________\n";
          cout<<"\n\t\t\t!!!!***Good Morning***!!!!\n";
          cout<<"College is at 9:00 AM\n" ;
          d=31800-f;
          cout.flush();
          sleep(d);
          f=f+d; 
        }
     if(f>=31800 && f<35400)
         {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: DEAC \n\t\t\tVenue: 002 \n\t\t\tName of Faculty: Prof. Vikas Kulal\n";
           d=35400-f;
           cout.flush();
           sleep(d);
           f=d+f;
         }   
      if(f>=35400 && f<39000)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Engineering Chemistry \n\t\t\tVenue: 002 \n\t\t\tName of Faculty: Dr. Rahul  Kadu\n";
           d=39000-f;
           cout.flush();
           sleep(d);
           f=f+d; 
        }
      if(f>=39000 && f<42900)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Object Oriented Programming \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. Hanumant Pawar\n";
           d=42900-f;
           cout.flush();
           sleep(d);
           f=f+d;
        }
      if(f>=42900 && f<46200)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Materials Engineering \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. M.M.Kulkarni \n";
           d=46200-f;
           cout.flush();
           sleep(d);
           f=f+d; 
        }
      if(f>=46200 && f<52200)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\t!!!Activity Time and Lunch Break!!!\n";
           d=52200-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=52200 && f<59100)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
            cout<<"\n\t\t\tBatch: A5\nPractical: ENG LAB\n\t\t\tLab no: 010 \n\t\t\tName of Faculty: Prof. Jayashri Nalkar \n";
            cout<<"\n\t\t\tBatch: B5\nPractical: CPP LAB\n\t\t\tLab no: 403 \n\t\t\tName of Faculty: Prof. Monica Ravishankar \n";
            cout<<"\n\t\t\tBatch: C5\nPractical: CPP LAB\n\t\t\tLab no: 403 \n\t\t\tName of Faculty: Prof. Hanumant Pawar\n";
           d=59100-f;
           cout.flush();
           sleep(d);
           
        }
    
      else
        {
          system("clear");
          cout<<"\n\t\t\tCollege is Over!!\n";
        }
    }
    
   void Time::day3()
   {
      if(f>=21600 && f< 31800)
        {
          system("clear");
          cout<<"____________THE SCHEDULER___________\n";
          cout<<"\n!!!!***Good Morning***!!!!\n";
          cout<<"College is at 9:00 AM\n" ;
          d=31800-f;
          cout.flush();
          sleep(d);
          f=f+d; 
        }
     if(f>=31800 && f<35400)
         {
             system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
            cout<<"\n\t\t\tBatch: A5\n\t\t\tTutorial: DEAC\n\t\t\tLab no: 005 \n\t\t\tName of Faculty: Prof. Vikas Kulal\n";
            cout<<"\n\t\t\tBatch: B5\n\t\t\tTutorial: ME\n\t\t\tLab no: 308 \n\t\t\tName of Faculty: Prof. M.M.Kulkarni\n";
            cout<<"\n\t\t\tBatch: C5\n\t\t\tTutorial: PDS\n\t\t\tLab no: 008 \n\t\t\tName of Faculty: Prof. Y.K.Subbarao\n";
           d=35400-f;
           cout.flush();
           sleep(d);
           f=f+d;
         }   
      if(f>=35400 && f<39000)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Engineering Chemistry \n\t\t\tVenue: 003 \n\t\t\tName of Faculty: Dr. Rahul  Kadu \n";
           d=39000-f;
           cout.flush();
           sleep(d);
           f=f+d; 
        }
      if(f>=39000 && f<42900)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: DEAC \n\t\t\tVenue: 002 \n\t\t\tName of Faculty: Prof. Vikas Kulal\n";
           d=42900-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=42900 && f<46200)
        { 
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Principals Of Digital Systems \n\t\t\tVenue: 002 \n\t\t\tName of Faculty: Prof. Y.K. Subharao\n";
           d=46200-f;
           cout.flush();
           sleep(d);
           f=f+d;
        
        }
      if(f>=46200 && f<52200)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\t!!!Activity Time  and Lunch Break!!!\n";
           d=52200-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=52200 && f<59100)
        {
             system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
            cout<<"\n\t\t\tBatch: A5\n\t\t\tPractical: ECHEM LAB\n\t\t\tLab no: 016 \n\t\t\tName of Faculty: Dr. Rahul  Kadu \n";
            cout<<"\nBatch: B5\n\t\t\tPractical: ENG LAB\n\t\t\tLab no: 010 \n\t\t\tName of Faculty: Prof. Jayshri Nalkar \n";
            cout<<"\n\t\t\tBatch: C5\n\t\t\tPractical: ENG LAB\n\t\t\tLab no: 010 \n\t\t\tName of Faculty: Prof. Jayshri Nalkar\n";
           d=59100-f;
           cout.flush();
           sleep(d); 
        }
     
      else
        {
          system("clear");
          cout<<"\nCollege is Over!!\n";
        }
    }
    
  void Time::day4()
   {
     if(f>=21600 && f< 31800)
        {
          system("clear"); 
          cout<<"____________THE SCHEDULER___________\n";
          cout<<"\n!!!!***Good Morning***!!!!\n";
          cout<<"\t\t\tCollege is at 9:00 AM\n" ;
          d=31800-f;
          cout.flush();
          sleep(d);
          f=f+d; 
        }
    if(f>=31800 && f<35400)
         {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Principals Of Digital Systems \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. Y.K. Subbarao\n";
           d=35400-f;
           cout.flush();
           sleep(d);
           f=f+d;
        
         }   
      if(f>=35400 && f<39000)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Professional Communication \n\t\t\tVenue: 019 \n\t\t\tName of Faculty: Prof. Jayashri Nalkar\n";
           d=39000-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=39000 && f<42900)
        {
             system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
            cout<<"\n\t\t\tBatch: A5\nTutorial: PDS\n\t\t\tLab no: 008 \n\t\t\tName of Faculty:Prof. Y.K. Subbarao\n";
            cout<<"\n\t\t\tBatch: B5\nTutorial: DEAC\n\t\t\tLab no: 005 \n\t\t\tName of Faculty: Prof. Vikas Kulal\n";
            cout<<"\n\t\t\tBatch: C5\nTutorial: ME\n\t\t\tLab no: 305 \n\t\t\tName of Faculty: Prof. M.M. Kulkarni \n";
           d=42900-f;
           cout.flush();
           sleep(d);
           f=f+d;
        }
      if(f>=42900 && f<46200)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Object Oriented Programming \n\t\t\tVenue: 003 \n\t\t\tName of Faculty: Prof. Hanumant Pawar\n";
           d=46200-f;
           cout.flush();
           sleep(d);
           f=f+d;
        }
      if(f>=46200 && f<52200)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\t!!!Activity Time and Lunch Break!!!\n";
           d=52200-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=52200 && f<55500)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Materials Engineering \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. M.M. Kulkarni \n";
           d=55500-f;
           cout.flush();
           sleep(d);
           f=f+d; 
        }
      if(f>=55500 && f<59100)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
          cout<<"\n\t\t\tSubject: DEAC \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. Vikas Kulal\n";
           d=59100-f;
           cout.flush();
           sleep(d);
          
        }  
      else
        {
          system("clear");
          cout<<"\nCollege is Over!!\n";
        }
   }
   
  void Time::day5()
   {
      if(f>=21600 && f< 31800)
        {
          system("clear");
          cout<<"____________THE SCHEDULER___________\n";
          cout<<"\n\t\t\t!!!!***Good Morning***!!!!\n";
          cout<<"\t\t\tCollege is at 9:00 AM\n" ;
          d=31800-f;
          cout.flush();
          sleep(d);
          f=f+d; 
        }
      if(f>=31800 && f<39000)
         {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
            cout<<"\n\t\t\tBatch: A5\n\t\t\tPractical: CPP LAB\n\t\t\tLab no: 403 \n\t\t\tName of Faculty: Prof. Monica Ravishankar\n";
            cout<<"\n\t\t\tBatch: B5\n\t\t\tPractical: CPP LAB\n\t\t\tLab no: 403 \n\t\t\tName of Faculty: Prof. Hanumant Pawar \n";
            cout<<"\n\t\t\tBatch: C5\n\t\t\tPractical: ECHEM LAB\n\t\t\tLab no: 016 \n\t\t\tName of Faculty: Dr. Rahul  Kadu\n";
           d=39000-f;
           cout.flush();
           sleep(d);
           f=f+d;
         }   
      
      if(f>=39000 && f<42900)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Materials Engineering \n\t\t\tVenue: 001 \n\t\t\tName of Faculty: Prof. M.M. Kulkarni \n";
           d=42900-f;
           cout.flush();
           sleep(d);
           f=f+d; 
        }
      if(f>=42900 && f<46200)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Professional Communication \n\t\t\tVenue: 019 \n\t\t\tName of Faculty: Prof. Jayashri Nalkar\n";
           d=46200-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=46200 && f<52200)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\t!!!Activity Time and Lunch Break!!!\n";
           d=52200-f;
           cout.flush();
           sleep(d);
           f=d+f;
        }
      if(f>=52200 && f<55500)
        {
           system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
            cout<<"\n\t\t\tBatch: A5\nTutorial: ME\n\t\t\tLab no: 305 \n\t\t\tName of Faculty: Prof. M.M. Kulkarni\n";
            cout<<"\n\t\t\tBatch: B5\nTutorial: PDS\n\t\t\tLab no: 008 \n\t\t\tName of Faculty: Prof. Y.K. Subbarao\n";
            cout<<"\n\t\t\tBatch: C5\nTutorial: DEAC\n\t\t\tLab no: 005 \n\t\t\tName of Faculty: Prof. Vikas Kulal\n";
           d=42900-f;
           cout.flush();
           sleep(d);
           f=f+d;
        }
      if(f>=55500 && f<59100)
        {
            system("clear");
           cout<<"\n\t\t\t___________THE SCHEDULER___________\n";
            cout<<"\n\tSemister:2";
            cout<<"\t\t\t\t\t\tClass:CSE-3\n";
             cout<<"\n\tLecture:- \n";
           cout<<"\n\t\t\tSubject: Engineering Chemistry \n\t\t\tVenue: 003 \n\t\t\tName of Faculty: Dr. Rahul  Kadu \n";
           d=59100-f;
           cout.flush();
           sleep(d);
           
        }  
      else
        {
          system("clear");
          cout<<"\nCollege is Over!!\n";
        }
 
   }
   
   
  int main() 
{
    Start:
       Time t;
       time_t now;
       now= time(0);
       tm* dt = localtime(&now);
       int a= dt->tm_wday;
       long int h= dt->tm_hour;
       h=h*3600; // converting hour in  MIN
       long int m= dt->tm_min;
       m=m*60;// converting min in  sec
        f=h+m; // add all  sec
           switch(a)
   {
     case 1 :
             t.day1();
             break;
     case 2 :
             t.day2();
             break;
     case 3 :
             t.day3();
             break;
     case 4 :
            t.day4();
             break;
     case 5 :
             t.day5();
             break;               
     default :
              system("clear");
             cout<<"\nHoliday,Enjoy and Study Hard!!!\n";
             break;                   
   }
   }
  
