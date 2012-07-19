TEMPLATE=subdirs
SUBDIRS=\
           checkxmlfiles                \
           cmake                        \
           patternistexamplefiletree    \
           patternistexamples           \
           patternistheaders            \
           qabstractmessagehandler      \
           qabstracturiresolver         \
           qabstractxmlforwarditerator  \
           qabstractxmlnodemodel        \
           qabstractxmlreceiver         \
           qapplicationargumentparser   \
           qautoptr                     \
           qsimplexmlnodemodel          \
           qsourcelocation              \
           qxmlformatter                \
           qxmlitem                     \
           qxmlname                     \
           qxmlnamepool                 \
           qxmlnodemodelindex           \
           qxmlquery                    \
           qxmlresultitems              \
           qxmlschema                   \
           qxmlschemavalidator          \
           qxmlserializer               \
           xmlpatterns                  \
           xmlpatternsdiagnosticsts     \
           xmlpatternsschema            \
           xmlpatternsschemats          \
           xmlpatternssdk               \
           xmlpatternsvalidator         \
           xmlpatternsview              \
           xmlpatternsxqts              \
           xmlpatternsxslts             \

xmlpatternsdiagnosticsts.depends = xmlpatternssdk
xmlpatternsview.depends = xmlpatternssdk
xmlpatternsxslts.depends = xmlpatternssdk
xmlpatternsxqts.depends = xmlpatternssdk
xmlpatternsschemats.depends = xmlpatternssdk
xmlpatternsxqts.depends = xmlpatternssdk

!contains(QT_CONFIG, private_tests): SUBDIRS -= \
           xmlpatternsdiagnosticsts \
           xmlpatternsview \
           xmlpatternsschemats \
           xmlpatternssdk \
           xmlpatternsxqts \
           xmlpatternsxslts \

!cross_compile:                             SUBDIRS += host.pro
