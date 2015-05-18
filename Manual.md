# Manual/手冊 #

## 10.5 Leopard / Intel x86 build ##
### 安裝步驟 ###
  1. 結束 Safari
  1. 開啟 SafariPowerToy-xxx.pkg
  1. 依照步驟安裝
  1. 重新執行 Safari
### 移除步驟 ###
  1. 結束 Safari
  1. 打開終端機程式, 打入 sudo rm -rf /Library/InputManagers/SafariPowerToy
  1. 若無法移除或是有錯誤訊息，可能是其他程式還在佔用，像是 Dashboard
  1. sudo rm /Library/InputManagers/SafariPowerToy/Info.plist
  1. 重新開機或登出
  1. sudo rm -rf /Library/InputManagers/SafariPowerToy

## 10.4 Tiger/老虎 ##
### Installation/安裝 ###
  1. Quit Safari or Shiira
  1. Unzip the archived file
  1. Drag SafariPowerToy to ~/Library/InputManagers (If InputManagers was not existed, please create it)
  1. Restart Safari or Shiira

  1. 完全離開 Safari 或 Shiira
  1. 解開壓縮的檔案
  1. 將 SafariPowerToy 拉到 ~/Library/InputManagers (如果 InputManagers 不存在，請建立這個目錄）
  1. 開啟 Safari 或 Shiira

## Uninstallation/解除安裝 ##
  1. Quit Safari or Shiira
  1. Drag ~/Library/InputManagers/SafariPowerToy to Trash
  1. Remove ~/Library/Preferences/org.jclin.SafariPowerToy
  1. Restart Safari

  1. 完全離開 Safari 或 Shiira
  1. 將 ~/Library/InputManagers 下的 SafariPowerToy 刪除
  1. 刪除 ~/Library/Preferences/org.jclin.SafariPowerToy
  1. 開啟 Safari

## 10.5 Leopard/美洲豹 ##
### Installation/安裝 ###
  1. Quit Safari or Shiira
  1. Unzip the archived file
  1. run Termila.app
  1. sudo mkdir -p /Library/InputManagers if it does not exist
  1. sudo cp -R SafariPowerToy /Library/InputManagers

  1. 完全離開 Safari 或 Shiira
  1. 解開壓縮的檔案
  1. 執行終端機程式 Terminal.app (如果你有安裝過 InputManagers 像是SafariBlock，應該可以略過 4)
  1. 執行 sudo mkdir -p /Library/InputManagers 如果這個目錄不存在的話 (可能需要輸入你的密碼)
  1. 執行 sudo cp -R SafariPowerToy /Library/InputManagers
  1. 開啟 Safari 或 Shiira

### Uninstallation/解除安裝 ###
  1. Quit Safari or Shiira
  1. sudo rm -rf /Library/InputManagers/SafariPowerToy
  1. Restart Safari

  1. 完全離開 Safari 或 Shiira
  1. 開啟終端機程式 Terminal.app
  1. 執行 sudo rm -rf /Library/InputManagers/SafariPowerToy  (可能需要輸入你的密碼)
  1. 開啟 Safari

## Usage/使用方法 ##
  * In Safari Menu “View” -> “SafariPowerToy” -> “Convert to Trad. Chinese” or “Convert to Simp. Chinese”
  * 在 Safari 的 View 選單下，會多出 SafariPowerToy 項目。

## Hot Keys/快速熱鍵 ##
  * Cmd-Ctrl-F1: Pop up the chinese glyph setting dialog
  * Cmd-Ctrl-F1: 跳出中文字型轉換設定