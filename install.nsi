; Script generated by the HM NIS Edit Script Wizard.

; HM NIS Edit Wizard helper defines
!define PRODUCT_NAME "日志下载助手"
!define PRODUCT_VERSION "1.0"
!define PRODUCT_PUBLISHER "Mooe, Uu."
!define PRODUCT_DIR_REGKEY "Software\Microsoft\Windows\CurrentVersion\App Paths\setup.exe"
!define PRODUCT_UNINST_KEY "Software\Microsoft\Windows\CurrentVersion\Uninstall\${PRODUCT_NAME}"
!define PRODUCT_UNINST_ROOT_KEY "HKLM"

SetCompressor lzma

; MUI 1.67 compatible ------
!include "MUI.nsh"

; MUI Settings
!define MUI_ABORTWARNING
!define MUI_ICON "bitbug_favicon.ico"
!define MUI_UNICON "${NSISDIR}\Contrib\Graphics\Icons\modern-uninstall.ico"

; Language Selection Dialog Settings
!define MUI_LANGDLL_REGISTRY_ROOT "${PRODUCT_UNINST_ROOT_KEY}"
!define MUI_LANGDLL_REGISTRY_KEY "${PRODUCT_UNINST_KEY}"
!define MUI_LANGDLL_REGISTRY_VALUENAME "NSIS:Language"

; Welcome page
!insertmacro MUI_PAGE_WELCOME
; Directory page
!insertmacro MUI_PAGE_DIRECTORY
; Instfiles page
!insertmacro MUI_PAGE_INSTFILES
; Finish page
!define MUI_FINISHPAGE_RUN "$INSTDIR\setup.exe"
!insertmacro MUI_PAGE_FINISH

; Uninstaller pages
!insertmacro MUI_UNPAGE_INSTFILES

; Language files
!insertmacro MUI_LANGUAGE "English"
!insertmacro MUI_LANGUAGE "SimpChinese"

; Reserve files
!insertmacro MUI_RESERVEFILE_INSTALLOPTIONS

; MUI end ------

Name "${PRODUCT_NAME} ${PRODUCT_VERSION}"
OutFile "Setup.exe"
InstallDir "$PROGRAMFILES\日志下载助手"
InstallDirRegKey HKLM "${PRODUCT_DIR_REGKEY}" ""
ShowInstDetails show
ShowUnInstDetails show

Function .onInit
  !insertmacro MUI_LANGDLL_DISPLAY
FunctionEnd

Section "MainSection" SEC01
  SetOutPath "$INSTDIR"
  SetOverwrite try
  File "out\setup.dist\api-ms-win-core-console-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-datetime-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-debug-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-errorhandling-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-file-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-file-l1-2-0.dll"
  File "out\setup.dist\api-ms-win-core-file-l2-1-0.dll"
  File "out\setup.dist\api-ms-win-core-handle-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-heap-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-interlocked-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-libraryloader-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-localization-l1-2-0.dll"
  File "out\setup.dist\api-ms-win-core-memory-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-namedpipe-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-processenvironment-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-processthreads-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-processthreads-l1-1-1.dll"
  File "out\setup.dist\api-ms-win-core-profile-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-rtlsupport-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-string-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-synch-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-synch-l1-2-0.dll"
  File "out\setup.dist\api-ms-win-core-sysinfo-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-timezone-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-core-util-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-conio-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-convert-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-environment-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-filesystem-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-heap-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-locale-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-math-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-process-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-runtime-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-stdio-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-string-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-time-l1-1-0.dll"
  File "out\setup.dist\api-ms-win-crt-utility-l1-1-0.dll"
  SetOutPath "$INSTDIR\bcrypt"
  File "out\setup.dist\bcrypt\_bcrypt.pyd"
  SetOutPath "$INSTDIR"
  File "out\setup.dist\concrt140.dll"
  SetOutPath "$INSTDIR\config"
  File "out\setup.dist\config\line_conf.ini"
  SetOutPath "$INSTDIR\cryptography\hazmat\bindings"
  File "out\setup.dist\cryptography\hazmat\bindings\_openssl.pyd"
  File "out\setup.dist\cryptography\hazmat\bindings\_rust.pyd"
  SetOutPath "$INSTDIR"
  File "out\setup.dist\libcrypto-1_1.dll"
  File "out\setup.dist\libeay32.dll"
  File "out\setup.dist\libssl-1_1.dll"
  File "out\setup.dist\msvcp140.dll"
  File "out\setup.dist\msvcp140_1.dll"
  SetOutPath "$INSTDIR\nacl"
  File "out\setup.dist\nacl\_sodium.pyd"
  SetOutPath "$INSTDIR"
  File "out\setup.dist\pyexpat.pyd"
  SetOutPath "$INSTDIR\PyQt5\qt-plugins\iconengines"
  File "out\setup.dist\PyQt5\qt-plugins\iconengines\qsvgicon.dll"
  SetOutPath "$INSTDIR\PyQt5\qt-plugins\imageformats"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qgif.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qicns.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qico.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qjpeg.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qsvg.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qtga.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qtiff.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qwbmp.dll"
  File "out\setup.dist\PyQt5\qt-plugins\imageformats\qwebp.dll"
  SetOutPath "$INSTDIR\PyQt5\qt-plugins\mediaservice"
  File "out\setup.dist\PyQt5\qt-plugins\mediaservice\dsengine.dll"
  File "out\setup.dist\PyQt5\qt-plugins\mediaservice\qtmedia_audioengine.dll"
  File "out\setup.dist\PyQt5\qt-plugins\mediaservice\wmfengine.dll"
  SetOutPath "$INSTDIR\PyQt5\qt-plugins\platforms"
  File "out\setup.dist\PyQt5\qt-plugins\platforms\qminimal.dll"
  File "out\setup.dist\PyQt5\qt-plugins\platforms\qoffscreen.dll"
  File "out\setup.dist\PyQt5\qt-plugins\platforms\qwebgl.dll"
  File "out\setup.dist\PyQt5\qt-plugins\platforms\qwindows.dll"
  SetOutPath "$INSTDIR\PyQt5\qt-plugins\platformthemes"
  File "out\setup.dist\PyQt5\qt-plugins\platformthemes\qxdgdesktopportal.dll"
  SetOutPath "$INSTDIR\PyQt5\qt-plugins\printsupport"
  File "out\setup.dist\PyQt5\qt-plugins\printsupport\windowsprintersupport.dll"
  SetOutPath "$INSTDIR\PyQt5\qt-plugins\styles"
  File "out\setup.dist\PyQt5\qt-plugins\styles\qwindowsvistastyle.dll"
  SetOutPath "$INSTDIR\PyQt5"
  File "out\setup.dist\PyQt5\QtCore.pyd"
  File "out\setup.dist\PyQt5\QtGui.pyd"
  File "out\setup.dist\PyQt5\QtWidgets.pyd"
  File "out\setup.dist\PyQt5\sip.pyd"
  SetOutPath "$INSTDIR"
  File "out\setup.dist\python3.dll"
  File "out\setup.dist\python37.dll"
  File "out\setup.dist\qt5core.dll"
  File "out\setup.dist\qt5dbus.dll"
  File "out\setup.dist\qt5gui.dll"
  File "out\setup.dist\qt5multimedia.dll"
  File "out\setup.dist\qt5network.dll"
  File "out\setup.dist\qt5printsupport.dll"
  File "out\setup.dist\qt5qml.dll"
  File "out\setup.dist\qt5qmlmodels.dll"
  File "out\setup.dist\qt5quick.dll"
  File "out\setup.dist\qt5svg.dll"
  File "out\setup.dist\qt5websockets.dll"
  File "out\setup.dist\qt5widgets.dll"
  File "out\setup.dist\select.pyd"
  File "out\setup.dist\setup.exe"
  CreateDirectory "$SMPROGRAMS\日志下载助手"
  CreateShortCut "$SMPROGRAMS\日志下载助手\日志下载助手.lnk" "$INSTDIR\setup.exe"
  CreateShortCut "$DESKTOP\日志下载助手.lnk" "$INSTDIR\setup.exe"
  SetOutPath "$INSTDIR\snzip-1.0.5-win64"
  File "out\setup.dist\snzip-1.0.5-win64\snunzip.exe"
  File "out\setup.dist\snzip-1.0.5-win64\snzip.exe"
  SetOutPath "$INSTDIR"
  File "out\setup.dist\ssleay32.dll"
  File "out\setup.dist\ucrtbase.dll"
  File "out\setup.dist\unicodedata.pyd"
  File "out\setup.dist\vcruntime140.dll"
  File "out\setup.dist\vcruntime140_1.dll"
  File "out\setup.dist\_asyncio.pyd"
  File "out\setup.dist\_bz2.pyd"
  File "out\setup.dist\_cffi_backend.pyd"
  File "out\setup.dist\_ctypes.pyd"
  File "out\setup.dist\_decimal.pyd"
  File "out\setup.dist\_elementtree.pyd"
  File "out\setup.dist\_hashlib.pyd"
  File "out\setup.dist\_lzma.pyd"
  File "out\setup.dist\_multiprocessing.pyd"
  File "out\setup.dist\_overlapped.pyd"
  File "out\setup.dist\_queue.pyd"
  File "out\setup.dist\_socket.pyd"
  File "out\setup.dist\_ssl.pyd"
SectionEnd

Section -AdditionalIcons
  CreateShortCut "$SMPROGRAMS\日志下载助手\Uninstall.lnk" "$INSTDIR\uninst.exe"
SectionEnd

Section -Post
  WriteUninstaller "$INSTDIR\uninst.exe"
  WriteRegStr HKLM "${PRODUCT_DIR_REGKEY}" "" "$INSTDIR\setup.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayName" "$(^Name)"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "UninstallString" "$INSTDIR\uninst.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayIcon" "$INSTDIR\setup.exe"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "DisplayVersion" "${PRODUCT_VERSION}"
  WriteRegStr ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}" "Publisher" "${PRODUCT_PUBLISHER}"
SectionEnd


Function un.onUninstSuccess
  HideWindow
  MessageBox MB_ICONINFORMATION|MB_OK "$(^Name) 已成功地从你的计算机移除。"
FunctionEnd

Function un.onInit
!insertmacro MUI_UNGETLANGUAGE
  MessageBox MB_ICONQUESTION|MB_YESNO|MB_DEFBUTTON2 "你确实要完全移除 $(^Name) ，其及所有的组件？" IDYES +2
  Abort
FunctionEnd

Section Uninstall
  Delete "$INSTDIR\uninst.exe"
  Delete "$INSTDIR\_ssl.pyd"
  Delete "$INSTDIR\_socket.pyd"
  Delete "$INSTDIR\_queue.pyd"
  Delete "$INSTDIR\_overlapped.pyd"
  Delete "$INSTDIR\_multiprocessing.pyd"
  Delete "$INSTDIR\_lzma.pyd"
  Delete "$INSTDIR\_hashlib.pyd"
  Delete "$INSTDIR\_elementtree.pyd"
  Delete "$INSTDIR\_decimal.pyd"
  Delete "$INSTDIR\_ctypes.pyd"
  Delete "$INSTDIR\_cffi_backend.pyd"
  Delete "$INSTDIR\_bz2.pyd"
  Delete "$INSTDIR\_asyncio.pyd"
  Delete "$INSTDIR\vcruntime140_1.dll"
  Delete "$INSTDIR\vcruntime140.dll"
  Delete "$INSTDIR\unicodedata.pyd"
  Delete "$INSTDIR\ucrtbase.dll"
  Delete "$INSTDIR\ssleay32.dll"
  Delete "$INSTDIR\snzip-1.0.5-win64\snzip.exe"
  Delete "$INSTDIR\snzip-1.0.5-win64\snunzip.exe"
  Delete "$INSTDIR\setup.exe"
  Delete "$INSTDIR\select.pyd"
  Delete "$INSTDIR\qt5widgets.dll"
  Delete "$INSTDIR\qt5websockets.dll"
  Delete "$INSTDIR\qt5svg.dll"
  Delete "$INSTDIR\qt5quick.dll"
  Delete "$INSTDIR\qt5qmlmodels.dll"
  Delete "$INSTDIR\qt5qml.dll"
  Delete "$INSTDIR\qt5printsupport.dll"
  Delete "$INSTDIR\qt5network.dll"
  Delete "$INSTDIR\qt5multimedia.dll"
  Delete "$INSTDIR\qt5gui.dll"
  Delete "$INSTDIR\qt5dbus.dll"
  Delete "$INSTDIR\qt5core.dll"
  Delete "$INSTDIR\python37.dll"
  Delete "$INSTDIR\python3.dll"
  Delete "$INSTDIR\PyQt5\sip.pyd"
  Delete "$INSTDIR\PyQt5\QtWidgets.pyd"
  Delete "$INSTDIR\PyQt5\QtGui.pyd"
  Delete "$INSTDIR\PyQt5\QtCore.pyd"
  Delete "$INSTDIR\PyQt5\qt-plugins\styles\qwindowsvistastyle.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\printsupport\windowsprintersupport.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\platformthemes\qxdgdesktopportal.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\platforms\qwindows.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\platforms\qwebgl.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\platforms\qoffscreen.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\platforms\qminimal.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\mediaservice\wmfengine.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\mediaservice\qtmedia_audioengine.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\mediaservice\dsengine.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qwebp.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qwbmp.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qtiff.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qtga.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qsvg.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qjpeg.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qico.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qicns.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\imageformats\qgif.dll"
  Delete "$INSTDIR\PyQt5\qt-plugins\iconengines\qsvgicon.dll"
  Delete "$INSTDIR\pyexpat.pyd"
  Delete "$INSTDIR\nacl\_sodium.pyd"
  Delete "$INSTDIR\msvcp140_1.dll"
  Delete "$INSTDIR\msvcp140.dll"
  Delete "$INSTDIR\libssl-1_1.dll"
  Delete "$INSTDIR\libeay32.dll"
  Delete "$INSTDIR\libcrypto-1_1.dll"
  Delete "$INSTDIR\cryptography\hazmat\bindings\_rust.pyd"
  Delete "$INSTDIR\cryptography\hazmat\bindings\_openssl.pyd"
  Delete "$INSTDIR\config\line_conf.ini"
  Delete "$INSTDIR\concrt140.dll"
  Delete "$INSTDIR\bcrypt\_bcrypt.pyd"
  Delete "$INSTDIR\api-ms-win-crt-utility-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-time-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-string-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-stdio-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-runtime-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-process-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-math-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-locale-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-heap-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-filesystem-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-environment-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-convert-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-crt-conio-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-util-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-timezone-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-sysinfo-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-synch-l1-2-0.dll"
  Delete "$INSTDIR\api-ms-win-core-synch-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-string-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-rtlsupport-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-profile-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-processthreads-l1-1-1.dll"
  Delete "$INSTDIR\api-ms-win-core-processthreads-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-processenvironment-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-namedpipe-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-memory-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-localization-l1-2-0.dll"
  Delete "$INSTDIR\api-ms-win-core-libraryloader-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-interlocked-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-heap-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-handle-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-file-l2-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-file-l1-2-0.dll"
  Delete "$INSTDIR\api-ms-win-core-file-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-errorhandling-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-debug-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-datetime-l1-1-0.dll"
  Delete "$INSTDIR\api-ms-win-core-console-l1-1-0.dll"

  Delete "$SMPROGRAMS\日志下载助手\Uninstall.lnk"
  Delete "$DESKTOP\日志下载助手.lnk"
  Delete "$SMPROGRAMS\日志下载助手\日志下载助手.lnk"

  RMDir "$SMPROGRAMS\日志下载助手"
  RMDir "$INSTDIR\snzip-1.0.5-win64"
  RMDir "$INSTDIR\PyQt5\qt-plugins\styles"
  RMDir "$INSTDIR\PyQt5\qt-plugins\printsupport"
  RMDir "$INSTDIR\PyQt5\qt-plugins\platformthemes"
  RMDir "$INSTDIR\PyQt5\qt-plugins\platforms"
  RMDir "$INSTDIR\PyQt5\qt-plugins\mediaservice"
  RMDir "$INSTDIR\PyQt5\qt-plugins\imageformats"
  RMDir "$INSTDIR\PyQt5\qt-plugins\iconengines"
  RMDir "$INSTDIR\PyQt5"
  RMDir "$INSTDIR\nacl"
  RMDir "$INSTDIR\cryptography\hazmat\bindings"
  RMDir "$INSTDIR\config"
  RMDir "$INSTDIR\bcrypt"
  RMDir "$INSTDIR"

  DeleteRegKey ${PRODUCT_UNINST_ROOT_KEY} "${PRODUCT_UNINST_KEY}"
  DeleteRegKey HKLM "${PRODUCT_DIR_REGKEY}"
  SetAutoClose true
SectionEnd