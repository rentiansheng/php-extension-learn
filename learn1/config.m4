PHP_ARG_WITH(reage, for reage support,
Make sure that the comment is aligned:
[  --with-reage             Include reage support])
if test $PHP_REAGE != "no"; then
    PHP_SUBST(REAGE_SHARED_LIBADD)
    PHP_NEW_EXTENSION(reage, reage.c, $ext_shared)
fi
