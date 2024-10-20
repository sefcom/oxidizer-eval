long long uu_test::uu_app::hfde9d9823e7fec0d(unsigned long long a0)
{
    char v0;  // [bp-0x888]
    char v1;  // [bp-0x880]
    char v2;  // [bp-0x870]
    unsigned long v3;  // [sp-0x6a0], Other Possible Types: unsigned long long
    int v4;  // [bp-0x698], Other Possible Types: char
    int v5;  // [sp-0x5a8]
    char v6;  // [bp-0x2d8]
    unsigned long long v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    unsigned long long v10;  // r14
    unsigned long long v11;  // rsi

    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    clap_builder::builder::command::Command::new::ha7c28bf6a44ca7ab(&v6, g_4e60e0, g_4e60e8);
    v7 = "0.0.27Check file types and compare values.test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit status. \n\nIt is one of:\n\n";
    v8 = 6;
    clap_builder::builder::command::Command::about::hfb0208f52a55da42(&v2, &v6, "Check file types and compare values.test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit status. \n\nIt is one of:\n\n* ( EX", 36);
    uucore::format_usage::ha88dc4d716cb78ed(&v0, "test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit status. \n\nIt is one of:\n\n* ( EXPRESSION )               EXPRESSION ", 47);
    v10 = *((long long *)&v0);
    if (v10 != 0x8000000000000000)
        *((int128_t *)&v5) = *((int128_t *)&v1);
    v11 = v3;
    if (v11 != 0x8000000000000000 && v11)
        __rust_dealloc(*((long long *)&v4));
    v3 = v10;
    v4 = v5;
    memcpy(&v5, &v2, 712);
    clap_builder::builder::command::Command::after_help::h3a6b8ce1115fced7(a0, &v5, "Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit status. \n\nIt is one of:\n\n* ( EXPRESSION )               EXPRESSION is true\n* ! EXPRESSION                 EXPRESSION is false\n* EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n* EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n\nString operations:\n* -n STRING            the length of STRING is nonzero\n* STRING               equivalent to -n STRING\n* -z STRING            the length of STRING is zero\n* STRING1 = STRING2    the strings are equal\n* STRING1 != STRING2   the strings are not equal\n\nInteger comparisons:\n* INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n* INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n* INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n* INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n* INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n* INTE", 3055);
    return a0;
}
