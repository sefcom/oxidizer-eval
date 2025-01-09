long long uu_test::uu_app::h10b434699cb68342(unsigned long long a0)
{
    char v0;  // [bp-0x5c0]
    char v1;  // [bp-0x5a8]
    char v2;  // [bp-0x2e0]
    unsigned long long v4;  // rdx

    clap_builder::builder::command::Command::new::h86888fb9719c6feb(&v1, uucore::util_name::h60d842bf27b05e82(), v4);
    clap_builder::builder::command::Command::version::h11223c262ea6b3ba(&v2, &v1, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h3fae39b5d41a86a0(&v1, &v2, "Check file types and compare values.", 36);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "test EXPRESSION\n[\n[ EXPRESSION ]\n[ ]\n[ OPTION\n]", 47);
    clap_builder::builder::command::Command::override_usage::h5fcf5729777e988c(&v2, &v1, &v0);
    clap_builder::builder::command::Command::after_help::ha5016ec00ea585ed(a0, &v2, "Exit with the status determined by EXPRESSION.\n\nAn omitted EXPRESSION defaults to false.\nOtherwise, EXPRESSION is true or false and sets exit status. \n\nIt is one of:\n\n* ( EXPRESSION )               EXPRESSION is true\n* ! EXPRESSION                 EXPRESSION is false\n* EXPRESSION1 -a EXPRESSION2   both EXPRESSION1 and EXPRESSION2 are true\n* EXPRESSION1 -o EXPRESSION2   either EXPRESSION1 or EXPRESSION2 is true\n\nString operations:\n* -n STRING            the length of STRING is nonzero\n* STRING               equivalent to -n STRING\n* -z STRING            the length of STRING is zero\n* STRING1 = STRING2    the strings are equal\n* STRING1 != STRING2   the strings are not equal\n\nInteger comparisons:\n* INTEGER1 -eq INTEGER2   INTEGER1 is equal to INTEGER2\n* INTEGER1 -ge INTEGER2   INTEGER1 is greater than or equal to INTEGER2\n* INTEGER1 -gt INTEGER2   INTEGER1 is greater than INTEGER2\n* INTEGER1 -le INTEGER2   INTEGER1 is less than or equal to INTEGER2\n* INTEGER1 -lt INTEGER2   INTEGER1 is less than INTEGER2\n* INTE", 3055);
    return a0;
}
