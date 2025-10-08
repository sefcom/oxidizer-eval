long long fish::builtins::return::parse_return_value(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    void* v0;  // [bp-0xa8], Other Possible Types: char
    unsigned int v1;  // [bp-0xa7]
    unsigned short v2;  // [bp-0xa3]
    char v3;  // [bp-0xa1]
    unsigned long long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x90]
    int v7;  // [bp-0x88], Other Possible Types: char
    char v8;  // [bp-0x88]
    unsigned int v9;  // [bp-0x87]
    char v10;  // [bp-0x84]
    unsigned short v11;  // [bp-0x83]
    char v12;  // [bp-0x81]
    unsigned long long v13;  // [bp-0x80]
    void* v14;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long long v15;  // [bp-0x70]
    char v16;  // [bp-0x68]
    int v17;  // [bp-0x60]
    void* v18;  // [bp-0x48], Other Possible Types: char
    unsigned long long v19;  // [bp-0x40]
    void* v20;  // [bp-0x38]
    unsigned long long v22;  // r15
    unsigned long v23;  // r14
    unsigned long long v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long v26;  // cc_dep1
    unsigned long v27;  // cc_ndep
    unsigned long v28;  // r12
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    int v33;  // xmm0
    unsigned long long v34;  // rdx

    if (!a1)
        core::panicking::panic_bounds_check(0, 0, &g_14cc5b8); /* do not return */
    v22 = a0->field_0;
    v23 = a0->field_8;
    fish::builtins::return::parse_options(&v7, a0, a1, a2, a3);
    if (v7 == 2)
    {
        v24 = *((int *)&v10);
        v25 = 1;
    }
    else
    {
        v26 = v7 & 1;
        if ((v7 & 1))
        {
            v24 = fish::builtins::shared::builtin_print_help(a2, a3, v22, v23);
            v25 = 0;
        }
        else
        {
            if ((char)_ccall(4, 24, v13 + 1, 0, _ccall(17, v26, 0, v27)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14cc5d0); /* do not return */
            if (v13 + 1 < a1)
            {
                v28 = a3->field_10;
                v0 = 0;
                v4 = 4;
                v5 = 0;
                v8 = 1;
                v13 = v22;
                v14 = v23;
                fish_printf::printf_impl::sprintf_locale(&v18, &(char)v0, g_14c6510[0].localize(), v30, ".", &v8, 1);
                v18.unwrap(&g_14cc630);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
                *((int128_t *)&v7) = *((int128_t *)&v0);
                goto LABEL_13680f3;
            }
            if (v13 == a1)
            {
                v24 = a2.get_last_status();
                goto LABEL_136825c;
            }
            else
            {
                if (!((char)_ccall(2, 8, v13, a1, _ccall(17, v26, 0, v27))))
                    core::panicking::panic_bounds_check(v13, a1, &g_14cc5e8); /* do not return */
                v31 = fish::wutil::wcstoi::fish_wcstoi((&a0->field_0)[2 * v13], (&a0->field_8)[2 * v13]);
                if (((char)v31 & 1))
                {
                    v28 = a3->field_10;
                    v18 = 0;
                    v19 = 4;
                    v20 = 0;
                    v32 = g_14c83b8[0].localize();
                    v4 = v22;
                    v5 = v23;
                    v0 = 1;
                    if (a1 == 1)
                        core::panicking::panic_bounds_check(1, 1, &g_14cc600); /* do not return */
                    v33 = a0->field_10;
                    v8 = v0;
                    v9 = v1;
                    v11 = v2;
                    v12 = v3;
                    v13 = v4;
                    v14 = v5;
                    v15 = v6;
                    v16 = 1;
                    v17 = v33;
                    fish_printf::printf_impl::sprintf_locale(&v0, &v18, v32, v34, ".", &v8, 2);
                    v0.unwrap(&g_14cc618);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v8);
                    *((int128_t *)&v7) = *((int128_t *)&v18);
LABEL_13680f3:
                    v14 = 0;
                    v28.append(&v8);
                    fish::builtins::shared::builtin_print_error_trailer(a2, v28, v22, v23);
                    v25 = 1;
                    v24 = 2;
                }
                else
                {
                    v24 = v31 >> 32;
LABEL_136825c:
                    v25 = 2;
                }
            }
        }
    }
    return v24 * 0x100000000 | v25;
}
