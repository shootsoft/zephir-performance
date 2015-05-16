
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(ZephirPerformance_ZephirPerformance) {

	ZEPHIR_REGISTER_CLASS(ZephirPerformance, ZephirPerformance, zephirperformance, zephirperformance, zephirperformance_zephirperformance_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(ZephirPerformance_ZephirPerformance, guid) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_3 = NULL, *_11 = NULL;
	zval _0 = zval_used_for_init, _1 = zval_used_for_init, *_2 = NULL, *_4 = NULL, *_5 = NULL, *_6 = NULL, *_7 = NULL, *_8 = NULL, *_9 = NULL, *_10 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, 0);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_LONG(&_1, 65535);
	ZEPHIR_CALL_FUNCTION(&_2, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, 0);
	ZEPHIR_SINIT_NVAR(_1);
	ZVAL_LONG(&_1, 65535);
	ZEPHIR_CALL_FUNCTION(&_4, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, 0);
	ZEPHIR_SINIT_NVAR(_1);
	ZVAL_LONG(&_1, 65535);
	ZEPHIR_CALL_FUNCTION(&_5, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, 16384);
	ZEPHIR_SINIT_NVAR(_1);
	ZVAL_LONG(&_1, 20479);
	ZEPHIR_CALL_FUNCTION(&_6, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, 32768);
	ZEPHIR_SINIT_NVAR(_1);
	ZVAL_LONG(&_1, 49151);
	ZEPHIR_CALL_FUNCTION(&_7, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, 0);
	ZEPHIR_SINIT_NVAR(_1);
	ZVAL_LONG(&_1, 65535);
	ZEPHIR_CALL_FUNCTION(&_8, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, 0);
	ZEPHIR_SINIT_NVAR(_1);
	ZVAL_LONG(&_1, 65535);
	ZEPHIR_CALL_FUNCTION(&_9, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, 0);
	ZEPHIR_SINIT_NVAR(_1);
	ZVAL_LONG(&_1, 65535);
	ZEPHIR_CALL_FUNCTION(&_10, "mt_rand", &_3, &_0, &_1);
	zephir_check_call_status();
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_STRING(&_0, "%04X%04X-%04X-%04X-%04X-%04X%04X%04X", 0);
	ZEPHIR_RETURN_CALL_FUNCTION("sprintf", &_11, &_0, _2, _4, _5, _6, _7, _8, _9, _10);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(ZephirPerformance_ZephirPerformance, batch) {

	zephir_fcall_cache_entry *_0 = NULL;
	zval *count_param = NULL, *guid = NULL;
	int count, i = 0, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &count_param);

	if (!count_param) {
		count = 1;
	} else {
		count = zephir_get_intval(count_param);
	}


	while (1) {
		if (!(i < count)) {
			break;
		}
		ZEPHIR_CALL_SELF(&guid, "guid", &_0);
		zephir_check_call_status();
		i += 1;
	}
	ZEPHIR_MM_RESTORE();

}

