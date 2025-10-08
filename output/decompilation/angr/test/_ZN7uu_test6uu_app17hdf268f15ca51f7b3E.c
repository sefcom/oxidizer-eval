long long uu_test::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x5c0]
    char v1;  // [bp-0x5a8]
    char v2;  // [bp-0x2e0]
    unsigned long long v5;  // rdx

    v1.new(uucore::util_name(), v5);
    v2.version(&v1);
    v1.about(&v2);
    uucore::format_usage(&v0, "test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit status. \n\nIt is one of:\n\n* ( EXPRESSION )               EXPRESSION ", 47);
    v2.override_usage(&v1, &v0);
    a0.after_help(&v2);
    return a0;
}
