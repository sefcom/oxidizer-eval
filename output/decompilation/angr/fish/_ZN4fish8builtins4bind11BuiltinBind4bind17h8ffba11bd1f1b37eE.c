long long fish::builtins::bind::BuiltinBind::bind(struct_0 *a0, unsigned long long a1, unsigned long long a2[3], unsigned long long a3[2], unsigned long a4)
{
    void* v0;  // [bp-0xa0]
    unsigned long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    void* v4;  // [bp-0x80]
    char v5;  // [bp-0x78]
    unsigned long v6;  // [bp-0x70]
    void* v7;  // [bp-0x68], Other Possible Types: unsigned long
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    unsigned long v13;  // rbp
    unsigned long v16;  // rdx
    unsigned long v17;  // rdx
    unsigned long long v19;  // rdx

    if (!a4)
        core::panicking::panic_bounds_check(0, 0, &g_14c7a40); /* do not return */
    v13 = a3[0];
    v1 = a3[1];
    v0 = 0;
    if (((char)fish::builtins::bind::parse_cmd_opts(a0, &v0, a3, a4, a1, a2) & 1))
        return 8589934593;
    if (a0->field_36)
    {
        *((long long *)&a0->field_40).list_modes(a2[1]);
    }
    else if (a0->field_37)
    {
        fish::builtins::shared::builtin_print_help(a1, a2, v13, v1);
    }
    else
    {
        if (!a0->field_3b && a0->field_39 != 1)
            a0->field_3a = 1;
        switch (a0->field_30)
        {
        case 0:
            if ((char)a0.insert(v0, a3, a4, a1, a2))
                return 4294967297;
            break;
        case 1:
            if (a0->field_3a)
            {
                v16 = a4;
                if (v16 < v0)
                {
                    core::slice::index::slice_start_index_len_fail(v0, a4, &g_14c7a70); /* do not return */
                }
                else if ((char)a0.erase(0x10 * v0 + (char *)a3, v16 - v0, a0->field_34, 1, a2[2]))
                {
                    return 4294967297;
                }
            }
            if (a0->field_3c)
            {
                v17 = a4;
                if (v17 < v0)
                {
                    core::slice::index::slice_start_index_len_fail(v0, a4, &g_14c7a58); /* do not return */
                }
                else if ((char)a0.erase((char *)a3 + 0x10 * v0, v17 - v0, a0->field_34, 0, a2[2]))
                {
                    return 4294967297;
                }
            }
            break;
        case 2:
            a2[1].key_names();
            break;
        case 3:
            a2[1].function_names();
            break;
        default:
            v2 = 0;
            v3 = 4;
            v4 = 0;
            v9 = "%";
            v10 = 19;
            v8 = 0x8000000000000000;
            v5 = 1;
            v6 = v13;
            v7 = v1;
            fish_printf::printf_impl::sprintf_locale(&v11, &v2, v8.localize(), v19, ".", &v5, 1);
            v11.unwrap(&g_14c7a88);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v5);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v8);
            memcpy(&v5, &v2, 16);
            v7 = 0;
            a2[2].append(&v5);
            return 4294967297;
        }
        return 0;
    }
    return 0;
}
