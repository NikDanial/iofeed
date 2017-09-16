#include "stdafx.h"
#include <iostream>
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <iomanip>
#include <string>
#include <time.h>
#include <fstream>
#include <mmsystem.h>
#include <sstream>
#include <cstdlib>

using namespace std;

struct directory 
{
	char WINNT[5][30];
	char Pics[4][30];
    char MyDocs[7][30];
	char ISO[20];
	char Bookmarks[4][30];
	char Downloads[6][30];
} direct; 

struct Target1Struct
{
	char Windows[4][30];
	char HackingToolz[3][30];
	char Documents[5][30];
	char TelnetLogs[6][30];
	char Pictures[3][30];
} Target1;

struct Target2Struct
{
	char Windows[4][30];
	char MyDocuments[5][30];
	char Applications[3][30];
	char OldFiles[4][30];
	char TelnetLogs[6][30];
} Target2;

struct Target3Struct
{
	char Windows[3][30];
	char Recycled[5][30];
	char AccessLogs1[4][30];
	char AccessLogs2[6][30];
	char AccessLogs3[5][30];
	char Pics[4][30];
	char FBI[4][30];
} Target3;



void main()
{

   HANDLE  hConsole;
   hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

   SetConsoleTextAttribute(hConsole, 10);//green

   

   //initializing directory struct
   strcpy_s(direct.WINNT[0], "win.com");
   strcpy_s(direct.WINNT[1], "win.ini");
   strcpy_s(direct.WINNT[2], "font.ttf");
   strcpy_s(direct.WINNT[3], "DrWatson.rulz");
   strcpy_s(direct.WINNT[4], "morefiles.etc");
 
   strcpy_s(direct.Pics[0], "naked1.jpg");
   strcpy_s(direct.Pics[1], "mydog.jpg");
   strcpy_s(direct.Pics[2], "avatar.png");
   strcpy_s(direct.Pics[3], "defaced.gif");

   strcpy_s(direct.MyDocs[0], "All_school_test_results.doc");
   strcpy_s(direct.MyDocs[1], "SchoolManager-Login.doc");
   strcpy_s(direct.MyDocs[2], "Dif_Serials.txt");
   strcpy_s(direct.MyDocs[3], "HOWTO.:read_a_howto.doc");
   strcpy_s(direct.MyDocs[4], "Matrix1_[1].avi");
   strcpy_s(direct.MyDocs[5], "Matrix2_(reloaded)divx.mpg");
   strcpy_s(direct.MyDocs[6], "Matrix3_revolutions_33.mpg");

   strcpy_s(direct.ISO, "memtest.iso");
   
   strcpy_s(direct.Bookmarks[0], "evilskin@gmail.com");
   strcpy_s(direct.Bookmarks[1], "www.under1mb.com");
   strcpy_s(direct.Bookmarks[2], "www.jouwforum.my");
   strcpy_s(direct.Bookmarks[3], "www.ultramax.nl"); 
   
   for (int i = 0;i<6;i++)
   {
	  strcpy_s(direct.Downloads[i], "Empty");
   } 

   bool allowPortScanner = false;
   bool allowFileDestroy = false;

   bool PortScannerInstalled = false;
   bool FileDestroyInstalled = false;

   bool deletedWin = false;
   bool deletedFBI = false;
   

   //initializing Target1Struct

   strcpy_s(Target1.Windows[0], "DirectX.exe");
   strcpy_s(Target1.Windows[1], "win.bat");
   strcpy_s(Target1.Windows[2], "System32.exe");
   strcpy_s(Target1.Windows[3], "ControlPanel.bat");
  
   strcpy_s(Target1.HackingToolz[0], "TrojanKiller.exe");
   strcpy_s(Target1.HackingToolz[1], "PortScannerW32.exe");
   strcpy_s(Target1.HackingToolz[2], "McAfee.exe");

   strcpy_s(Target1.Documents[0], "Assignments.docx");
   strcpy_s(Target1.Documents[1], "ProjectC.mov");
   strcpy_s(Target1.Documents[2], "HiddenFiles.bat");
   strcpy_s(Target1.Documents[3], "AlienProof.docx");
   strcpy_s(Target1.Documents[4], "IlluminatiPlans.html");

   strcpy_s(Target1.TelnetLogs[0], "210.187.22.217:80");
   strcpy_s(Target1.TelnetLogs[1], "1.9.131.44:80");
   strcpy_s(Target1.TelnetLogs[2], "58.27.108.157");
   strcpy_s(Target1.TelnetLogs[3], "173.194.120.96");
   strcpy_s(Target1.TelnetLogs[4], "192.168.010.001");
   strcpy_s(Target1.TelnetLogs[5], "192.168.001.56");

   strcpy_s(Target1.Pictures[0], "Family.jpg");
   strcpy_s(Target1.Pictures[1], "MyBeautifulGF.jpeg");
   strcpy_s(Target1.Pictures[2], "Wanted_Fugitive.png");

   //initializing Target2Struct

   strcpy_s(Target2.Windows[0], "DirectX.exe");
   strcpy_s(Target2.Windows[1], "win.bat");
   strcpy_s(Target2.Windows[2], "System32.exe");
   strcpy_s(Target2.Windows[3], "ControlPanel.bat");

   strcpy_s(Target2.MyDocuments[0], "Portfolio.docx");
   strcpy_s(Target2.MyDocuments[1], "Girlfriend.mov");
   strcpy_s(Target2.MyDocuments[2], "HiddenFiles.bat");
   strcpy_s(Target2.MyDocuments[3], "AlienProof.docx");
   strcpy_s(Target2.MyDocuments[4], "IlluminatiPlans.html");

   strcpy_s(Target2.Applications[0], "Keylogger.exe");
   strcpy_s(Target2.Applications[1], "MrAccounting.exe");
   strcpy_s(Target2.Applications[2], "CCleaner.exe");

   strcpy_s(Target2.OldFiles[0], "BorlandC++.exe");
   strcpy_s(Target2.OldFiles[1], "BiOSTools.bat");
   strcpy_s(Target2.OldFiles[2], "FileDestroy.exe");
   strcpy_s(Target2.OldFiles[3], "VisualBasic.bat");

   strcpy_s(Target2.TelnetLogs[0], "210.187.22.217:80");
   strcpy_s(Target2.TelnetLogs[1], "192.168.010.001");
   strcpy_s(Target2.TelnetLogs[2], "58.27.108.157");
   strcpy_s(Target2.TelnetLogs[3], "173.194.120.96");
   strcpy_s(Target2.TelnetLogs[4], "192.157.33.89");
   strcpy_s(Target2.TelnetLogs[5], "192.168.001.56");

   //initializing Target3Struct

   strcpy_s(Target3.Windows[0], "System32.exe");
   strcpy_s(Target3.Windows[1], "Win.com");
   strcpy_s(Target3.Windows[2], "DirectX.sys");

   strcpy_s(Target3.Recycled[0], "Oldpics.jpg");
   strcpy_s(Target3.Recycled[1], "MicrosoftOffice.docx");
   strcpy_s(Target3.Recycled[2], "Legalfile.docs");
   strcpy_s(Target3.Recycled[3], "FBI_snatchlist.doc");
   strcpy_s(Target3.Recycled[4], "Area51Files.doc");

   strcpy_s(Target3.AccessLogs1[0], "192.168.77.22");
   strcpy_s(Target3.AccessLogs1[1], "44.654.344.010");
   strcpy_s(Target3.AccessLogs1[2], "190.00.010.789");
   strcpy_s(Target3.AccessLogs1[3], "10.160.80.230");

   strcpy_s(Target3.AccessLogs2[0], "167.57.010.800");
   strcpy_s(Target3.AccessLogs2[1], "192.168.010.001");
   strcpy_s(Target3.AccessLogs2[2], "199.800.110.111");
   strcpy_s(Target3.AccessLogs2[3], "192.168.011.010");
   strcpy_s(Target3.AccessLogs2[4], "65.010.255.255");
   strcpy_s(Target3.AccessLogs2[5], "010.001.111.190");

   strcpy_s(Target3.AccessLogs3[0], "180.010.001.200");
   strcpy_s(Target3.AccessLogs3[1], "543.789.222.112");
   strcpy_s(Target3.AccessLogs3[2], "123.456.789.101");
   strcpy_s(Target3.AccessLogs3[3], "192.168.000.001");
   strcpy_s(Target3.AccessLogs3[4], "192.168.565.255");

   strcpy_s(Target3.Pics[0], "J.Lawrence.jpg");
   strcpy_s(Target3.Pics[1], "M.E.Winstead.jpeg");
   strcpy_s(Target3.Pics[2], "Alien_Proof.png");
   strcpy_s(Target3.Pics[3], "MoreM.E.Winstead.jpeg");

   strcpy_s(Target3.FBI[0], "KevinMitnick.docx");
   strcpy_s(Target3.FBI[1], "FBI_WantedList.doc");
   strcpy_s(Target3.FBI[2], "Tomu_shimomur.exe");
   strcpy_s(Target3.FBI[3], "Blaster.exec");



  
   cout << "root@bt:";
   SetConsoleTextAttribute(hConsole, 15);//white
 
   cout << "Microsoft Windows [Version 6.2.9200]" << endl <<endl;
   //cout << "(c) 2012 Microsoft Corporation. All rights reserved."<< endl;
   cout << endl;
   SetConsoleTextAttribute(hConsole, 10);//green
 cout << "   _____       _                          _   \n"             
      << "  |_   _|     | |                        | |\n"              
      << "    | |  _ __ | |_ ___ _ __ ___ ___ _ __ | |_ ___  _ __    \n"
      << "    | | | '_ \\| __/ _ \\ '__/ __/ _ \\ '_ \\| __/ _ \\| '__| \n"   
      << "   _| |_| | | | ||  __/ | | (_|  __/ |_) | || (_) | |    \n"  
      << "  |_____|_| |_|\\__\\___|_|  \\___\\___| .__/ \\__\\___/|_|   \n"   
      << "   -------------------------------| |---------------- \n"                    
      << "                                  |_| " << endl << endl;

 cout << "   Interceptor PT - V1.0 [Console Edition] " << endl;
 cout << "      (c) Indigo, 2014 " << endl;
 cout << "      http://sniff.su" << endl << endl << endl;

 cout << "   Need Help? Type 'Help' " << endl << endl << endl;


  
 
  
  
   Sleep(1500);

   SetConsoleTextAttribute(hConsole, 15);//white
  

   char answer[30] = "r";

   
    bool pinged = false;
	bool deletedLogs;
    bool Mission1Completed = false;
	bool saidit = false;

	int missionLevel = 1; //for the inboxes
	char hangup[30];
	char goTo[40] = "op";

   while (strcmp(answer, "q") != 0){ //*************** THE MAIN WHILE
	   
	   deletedLogs = false;
	   strcpy_s(hangup, "op");

	
		   if (saidit == false){
			
			   SetConsoleTextAttribute(hConsole, 112);//GREY BG, BLACK FONT
			   cout << "INCOMING MESSAGE!" << endl << endl;
           system("start IncomingMessage.vbs");
		   Sleep(1500);
		   
			   saidit = true;
		   }

   
   
  

   SetConsoleTextAttribute(hConsole, 15);//white
   cout << "root[.]# ";
   cin >> ws;
   cin.getline(answer,30);

   //**************************************** if input is help
   if (strcmp(answer, "help") == 0){
	   SetConsoleTextAttribute(hConsole, 8);//grey
	   
	   cout << " " << endl;
	   cout << "dir - To view the entire directory of the file. Example : dir TelnetLogs " << endl;
	   cout << "cd  - To open a file. Example : cd Windows <DIR> " << endl;
	   cout << "cd\\ - Goes back to the root file. Example cd\\" << endl;
	   cout << "del - Deletes a file. Example : del logs.doc " << endl;
	   cout << "ping - Checks if the address is online. Example : ping 111.11.11.1" << endl;
	   cout << "inbox - Reads email from inbox" << endl;
	   cout << "telnet - Access the target login page. Example telnet 192.168.10.100"<< endl;
	   cout << "getfile - Retrieve a file. Example getfile SecretFile.docx" << endl << endl;
   }//end of if help

   //*************************************** if input is ping
   string ThePing(answer,0,4);
   const char * RealPing = ThePing.c_str();

   if (strcmp(RealPing, "ping") == 0){
	   SetConsoleTextAttribute(hConsole, 8);//grey

	   int length = strlen(answer);
	   string ip(answer, 5, (length - 5));
	   const char * Realip = ip.c_str();

       cout << "" << endl;
	   cout << "Pinging " << Realip << " with 32 bytes of data:" << endl << endl;
	   Sleep(1000);
       srand (time(NULL));
	   int rate = 0;

	   //pinging output
	   int rates[4];
	   for (int i = 0;i<4;i++)
	   {
       rate =  rand() % 5 + 8;
	   rates[i] = rate;
	   cout << "Reply from " << Realip << " bytes=32 time = " << rate << "ms TTL = 63"<< endl;
       Sleep(1000);
	   }
       

	   cout << endl;

	   int min = rates[0];
	   for (int i = 1;i<4;i++){
		   if (rates[i] < min)
			   min = rates[i];
	   }

	   int max = rates[0];
	   for (int i = 1;i<4;i++){
		   if (rates[i] > max)
			   max = rates[i];
	   }

	   int avg = 0;
	   int sum = 0;
	   for (int i = 0;i<4;i++)
	   {
		   sum += rates[i];
	   }
	   avg = sum/4;

	   cout << "Ping statistics for " << Realip << endl;
	   cout << "      Packets: Sent = 4, Received = 4, Lost = 0 (0% loss)," << endl;
	   cout << "Approximate round trip times in milli-seconds:" << endl;
	   cout << "      Minimum = "<<min<<"ms, Maximum = "<<max<<"ms, Average = "<<avg<<"ms" << endl << endl;
	   cout << "The destination IP seems to be online" << endl << endl;

	   pinged = true;
   }// end of if ping
 
  

   //********************************************** if input is inbox

    string TheInbox(answer, 0, 5);
    const char * RealInbox = TheInbox.c_str();

   if (strcmp(RealInbox, "inbox") == 0){
	   if (missionLevel == 1){
      system("start EMAIL1.txt");
	  cout << endl;
	   }
	   else if(missionLevel == 2){
		   system("start EMAIL2.txt");
		   cout << endl;
	   }
	   else if(missionLevel == 3){
		   system("start EMAIL3.txt");
		   cout << endl;
	   }
   
   }

   //********************************************** if input is PortScanner

    string ThePortScan(answer, 0, 8);
    const char * RealPortScan = ThePortScan.c_str();

	int from, to;
	int OpenPort;

	//allowPortScanner = true;
	if (strcmp(RealPortScan, "portscan") == 0){
		if (allowPortScanner == true){
			if (PortScannerInstalled == true){

	   int length2 = strlen(answer);
	   string ip2(answer, 9, (length2 - 9));
	   const char * Realip2 = ip2.c_str();

	   if (strcmp(Realip2, "119.57.134.154") == 0){
		   OpenPort = 3775;
	   }

	   else if(strcmp(Realip2, "222.222.22.22") == 0){
		   OpenPort = 2456;
	   }

	   else if (strcmp(Realip2, "53.37.244.213") == 0){
		   OpenPort = 3126;
	   }
	   else {
		   OpenPort = 0;
	   }


			
		cout << endl;
		SetConsoleTextAttribute(hConsole, 151);//Blue BG, White font
        cout << "                     PORTSCANNER V1.0                       " << endl;

		SetConsoleTextAttribute(hConsole, 15);//white
		cout << "[SCAN RANGE]" << endl << endl;
		cout << "Min : ";
		cin >> from;
		cout << "Max : ";
		cin >> to;
		cout << endl;
		cout << "SCANNING... " << endl;
		
		SetConsoleTextAttribute(hConsole, 224);//Yellow BG, Black Font
		
		for (int i = from;i<=to;i++)
		   {
			  Sleep(10);
			  cout << i;
			  cout << "\r";
			  if(i == OpenPort){
				  break;
			  }
		   }
		    cout << endl << endl;

			if ( (OpenPort < from) || (OpenPort > to)){
				OpenPort = 0;
			}

			if (OpenPort != 0){
            SetConsoleTextAttribute(hConsole, 15);//white
			cout << "Port found at : ";
			SetConsoleTextAttribute(hConsole, 224);//Yellow BG, Black Font
			cout << OpenPort << endl << endl;
			}
			else {
		    SetConsoleTextAttribute(hConsole, 12);//red
			cout << "Port NOT found!" << endl << endl;
			
			}
		
		
		
			}
			else {
				cout << endl;
				SetConsoleTextAttribute(hConsole, 8);//grey
		        cout << "PortScannerW32.exe has not been installed." << endl << endl;
			}
		}
		else{
			cout << endl;
			SetConsoleTextAttribute(hConsole, 12);//red
		    cout << "PortScanner tool NOT found!" << endl << endl;
		}
	}
   

   //********************************************** if input is telnet

   string TheTelnet(answer, 0 ,6);
   const char * RealTelnet = TheTelnet.c_str();

   char login[20], password[20], hisIP[20], hisport[20];
   char login2[20], password2[20];
   char login3[20], password3[20];

   if (strcmp(RealTelnet, "telnet") == 0){
	   

	   if (pinged == true){
		   bool access = false;   


           cout << endl;
		    SetConsoleTextAttribute(hConsole, 15);//white
		   cout << "  Retrieving TELNET session..." << endl;
		   cout << "";
		   SetConsoleTextAttribute(hConsole, 15);//white
		   for (int i = 0;i<4;i++)
		   {
			   Sleep(800);
			   cout << "ÛÛÛ";
		   }
		   for (int i = 0;i<3;i++)
		   {
			   Sleep(300);
			   cout << "ÛÛÛ";
		   }
		    for (int i = 0;i<3;i++)
		   {
			   Sleep(500);
			   cout << "ÛÛÛ";
		   }
			cout << " Done!" << endl << endl;



		   while (!(access)){
	       SetConsoleTextAttribute(hConsole, 8);//grey
		   cout << "IPv4   : ";
		   cin >> ws;
		   cin.getline(hisIP,20);

		   if ( (strcmp(hisIP, "cd\\") == 0) ){
			        break;
		            }

		   cout << "Port   : ";
		   cin >> ws;
		   cin.getline(hisport,20);

		    if ( (strcmp(hisport, "cd\\") == 0) ){
			        break;
		           }

		       if ( (strcmp(hisIP, "197.119.92.56") == 0) && (strcmp(hisport, "3444") == 0)){
			       access = true;
			       system("cls");
				   Beep(400,800);

				   bool entry = false;
				   while (entry == false){
					   SetConsoleTextAttribute(hConsole, 10);//green
				   cout << "  $$$$$$$$$$$$$$$$$$$$$$$$$*'           ^''**$$$$$$$$$$$$$$$$$$$$$$$ \n"
                        << "  $$$             $$$$$$$$$e$$$$$$$$beee,       '*$$$$$$$$$$$$$$$$$$ \n"
                        << "  $$$   ALTUS     $$$$$$$$P''     '*$$$$''$b.       '$$$$$$$$$$$$$$$ \n"
                        << "  $$$      LABS   $$$$$$'            '$F   *$$$c      ^*$$$$$$$$$$$$ \n"
                        << "  $$$             $$$$P              dP     ^$$$$c      ^*$$$$$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$$$'              J$      $$$$$$b       '$$$$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$P       .eeee.  4$      $$$$$$$$b       ^$$$$$$$$ \n" 
                        << "  $$$$$$$$$$$$$$$$F      .d$$$$$$$b$'     d$$$$$$$$$r       ^$$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$P      d$$$$$$$$$$%     J$$$$$$$$$$$        3$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$      $$$$$$$$$$$F     4$' '$$$$$$$$         $$$$$$ \n"
                        << "  $$$$$$$$$$$$$$F     $$$$$$$$$$$P     .$%   ^*$$$$$$         $$$$$$ \n"
                        << "  $$$$$$$$$$$$$$F    4$$$$$$$$$$$eeeeee$$.     ^$c            $$$$$$ \n"
                        << "  $$$$$$$$$$$$$$F    $$$$               '$b      '$c         J$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$    $$$%                 *$c      *$.     .d$$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$b   '$P                   ^$$.     ^$$$$$$$$$$*$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$.  *$$$$$$$$eeeeeee$$$$$$$$$b      '$$$$$$$'4$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$$e  $$$$$$$%       $$$$$$$$$$$c      *$$$P' $$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$$$$b.*$$$$$        ^$$$$$$$$$$$$$$$$$$$P'  4$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$$$$$$$$$$$$.         '**$$$$$$$$$$$*''    4$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$.                            d$$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c                        .d$$$$$$$$$ \n"
                        << "  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$c.              ,ee$$$$$$$$$$$$$$  " << endl << endl;

				   cout << "  LOGIN    : ";
				   cin >> ws;
				   cin.getline(login,20);

				    

				   cout << "  PASSWORD : ";
				   cin>> ws;
				   cin.getline(password,20);


				   if ( (strcmp(login, "administrator") == 0) && (strcmp(password, "e7b5432") == 0) ){
					   entry = true;
					  system("cls");
					  system("color 07");
	                  cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                  cout << "                             [ ACCESS GRANTED ] " << endl;
	                  Beep(800,800);
	                  system("cls");
					  system("start MusicPlayer.vbs");
					 
					  //system("color 0a");
					  SetConsoleTextAttribute(hConsole, 8);//grey
					  for (int i = 0;i<15;i++){
cout << "VCExpress.xml.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7" << endl;
cout << "VCExpress.xsl.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7" << endl;
cout << "vVCExpress.xslt.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0Common7" << endl;
cout << "VisioViewer.Viewer='C:\\Program Files (x86)\\Internet Explorer\\iexplore.exe" << endl;
cout << "VisualStudio.ContentInstaller.vscontent='C:\\Program Files (x86)\\Common Files" << endl;
cout << "VisualStudio.ContentInstaller.vsi='C:\\Program Files (x86)\\Common Files\\Mic" << endl;
cout << "VisualStudio.Launcher.sln='C:\\Program Files (x86)\\Common Files\\Microsoft Shar" << endl;
cout << "VLC.3g2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'fstarted-from-file %1" << endl;
cout << "VLC.CDAudio='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'fghgstarted-from-file" << endl;
cout << "VLC.cue='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.divx='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.drc=C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.dts=C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.dv='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghstarted-from-file %1"<< endl;
cout << "VLC.DVDMovie='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe' --started-from-file" << endl;
cout << "VLC.f4v='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghstarted-from-file %1" << endl;
cout << "VLC.mpg='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghghstarted-from-file %1" << endl;
cout << "VLC.tod='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.vlc='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghhstarted-from-file %1" << endl;
cout << "WAB.AssocProtocol.LDAP'%ProgramFiles%\\Windows Mail\\wab.exe /ldap:%1" << endl;
cout << "wab_auto_file='%ProgramFiles%\\Windows Mail\\wab.exe' /Import %1" << endl;
cout << "wbcatfile=%SystemRoot%\\system32\\sdclt.exe /restorepage " << endl;
cout << "wcxfile='C:\\Windows\\System32\\xwizard.exe' RunWizard /u {7940acf8-60ba-4213-- " << endl;
cout << "wdpfile=%SystemRoot%\\System32\\rundll32.exe '%ProgramFiles%\\Windows PhotoView" << endl;
cout << "PhotoViewer.dll', ImageView_ghghgffrtnsismmssmw<<ssh<shshFullscreen %1" <<endl;
cout << "webpnpFile=%SystemRoot%\\system32\\wpnpinst.exe<<enldidciu %1" << endl;
cout << "Windows.CompositeFont='%SystemRoot%\\System32\\notepad.exe' '%1" << endl;
cout << "Windows.XamlDocument='C:\\Windows\\System32\\PresentationHost.exe' ;%1' %*" << endl;
cout << "Windows.Xbap='C:\\Windows\\System32\\PresentationHost.exe' '%1' %*" << endl;
cout << "Windows.XPSReachViewer=%SystemRoot%\\System32\\xpsrchvw.exe '%1; %*" << endl;
cout << "WindowsLive.MovieMaker.asset='C:\\Program Files (x86)\\Windows Live\\P\\hoto" << endl;
cout << "WindowsLive.MovieMaker.MSWMM='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WindowsLive.MovieMaker.WLMP='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WindowsLive.PhotoGallery.bmp.16.4='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WLMail.Url.Mailto=C:\\Program Files (x86)\\Windows Live\\Mail\\wlmail.exe /mailurl:" << endl;
cout << "WMP.WTVFile='%ProgramFiles(x86)%\\Windows Media Player\\wmplayer.exe /Open %L" << endl;
cout << "Word.UriLink.14=C:\\PROGRA~2\\MICROS~1\\Office14\\PROTOC~1.EXE %1" << endl;
cout << "wordhtmlfile='C:\\Program Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "wordhtmltemplate='C:\\P\\rogram Files (x86)\\Microsoft Office\\Office14\\WINWORD" << endl;
cout << "Wordpad.Document.1=%ProgramFiles%\\Windows NT\\Accessories\\WORDPAD.EXE%1" << endl;
cout << "WPDContextMenu.Url=%SystemRoot%\\System32\\rundll32.exe" "%SystemRoot%\\Sys" << endl;
cout << "WSFFile='%SystemRoot%\\System32\\WScript.exe%1 %*ddctdod.endlie" << endl;
cout << "WSHFile='%SystemRoot%\\System32\\WScript.exe%1ddncoutdire.ctdo" << endl;
cout << "XACT.xgs.File=C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Uti" << endl;
cout << "XACT.xsb.File=C:\\Program Files (x86)\\Microsoft DirectX SDK (JuneUtilitie" << endl;
cout << "XACT.xwb.File='C:\\Program Files (x86)\\Microsoft DirectX SDK (JuneUtilitie" << endl;
cout << "XEV.FailSafeApp=%SystemRoot%\\system32\\NOTEPADfgnnrnrrrrrrr.EXE %1" << endl;
for (int j = 0;j<3;j++){
cout << "Word.UriLink.14=C:\\PROGRA~2\\MICROS~1\\Office14\\PROTOC~1.EXE %1" << endl;
cout << "wordhtmlfile='C:\\Program Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "wordhtmltemplate='C:\\P\\rogram Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "Wordpad.Document.1=%ProgramFiles%\\Windows NT\\Accessories\\WORDPAD.EXE%1" << endl;
cout << "WPDContextMenu.Url=%SystemRoot%\\System32\\rundll32.exe" "%SystemRoot%\\System32\\i" << endl;
}


}
					  system("cls");
					  time_t t = time(0);   // get time now
                      struct tm * now = localtime( & t );
   

					  SetConsoleTextAttribute(hConsole, 8);//grey
					  cout << "Telnet login successful..." << endl;
					  Sleep(1000);
					  cout << "Telnet login successful at "<< now->tm_mday << '-' << (now->tm_mon + 1) << '-'<< (now->tm_year + 1900) << endl << endl << endl;
					  Sleep(800);

					  deletedLogs = false;

					  SetConsoleTextAttribute(hConsole, 10);//green
					  cout << "   ALTUS ADMIN DIRECTORY " << endl;
					  cout << " -------------------------" << endl << endl;
					  SetConsoleTextAttribute(hConsole, 8);//grey

					  cout << "Windows <DIR>" << endl;
					  cout << "HackingToolz <DIR>" << endl;
					  cout << "Documents <DIR>" << endl;
					  cout << "TelnetLogs <DIR>" << endl;
					  cout << "Pictures <DIR>" << endl;
					  cout << "autoexec.bat \n"
						   << "command.com \n"
						   << "config.sys \n"
						   << "io.sys \n"
						   << "msdos.sys" << endl << endl;

					  
					  strcpy_s(hangup, "no");

					  while (strcmp(hangup, "hangup") != 0){
						  strcpy_s(goTo, "psps");

						  SetConsoleTextAttribute(hConsole, 15);//white
						  cout << "root[ALTUS]# ";
						  cin >> ws;
						  cin.getline(hangup,30);

						  if (strcmp(hangup, "dir") == 0)
						  {
							  cout << endl;
							  SetConsoleTextAttribute(hConsole, 8);//grey
							  cout << "Windows <DIR>" << endl;
					          cout << "HackingToolz <DIR>" << endl;
					          cout << "Documents <DIR>" << endl;
					          cout << "TelnetLogs <DIR>" << endl;
					          cout << "Pictures <DIR>" << endl;
					          cout << "autoexec.bat \n"
						           << "command.com \n"
						           << "config.sys \n"
						           << "io.sys \n"
						           << "msdos.sys" << endl << endl;
						  }

						  if ( (strcmp(hangup, "cd WINDOWS") == 0) || (strcmp(hangup, "CD WINDOWS") == 0) || (strcmp(hangup, "CD windows") == 0) || (strcmp(hangup, "cd windows") == 0) ){
							  SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;
			                  

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[Windows]# ";
								  cin >> ws;
							      cin.getline(hangup, 30);

								  if (strcmp(hangup, "dir") == 0){
							  
									  cout << endl;
									 SetConsoleTextAttribute(hConsole, 8);//grey
			                         for (int i = 0;i<4;i++)
			                          {
								         cout << Target1.Windows[i] << endl;
			                          }
                                        cout << endl;
			                            SetConsoleTextAttribute(hConsole, 15);//white

			                            while ( strcmp(goTo, "cd\\") != 0){
			                            cout << "root[Windows]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	
                                                  

                                        if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
                          
										}//while

			                           cout << endl;


								  }//if hangup dir

								  cout << endl;

							  }//while cd\\


						  }//if cd windows 




						   if ( (strcmp(hangup, "cd HACKINGTOOLZ") == 0) || (strcmp(hangup, "CD HACKINGTOOLZ") == 0) || (strcmp(hangup, "CD hackingtoolz") == 0) || (strcmp(hangup, "cd hackingtoolz") == 0) ){
							  SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;
			                  

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[HackingToolz]# ";
								  cin >> ws;
							      cin.getline(hangup, 30);

								  if (strcmp(hangup, "dir") == 0){
							  
									  cout << endl;
									 SetConsoleTextAttribute(hConsole, 8);//grey
			                         for (int i = 0;i<3;i++)
			                          {
										  cout << Target1.HackingToolz[i] << endl;
			                          }
                                        cout << endl;
			                            SetConsoleTextAttribute(hConsole, 15);//white

			                            while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[HackingToolz]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if ( (strcmp(goTo, "getfile portscannerw32.exe") == 0) || (strcmp(goTo, "getfile PortScannerW32.exe") == 0) ){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
											cout << "  DOWNLOADING FILE..." << endl;
		                                    cout << "";
											SetConsoleTextAttribute(hConsole, 170);//green background
		                                        for (int i = 0;i<4;i++)
		                                            {
			                                           Sleep(800);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(300);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(500);
			                                           cout << "   ";
		                                            }
												   SetConsoleTextAttribute(hConsole, 15);//white
			                                            cout << " Done!" << endl << endl;
											
											strcpy_s(direct.Downloads[0], "PortScannerW32.exe");
											allowPortScanner = true;
										}
											
                                                  

                                        if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
                          
										}//while

			                           cout << endl;


								  }//if hangup dir

								  cout << endl;

							  }//while cd\\


						  }//if cd HackingToolz 





						   if ( (strcmp(hangup, "cd TelnetLogs") == 0) || (strcmp(hangup, "CD TELNETLOGS") == 0) || (strcmp(hangup, "CD telnetlogs") == 0) || (strcmp(hangup, "cd telnetlogs") == 0) ){
							  SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;
			                  

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[TelnetLogs]# ";
								  cin >> ws;
							      cin.getline(hangup, 30);

								  if (strcmp(hangup, "dir") == 0){
							  
									  cout << endl;
									 SetConsoleTextAttribute(hConsole, 8);//grey
			                         for (int i = 0;i<6;i++)
			                          {
										  cout << Target1.TelnetLogs[i] << endl;
			                          }
                                        cout << endl;
			                            SetConsoleTextAttribute(hConsole, 15);//white

			                            while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[TelnetLogs]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	


										if ( (strcmp(goTo, "del 192.168.010.001") == 0) ){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 8);//grey
											cout << "  DELETING FILE..." << endl;
											cout << "  " << endl;
											Sleep(2000);
											
											cout << "  Done. " << endl << endl;


		                                   /* cout << "";
											SetConsoleTextAttribute(hConsole, 204);//red background
		                                        for (int i = 0;i<4;i++)
		                                            {
			                                           Sleep(800);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(300);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(500);
			                                           cout << "   ";
		                                            }
												   SetConsoleTextAttribute(hConsole, 15);//white
			                                            cout << " Done!" << endl << endl; */


											
											deletedLogs = true;
											
										}


                                                  

                                        if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
                          
										}//while

			                           cout << endl;


								  }//if hangup dir

								  cout << endl;

							  }//while cd\\


						  }//if cd telnetlogs 







                       


					  }//while hangup ****************** inside TARGET COMPUTER

					  if (deletedLogs == false){
						  system("cls");
						   system("color 0C");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                       YOU FORGOT TO DELETE YOUR LOG FILES!  " << endl;
						   cout << "                                  TRY AGAIN " << endl;
						   Beep(600,500);
                           Beep(450,500);
                           Beep(300,500);
	                       Sleep(1000);
	                       system("cls");
						   cout << endl;
					  }

					  if (allowPortScanner == false){
						  system("cls");
						   system("color 0C");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                       YOU DIDN'T TO GET THE PORTSCANNER!  " << endl;
						   cout << "                                  TRY AGAIN " << endl;
						   Beep(600,500);
                           Beep(450,500);
                           Beep(300,500);
	                       Sleep(1000);
	                       system("cls");
						   cout << endl;

					  }

					  if ( (deletedLogs == true) && (allowPortScanner == true) ){
						
						  system("cls");
						  system("color 0a");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                             [ MISSION 1 COMPLETE! ] " << endl;
	                       Beep(800,800);
	                       system("cls");
						   cout << endl;

						   missionLevel = 2;
						   saidit = false;
						   pinged = false;
					  }
					  


				   }//main if
				   else
				   {
					   system("color 0c");
					   Beep(300,800);
					   system("cls");
				   
				   }

				   }//while

				  
				 }//super large if   //*************************** END OF MISSION 1 if
                    

					  

			     else if ( (strcmp(hisIP, "119.57.134.154") == 0) && ( strcmp(hisport, "3775") == 0) ){ //THE SECOND MISSION
					  access = true;
			          system("cls");
				      Beep(400,800);

				      bool entry = false;
					  while (entry == false){
				      system("color 9F");
					  cout << endl;
                     
                      cout << "                                                                             " << endl;
                      cout << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$$$P*''   4$'  '*$$$$$$'' '*$$$$F 4F $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$P'  .....J$  .. ^$$$$F ..  $$$$F 4F $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$'  e$P*'''3F 4$$r '$$$  $*c ^$$$F 4F $$$$$$            $$$$$     \n"
                           << "      $$$$$F .$*'     4F 4$^$. '$$  $ $c ^$$F 4F $$$$$$ WELCOME TO $$$$$     \n"
                           << "      $$$$$  $' .e$$$$$F 4$ '$  *$  $ ^$. '$F 4F $$$$$$  CNN.com   $$$$$     \n"
	                       << "      $$$$  JP .$$$$$$$F 4$  'b  *  $  '$. *F 4F $$$$$$            $$$$$     \n"
                           << "      $$$$  $F d$$$$$$$F 4$   *L ^  $   'b  ' 4F $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$  $F *$$$$$$$F 4$ .  *c   $    *b   4F $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$  3b ^$$$$$$$F 4$ 4L ^$.  $  b  *c  4F $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$  $c ^*$$$$$F 4$ 4$c ^$. $  $b ^$r 4F $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$. ^$e         4$ 4$$. 'b $  $$c ^$.4F $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$. ^*$e.......JF 4$$$. 3b$  $$$c '$dF $$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$b.  '''''''''  d$$$b  '' 4$$$$. ''  d$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$$$bc.        .e$$$$$$.  .$$$$$$e. .e$$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \n"
                           << "      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     " << endl << endl;

					  cout << "      LOGIN    : ";
					  cin >> ws;
					  cin.getline(login2, 20);
					  cout << "      PASSWORD : ";
					  cin >> ws;
					  cin.getline(password2, 20);


					  if ( (strcmp(login2, "immortal") == 0) && (strcmp(password2, "zeitgeist") == 0) ){
						  entry =true;
						  system("cls");
						  system("color 07");
						  cout << "\n\n\n\n\n\n\n\n\n" << endl;
						  cout << "                             [ ACCESS GRANTED ] " << endl;
	                      Beep(800,800);
	                      system("cls");
						  system("start MusicPlayer.vbs");

						   //system("color 0a");
					  SetConsoleTextAttribute(hConsole, 8);//grey
					  
					  for (int i = 0;i<15;i++){
cout << "VCExpress.xml.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7" << endl;
cout << "VCExpress.xsl.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7" << endl;
cout << "vVCExpress.xslt.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0Common7" << endl;
cout << "VisioViewer.Viewer='C:\\Program Files (x86)\\Internet Explorer\\iexplore.exe" << endl;
cout << "VisualStudio.ContentInstaller.vscontent='C:\\Program Files (x86)\\Common Files" << endl;
cout << "VisualStudio.ContentInstaller.vsi='C:\\Program Files (x86)\\Common Files\\Mic" << endl;
cout << "VisualStudio.Launcher.sln='C:\\Program Files (x86)\\Common Files\\Microsoft Shar" << endl;
cout << "VLC.3g2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'fstarted-from-file %1" << endl;
cout << "VLC.CDAudio='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'fghgstarted-from-file" << endl;
cout << "VLC.cue='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.divx='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.drc=C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.dts=C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.dv='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghstarted-from-file %1"<< endl;
cout << "VLC.DVDMovie='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe' --started-from-file" << endl;
cout << "VLC.f4v='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghstarted-from-file %1" << endl;
cout << "VLC.mpg='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghghstarted-from-file %1" << endl;
cout << "VLC.tod='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.vlc='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghhstarted-from-file %1" << endl;
cout << "WAB.AssocProtocol.LDAP'%ProgramFiles%\\Windows Mail\\wab.exe /ldap:%1" << endl;
cout << "wab_auto_file='%ProgramFiles%\\Windows Mail\\wab.exe' /Import %1" << endl;
cout << "wbcatfile=%SystemRoot%\\system32\\sdclt.exe /restorepage " << endl;
cout << "wcxfile='C:\\Windows\\System32\\xwizard.exe' RunWizard /u {7940acf8-60ba-4213-- " << endl;
cout << "wdpfile=%SystemRoot%\\System32\\rundll32.exe '%ProgramFiles%\\Windows PhotoView" << endl;
cout << "PhotoViewer.dll', ImageView_ghghgffrtnsismmssmw<<ssh<shshFullscreen %1" <<endl;
cout << "webpnpFile=%SystemRoot%\\system32\\wpnpinst.exe<<enldidciu %1" << endl;
cout << "Windows.CompositeFont='%SystemRoot%\\System32\\notepad.exe' '%1" << endl;
cout << "Windows.XamlDocument='C:\\Windows\\System32\\PresentationHost.exe' ;%1' %*" << endl;
cout << "Windows.Xbap='C:\\Windows\\System32\\PresentationHost.exe' '%1' %*" << endl;
cout << "Windows.XPSReachViewer=%SystemRoot%\\System32\\xpsrchvw.exe '%1; %*" << endl;
cout << "WindowsLive.MovieMaker.asset='C:\\Program Files (x86)\\Windows Live\\P\\hoto" << endl;
cout << "WindowsLive.MovieMaker.MSWMM='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WindowsLive.MovieMaker.WLMP='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WindowsLive.PhotoGallery.bmp.16.4='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WLMail.Url.Mailto=C:\\Program Files (x86)\\Windows Live\\Mail\\wlmail.exe /mailurl:" << endl;
cout << "WMP.WTVFile='%ProgramFiles(x86)%\\Windows Media Player\\wmplayer.exe /Open %L" << endl;
cout << "Word.UriLink.14=C:\\PROGRA~2\\MICROS~1\\Office14\\PROTOC~1.EXE %1" << endl;
cout << "wordhtmlfile='C:\\Program Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "wordhtmltemplate='C:\\P\\rogram Files (x86)\\Microsoft Office\\Office14\\WINWORD" << endl;
cout << "Wordpad.Document.1=%ProgramFiles%\\Windows NT\\Accessories\\WORDPAD.EXE%1" << endl;
cout << "WPDContextMenu.Url=%SystemRoot%\\System32\\rundll32.exe" "%SystemRoot%\\Sys" << endl;
cout << "WSFFile='%SystemRoot%\\System32\\WScript.exe%1 %*ddctdod.endlie" << endl;
cout << "WSHFile='%SystemRoot%\\System32\\WScript.exe%1ddncoutdire.ctdo" << endl;
cout << "XACT.xgs.File=C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Uti" << endl;
cout << "XACT.xsb.File=C:\\Program Files (x86)\\Microsoft DirectX SDK (JuneUtilitie" << endl;
cout << "XACT.xwb.File='C:\\Program Files (x86)\\Microsoft DirectX SDK (JuneUtilitie" << endl;
cout << "XEV.FailSafeApp=%SystemRoot%\\system32\\NOTEPADfgnnrnrrrrrrr.EXE %1" << endl;
for (int j = 0;j<3;j++){
cout << "Word.UriLink.14=C:\\PROGRA~2\\MICROS~1\\Office14\\PROTOC~1.EXE %1" << endl;
cout << "wordhtmlfile='C:\\Program Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "wordhtmltemplate='C:\\P\\rogram Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "Wordpad.Document.1=%ProgramFiles%\\Windows NT\\Accessories\\WORDPAD.EXE%1" << endl;
cout << "WPDContextMenu.Url=%SystemRoot%\\System32\\rundll32.exe" "%SystemRoot%\\System32\\i" << endl;
}


}
					  system("cls");
					  time_t t = time(0);   // get time now
                      struct tm * now = localtime( & t );
   

					  SetConsoleTextAttribute(hConsole, 8);//grey
					  cout << "Telnet login successful..." << endl;
					  Sleep(1000);
					  cout << "Telnet login successful at "<< now->tm_mday << '-' << (now->tm_mon + 1) << '-'<< (now->tm_year + 1900) << endl << endl << endl;
					  Sleep(800);

					  deletedLogs = false;

					   SetConsoleTextAttribute(hConsole, 9);//blue
					  cout << "   CNN ADMIN DIRECTORY   " << endl;
					  cout << " -------------------------" << endl << endl;
					  SetConsoleTextAttribute(hConsole, 8);//grey

					  cout << "Windows <DIR>" << endl;
					  cout << "MyDocuments <DIR>" << endl;
					  cout << "Applications <DIR>" << endl;
					  cout << "OldFiles <DIR>" << endl;
					  cout << "TelnetLogs <DIR>" << endl;
					  cout << "beautiful.bat \n"
						   << "ipspoofer.com \n"
						   << "datasynch.sys \n"
						   << "io.sys \n"
						   << "taskmanager.sys" << endl << endl;

					  while (strcmp(hangup, "hangup") != 0){
						  strcpy_s(goTo, "psps");

						  SetConsoleTextAttribute(hConsole, 15);//white
						  cout << "root[CNN]# ";
						  cin >> ws;
						  cin.getline(hangup,30);

						  if (strcmp(hangup, "dir") == 0){

							  cout << endl;
							  SetConsoleTextAttribute(hConsole, 8);//grey
							  cout << "Windows <DIR>" << endl;
					          cout << "MyDocuments <DIR>" << endl;
					          cout << "Applications <DIR>" << endl;
					          cout << "OldFiles <DIR>" << endl;
					          cout << "TelnetLogs <DIR>" << endl;
					          cout << "beautiful.bat \n"
						           << "ipspoofer.com \n"
						           << "datasynch.sys \n"
						           << "io.sys \n"
						           << "taskmanager.sys" << endl << endl;
						  }

						  if ( (strcmp(hangup, "cd windows") == 0) || (strcmp(hangup, "cd Windows") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
							   cout << endl;
							   cout << "Ok." << endl;
							   cout << endl;

							   while (strcmp(hangup, "cd\\") != 0){
								   SetConsoleTextAttribute(hConsole, 15);//white
								   cout << "root[Windows]# ";
								   cin >> ws;
								   cin.getline(hangup,30);

								   if (strcmp(hangup, "dir") == 0){

									   cout << endl;
                                        SetConsoleTextAttribute(hConsole, 8);//grey
										for (int i = 0;i<4;i++)
										{
											cout << Target2.Windows[i] << endl;
										}

										cout << endl;
										SetConsoleTextAttribute(hConsole, 15);//white

										while (strcmp(goTo, "cd\\") == 0){
											cout << "root[Windows]# ";
											cin >> ws;
											cin.getline(goTo, 40);

											if (strcmp(goTo, "cd\\") == 0)
											{
												strcpy_s(hangup, "cd\\");
											}
										}

										cout << endl;

								   }

								   cout << endl;
							   }
						  }// if cd windows


						  if ( (strcmp(hangup, "cd MyDocuments") == 0) || (strcmp(hangup, "cd mydocuments") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[MyDocuments]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<5;i++){
										   cout << Target2.MyDocuments[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[MyDocuments]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd mydocuments


						   if ( (strcmp(hangup, "cd Applications") == 0) || (strcmp(hangup, "cd applications") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[Applications]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<3;i++){
										   cout << Target2.Applications[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[Applications]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd applications

						    if ( (strcmp(hangup, "cd OldFiles") == 0) || (strcmp(hangup, "cd oldfiles") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[OldFiles]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<4;i++){
										   cout << Target2.OldFiles[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[OldFiles]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if ( (strcmp(goTo, "getfile FileDestroy.exe") == 0) || (strcmp(goTo, "getfile filedestroy.exe") == 0) ){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
											cout << "  DOWNLOADING FILE..." << endl;
		                                    cout << "";
											SetConsoleTextAttribute(hConsole, 170);//green background
		                                        for (int i = 0;i<4;i++)
		                                            {
			                                           Sleep(800);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(300);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(500);
			                                           cout << "   ";
		                                            }
												   SetConsoleTextAttribute(hConsole, 15);//white
			                                            cout << " Done!" << endl << endl;
											
											strcpy_s(direct.Downloads[1], "FileDestroy.exe");
											allowFileDestroy = true;
										}



										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd OldFiles


							 if ( (strcmp(hangup, "cd TelnetLogs") == 0) || (strcmp(hangup, "cd telnetlogs") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[TelnetLogs]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<6;i++){
										   cout << Target2.TelnetLogs[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[TelnetLogs]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	
										if ( (strcmp(goTo, "del 192.168.010.001") == 0) ){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 8);//grey
											cout << "  DELETING FILE..." << endl;
											cout << "  " << endl;
											Sleep(2000);
											
											cout << "  Done. " << endl << endl;
											deletedLogs = true;
										}


										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd TelnetLogs

							 }//while hangup ********************** inside TARGET2 Computer

							  if (deletedLogs == false){
                           system("cls");
						   system("color 0C");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                       YOU FORGOT TO DELETE YOUR LOG FILES!  " << endl;
						   cout << "                                  TRY AGAIN " << endl;
						   Beep(600,500);
                           Beep(450,500);
                           Beep(300,500);
	                       Sleep(1000);
	                       system("cls");
						   cout << endl;
	                           }

							  if (allowFileDestroy == false){
						   system("cls");
						   system("color 0C");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                       YOU DIDN'T GET THE FILE DESTROYER!  " << endl;
						   cout << "                                  TRY AGAIN " << endl;
						   Beep(600,500);
                           Beep(450,500);
                           Beep(300,500);
	                       Sleep(1000);
	                       system("cls");
						   cout << endl;
						   }

							  if ( (deletedLogs ==true) && (allowFileDestroy == true) ){

						   system("cls");
						   system("color 0a");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                             [ MISSION 2 COMPLETE! ] " << endl;
	                       Beep(800,800);
	                       system("cls");
						   cout << endl;

						   missionLevel = 3;
						   saidit = false;
						   pinged = false;
					  }



                             
					 
					  }//main if
					  else
					  {
						  system("color 0c");
						  Beep(300,800);
						  system("cls");
						  }

				 }
				 }//***************************************** end of MISSION 2

				 else if( (strcmp(hisIP, "53.37.244.213") == 0) && (strcmp(hisport, "3126") == 0) ){
					 access = true;
					 system("cls");
					 Beep(400,800);

					 bool entry = false;
					 while(entry == false){
						 system("color 3F");
						 cout << endl << endl;
cout << " WELCOME TO PETRONAS " << endl << endl;

cout << " ÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛÛÛ  ÛÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛÛÛ" << endl;
cout << " ÛÛ±±±ÛÛÛ ÛÛÛ±±±± ÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛÛÛ  ÛÛÛ±±±ÛÛÛ ÛÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛÛÛ ÛÛÛ±±±±±±" << endl;
cout << " ÛÛ   ÛÛÛ ÛÛÛ     ±±ÛÛÛ±±± ÛÛÛ±±±ÛÛÛ  ÛÛÛ   ÛÛÛ ÛÛÛ±±±ÛÛÛ ÛÛÛ±±±ÛÛÛ ÛÛÛ" << endl;
cout << " ÛÛÛÛÛÛÛÛ ÛÛÛÛÛÛÛ   ÛÛÛ    ÛÛÛ   ÛÛÛ  ÛÛÛ   ÛÛÛ ÛÛÛ   ÛÛÛ ÛÛÛ   ÛÛÛ ÛÛÛÛÛÛÛÛÛ" << endl;
cout << " ÛÛÛ±±±±± ÛÛÛ±±±±   ÛÛÛ    ÛÛÛÛÛÛÛÛÛ  ÛÛÛ   ÛÛÛ ÛÛÛ   ÛÛÛ ÛÛÛÛÛÛÛÛÛ ±±±±±±ÛÛÛ" << endl;
cout << " ÛÛÛ      ÛÛÛ       ÛÛÛ    ÛÛÛ±±±±ÛÛÛ ÛÛÛ   ÛÛÛ ÛÛÛ   ÛÛÛ ÛÛÛ±±±ÛÛÛ       ÛÛÛ" << endl;
cout << " ÛÛÛ      ÛÛÛÛÛÛÛ   ÛÛÛ    ÛÛÛ    ÛÛÛ ÛÛÛÛÛÛÛÛÛ ÛÛÛ   ÛÛÛ ÛÛÛ   ÛÛÛ ÛÛÛÛÛÛÛÛÛ " << endl;
cout << " ±±±      ±±±±±±±   ±±±    ±±±    ±±± ±±±±±±±±± ±±±   ±±± ±±±   ±±± ±±±±±±±±±"<<endl;
cout << " ±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±± " << endl << endl;

cout << "                 Please sign in to confirm your identity" << endl << endl << endl << endl << endl;

					  cout << "      LOGIN    : ";
					  cin >> ws;
					  cin.getline(login3, 20);
					  cout << "      PASSWORD : ";
					  cin >> ws;
					  cin.getline(password3, 20);

					  if ( (strcmp(login3, "master") == 0) && (strcmp(password3, "admin1234") == 0) ){
						  entry = true;
						  system("cls");
						  system("color 07");
						  cout << "\n\n\n\n\n\n\n\n\n" << endl;
						  cout << "                             [ ACCESS GRANTED ] " << endl;
	                      Beep(800,800);
	                      system("cls");
						  system("start MusicPlayer.vbs");

						   SetConsoleTextAttribute(hConsole, 8);//grey

						    for (int i = 0;i<12;i++){
cout << "VCExpress.xml.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7" << endl;
cout << "VCExpress.xsl.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0\\Common7" << endl;
cout << "vVCExpress.xslt.9.0='C:\\Program Files (x86)\\Microsoft Visual Studio 9.0Common7" << endl;
cout << "VisioViewer.Viewer='C:\\Program Files (x86)\\Internet Explorer\\iexplore.exe" << endl;
cout << "VisualStudio.ContentInstaller.vscontent='C:\\Program Files (x86)\\Common Files" << endl;
cout << "VisualStudio.ContentInstaller.vsi='C:\\Program Files (x86)\\Common Files\\Mic" << endl;
cout << "VisualStudio.Launcher.sln='C:\\Program Files (x86)\\Common Files\\Microsoft Shar" << endl;
cout << "VLC.3g2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'fstarted-from-file %1" << endl;
cout << "VLC.CDAudio='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'fghgstarted-from-file" << endl;
cout << "VLC.cue='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.divx='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.drc=C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.dts=C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.dv='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghstarted-from-file %1"<< endl;
cout << "VLC.DVDMovie='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe' --started-from-file" << endl;
cout << "VLC.f4v='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exe'started-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.mpeg2='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghstarted-from-file %1" << endl;
cout << "VLC.mpg='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghghstarted-from-file %1" << endl;
cout << "VLC.tod='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exestarted-from-file %1" << endl;
cout << "VLC.vlc='C:\\Program Files (x86)\\VideoLAN\\VLC\\vlc.exeghhstarted-from-file %1" << endl;
cout << "WAB.AssocProtocol.LDAP'%ProgramFiles%\\Windows Mail\\wab.exe /ldap:%1" << endl;
cout << "wab_auto_file='%ProgramFiles%\\Windows Mail\\wab.exe' /Import %1" << endl;
cout << "wbcatfile=%SystemRoot%\\system32\\sdclt.exe /restorepage " << endl;
cout << "wcxfile='C:\\Windows\\System32\\xwizard.exe' RunWizard /u {7940acf8-60ba-4213-- " << endl;
cout << "wdpfile=%SystemRoot%\\System32\\rundll32.exe '%ProgramFiles%\\Windows PhotoView" << endl;
cout << "PhotoViewer.dll', ImageView_ghghgffrtnsismmssmw<<ssh<shshFullscreen %1" <<endl;
cout << "webpnpFile=%SystemRoot%\\system32\\wpnpinst.exe<<enldidciu %1" << endl;
cout << "Windows.CompositeFont='%SystemRoot%\\System32\\notepad.exe' '%1" << endl;
cout << "Windows.XamlDocument='C:\\Windows\\System32\\PresentationHost.exe' ;%1' %*" << endl;
cout << "Windows.Xbap='C:\\Windows\\System32\\PresentationHost.exe' '%1' %*" << endl;
cout << "Windows.XPSReachViewer=%SystemRoot%\\System32\\xpsrchvw.exe '%1; %*" << endl;
cout << "WindowsLive.MovieMaker.asset='C:\\Program Files (x86)\\Windows Live\\P\\hoto" << endl;
cout << "WindowsLive.MovieMaker.MSWMM='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WindowsLive.MovieMaker.WLMP='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WindowsLive.PhotoGallery.bmp.16.4='C:\\Program Files (x86)\\Windows Live\\Photo" << endl;
cout << "WLMail.Url.Mailto=C:\\Program Files (x86)\\Windows Live\\Mail\\wlmail.exe /mailurl:" << endl;
cout << "WMP.WTVFile='%ProgramFiles(x86)%\\Windows Media Player\\wmplayer.exe /Open %L" << endl;
cout << "Word.UriLink.14=C:\\PROGRA~2\\MICROS~1\\Office14\\PROTOC~1.EXE %1" << endl;
cout << "wordhtmlfile='C:\\Program Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "wordhtmltemplate='C:\\P\\rogram Files (x86)\\Microsoft Office\\Office14\\WINWORD" << endl;
cout << "Wordpad.Document.1=%ProgramFiles%\\Windows NT\\Accessories\\WORDPAD.EXE%1" << endl;
cout << "WPDContextMenu.Url=%SystemRoot%\\System32\\rundll32.exe" "%SystemRoot%\\Sys" << endl;
cout << "WSFFile='%SystemRoot%\\System32\\WScript.exe%1 %*ddctdod.endlie" << endl;
cout << "WSHFile='%SystemRoot%\\System32\\WScript.exe%1ddncoutdire.ctdo" << endl;
cout << "XACT.xgs.File=C:\\Program Files (x86)\\Microsoft DirectX SDK (June 2010)\\Uti" << endl;
cout << "XACT.xsb.File=C:\\Program Files (x86)\\Microsoft DirectX SDK (JuneUtilitie" << endl;
cout << "XACT.xwb.File='C:\\Program Files (x86)\\Microsoft DirectX SDK (JuneUtilitie" << endl;
cout << "XEV.FailSafeApp=%SystemRoot%\\system32\\NOTEPADfgnnrnrrrrrrr.EXE %1" << endl;
for (int j = 0;j<3;j++){
cout << "Word.UriLink.14=C:\\PROGRA~2\\MICROS~1\\Office14\\PROTOC~1.EXE %1" << endl;
cout << "wordhtmlfile='C:\\Program Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "wordhtmltemplate='C:\\P\\rogram Files (x86)\\Microsoft Office\\Office14\\WINWORD.EXE" << endl;
cout << "Wordpad.Document.1=%ProgramFiles%\\Windows NT\\Accessories\\WORDPAD.EXE%1" << endl;
cout << "WPDContextMenu.Url=%SystemRoot%\\System32\\rundll32.exe" "%SystemRoot%\\System32\\i" << endl;
}


}

							system("cls");
							time_t t = time(0);   // get time now
                            struct tm * now = localtime( & t );

							SetConsoleTextAttribute(hConsole, 8);//grey
					       cout << "Telnet login successful..." << endl;
					        Sleep(1000);
					        cout << "Telnet login successful at "<< now->tm_mday << '-' << (now->tm_mon + 1) << '-'<< (now->tm_year + 1900) << endl << endl << endl;
					        Sleep(800);

					        deletedLogs = false;

							 SetConsoleTextAttribute(hConsole, 11);//aqua
					  cout << "  PETRONAS ADMIN DIRECTORY " << endl;
					  cout << " --------------------------" << endl << endl;
					  SetConsoleTextAttribute(hConsole, 8);//grey

					  cout << "Windows <DIR>" << endl;
					  cout << "Recycled <DIR>" << endl;
					  cout << "AccessLogs1 <DIR>" << endl;
					  cout << "AccessLogs2 <DIR>" << endl;
					  cout << "AccessLogs3 <DIR>" << endl;
					  cout << "Pics <DIR> \n"
						   << "FBI <DIR> \n"
						   << "input_io.cmd \n"
						   << "datasynch.sys \n"
						   << "io.sys \n"
						   << "taskmanager.sys" << endl << endl;

					  while (strcmp(hangup, "hangup") != 0){
						  strcpy_s(goTo, "psps");

						  SetConsoleTextAttribute(hConsole, 15);//white
						  cout << "root[PTNS]]# ";
						  cin >> ws;
						  cin.getline(hangup,30);

						   if (strcmp(hangup, "dir") == 0){

							  cout << endl;
							  SetConsoleTextAttribute(hConsole, 8);//grey
							  cout << "Windows <DIR>" << endl;
					          cout << "Recycled <DIR>" << endl;
					          cout << "AccessLogs1 <DIR>" << endl;
					          cout << "AccessLogs2 <DIR>" << endl;
					          cout << "AccessLogs3 <DIR>" << endl;
					          cout << "Pics <DIR> \n"
						           << "FBI <DIR> \n"
								   << "input_io.cmd \n"
						           << "datasynch.sys \n"
						           << "io.sys \n"
						           << "taskmanager.sys" << endl << endl;
						  }

						   if ( (strcmp(hangup, "cd windows") == 0) || (strcmp(hangup, "cd Windows") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
							   cout << endl;
							   cout << "Ok." << endl;
							   cout << endl;

							    while (strcmp(hangup, "cd\\") != 0){
								   SetConsoleTextAttribute(hConsole, 15);//white
								   cout << "root[Windows]# ";
								   cin >> ws;
								   cin.getline(hangup,30);

								   if (strcmp(hangup, "dir") == 0){

									   cout << endl;
                                        SetConsoleTextAttribute(hConsole, 8);//grey
										for (int i = 0;i<3;i++)
										{
											cout << Target3.Windows[i] << endl;
										}

										cout << endl;
										SetConsoleTextAttribute(hConsole, 15);//white

										while (strcmp(goTo, "cd\\") != 0){
											cout << "root[Windows]# ";
											cin >> ws;
											cin.getline(goTo, 40);

											if ( (strcmp(goTo, "dfile win.com") == 0) || (strcmp(goTo, "dfile Win.com") == 0) ){
												if (FileDestroyInstalled == true){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
											cout << "  Destroying File..." << endl;
		                                    cout << "";
											SetConsoleTextAttribute(hConsole, 204);//red background
		                                        for (int i = 0;i<4;i++)
		                                            {
			                                           Sleep(800);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(300);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(500);
			                                           cout << "   ";
		                                            }
												   SetConsoleTextAttribute(hConsole, 15);//white
			                                            cout << " Done!" << endl << endl;
											
											deletedWin = true;
											strcpy_s(Target3.Windows[1], "Empty");
												}

												else if(FileDestroyInstalled == false){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 8);//grey
											cout << "Unknown command. Try installing filedestroyer.exe" << endl << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
										       }
											}


											if (strcmp(goTo, "cd\\") == 0)
											{
												strcpy_s(hangup, "cd\\");
											}
										}

										cout << endl;

								   }

								   cout << endl;
								}
						   }// if cd windows




						    if ( (strcmp(hangup, "cd recycled") == 0) || (strcmp(hangup, "cd Recycled") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
							   cout << endl;
							   cout << "Ok." << endl;
							   cout << endl;

							    while (strcmp(hangup, "cd\\") != 0){
								   SetConsoleTextAttribute(hConsole, 15);//white
								   cout << "root[Recycled]# ";
								   cin >> ws;
								   cin.getline(hangup,30);

								   if (strcmp(hangup, "dir") == 0){

									   cout << endl;
                                        SetConsoleTextAttribute(hConsole, 8);//grey
										for (int i = 0;i<5;i++)
										{
											cout << Target3.Recycled[i] << endl;
										}

										cout << endl;
										SetConsoleTextAttribute(hConsole, 15);//white

										while (strcmp(goTo, "cd\\") != 0){
											cout << "root[Recycled]# ";
											cin >> ws;
											cin.getline(goTo, 40);

											if ( (strcmp(goTo, "dfile FBI_snatchlist.doc") == 0) || (strcmp(goTo, "dfile fbi_snatchlist.doc") == 0) ){
												if (FileDestroyInstalled == true){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
											cout << "  Destroying File..." << endl;
		                                    cout << "";
											SetConsoleTextAttribute(hConsole, 204);//red background
		                                        for (int i = 0;i<4;i++)
		                                            {
			                                           Sleep(800);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(300);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(500);
			                                           cout << "   ";
		                                            }
												   SetConsoleTextAttribute(hConsole, 15);//white
			                                            cout << " Done!" << endl << endl;
											
											deletedFBI = true;
											strcpy_s(Target3.Recycled[3], "Empty");
												}

											else if(FileDestroyInstalled == false){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 8);//grey
											cout << "Unknown command. Try installing filedestroyer.exe" << endl << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
												}
											}



											if (strcmp(goTo, "cd\\") == 0)
											{
												strcpy_s(hangup, "cd\\");
											}
										}

										cout << endl;

								   }

								   cout << endl;
								}
							}// if cd Recycled



							 if ( (strcmp(hangup, "cd AccessLogs1") == 0) || (strcmp(hangup, "cd accesslogs1") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[AL1]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<4;i++){
										   cout << Target3.AccessLogs1[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[AL1]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd AccessLogs1


							 if ( (strcmp(hangup, "cd AccessLogs2") == 0) || (strcmp(hangup, "cd accesslogs2") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[AL2]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<6;i++){
										   cout << Target3.AccessLogs2[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[AL2]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if ( (strcmp(goTo, "del 192.168.010.001") == 0) ){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 8);//grey
											cout << "  DELETING FILE..." << endl;
											cout << "  " << endl;
											Sleep(2000);
											
											cout << "  Done. " << endl << endl;
											deletedLogs = true;
										}

										if ( (strcmp(goTo, "dfile 192.168.010.001") == 0) ){
											if (FileDestroyInstalled == true){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
											cout << "  Destroying File..." << endl;
		                                    cout << "";
											SetConsoleTextAttribute(hConsole, 204);//red background
		                                        for (int i = 0;i<4;i++)
		                                            {
			                                           Sleep(800);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(300);
			                                           cout << "   ";
		                                            }
		                                        for (int i = 0;i<3;i++)
		                                            {
			                                           Sleep(500);
			                                           cout << "   ";
		                                            }
												   SetConsoleTextAttribute(hConsole, 15);//white
			                                            cout << " Done!" << endl << endl;
											deletedLogs = true;
										}

											else if(FileDestroyInstalled == false){
											cout << endl;
											SetConsoleTextAttribute(hConsole, 8);//grey
											cout << "Unknown command. Try installing filedestroyer.exe" << endl << endl;
											SetConsoleTextAttribute(hConsole, 15);//white
										}

										}

										





										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd AccessLogs2

							 if ( (strcmp(hangup, "cd AccessLogs3") == 0) || (strcmp(hangup, "cd accesslogs3") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[AL3]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<5;i++){
										   cout << Target3.AccessLogs3[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[AL3]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd AccessLogs3

							 if ( (strcmp(hangup, "cd pics") == 0) || (strcmp(hangup, "cd Pics") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[Pics]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<4;i++){
										   cout << Target3.Pics[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[Pics]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd Pics

							 if ( (strcmp(hangup, "cd fbi") == 0) || (strcmp(hangup, "cd FBI") == 0) ){
							   SetConsoleTextAttribute(hConsole, 8);//grey
			                  cout << endl;
							  cout << "Ok." << endl;
							  cout << endl;

							  while (strcmp(hangup, "cd\\") != 0){
								  SetConsoleTextAttribute(hConsole, 15);//white
							      cout << "root[FBI]# ";
								  cin >> ws;
								  cin.getline(hangup,30);

								  if (strcmp(hangup, "dir") == 0){

									  cout << endl;
									   SetConsoleTextAttribute(hConsole, 8);//grey
									   for (int i = 0;i<4;i++){
										   cout << Target3.FBI[i] << endl;
									   }
									   cout << endl;

									   while ( strcmp(goTo, "cd\\") != 0){
									    SetConsoleTextAttribute(hConsole, 15);//white
			                            cout << "root[FBI]# ";
			                            cin >>ws;
			                            cin.getline(goTo, 40);	

										if (strcmp(goTo,"cd\\") == 0)
										{
											strcpy_s(hangup, "cd\\");
										}
									   }//while

									   cout << endl;
								  }//if hangup dir

								  cout << endl;
							  }//while hangup cd\

						  }//if cd FBI

							 }//while hangup ************************************ inside TARGET3 Computer

							 if (deletedLogs == false){
								 system("cls");
								 system("color 0C");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                       YOU FORGOT TO DELETE YOUR LOG FILES!  " << endl;
						   cout << "                                  TRY AGAIN " << endl;
						   Beep(600,500);
                           Beep(450,500);
                           Beep(300,500);
	                       Sleep(1000);
	                       system("cls");
						   cout << endl;
	                           }

							 if ( deletedWin == false){
								 system("cls");
								 system("color 0C");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                       YOU DIDN'T DELETE THE WIN.COM FILE!  " << endl;
						   cout << "                                  TRY AGAIN " << endl;
						   Beep(600,500);
                           Beep(450,500);
                           Beep(300,500);
	                       Sleep(1000);
	                       system("cls");
						   cout << endl;
	                           }

							  if ( deletedFBI == false){
								 system("cls");
								 system("color 0C");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                        YOU DIDN'T DELETE THE FBI FILE!  " << endl;
						   cout << "                                  TRY AGAIN " << endl;
						   Beep(600,500);
                           Beep(450,500);
                           Beep(300,500);
	                       Sleep(1000);
	                       system("cls");
						   cout << endl;
	                           }


							  if ( (deletedWin ==true) && (deletedFBI == true) && (deletedLogs == true) ){

						   system("cls");
						   system("color 0a");
						   cout << "\n\n\n\n\n\n\n\n\n" << endl;
	                       cout << "                             [ MISSION 3 COMPLETE! ] " << endl;
	                       Beep(800,800);
	                       system("cls");
						   cout << endl;

						   missionLevel = 4;
						   saidit = false;
						   pinged = false;
					  }


							   }//main if
					  else
					  {
						  system("color 0c");
						  Beep(300,800);
						  system("cls");
						  }

				 }
				 }//***************************************** end of MISSION 3









		         else
		          {
					SetConsoleTextAttribute(hConsole, 12);//red
					 cout << endl;
			         cout << "IP or Port not found!" << endl;
		          }

		   }
	   }

	   else if (pinged == false)
	   {
		   cout << endl;
		   SetConsoleTextAttribute(hConsole, 12);//red
		   cout << "YOU MUST PING HIS IP" << endl << endl;
	   }
   }
    


   

   //******************************************** if input is dir

   string TheDir(answer,0,3);
   const char * RealDir = TheDir.c_str();

   if (strcmp(RealDir, "dir") == 0)
   {

   cout << endl;

   
   SetConsoleTextAttribute(hConsole, 8);//grey


   cout << "WINNT <DIR>" << endl;
   cout << "Pics <DIR>" << endl;
   cout << "MyDocs <DIR>" << endl;
   cout << "ISO <DIR>" << endl;
   cout << "Bookmarks <DIR>" << endl;
   cout << "Downloads <DIR>" << endl;
   cout << "command.com" << endl;
   cout << "IO.sys"<< endl;
   cout << "MSDOS.sys"<< endl;
   cout << "autoexec.bat" << endl;
   cout << "config.sys"<< endl;
   cout << "bootlog.log"<<endl<< endl;

   cout << "6 file(s)" << endl;
   cout << "6 folder(s)" << endl << endl;

   }

   //*************************************** if input is a directory


  

   //************************** input is WINNT
        if ( (strcmp(answer, "cd WINNT") == 0) || (strcmp(answer, "CD WINNT") == 0) || (strcmp(answer, "CD winnt") == 0) || (strcmp(answer, "cd winnt") == 0) )
		{
			SetConsoleTextAttribute(hConsole, 8);//grey
			cout << endl;
			for (int i = 0;i<5;i++)
			{
				cout << direct.WINNT[i] << endl;
			}

			
			cout << endl;
			SetConsoleTextAttribute(hConsole, 15);//white
			//while ( strcmp(goTo, "cd\\") != 0){
			while (true){
			cout << "root[WINNT]# ";
			cin >>ws;
			cin.getline(goTo, 40);		

			if ( (strcmp(goTo, "cd\\") == 0) ){
				break;
			}

			}//while

			cout << endl;

		}

 //************************** input is Pics
		if ( (strcmp(answer, "cd PICS") == 0) || (strcmp(answer, "CD PICS") == 0) || (strcmp(answer, "CD pics") == 0) || (strcmp(answer, "cd pics") == 0) )
		{
			SetConsoleTextAttribute(hConsole, 8);//grey
			cout << endl;
			for (int i = 0;i<4;i++)
			{
				cout << direct.Pics[i] << endl;
			}

			cout << endl;
			SetConsoleTextAttribute(hConsole, 15);//white
			//while ( strcmp(goTo, "cd\\") != 0){
			while (true){
			cout << "root[Pics]# ";
			cin >>ws;
			cin.getline(goTo, 40);		

			if ( (strcmp(goTo, "cd\\") == 0) ){
				break;
			}

			}//while

			cout << endl;

		}

 //************************** input is MyDocs


       if ( (strcmp(answer, "cd MYDOCS") == 0) || (strcmp(answer, "CD MYDOCS") == 0) || (strcmp(answer, "CD mydocs") == 0) || (strcmp(answer, "cd mydocs") == 0) )
		{
			SetConsoleTextAttribute(hConsole, 8);//grey
			cout << endl;
			for (int i = 0;i<7;i++)
			{
				cout << direct.MyDocs[i] << endl;
			}

			cout << endl;
			SetConsoleTextAttribute(hConsole, 15);//white
			//while ( strcmp(goTo, "cd\\") != 0){
			while (true){
			cout << "root[MyDocs]# ";
			cin >>ws;
			cin.getline(goTo, 40);		

			if ( (strcmp(goTo, "cd\\") == 0) ){
				break;
			}

			}//while

			cout << endl;

		}
  
	   //************************ input is bookmarks

       if ( (strcmp(answer, "cd BOOKMARKS") == 0) || (strcmp(answer, "CD BOOKMARKS") == 0) || (strcmp(answer, "CD bookmarks") == 0) || (strcmp(answer, "cd bookmarks") == 0) )
		{
			SetConsoleTextAttribute(hConsole, 8);//grey
			cout << endl;
			for (int i = 0;i<4;i++)
			{
				cout << direct.Bookmarks[i] << endl;
			}

			cout << endl;
			SetConsoleTextAttribute(hConsole, 15);//white
			//while ( strcmp(goTo, "cd\\") != 0){
			while (true){
			cout << "root[Bookmarks]# ";
			cin >>ws;
			cin.getline(goTo, 40);		

			if ( (strcmp(goTo, "cd\\") == 0) ){
				break;
			}

			}//while

			cout << endl;

		}

	   //*********************** input is downloads

	   if ( (strcmp(answer, "cd DOWNLOADS") == 0) || (strcmp(answer, "CD DOWNLOADS") == 0) || (strcmp(answer, "CD downloads") == 0) || (strcmp(answer, "cd downloads") == 0) ){
			SetConsoleTextAttribute(hConsole, 8);//grey
			cout << endl;
			for (int i = 0;i<6;i++)
			{
				cout << direct.Downloads[i] << endl;
			}

			cout << endl;
			SetConsoleTextAttribute(hConsole, 15);//white
			//while ( strcmp(goTo, "cd\\") != 0){
			while (true){
		    SetConsoleTextAttribute(hConsole, 15);//white
			cout << "root[Downloads]# ";
			cin >>ws;
			cin.getline(goTo, 40);	
			if ( (strcmp(goTo, "cd\\") == 0) ){
				break;
			}

			if ( (strcmp(goTo, "install portscannerw32.exe") == 0) || (strcmp(goTo, "install PortScannerW32.exe") == 0) ){

			if (PortScannerInstalled == false){
			  if ( (strcmp(direct.Downloads[0], "PortScannerW32.exe") == 0) ){
				  cout << endl;
				 cout << endl;
				SetConsoleTextAttribute(hConsole, 15);//white
				cout << "  Installing PortScannerW32.exe..." << endl;
		        cout << "";
				SetConsoleTextAttribute(hConsole, 11);//aqua
				
		               for (int i = 0;i<4;i++)
		                   {
			                Sleep(800);
			                cout << "ÝÝÝ";
		                   }
		               for (int i = 0;i<3;i++)
		                   {
			                Sleep(300);
			                cout << "ÝÝÝ";
		                    }
		               for (int i = 0;i<3;i++)
		                    {
			                Sleep(500);
			                cout << "ÝÝÝ";
		                    }
					   for (int i = 0;i<2;i++)
		                   {
			                Sleep(800);
			                cout << "ÝÝÝ";
		                   }
					   Sleep(500);
	             SetConsoleTextAttribute(hConsole, 15);//white
			     cout << " Done!" << endl << endl;
				  PortScannerInstalled = true;
			  }
			  else{
				  cout << endl;
				  SetConsoleTextAttribute(hConsole, 8);//grey
			     cout << "PortScannerW32.exe is not found in directory." << endl << endl;
				 }

			}
			else {
				cout << endl;
				SetConsoleTextAttribute(hConsole, 8);//grey
				cout << "PortScannerW32.exe has already been installed!" << endl << endl;
			}

			}

			else if ( (strcmp(goTo, "install filedestroy.exe") == 0) || (strcmp(goTo, "install FileDestroy.exe") == 0) ){

			if (FileDestroyInstalled == false){
			  if ( (strcmp(direct.Downloads[1], "FileDestroy.exe") == 0) ){
				  cout << endl;
				 cout << endl;
				SetConsoleTextAttribute(hConsole, 15);//white
				cout << "  Installing FileDestroy.exe..." << endl;
		        cout << "";
				SetConsoleTextAttribute(hConsole, 11);//aqua
				
		               for (int i = 0;i<4;i++)
		                   {
			                Sleep(800);
			                cout << "ÝÝÝ";
		                   }
		               for (int i = 0;i<3;i++)
		                   {
			                Sleep(300);
			                cout << "ÝÝÝ";
		                    }
		               for (int i = 0;i<3;i++)
		                    {
			                Sleep(500);
			                cout << "ÝÝÝ";
		                    }
					   for (int i = 0;i<2;i++)
		                   {
			                Sleep(800);
			                cout << "ÝÝÝ";
		                   }
					   Sleep(500);
	             SetConsoleTextAttribute(hConsole, 15);//white
			     cout << " Done!" << endl << endl;
				  FileDestroyInstalled = true;
			  }
			  else{
				  cout << endl;
				  SetConsoleTextAttribute(hConsole, 8);//grey
			     cout << "FileDestroy.exe is not found in directory." << endl << endl;
				 }

			}
			else {
				cout << endl;
				SetConsoleTextAttribute(hConsole, 8);//grey
				cout << "FileDestroy.exe has already been installed!" << endl << endl;
			}

			}



			}//while

			cout << endl;

	   }




   }//main while

	_getch();
   }
