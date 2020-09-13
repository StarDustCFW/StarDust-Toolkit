#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>
#include <switch.h>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <memory>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <iterator>
#include <dirent.h>
#include <cstdio>
#include <filesystem>
#include <unistd.h>
#include <sys/socket.h>
#include <cstring>
#include <vector>
#include <stdlib.h>
void set_LANG();
typedef struct {
	string textis;
	string text_H_UpdateError;
	string text_H_Update;
	string text_H_UTD;
	string text_H_HBG;
	string text_H_Download;
	string text_H_DownloadOK;
	string text_H_Themes;
	string text_H_Atention;
	string text_H_Caution;
	string text_H_Abort;
	string text_H_Linked;
	string text_H_Linked_msg1;
	
	string text_H_ToolkitUTD;
	string text_H_ToolkitOOD;
	string text_H_Unlocking;

	string text_C_latest;
	string text_C_have;
	string text_C_AHAH;
	string text_C_Reboot;
	string text_C_Update;
	string text_C_sure;
	

	string text0;
	string text1;
	string text2;
	string text3;
	string text4;
	string text5;
	string text6;
	string text7;
	string text8;
	string text9;
	string text10;
	string text11;
	string text12;
	string text13;
	string text14;
	string text15;
	string text16;
	string text17;
	string text18;
	string text19;
	string text20;
	string text21;
	string text22;
	string text23;
	string text24;
	string text25;
	string text26;
	string text27;
	string text28;
	string text29;
	//menus
	string menu1;
	string menu1d;
			string menu1_1;
			string menu1_1_a;
			string menu1_1_b;
		string menu1_3;
		string menu1_4;
		string menu1_5;
		
	string menu11;
	string menu11d;

	string menu2;
	string menu2d;
				
	string menu3;
	string menu3d;
		string menu3_1;
		string menu3_2;
			string menu3_3;
			string menu3_3_a;
		string menu3_4;
		string menu3_5;
				
	string menu4;
	string menu4d;
	string menu4_1;
	
	string menu5;
	string menu5d;
	string menu6;
	string menu6d;

} language;

language LG;
	//traduction
	
	void set_LANG()
	{
		setInitialize();
		u64 lcode = 0;
		SetLanguage lang;
		setGetSystemLanguage(&lcode);
		setMakeLanguage(lcode, &lang);
			switch(lang)
			{
				case 5:
				case 14: //spanish
				{
				LG.textis = "ES";
				
				//headers
				LG.text_H_UpdateError = "Error de actualización";
				LG.text_H_Update = "Actualización";
				LG.text_H_UTD = "Estás actualizado";
				LG.text_H_HBG = "Instalar Zenten Shop";
				LG.text_H_Download = "Descargar";
				LG.text_H_DownloadOK = "Actualización Completada";
				LG.text_H_Themes = "Eliminar Temas";
				LG.text_H_Atention = "Atención";
				LG.text_H_Caution = "Precaución";
				LG.text_H_Abort = "Abortado";
				LG.text_H_Linked = "Usuarios Linkados";
				LG.text_H_ToolkitUTD = "Stardust-Toolkit esta Actualizado";
				LG.text_H_ToolkitOOD = "Stardust-Toolkit esta Desactualizado";
				LG.text_H_Unlocking = "Desbloqueando";
				
				//comun
				LG.text_C_latest = "El último lanzamiento es ";
				LG.text_C_have = " tienes ";
				LG.text_C_AHAH = "Ahahahahahah Error de actualización!";
				LG.text_C_Reboot = "Reiniciar Requerido";
				LG.text_C_Update = "\rActualizar Ahora?";
				LG.text_C_sure = "Estas Seguro?";

				//box text
				LG.text0 = "Error de descarga\n--------\nPosible Error de red";
				LG.text1 = "Error de red";
				LG.text2 = "";
				LG.text3 = "\nEsto descargara StarDust a microSD. \ntoma un tiempo por favor sea paciente\n\n\nActualizar?";
				LG.text4 = "Hay un error del sevidor, Espere!";
				LG.text5 = "Error de Descarga!";
				LG.text6 = "El Host Remoto no Respondió!";
				LG.text7 = "\nLe gustaría descargarlo de Nuevo?";
				LG.text8 = " Descargada\n";
				LG.text9 = "¿Desea descargar \nA la tarjeta SD el firmware ";
				LG.text10 = " Descargado \r\nAbre Choidujour";
				LG.text12 = "Esto intentara obtener \n las Prod.keys.\n\n\n Continuar?";
				LG.text13 = "keys obtenidas\n\nRevisa /switch/prod.keys\n\nY estaria listo";
				LG.text14 = "¿Desea eliminar Los Temas?";
				LG.text15 = "Esto desbloqueará el Prodinfo.\nEspero sepas lo que haces\nno olvides desactivarlo al terminar\nContinue?";
				LG.text16 = "He aplicado un parche, \nPero necesita reiniciar el Switch, \n\n ¿le gustaría hacerlo ahora? \n ¿REINICIAR?";
				LG.text17 = "Esto devolverá a la normalidad la protección de ProdInfo \ndel Switch \n¿Continuar?";
				LG.text18 = "Todo verde \n\nPresiona A";
				LG.text19 = "No usar online\nSe Linkaran A Nintendo todos los Usuarios,\nDe forma Fake,\nEs eso Correcto?";
				LG.text20 = "Estas Seguro?\n";
				LG.text21 = "\n\nYa estaba linkado\nSe dejo como Estaba Antes";
				LG.text22 = "Todo Termino Bien \nAhora Reinicia";
				LG.text23 = "Esto intentará actualizar el Toolkit.\nDespués de actualizar, la aplicación se cerrará.\n¿Continuar?";
				LG.text24 = "No Hay Parches Disponibles -.-";
				LG.text25 = "Parche Aplicado Con éxito! -.-";
				LG.text26 = "Ha ocurrido un Error!-.-\nRevisa la Wifi\n\nDNS Para Switch:\n163.172.141.219\n207.246.121.77";
				LG.text27 = "";
				LG.text28 = "";
				LG.text29 = "";

				//menus
				LG.menu1 = "Actualizar StarDust";
				LG.menu1d = "Actualizar StarDust";
						LG.menu1_1 = "Actualizar StarDustCFW";
						LG.menu1_1_a = "Instalar StarDust";
						LG.menu1_1_b = "Aplicar Parche beta";
					LG.menu1_3 = "Actualizar Toolkit";
					LG.menu1_4 = "Actualizar Zenten Shop";
					LG.menu1_5 = "Actualizar Heaven-Gate";

				LG.menu11 = "Descargas";
				LG.menu11d = "Descargar Tiendas, Zenten Shop";
				
				LG.menu2 = "Actualizaciones de Sistema";
				LG.menu2d = "Descargar Actualizaciones de Sistema";
				
				LG.menu3 = "Herramientas";
				LG.menu3d = "StarDust Tools";
					LG.menu3_1 = "LinkUsers";
					LG.menu3_2 = "Obtener Keys";
						LG.menu3_3 = "Desbloquear Prodinfo";
						LG.menu3_3_a = "Bloquear Prodinfo";
					LG.menu3_4 = "Quitar Temas";
					LG.menu3_5 = "Salvar Prodinfo";
				
				LG.menu4 = "AutoArranque ArgonNX";
				LG.menu4d = "Controlar AutoArranque";
					LG.menu4_1 = "Desactivar AutoArranque";
				
				LG.menu5 = "Reiniciar al Menu";
				LG.menu5d = "Reiniciar al payload.";
				LG.menu6 = "Acerca de";
				LG.menu6d = "Acerca de StarDust Toolkit.";
				break;
				}
				case 9: //Portugese
				{
				LG.textis = "PT";

				//headers
				LG.text_H_UpdateError = "erro de ATUALIZAÇÃO";
				LG.text_H_Update = "Atualizar";
				LG.text_H_UTD = "Você está atualizado";
				LG.text_H_HBG = "Instale Zenten Shop";
				LG.text_H_Download = "Baixar";
				LG.text_H_DownloadOK = "Download completo";
				LG.text_H_Themes = "Remover temas";
				LG.text_H_Atention = "Atenção";
				LG.text_H_Caution = "Cuidado";
				LG.text_H_Abort = "Abortar";
				LG.text_H_Linked = "Vincular usuários";
				LG.text_H_ToolkitUTD = "O Stardust-Toolkit está atualizado";
				LG.text_H_ToolkitOOD = "O Stardust-Toolkit está desatualizado";
				LG.text_H_Unlocking = "Desbloqueio";
				
				//comun
				LG.text_C_latest = "A versão mais recente é ";
				LG.text_C_have = " Você tem ";
				LG.text_C_AHAH = "Ahahahahahah Erro de atualização!";
				LG.text_C_Reboot = "Reinicialização necessária";
				LG.text_C_Update = "\rAtualizar agora?";
				LG.text_C_sure = "Tem certeza?";

				LG.text0 = "O arquivo é pequeno\n--------\nErro de rede possível";
				LG.text1 = "Erro de rede";
				LG.text2 = "";
				LG.text3 = "\n Este download do StarDust para o microSD. \n demorar um pouco, por favor seja paciente \n \n \n Atualizar?";
				LG.text4 = "Há um erro no servidor, aguarde!";
				LG.text5 = "Erro de download!";
				LG.text6 = "O host remoto não respondeu!";
				LG.text7 = "\nDeseja fazer o download novamente?";
				LG.text8 = " Baixada\n\n";
				LG.text9 = "Deseja fazer o download para o cartão SD do firmware ";
				LG.text10 = " Transferido \r\nAbrir Choidujour";
				LG.text12 = "Isso tentará obter \n as prod.keys \n\n\nContinuar?";
				LG.text13 = "Obtendo chaves com sucesso!\n\nVerifique /switch/prod.keys\n\nVocê está pronto para ir";
				LG.text14 = "Deseja remover \nOs Temas Personalizados?";
				LG.text15 = "Isso desbloqueará o Prodinfo.\nEspero que agora o que você está fazendo\nnão esqueça de desativá-lo quando terminar\nContinuar?";
				LG.text16 = "Apliquei um patch, \n mas você precisa reiniciar o Switch, \n \n gostaria de fazê-lo agora? \n Reiniciar?";
				LG.text17 = "Isso retornará ao normal a proteção de prodinfo \n da Switch \n\nContinuar?";
				LG.text18 = "Tudo verde \n\n, pressione A";
				LG.text19 = "Não use on-line \nTodos os usuários serão vinculados à Nintendo, \nEstá correto?";
				LG.text20 = "Você tem certeza?";
				LG.text21 = "\n\nJá estava vinculado \nFoi deixado como antes";
				LG.text22 = "Tudo terminou bem \n agora reinicia";
				LG.text23 = "Isso tentará atualizar o Toolkit. \n Após a atualização, a app será encerrada. \n\n Continuar?";
				LG.text24 = "Nenhum patch disponível -.-";
				LG.text25 = "Patch Aplique com sucesso! -.-";
				LG.text26 = "Erro de aplicação de patch!-.-\ncheck the Wifi\n\nDNS Para Switch:\n163.172.141.219\n207.246.121.7";
				LG.text27 = "";
				LG.text28 = "";
				LG.text29 = "";
			
				//menu
				LG.menu1 = "Atualizações do StarDust";
				LG.menu1d = "Atualizações do StarDust";
				LG.menu1_1 = "Atualizar StarDustCFW";
				LG.menu1_1_a = "Instale o StarDust";
						LG.menu1_1_b = "Aplicar patch beta";
				LG.menu1_3 = "Atualizar Toolkit";
				LG.menu1_4 = "Atualizar Zenten Shop";
				LG.menu1_5 = "Atualizar Heaven-Gate";
				
				LG.menu11 = "Baixar";
				LG.menu11d = "Atualizar lojas, Zenten Shop.";
				
				LG.menu2 = "Atualizações do sistema";
				LG.menu2d = "Faça o download das atualizações do sistema.";
				
				LG.menu3 = "Ferramentas StarDust";
				LG.menu3d = "Ferramentas StarDust.";
					LG.menu3_1 = "LinkUsers";
					LG.menu3_2 = "Obter chaves";
						LG.menu3_3 = "Desbloquear Prodinfo";
						LG.menu3_3_a = "Relock Prodinfo";
					LG.menu3_4 = "Remover temas";
					LG.menu3_5 = "Backup Prodinfo";
				
				LG.menu4 = "ArgonNX AutoBoot";
				LG.menu4d = "Inicialização automática";
					LG.menu4_1 = "Desativar AutoBoot";
					
				LG.menu5 = "Reiniciar no menu";
				LG.menu5d = "Reiniciar no Payload.";
				LG.menu6 = "Sobre";
				LG.menu6d = "Sobre o StarDust Toolkit.";
				break;
				}
				case 0: //japo simple
				case 15: //japo simple
				case 16: //japo katakana
				{
				LG.textis = "JP";

				//headers
				LG.text_H_UpdateError = "更新エラー";
				LG.text_H_Update = "更新";
				LG.text_H_UTD = "あなたは最新です";
				LG.text_H_HBG = "更新 Zenten Shop";
				LG.text_H_Download = "ダウンロード ";
				LG.text_H_DownloadOK = "ダウンロード完了";
				LG.text_H_Themes = "テーマを削除";
				LG.text_H_Atention = "注意";
				LG.text_H_Caution = "注意";
				LG.text_H_Abort = "Abort";
				LG.text_H_Linked = "ユーザーをリンク";
				LG.text_H_ToolkitUTD = "スターダスト-Toolkitは最新です";
				LG.text_H_ToolkitOOD = "スターダスト-Toolkit 期限が切れています";
				LG.text_H_Unlocking = "ロック解除";
				
				//comun
				LG.text_C_latest = "最新リリースは  ";
				LG.text_C_have = " あなたが持っている ";
				LG.text_C_AHAH = "アハハハハハ更新エラー！";
				LG.text_C_Reboot = "再起動が必要";
				LG.text_C_Update = "\r今すぐアップデート?";
				LG.text_C_sure = "本気ですか？";

				LG.text0 = "ファイルは小さいです\n--------\n考えられるネットワークエラー";
				LG.text1 = "ネットワークエラー";
				LG.text2 = "";
				LG.text3 = "\nこれはStarDustをマイクロSDカードにダウンロードします.\nしばらくお待ちください\n\n\n更新？";
				LG.text4 = "サーバーエラーが発生しました。お待ちください！";
				LG.text5 = "ダウンロードエラー！";
				LG.text6 = "リモートホストが応答しませんでした！";
				LG.text7 = "\nもう一度ダウンロードしますか？";
				LG.text8 = " ダウンロードした\n\n";
				LG.text9 = "ファームウェアをSDカードにダウンロードしますか ";
				LG.text10 = " ダウンロード済み\r\n Choidujourを開く";
				LG.text12 = "これは、prod.keysを取得しようとします。\n\n継続する？";
				LG.text13 = "キーの取得に成功しました！\n\n/switch/prod.keysを確認します\n\nあなたは行く準備ができています";
				LG.text14 = "カスタムテーマを削除しますか？ ";
				LG.text15 = "これにより、Prodinfoのロックが解除されます。\n私はあなたが今やっていることを願っています\n終了したらそれを無効にすることを忘れないでください\n継続する？";
				LG.text16 = "パッチを適用しましたが、スイッチを再起動する必要があります。\n\n 今すぐ行いますか？\nリブート？";
				LG.text17 = "これにより、スイッチのprodinfo保護が通常に戻ります\n\n継続する？";
				LG.text18 = "すべて緑、Aキーを押します";
				LG.text19 = "オンラインで使用しないでください\nすべてのユーザーが任天堂にリンクされます,\n あれは正しいですか？";
				LG.text20 = "本気ですか？";
				LG.text21 = "\n\nすでにリンクされていた\nそのまま残しました";
				LG.text22 = "すべてが正常に終了しました。今すぐ再起動します";
				LG.text23 = "これにより、ツールキットが更新されます.\n更新後、アプリは終了します。\n\n継続する？";
				LG.text24 = "パッチはありません -.-";
				LG.text25 = "パッチが正常に適用されました！ -.-";
				LG.text26 = "パッチ適用エラー！ -.-\nWifiを確認する\n\nスイッチのDNS：\n163.172.141.219\n207.246.121.7";
				LG.text27 = "";
				LG.text28 = "";
				LG.text29 = "";
			
				//menu
				LG.menu1 = "スターダスト の更新";
				LG.menu1d = "アップデート スターダスト";
				LG.menu1_1 = "スターダストCFWを更新する";
				LG.menu1_1_a = "StarDustをインストールする";
						LG.menu1_1_b = "ベータパッチを適用";
				LG.menu1_3 = "更新ツールキット";
				LG.menu1_4 = "HBG ++を更新する";
				LG.menu1_5 = "天国の門を更新";
				
				LG.menu2 = "システムアップデート";
				LG.menu2d = "システムアップデートのダウンロード.";
				
				LG.menu11 = "ダウンロード";
				LG.menu11d = "更新 店, 全店.";
				
				LG.menu3 = "スターダスト ツール";
				LG.menu3d = "スターダスト ツール.";
					LG.menu3_1 = "ユーザーをリンク";
					LG.menu3_2 = "キーを取得";
						LG.menu3_3 = "Prodinfoのロックを解除";
						LG.menu3_3_a = "Prodinfoの再ロック";
					LG.menu3_4 = "テーマを削除";
					LG.menu3_5 = "バックアップ Prodinfo";
				
				LG.menu4 = "ArgonNX 自動ブート";
				LG.menu4d = "自動起動制御";
					LG.menu4_1 = "自動ブートを無効にする";
					
				LG.menu5 = "メニューに再起動";
				LG.menu5d = "ペイロードから再起動.";
				LG.menu6 = "約";
				LG.menu6d = "スターダスト Toolkitについて.";
				break;
				}
				case 3: //German
				{
				LG.textis = "GB";

				//headers
				LG.text_H_UpdateError = "Aktualisierungsfehler";
				LG.text_H_Update = "Aktualisieren";
				LG.text_H_UTD = "Du bist auf dem neuesten Stand";
				LG.text_H_HBG = "Installieren Sie Zenten Shop";
				LG.text_H_Download = "Herunterladen";
				LG.text_H_DownloadOK = "Download abgeschlossen";
				LG.text_H_Themes = "Themen entfernen";
				LG.text_H_Atention = "Beachtung";
				LG.text_H_Caution = "Vorsicht";
				LG.text_H_Abort = "Abort";
				LG.text_H_Linked = "Link Users";
				LG.text_H_ToolkitUTD = "Stardust-Toolkit ist aktuell";
				LG.text_H_ToolkitOOD = "Stardust-Toolkit ist nicht mehr aktuell";
				LG.text_H_Unlocking = "Entsperren";
				
				//comun
				LG.text_C_latest = "Die neueste Version ist ";
				LG.text_C_have = " du hast ";
				LG.text_C_AHAH = "Ahahahahahah Update Fehler!";
				LG.text_C_Reboot = "Neustart erforderlich";
				LG.text_C_Update = "\rJetzt aktualisieren?";
				LG.text_C_sure = "Bist du sicher?";

				LG.text0 = "Datei ist zu klein\n--------\nMöglicher Netzwerkfehler";
				LG.text1 = "Netzwerkfehler";
				LG.text2 = "";
				LG.text3 = "\nDieser Download StarDust auf microSD.\nNehmen Sie sich bitte eine Weile Zeit\n\n\nAktualisieren?";
				LG.text4 = "Es liegt ein Serverfehler vor. Warten Sie!";
				LG.text5 = "Download Fehler!";
				LG.text6 = "Der Remote-Host hat nicht geantwortet!";
				LG.text7 = "\nMöchten Sie es erneut herunterladen?";
				LG.text8 = " heruntergeladen\n\n";
				LG.text9 = "Möchten Sie die Firmware auf die SD-Karte herunterladen? ";
				LG.text10 = " heruntergeladen \r\nÖffne Choidujour";
				LG.text12 = "Dadurch wird versucht, \n die Prod.keys abzurufen.\n\n\nFortsetzen?";
				LG.text13 = "Schlüssel erfolgreich abrufen!\n\nPrüfen /switch/prod.keys\n\nSie sind bereit zu gehen";
				LG.text14 = "Möchten Sie entfernen \nDie benutzerdefinierten Themen?";
				LG.text15 = "";
				LG.text16 = "";
				LG.text17 = "";
				LG.text18 = "";
				LG.text19 = "Nicht online verwenden \nAlle Benutzer werden mit Nintendo verlinkt,\n Ist das korrekt?";
				LG.text20 = "Bist du sicher?";
				LG.text21 = "\n\nWar schon verlinkt\nEs wurde so belassen wie es vorher war";
				LG.text22 = "Alles gut beendet \nJetzt neu starten";
				LG.text23 = "Dadurch wird versucht, das Toolkit zu aktualisieren.\nNach dem Update wird die App beendet.\n\nFortsetzen?";
				LG.text24 = "Kein Patch verfügbar -.-";
				LG.text25 = "Patch Erfolgreich anwenden!-.-";
				LG.text26 = "Patch Apply Fehler!-.-\nÜberprüfen Sie das Wifi\n\nDNS Para Switch:\n163.172.141.219\n207.246.121.7";
				LG.text27 = "";
				LG.text28 = "";
				LG.text29 = "";
			
				//menu
				LG.menu1 = "StarDust Aktualisierung";
				LG.menu1d = "Aktualisieren StarDust";
				LG.menu1_1 = "Aktualisieren StarDustCFW";
				LG.menu1_1_a = "Installieren StarDust";
						LG.menu1_1_b = "Betapatch anwenden";
				LG.menu1_3 = "Aktualisieren Toolkit";
				LG.menu1_4 = "Aktualisieren Zenten Shop";
				LG.menu1_5 = "Aktualisieren Heaven-Gate";
				
				LG.menu11 = "Downloads";
				LG.menu11d = "Aktualisieren Shops, Zenten Shop.";
				
				LG.menu2 = "System aktualisierung";
				LG.menu2d = "Herunterladen System Aktualisierung.";
				
				LG.menu3 = "StarDustTools";
				LG.menu3d = "StarDust Werkzeuge.";
					LG.menu3_1 = "LinkUsers";
					LG.menu3_2 = "Schlüssel holen";
						LG.menu3_3 = "Unlock Prodinfo";
						LG.menu3_3_a = "Relock Prodinfo";
					LG.menu3_4 = "Themen entfernen";
					LG.menu3_5 = "Backup Prodinfo";
				
				LG.menu4 = "ArgonNX AutoBoot";
				LG.menu4d = "Autoboot";
					LG.menu4_1 = "Disable AutoBoot";
					
				LG.menu5 = "Starten Sie das Menü neu";
				LG.menu5d = "Starten Sie auf Payload neu.";
				LG.menu6 = "Über";
				LG.menu6d = "Über StarDust Toolkit.";
				break;
				}
				default: //all
				{
				LG.textis = "EN";

				//headers
				LG.text_H_UpdateError = "UpdateError";
				LG.text_H_Update = "Update";
				LG.text_H_UTD = "You're up to date";
				LG.text_H_HBG = "Install Zenten Shop";
				LG.text_H_Download = "Download ";
				LG.text_H_DownloadOK = "Download Complete";
				LG.text_H_Themes = "Remove Themes";
				LG.text_H_Atention = "Attention";
				LG.text_H_Caution = "Caution";
				LG.text_H_Abort = "Abort";
				LG.text_H_Linked = "Link Users";
				LG.text_H_ToolkitUTD = "Stardust-Toolkit is up to date";
				LG.text_H_ToolkitOOD = "Stardust-Toolkit is out of date";
				LG.text_H_Unlocking = "Unlocking";
				
				//comun
				LG.text_C_latest = "The latest release is ";
				LG.text_C_have = " you have ";
				LG.text_C_AHAH = "Ahahahahahah Update Error!";
				LG.text_C_Reboot = "Reboot Required";
				LG.text_C_Update = "\rUpdate Now?";
				LG.text_C_sure = "Are you sure?";

				LG.text0 = "File is to Small\n--------\nPosible Network Error";
				LG.text1 = "Network Error";
				LG.text2 = "";
				LG.text3 = "\nThis download StarDust to microSD.\ntake a while please be patient\n\n\nUpdate?";
				LG.text4 = "There is a server error, Wait!";
				LG.text5 = "Download Error!";
				LG.text6 = "The Remote Host did not Respond!";
				LG.text7 = "\nWould you like to download it again?";
				LG.text8 = " Downloaded\n\n";
				LG.text9 = "Would you like to Download to SD card the Firmware ";
				LG.text10 = " Downloaded \r\nOpen Choidujour";
				LG.text12 = "This will attempt to Get \nthe prod.keys.\n\n\nContinue?";
				LG.text13 = "Geting keys successful!\n\nCheck /switch/prod.keys\n\nYou are ready to go";
				LG.text14 = "Would you like to remove \nThe Custom Themes?";
				LG.text15 = "This will unlock the Prodinfo.\ni hope you now what you are doing\ndo not forget to disable it when you finished\nContinue?";
				LG.text16 = "I have applied a patch,\nbut you need to restart the Switch,\n\n would you like to do it now?\nREBOOT?";
				LG.text17 = "This will return to normal the prodinfo \nprotection of the switch\n\nContinue?";
				LG.text18 = "All green\n\npress A";
				LG.text19 = "Do not use online \nAll users will be linked to Nintendo,\n Is that correct";
				LG.text20 = "Are you sure?";
				LG.text21 = "\n\nWas already linked\nIt was left as it was before";
				LG.text22 = "Everything Finished Well \nNow Restarts";
				LG.text23 = "This will attempt to update the Toolkit.\nAfter updating, the app will exit.\n\nContinue?";
				LG.text24 = "No Patch Available -.-";
				LG.text25 = "Patch Apply successfully!-.-";
				LG.text26 = "Patch Apply Error!-.-\ncheck the Wifi\n\nDNS Para Switch:\n163.172.141.219\n207.246.121.7";
				LG.text27 = "";
				LG.text28 = "";
				LG.text29 = "";
			
				//menu
				LG.menu1 = "StarDust Updates";
				LG.menu1d = "Update StarDust";
				LG.menu1_1 = "Update StarDustCFW";
				LG.menu1_1_a = "Install StarDust";
						LG.menu1_1_b = "Apply beta patch";
				LG.menu1_3 = "Update Toolkit";
				LG.menu1_4 = "Update Zenten Shop";
				LG.menu1_5 = "Update Heaven-Gate";
				
				LG.menu11 = "Downloads";
				LG.menu11d = "Update Shops, Zenten Shop.";
				
				LG.menu2 = "System updates";
				LG.menu2d = "Download System updates.";
				
				LG.menu3 = "StarDustTools";
				LG.menu3d = "StarDust Tools.";
					LG.menu3_1 = "LinkUsers";
					LG.menu3_2 = "Get Keys";
						LG.menu3_3 = "Unlock Prodinfo";
						LG.menu3_3_a = "Relock Prodinfo";
					LG.menu3_4 = "Remove Themes";
					LG.menu3_5 = "Backup Prodinfo";
				
				LG.menu4 = "ArgonNX AutoBoot";
				LG.menu4d = "Autoboot";
					LG.menu4_1 = "Disable AutoBoot";
					
				LG.menu5 = "Reboot to Menu";
				LG.menu5d = "Reboot to Payload.";
				LG.menu6 = "About";
				LG.menu6d = "About StarDust Toolkit.";
				break;
				}
			}
		setsysExit();
		
	}

void set_LANG();
