long long fish::builtins::argparse::argparse(unsigned long long a0, struct_0 *a1, unsigned long long a2[2], unsigned long a3)
{
    unsigned long v0;  // [bp-0x230]
    void* v1;  // [bp-0x228]
    char v2;  // [bp-0x220]
    char v3;  // [bp-0x133]
    char v4;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    uint128_t v7;  // [bp-0x110]
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rbp
    void* v11;  // rcx
    void* v12;  // rax
    unsigned long long v13;  // r14
    void* v14;  // rax
    unsigned long v15;  // rdi
    unsigned long long v16;  // rax

    if (!a3)
        return 8589934593;
    v0 = a2[1];
    v2.new();
    v1 = 0;
    v9 = fish::builtins::argparse::parse_cmd_opts(&v2, &v1, a3, a2, a3, a0, a1);
    if (((char)v9 & 1))
    {
        fish::builtins::shared::builtin_print_error_trailer(a0, a1->field_10, a2[0], v0);
        v10 = v9 & 0x300000000;
        v11 = (unsigned int)v9 & 0xffff0000;
        v12 = (unsigned int)v9 & 0xff00;
        v13 = v9 & 4294967295;
    }
    else if (v3)
    {
        fish::builtins::shared::builtin_print_help(a0, a1, a2[0], v0);
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
    }
    else
    {
        v10 = 0x100000000;
        v13 = 1;
        if (((char)fish::builtins::argparse::parse_exclusive_args(&v2, a1->field_10) & 1))
        {
LABEL_133c473:
            v11 = 0;
            goto LABEL_133c4d6;
        }
        else
        {
            v14 = v1;
            if (!v14)
            {
                v4 = &g_14c73c0;
                v5 = 1;
                v6 = 8;
                v7 = 0;
                core::panicking::panic_fmt(&v4, &g_14c73d0); /* do not return */
            }
            v15 = v14 - 1;
            if (a3 < v15)
                core::slice::index::slice_start_index_len_fail(v15, a3, &g_14c7400); /* do not return */
            if (a3 < v14)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c73e8); /* do not return */
            v16 = fish::builtins::argparse::argparse_parse_args(&v2, &a2[v15], a3 - v15, a3 - v14 + 1, a0, a1);
            if (((char)v16 & 1))
            {
                v11 = 0;
                v10 = v16 & 0xffffffff00000000;
LABEL_133c4d6:
                v12 = 0;
            }
            else
            {
                if (!((char)fish::builtins::argparse::check_min_max_args_constraints(&v2, a1->field_10) & 1))
                {
                    memcpy(&v4, &v2, 248);
                    fish::builtins::argparse::set_argparse_result_vars(a0 + 472, &v4);
                    return 0;
                }
                goto LABEL_133c473;
            }
        }
    }
    core::ptr::drop_in_place<fish::builtins::argparse::ArgParseCmdOpts>(&v2);
    return v10 | v11 | v12 | v13;
}
