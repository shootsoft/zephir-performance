
extern zend_class_entry *zephirperformance_zephirperformance_ce;

ZEPHIR_INIT_CLASS(ZephirPerformance_ZephirPerformance);

PHP_METHOD(ZephirPerformance_ZephirPerformance, guid);
PHP_METHOD(ZephirPerformance_ZephirPerformance, batch);

ZEND_BEGIN_ARG_INFO_EX(arginfo_zephirperformance_zephirperformance_batch, 0, 0, 0)
	ZEND_ARG_INFO(0, count)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(zephirperformance_zephirperformance_method_entry) {
	PHP_ME(ZephirPerformance_ZephirPerformance, guid, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(ZephirPerformance_ZephirPerformance, batch, arginfo_zephirperformance_zephirperformance_batch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
  PHP_FE_END
};
