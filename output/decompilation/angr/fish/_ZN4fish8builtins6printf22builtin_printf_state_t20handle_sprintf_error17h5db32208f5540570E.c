void fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(unsigned long long a0, char a1)
{
    char v0;  // [bp-0x49]
    unsigned long long v1[3];  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char *v3;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x30]
    void* v5;  // [bp-0x28]
    char *v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v10;  // rdx

    v0 = a1;
    if (a1 != 4)
    {
        v6 = &v0;
        v7 = <fish_printf::printf_impl::Error as core::fmt::Debug>::fmt;
        *(v1) = &g_14cb2f0;
        v2 = 1;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        core::panicking::panic_fmt(&v1, &g_14cb300); /* do not return */
    }
    v2 = "N";
    v3 = 19;
    *(v1) = 0x8000000000000000;
    fish::builtins::printf::builtin_printf_state_t::fatal_error(a0, v1.localize(), v10);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
    return;
}
