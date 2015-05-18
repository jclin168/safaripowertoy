# Features/功能 #
Provide enhanced features for Safari web browser in Mac OS X environment. Currently it provides Chinese glyphs conversion for Traditional & Simplified.
在 Mac OS X 的環境下，為 Safari 瀏覽器提供增強功能。目前為止，提供中文簡繁轉換功能。
~~提供自訂 Serif/Sans Serif 字型~~

# Snow Leopard 使用者 #
因為技術問題，僅能在 32-bit 的機器碼達到某些功能。目前暫不提供 64-bit Safari 的支援。使用 Snow Leopard 的使用者，請參考 http://martinottenwaelter.fr/post/173126110/safari-adblock-on-snow-leopard，在 Safari 上按右鍵 Get Info 或是 Cmd-I，將 32-bit 模式打開。如此應該可以執行 32-bit Safari，使用 SafariPowertoy

# Support Version/支援版本 #
  * Snow Leopard Safari 4.0 (intel 32bit) *** Leopard Safari 3.x (intel)
  * Leopard Safari 4.0 (intel)
  * Tiger/Leopard Safari 3.x (PowerPC untested)
  * Tiger/Loepard Safari 4.0 preview (PowerPC untested)**

# Build Release #
  * 直接內含 install package，可以直接安裝執行。不需透過 Terminal.app
  * 因為已經在新的 macbook 上開發，目前測試的環境只有 Intel x86 build for Leopard。如果你有能力自行由 subversion check out 原始碼，使用 Xcode 編譯，可以嘗試在 PowerPC 機器上產生 PPC Tiger/Leopard 的版本。歡迎回報和送回 diff。

## Changelog/改進記錄 ##
  * 8/29/2008: 加入詞彙轉換功能，不再侷限於簡體正體單字字體轉換而造成意義混淆或錯亂。
  * 8/11/2008: Migrate to Intel x86 support. PowerPC version of source code should be compiled also, but never tested. Using symbol table to dynamic translate the function entries of WebCore framework. Tested on Safari 3.1 & 4.0 preview.
  * 12/19/2007: Dynamic address compuation for target functions in numerous version of Safari 3 on different patchs of Tiger and Leopard.
  * 12/14/2007: Enhance chinese decriptions in web pages
  * _**Important:**_ Only for PowerPC 32-bit only
  * 11/25/2007: Fix incompatible issues with Safari 3 on Mac OS X 10.5 Leopard and Objective-C 2.0.
  * 11/22/2007: Beta release. Support Safari 3 on Mac OS X 10.4.11. Currently **Power-PC binary** only. I have no Intel Mac environment to write and test code.
  * 12/19/2007: 因應在 Tiger 和 Leopard 各版更新中的多種版本的 Safari 3, 使用動態的記憶體位址計算來找尋目標 functions.
  * 12/14/2007: 增加開發網頁上中文，有些使用者可能需要。英文對一般使用者可能也讓他們安裝使用上有點頭大。
  * _**重要:**_ 目前僅提供 32-bit Power PC 版本
  * 11/25/2007: 修正在 Mac OS X 10.5 Leopard 和 Objective-C 2.0 下不相容問題。
  * 11/22/2007: 測試版釋出，支援 Mac OS X 10.4.11 的 Safari 3。目前只有 **Power-PC** 部份支援。

## [[Manual](Manual.md)]/使用方法 ##
See installation and usage on Tiger or Leopard
在 Tiger 和 Leopard 下的安裝和使用方法

# Screenshots/螢幕擷圖 #
![http://safaripowertoy.googlecode.com/files/Safari_s2t.png](http://safaripowertoy.googlecode.com/files/Safari_s2t.png)