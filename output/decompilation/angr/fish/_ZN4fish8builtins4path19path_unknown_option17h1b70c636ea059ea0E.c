void fish::builtins::path::path_unknown_option(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x80]
    void* v5;  // [bp-0x78], Other Possible Types: unsigned long long
    char v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x40]
    unsigned long long v12;  // rdx

    a1.append("p", 5);
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = 1;
    v4 = a2;
    v5 = a3;
    v6 = 1;
    v7 = a4;
    v8 = a5;
    fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14c5fc8[0].localize(), v12, ".", &v3, 2);
    v9.unwrap(&g_14cae28);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v3);
    memcpy(&v3, &v0, 16);
    v5 = 0;
    a1.append(&v3);
    fish::builtins::shared::builtin_print_error_trailer(a0, a1, "p", 4);
    return;
}
