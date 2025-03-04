long long _ZN5uu_od8prn_char13format_item_c17hbeff54a2c941035dE.llvm.2413193166722088455(unsigned long long a0, char *a1, unsigned long long a2)
{
    char v0;  // [sp-0xa9]
    unsigned long v1;  // [sp-0xa8]
    char *v2;  // [sp-0xa8]
    unsigned long long v3;  // [sp-0xa0]
    unsigned long v4;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x90]
    char *v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x80]
    char *v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    unsigned long v10;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x68]
    void* v12;  // [sp-0x58]
    unsigned long long v13;  // [sp-0x50]
    void* v14;  // [sp-0x48]
    unsigned long long v15;  // [sp-0x40]
    char v16;  // [sp-0x38]
    char *v17;  // [sp-0x30], Other Possible Types: unsigned long
    unsigned long v18;  // [bp-0x30]
    unsigned long long v19;  // [sp-0x28]
    int v20;  // [sp-0x18]
    unsigned long long v22;  // rax
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rdi
    char *v25;  // rax
    unsigned long long v26;  // rax

    if (!a2)
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_543098); /* do not return */
    v0 = *(a1);
    if (v0 >= 0)
    {
        v1 = &(&_ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E)[v0 * 16 & 4294967295];
        v17 = &v1;
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c73fc09a8c273ab;
        v10 = 2;
        v12 = 0;
        v13 = 4;
        v14 = 0;
        v15 = 32;
        v16 = 1;
        v22 = &g_40dad0;
        goto LABEL_4d57dd;
    }
    if ((v0 & 192) == 128)
    {
        ::0x4d5570::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0);
        return a0;
    }
    if (a2 != 1 && (v0 & 224) == 192)
    {
        v23 = &g_5430b0;
        v24 = 2;
        goto LABEL_4d587e;
    }
    if (a2 >= 3 && (v0 & 240) == 224)
    {
        v23 = &g_5430d8;
        v24 = 3;
        goto LABEL_4d587e;
    }
    else
    {
        if (a2 < 4 || (v0 & 248) != 240)
        {
            v17 = &v0;
            v19 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
            v10 = 2;
            v12 = 0;
            v13 = 3;
            v14 = 0;
            v15 = 34359738400;
            v16 = 3;
            v22 = &g_5430c8;
LABEL_4d57dd:
            v4 = v22;
            v5 = 1;
            v8 = &v10;
            v9 = 1;
            v25 = &v17;
        }
        else
        {
            v23 = &g_5430f0;
            v24 = 4;
LABEL_4d587e:
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v17, ::0x4d54d0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(v24, a1, a2, v23), a2);
            if (v18)
            {
                v2 = &v0;
                v3 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i8$GT$::fmt::h435338519aeb34aa;
                v11 = 2;
                v12 = 0;
                v13 = 3;
                v14 = 0;
                v15 = 34359738400;
                v16 = 3;
                v26 = &g_5430c8;
            }
            else
            {
                *((int128_t *)&v20) = *((int128_t *)&v19);
                v2 = &v20;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                v11 = 2;
                v12 = 0;
                v13 = 4;
                v14 = 0;
                v15 = 32;
                v16 = 1;
                v26 = &g_40dad0;
            }
            v4 = v26;
            v5 = 1;
            v8 = &v10;
            v9 = 1;
            v25 = &v1;
        }
        v6 = v25;
        v7 = 1;
        ::0x4d5560::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(a0, &v4);
        return a0;
    }
}
