# USB_BRIDGE_ANDROID_OTG
USB_BRIDGE_ANDROID_OTG App Inventor 2

Full app : https://play.google.com/store/apps/details?id=bp.usbbridge.appinv
Demo app : https://play.google.com/store/apps/details?id=bp.usbbridge.appinvDemo.

Etudiants, enseignants, passionnés de communication  découvrez la première application permettant de contrôler les périphériques FTDI UART disposants d'un connecteur USB  (Arduino uno, Mega, Yun, FTDI Xbee...) directement à partir de l'outil de développement  APP INVENTOR 2. (pas besoin de shiel host usb ou bluetooth, juste un câble USB OTG)

USB Bridge for App Inventor 2 permet grâce à un câble USB OTG de réaliser une interface transparente entre un dispositif USB et l'outil de développement APP INVENTOR 2.

Vous aller pouvoir développer vos propres nouvelles applications permettant d'utiliser la puissance d'app inventor 2 (graphique , capteurs , base de données...) et les puissances de vos périphériques (LED RGB, Servo, AX12A, Moteur DC...) disposants d'un USB UART à 115200 bauds.

Utilisez et recyclez  vos anciens téléphones en utilisant ses fonctions internes à la place d'utiliser plusieurs shield arduino : écran tactile, afficheur, lecteur mp3, lecteur de carte SD, envoie de SMS, GPD,GSM, QR Codes, NFC, bluetooth, wifi, capteurs divers....,pour vos applications à base de microcontrôleur. (Arduino,Teensy, XBee...)

Si votre périphérique n'est pas reconnu, envoyez moi  les références Vendor ID et Product ID comme l'exemple suivant pour l'arduino uno : Vendor ID: 0x2341, Product ID: 0x0001


USB Host mode doit être supporté  + Android 3.1 mini

Exemple: Controle d'une carte  arduino uno avec un câble usb otg et APP INVENTOR  2

Envoyer recevoir des données de la carte Arduino  Serial.println(), Serial.print(),Serial.read()  à 115200 baud .

Version du programme Arduino sous Ardublock.

