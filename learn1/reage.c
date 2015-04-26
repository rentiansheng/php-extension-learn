#include "php_reage.h"
#include "ext/standard/info.h"

//加载config.h,如果有配置项
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif


//module entry
zend_module_entry reage_module_entry = {
    STANDARD_MODULE_HEADER,
    "reage",//扩展的名字
    NULL, // functions
    NULL, // minit
    NULL, //mshutdown
    NULL, //rinit
    NULL, //rshutdown
    NULL,
    "0.0.1", //版本号
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_REAGE
ZEND_GET_MODULE(reage)
#endif
