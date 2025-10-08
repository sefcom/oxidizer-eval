long long fish::builtins::argparse::handle_flag(unsigned long long a0, unsigned long long a1[3], unsigned int a2, unsigned int a3, unsigned long long a4[13], unsigned long long a5)
{
    unsigned int v0;  // [bp-0x6c]
    void* v1;  // [sp-0x68], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0x60]
    void* v3;  // [bp-0x58]
    char v4;  // [bp-0x48]
    unsigned long v6;  // rbp
    struct_0 *v7;  // rax
    struct_0 *v8;  // r15
    unsigned long v9;  // rbx
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax
    char *v14;  // rsi
    unsigned long long v15;  // rdi
    void* v16;  // rsi
    unsigned long v17;  // rdi
    unsigned long long v18;  // rdx

    v6 = a3;
    v0 = a2;
    v7 = a1 + 5.get_inner_mut(&v0);
    if (!v7)
        core::option::unwrap_failed(&g_14c7048); /* do not return */
    v8 = v7;
    if (v7->field_4d)
    {
        fish::builtins::argparse::delete_flag(&v1, a4, v6);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
    }
    if ((char)_ccall(0, 24, v8->field_40 + 1, 0, (unsigned long long)(char)(v7->field_4d < 0)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14c7060); /* do not return */
    v9 = &v8->padding_0[8];
    v8->field_40 = v8->field_40 + 1;
    if (!v8->field_4f)
    {
        if (!v8->field_4e)
        {
            core::panicking::panic("assertion failed: opt_spec.accumulate_argsassertion failed: w.woptarg.is_none()assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%", 42, &g_14c7078); /* do not return */
        }
        else if (!a4[11])
        {
            if ((char)v6)
            {
                v1.from_str("--", 2);
                v4.add(&v1, v8->field_20, v8->field_28);
            }
            else
            {
                v4.from(v8->field_48 * 0x100000000 | 45);
            }
            v18 = &g_14c70a8;
            v14 = &v4;
            goto LABEL_133b170;
        }
        else
        {
            core::panicking::panic("assertion failed: w.woptarg.is_none()assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%", 37, &g_14c7090); /* do not return */
        }
    }
    v10 = a4[11];
    if (v10)
    {
        v11 = fish::builtins::argparse::validate_arg(a0, a1[1], a1[2], v9, v6, v10, a4[12], a5);
        if (((char)v11 & 1))
            return v11 & 0xffffffff00000000 | 1;
        if (!v8->field_4e)
            goto LABEL_133b111;
        v1.to_vec(v10, a4[12]);
        v18 = &g_14c70d8;
        goto LABEL_133b146;
    }
    else
    {
        if (v8->field_4e)
        {
            v1 = 0;
            v2 = 4;
            v3 = 0;
            v18 = &g_14c70f0;
            v14 = &v1;
LABEL_133b170:
            v17 = v9;
        }
        else
        {
LABEL_133b111:
            v15 = v8->field_10;
            v16 = v8->field_18;
            v8->field_18 = 0;
            core::ptr::drop_in_place<[widestring::utfstring::Utf32String]>(v15, v16);
            if (!v10)
                return 0;
            v1.to_vec(v10, a4[12]);
            v18 = &g_14c70c0;
LABEL_133b146:
            v17 = v9;
            v14 = &v1;
        }
        v17.push(v14, v18);
        return 0;
    }
}
