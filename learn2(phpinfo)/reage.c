#include "php_reage.h"
#include "ext/standard/info.h"

//加载config.h,如果有配置项
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

PHP_MINFO_FUNCTION(reage_info) {
    php_info_print_table_start();
    php_info_print_table_header(2, "key", "value");
    php_info_print_table_row(2, "author", "Reage");
    php_info_print_table_end();
}

//module entry
zend_module_entry reage_module_entry = {
    STANDARD_MODULE_HEADER,
    "reage",//扩展的名字
    NULL, // functions
    NULL, // minit
    NULL, //mshutdown
    NULL, //rinit
    NULL, //rshutdown
    PHP_MINFO(reage_info),
    "0.0.1", //版本号
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_REAGE
ZEND_GET_MODULE(reage)
#endif


