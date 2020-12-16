#############################################################################
# Makefile for building: eMarket
# Generated by qmake (3.1) (Qt 5.13.2)
# Project:  eMarket.pro
# Template: app
# Command: D:\myQT\5.13.2\mingw73_64\bin\qmake.exe -o Makefile eMarket.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = D:\myQT\5.13.2\mingw73_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = D:\myQT\5.13.2\mingw73_64\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = D:\myQT\5.13.2\mingw73_64\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: eMarket.pro ../../myQT/5.13.2/mingw73_64/mkspecs/win32-g++/qmake.conf ../../myQT/5.13.2/mingw73_64/mkspecs/features/spec_pre.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/qdevice.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/device_config.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/common/sanitize.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/common/gcc-base.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/common/g++-base.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/common/angle.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/common/windows-vulkan.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/common/g++-win32.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/common/windows-desktop.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/qconfig.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3danimation.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3danimation_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dcore.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dcore_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dextras.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dextras_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dinput.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dinput_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dlogic.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquick.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquick_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickextras.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickinput.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickrender.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3drender.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3drender_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axbase.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axbase_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axcontainer.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axserver.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axserver_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bluetooth.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bodymovin_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_charts.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_charts_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_concurrent.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_core.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_core_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_datavisualization.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_datavisualization_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_dbus.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_dbus_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_designer.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_designer_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_edid_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_egl_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gamepad.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gamepad_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gui.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gui_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_help.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_help_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_location.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_location_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimedia.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_network.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_network_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_networkauth.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_networkauth_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_nfc.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_nfc_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_opengl.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_opengl_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_openglextensions.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioning.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioning_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioningquick.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioningquick_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_printsupport.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_purchasing.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_purchasing_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qml.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qml_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmltest.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quick.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quick_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_remoteobjects.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_repparser.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_repparser_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_scxml.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_scxml_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sensors.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sensors_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialbus.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialbus_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialport.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialport_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sql.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sql_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_svg.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_svg_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_testlib.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_testlib_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_texttospeech.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_texttospeech_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_uiplugin.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_uitools.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_uitools_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_virtualkeyboard.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_virtualkeyboard_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_vulkan_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_webchannel.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_websockets.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_websockets_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_widgets.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_widgets_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_winextras.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_winextras_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xml.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xml_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/qt_functions.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/qt_config.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/win32-g++/qmake.conf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/spec_post.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/exclusive_builds.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/toolchain.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/default_pre.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/default_pre.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/resolve_config.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/exclusive_builds_post.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/default_post.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/qml_debug.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/precompile_header.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/warn_on.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/qt.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/resources.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/moc.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/opengl.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/uic.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/qmake_use.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/file_copies.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/windows.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/testcase_targets.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/exceptions.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/yacc.prf \
		../../myQT/5.13.2/mingw73_64/mkspecs/features/lex.prf \
		eMarket.pro \
		../../myQT/5.13.2/mingw73_64/lib/Qt5Widgets.prl \
		../../myQT/5.13.2/mingw73_64/lib/Qt5Gui.prl \
		../../myQT/5.13.2/mingw73_64/lib/Qt5Sql.prl \
		../../myQT/5.13.2/mingw73_64/lib/Qt5Core.prl \
		../../myQT/5.13.2/mingw73_64/lib/qtmain.prl
	$(QMAKE) -o Makefile eMarket.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
../../myQT/5.13.2/mingw73_64/mkspecs/features/spec_pre.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/qdevice.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/features/device_config.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/common/sanitize.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/common/gcc-base.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/common/g++-base.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/common/angle.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/common/windows-vulkan.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/common/g++-win32.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/common/windows-desktop.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/qconfig.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3danimation.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3danimation_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dcore.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dcore_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dextras.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dextras_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dinput.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dinput_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dlogic.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dlogic_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquick.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquick_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickextras.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickinput.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickrender.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3drender.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_3drender_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axbase.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axbase_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axcontainer.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axserver.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_axserver_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bluetooth.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bodymovin_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_charts.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_charts_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_concurrent.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_concurrent_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_core.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_core_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_datavisualization.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_datavisualization_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_dbus.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_dbus_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_designer.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_designer_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_edid_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_egl_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_fb_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gamepad.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gamepad_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gui.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_gui_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_help.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_help_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_location.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_location_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimedia.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimedia_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_network.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_network_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_networkauth.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_networkauth_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_nfc.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_nfc_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_opengl.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_opengl_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_openglextensions.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioning.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioning_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioningquick.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_positioningquick_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_printsupport.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_printsupport_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_purchasing.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_purchasing_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qml.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qml_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmltest.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qmltest_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quick.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quick_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickwidgets.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_remoteobjects.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_remoteobjects_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_repparser.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_repparser_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_scxml.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_scxml_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sensors.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sensors_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialbus.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialbus_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialport.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_serialport_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sql.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_sql_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_svg.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_svg_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_testlib.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_testlib_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_texttospeech.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_texttospeech_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_theme_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_uiplugin.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_uitools.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_uitools_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_virtualkeyboard.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_virtualkeyboard_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_vulkan_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_webchannel.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_webchannel_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_websockets.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_websockets_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_widgets.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_widgets_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_windowsuiautomation_support_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_winextras.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_winextras_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xml.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xml_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../myQT/5.13.2/mingw73_64/mkspecs/features/qt_functions.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/qt_config.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/win32-g++/qmake.conf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/spec_post.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/exclusive_builds.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/toolchain.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/default_pre.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/default_pre.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/resolve_config.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/exclusive_builds_post.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/default_post.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/qml_debug.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/precompile_header.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/warn_on.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/qt.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/resources.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/moc.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/opengl.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/uic.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/qmake_use.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/file_copies.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/win32/windows.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/testcase_targets.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/exceptions.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/yacc.prf:
../../myQT/5.13.2/mingw73_64/mkspecs/features/lex.prf:
eMarket.pro:
../../myQT/5.13.2/mingw73_64/lib/Qt5Widgets.prl:
../../myQT/5.13.2/mingw73_64/lib/Qt5Gui.prl:
../../myQT/5.13.2/mingw73_64/lib/Qt5Sql.prl:
../../myQT/5.13.2/mingw73_64/lib/Qt5Core.prl:
../../myQT/5.13.2/mingw73_64/lib/qtmain.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile eMarket.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
