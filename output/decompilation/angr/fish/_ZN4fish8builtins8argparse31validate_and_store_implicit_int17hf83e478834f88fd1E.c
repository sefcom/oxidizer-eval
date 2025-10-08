long long fish::builtins::argparse::validate_and_store_implicit_int(unsigned long long a0, unsigned long long a1[3], unsigned long long a2, unsigned long a3, struct_0 *a4, char a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    int v3;  // [bp-0x40]
    struct_1 *v4;  // rax
    struct_1 *v5;  // r12
    struct_1 *v6;  // r15
    unsigned long long v7;  // rax
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // cc_ndep
    unsigned long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // rcx
    unsigned long v15;  // rdi
    unsigned long v16;  // rsi

    v4 = a1 + 5.get_inner_mut(&a1[9 + 2]);
    if (!v4)
        core::option::unwrap_failed(&g_14c6ef8); /* do not return */
    v5 = v4;
    v6 = v4;
    if (v5->field_4d)
    {
        v7 = a4->field_10;
        if (!v7)
            core::option::unwrap_failed(&g_14c6f10); /* do not return */
        v9 = _ccall(20, v7, 0, v8);
        v10 = v7 - 1;
        a4->field_10 = v10;
        v11 = v10 * 3;
        *((int128_t *)&v3) = *((int128_t *)(a4->field_8 + v11 * 8 + 8));
        v2 = *((long long *)(a4->field_8 + v11 * 8));
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
    }
    v12 = &v5->padding_0[8];
    v13 = fish::builtins::argparse::validate_arg(a0, a1[1], a1[2], v12, a5, a2, v1, a6);
    v14 = 1;
    if (!((char)v13 & 1))
    {
        v15 = v6->field_10;
        v16 = v6->field_18;
        v6->field_18 = 0;
        core::ptr::drop_in_place<[widestring::utfstring::Utf32String]>(v15, v16);
        v2.to_vec(v0, v1);
        v12.push(&v2, &g_14c6f28);
        if ((char)_ccall(0, 24, v6->field_40 + 1, 0, _ccall(17, (unsigned long long)((char)v13 & 1), 0, v9)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c6f40); /* do not return */
        v6->field_40 = v6->field_40 + 1;
        a4->field_48 = 4;
        a4->field_50 = 0;
        v14 = 0;
    }
    return v13 & 0xffffffff00000000 | v14;
}
