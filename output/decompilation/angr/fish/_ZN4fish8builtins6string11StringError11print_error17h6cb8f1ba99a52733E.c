void fish::builtins::string::StringError::print_error(unsigned long long *a0, unsigned long long a1[2], unsigned long long a2, unsigned long long a3, struct_0 *a4, unsigned long long a5, unsigned long long a6, unsigned long a7)
{
    char v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x9f]
    unsigned short v2;  // [bp-0x9b]
    char v3;  // [bp-0x99]
    unsigned long long v4;  // [bp-0x98]
    unsigned long v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    void* v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    void* v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    unsigned int v11;  // [bp-0x67]
    unsigned short v12;  // [bp-0x63]
    char v13;  // [bp-0x61]
    unsigned long long v14;  // [bp-0x60]
    void* v15;  // [bp-0x58], Other Possible Types: unsigned long
    unsigned long long v16;  // [bp-0x50]
    char v17;  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    unsigned long long v19;  // [bp-0x38]
    unsigned long v20;  // rbx
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long v24;  // rdi

    if (!a2)
        core::panicking::panic_bounds_check(0, 0, &g_14d4388); /* do not return */
    v20 = *(a0) + 9223372036854775809;
    if (*(a0) >= 9223372036854775810)
        v20 = 0;
    if (!v20)
    {
        a4->field_10.append("s", 7);
        a4->field_10.append(a0);
        return;
    }
    v21 = a1[0];
    if (v20 == 1)
    {
        a4->field_10.append("s", 7);
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v22 = g_14c83b8[0].localize();
        v4 = v21;
        v5 = a1[1];
        v0 = 1;
        if (!a5)
            core::option::unwrap_failed(&g_14d43a0); /* do not return */
        v15 = v5;
        v16 = v6;
        v10 = v0;
        v11 = v1;
        v12 = v2;
        v13 = v3;
        v14 = v4;
        v17 = 1;
        v18 = a5;
        v19 = a6;
        fish_printf::printf_impl::sprintf_locale(&v0, &v7, v22, v23, ".", &v10, 2, *((long long *)&v0), v21);
        v0.unwrap(&g_14d43b8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v10);
        memcpy(&v10, &v7, 16);
        v15 = 0;
        a4->field_10.append(&v10);
        return;
    }
    else
    {
        v24 = a7 - 1;
        if (a7 < 1)
        {
            core::panicking::panic_const::panic_const_sub_overflow(&g_14d43d0); /* do not return */
        }
        else if (v24 < a2)
        {
            fish::builtins::string::string_unknown_option(a3, a4, v21, a1[1], a1[v24], a1[v24 + 1]);
            return;
        }
        else
        {
            core::panicking::panic_bounds_check(v24, a2, &g_14d43e8); /* do not return */
        }
    }
}
