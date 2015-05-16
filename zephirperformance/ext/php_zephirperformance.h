
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_ZEPHIRPERFORMANCE_H
#define PHP_ZEPHIRPERFORMANCE_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_ZEPHIRPERFORMANCE_NAME        "zephirperformance"
#define PHP_ZEPHIRPERFORMANCE_VERSION     "0.0.1"
#define PHP_ZEPHIRPERFORMANCE_EXTNAME     "zephirperformance"
#define PHP_ZEPHIRPERFORMANCE_AUTHOR      ""
#define PHP_ZEPHIRPERFORMANCE_ZEPVERSION  "0.6.2a"
#define PHP_ZEPHIRPERFORMANCE_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(zephirperformance)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(zephirperformance)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(zephirperformance)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(zephirperformance_globals_id, zend_zephirperformance_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (zephirperformance_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_zephirperformance_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(zephirperformance_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(zephirperformance_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def zephirperformance_globals
#define zend_zephir_globals_def zend_zephirperformance_globals

extern zend_module_entry zephirperformance_module_entry;
#define phpext_zephirperformance_ptr &zephirperformance_module_entry

#endif
