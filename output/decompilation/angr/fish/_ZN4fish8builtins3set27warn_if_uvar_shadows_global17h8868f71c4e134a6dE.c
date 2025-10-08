long long fish::builtins::set::warn_if_uvar_shadows_global(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, struct_0 *a6)
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
    unsigned long long v10;  // rax
    unsigned long long v12;  // rdx
    unsigned long v13;  // rax

    if (!(a2 & 1))
    {
        return v13;
    }
    else if (a6->field_5a == 1)
    {
        v3.getf(&a6[5].padding_0[17], a3, a4, 4);
        v10 = core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v3);
        if (!*((long long *)&v3))
            return v10;
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3 = 1;
        v4 = a0;
        v5 = a1;
        v6 = 1;
        v7 = a3;
        v8 = a4;
        fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14cc960[0].localize(), v12, ".", &v3, 2, 0);
        v9.unwrap(&g_14cc978);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v3);
        memcpy(&v3, &v0, 16);
        v5 = 0;
        return (unsigned long long)a5.append(&v3);
    }
    else
    {
        return v13;
    }
}
