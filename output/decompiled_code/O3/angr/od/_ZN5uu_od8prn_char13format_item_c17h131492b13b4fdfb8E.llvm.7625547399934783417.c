long long _ZN5uu_od8prn_char13format_item_c17h131492b13b4fdfb8E.llvm.7625547399934783417(unsigned long long a0[3], char *a1, unsigned long a2)
{
    char v0;  // [sp-0xa9]
    unsigned long v1;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xa0]
    unsigned long v3;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x90]
    unsigned long long v5;  // [sp-0x88]
    unsigned long long v6;  // [sp-0x80]
    unsigned long long v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x58]
    unsigned long long v11;  // [sp-0x50]
    void* v12;  // [sp-0x48]
    unsigned long long v13;  // [sp-0x40]
    char v14;  // [sp-0x38]
    unsigned long v15;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0x28], Other Possible Types: unsigned long long
    int v17;  // [sp-0x18]
    unsigned long long v19;  // rax
    unsigned int *v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    if (!a2)
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v0 = *(a1);
    if (v0 >= 0)
    {
        v1 = &(&_ZN5uu_od8prn_char7C_CHARS17h272b39be43a8a6cfE.llvm.7625547399934783417)[16 * v0];
        v15 = &v1;
        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7bc00ee277c58477;
        v9 = 2;
        v10 = 0;
        v11 = 4;
        v12 = 0;
        v13 = 32;
        v14 = 1;
        v19 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        goto LABEL_49fc8d;
    }
    if ((v0 & 192) == 128)
    {
        v20 = __rust_alloc(4, 1);
        if (v20)
        {
            *(v20) = 707403808;
            a0[0] = 4;
            a0[1] = v20;
            a0[2] = 4;
            return a0;
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    if (a2 != 1 && (v0 & 224) == 192)
    {
        v21 = 2;
        goto LABEL_49fd65;
    }
    if (a2 >= 3 && (v0 & 240) == 224)
    {
        v21 = 3;
        goto LABEL_49fd65;
    }
    else
    {
        if (a2 < 4 || (v0 & 248) != 240)
        {
            v15 = &v0;
            v16 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
            v9 = 2;
            v10 = 0;
            v11 = 3;
            v12 = 0;
            v13 = 34359738400;
            v14 = 3;
            v19 = &g_504978;
LABEL_49fc8d:
            v3 = v19;
            v4 = 1;
            v7 = &v9;
            v8 = 1;
            v22 = &v15;
        }
        else
        {
            v21 = 4;
LABEL_49fd65:
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v15, a1, v21);
            if (v15)
            {
                v1 = &v0;
                v2 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
                v9 = 2;
                v10 = 0;
                v11 = 3;
                v12 = 0;
                v13 = 34359738400;
                v14 = 3;
                v23 = &g_504978;
            }
            else
            {
                *((int128_t *)&v17) = *((int128_t *)&v16);
                v1 = &v17;
                v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h24b110f094dc00e1;
                v9 = 2;
                v10 = 0;
                v11 = 4;
                v12 = 0;
                v13 = 32;
                v14 = 1;
                v23 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            }
            v3 = v23;
            v4 = 1;
            v7 = &v9;
            v8 = 1;
            v22 = &v1;
        }
        v5 = v22;
        v6 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(a0, &v3);
        return a0;
    }
}
