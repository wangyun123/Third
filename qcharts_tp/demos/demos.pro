CURRENTLY_BUILDING_COMPONENTS = "demos"
!include( ../config.pri ) {
    error( "Couldn't find the config.pri file!" )
}

TEMPLATE = subdirs
SUBDIRS += chartthemes \
           piechartcustomization \
           qmlchart \
           dynamicspline
