long long fish::terminal::osc_133_command_start(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    char *v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    char *v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    void* v6;  // [bp-0x50]
    char v7;  // [bp-0x40]
    unsigned long long v9;  // rax

    v9 = fish::future_feature_flags::test(6);
    if (!(char)v9)
        return v9;
    fish::common::escape_string(&v7, a1, a2, 1);
    v0 = &v7;
    v1 = <widestring::utfstring::Utf32String as core::fmt::Display>::fmt;
    v2 = &g_14e2a38;
    v3 = 2;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    fish::common::do_write_to_output(a0, &v2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
    return v9 & 4294967295;
}
