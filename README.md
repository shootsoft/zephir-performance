# zephir-performance
A simple performance test for [zephire](http://zephir-lang.com/)

# Compile

Make sure (phpunit)[https://phpunit.de/] and [zephire](http://zephir-lang.com/) has been installed.

- Step 1

  Compile porject

```shell
cd zephireperformance
zephir build
```

- Step 2

  Edit `php.ini` and add

```
extension=zephirperformance.so
```


- Step 3

  Reload php.ini

```
/etc/init.d/php-fpm restart
```

# Run

```
cd tests
phpunit
```