
LIBRARY_NAME = QtCommercialChart

##################### SHADOW CONFIG #################################################

!contains($${PWD}, $${OUT_PWD}){
    search = "$$PWD:::"
    temp = $$split(search,"/")    
    temp = $$last(temp)
    path = $$replace(search,$$temp,'')
    temp = $$split(OUT_PWD,$$path)
    temp = $$split(temp,'/')
    temp = $$first(temp)
    path = "$${path}$${temp}"
    SHADOW=$$path   
}else{
    SHADOW=$$PWD
    CONFIG-=development_build 
}

##################### BUILD PATHS ##################################################

CHART_BUILD_PUBLIC_HEADER_DIR = $$SHADOW/include
CHART_BUILD_PRIVATE_HEADER_DIR = $$CHART_BUILD_PUBLIC_HEADER_DIR/private
CHART_BUILD_LIB_DIR = $$SHADOW/lib
CHART_BUILD_DIR = $$SHADOW/build
CHART_BUILD_BIN_DIR = $$SHADOW/bin
CHART_BUILD_PLUGIN_DIR = $$CHART_BUILD_BIN_DIR/QtCommercial/Chart
CHART_BUILD_DOC_DIR = $$SHADOW/doc

win32:{
    CHART_BUILD_PUBLIC_HEADER_DIR = $$replace(CHART_BUILD_PUBLIC_HEADER_DIR, "/","\\")
    CHART_BUILD_PRIVATE_HEADER_DIR = $$replace(CHART_BUILD_PRIVATE_HEADER_DIR, "/","\\")
    CHART_BUILD_BUILD_DIR = $$replace(CHART_BUILD_BUILD_DIR, "/","\\")
    CHART_BUILD_BIN_DIR = $$replace(CHART_BUILD_BIN_DIR, "/","\\")
    CHART_BUILD_PLUGIN_DIR = $$replace(CHART_BUILD_PLUGIN_DIR, "/","\\")
    CHART_BUILD_DOC_DIR = $$replace(CHART_BUILD_DOC_DIR, "/","\\")
    CHART_BUILD_LIB_DIR = $$replace(CHART_BUILD_LIB_DIR, "/","\\")
}

mac: {
    # TODO: The following qmake flags are a work-around to make QtCommercial Charts compile on
    # QtCommercial 4.8. On the other hand Charts builds successfully with Qt open source 4.8
    # without these definitions, so this is probably a configuration issue on QtCommercial 4.8;
    # it should probably define the minimum OSX version to be 10.5...
    QMAKE_CXXFLAGS *= -mmacosx-version-min=10.5
    QMAKE_LFLAGS *= -mmacosx-version-min=10.5

    CHART_BUILD_LIB_DIR = $$CHART_BUILD_BIN_DIR
}

##################### DEVELOPMENT BUILD ###################################################

development_build: {
    DEFINES+=DEVELOPMENT_BUILD
    CONFIG+=debug_and_release
}


##################### BUILD CONFIG ########################################################

!system_build:{

    INCLUDEPATH += $$CHART_BUILD_PUBLIC_HEADER_DIR

    !win32: {
        LIBS += -L $$CHART_BUILD_LIB_DIR -Wl,-rpath,$$CHART_BUILD_LIB_DIR
    }else{
        win32-msvc*: {
            # hack fix for error:
            #   "LINK : fatal error LNK1146: no argument specified with option '/LIBPATH:'"
            QMAKE_LIBDIR += $$CHART_BUILD_LIB_DIR
        }else{
            LIBS += -L $$CHART_BUILD_LIB_DIR
        }
    }

    CONFIG(debug, debug|release) {
      mac: LIBRARY_NAME = $$join(LIBRARY_NAME,,,_debug)
      win32: LIBRARY_NAME = $$join(LIBRARY_NAME,,,d)
    } 
       
    LIBS += -l$$LIBRARY_NAME    

    mac: {
        # This is a hack; we define variables for easier install_name_tool calls from project files of OSX executables/libraries
        # install_name_tool is used to update the dependencies to chart library to match the local build folder
        MAC_CHARTS_LIB_NAME = "lib"$$LIBRARY_NAME".1.dylib"
        CONFIG(debug, debug|release) {
            MAC_CHARTS_LIB_NAME = "lib"$$LIBRARY_NAME".1.dylib"
        }
        MAC_POST_LINK_PREFIX = install_name_tool -change $$MAC_CHARTS_LIB_NAME $$CHART_BUILD_LIB_DIR"/"$$MAC_CHARTS_LIB_NAME
        MAC_DEMOS_BIN_DIR = $$CHART_BUILD_BIN_DIR"/"$$TARGET".app/Contents/MacOS/"$$TARGET
        MAC_EXAMPLES_BIN_DIR = $$CHART_BUILD_BIN_DIR"/"$$TARGET".app/Contents/MacOS/"$$TARGET
        MAC_TESTS_BIN_DIR = $$CHART_BUILD_BIN_DIR"/test/"$$TARGET".app/Contents/MacOS/"$$TARGET
        MAC_AUTOTESTS_BIN_DIR = $$CHART_BUILD_BIN_DIR"/test/tst_"$$TARGET".app/Contents/MacOS/tst_"$$TARGET
        MAC_PLUGINS_BIN_DIR = $$CHART_BUILD_PLUGIN_DIR"/lib"$$TARGET".dylib"
    }

} else {
    CONFIG += qtcommercialchart 
}
