void fish::builtins::shared::builtin_unexpected_argument(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
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
    unsigned long long v11;  // rdx

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = 1;
    v4 = a2;
    v5 = a3;
    v6 = 1;
    v7 = a4;
    v8 = a5;
    fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14c6058[0].localize(), v11, ".", &v3, 2, 0);
    v9.unwrap(&g_14c6070);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v3);
    memcpy(&v3, &v0, 16);
    v5 = 0;
    a1->field_10.append(&v3);
    if (!a6)
        return;
    fish::builtins::shared::builtin_print_error_trailer(a0, a1->field_10, a2, a3);
    return;
}
