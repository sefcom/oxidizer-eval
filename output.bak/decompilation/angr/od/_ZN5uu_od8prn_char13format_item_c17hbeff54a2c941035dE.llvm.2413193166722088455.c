long long _ZN5uu_od8prn_char13format_item_c17hbeff54a2c941035dE.llvm.2413193166722088455(unsigned long long a0, char *a1, unsigned long long a2)
{
    char v0;  // [sp-0xa9]
    char *v1;  // [sp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x90]
    char *v5;  // [sp-0x88]
    unsigned long long v6;  // [sp-0x80]
    char *v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x58]
    unsigned long long v11;  // [sp-0x50]
    void* v12;  // [sp-0x48]
    unsigned long long v13;  // [sp-0x40]
    char v14;  // [sp-0x38]
    char *v15;  // [sp-0x30], Other Possible Types: unsigned long
    unsigned long v16;  // [sp-0x28], Other Possible Types: unsigned long long
    int v17;  // [sp-0x18]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rdi
    char *v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax

    if (!a2)
        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_543098); /* do not return */
    v0 = *(a1);
    if (v0 >= 0)
    {
        v1 = &(&_ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E)[v0 * 16 & 4294967295];
        v15 = &v1;
        v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3c73fc09a8c273ab;
        v9 = 2;
        v10 = 0;
        v11 = 4;
        v12 = 0;
        v13 = 32;
        v14 = 1;
        v19 = &g_40dad0;
        goto LABEL_4d57dd;
    }
    if ((v0 & 192) == 128)
    {
        ::0x4d5570::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(a0);
        return a0;
    }
    if (a2 != 1 && (v0 & 224) == 192)
    {
        v20 = &g_5430b0;
        v21 = 2;
        goto LABEL_4d587e;
    }
    if (a2 >= 3 && (v0 & 240) == 224)
    {
        v20 = &g_5430d8;
        v21 = 3;
        goto LABEL_4d587e;
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
            v19 = &g_5430c8;
LABEL_4d57dd:
            v3 = v19;
            v4 = 1;
            v7 = &v9;
            v8 = 1;
            v22 = &v15;
        }
        else
        {
            v20 = &g_5430f0;
            v21 = 4;
LABEL_4d587e:
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v15, ::0x4d54d0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h805a03118b26e41e(v21, a1, a2, v20), v23);
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
                v24 = &g_5430c8;
            }
            else
            {
                *((int128_t *)&v17) = *((int128_t *)&v16);
                v1 = &v17;
                v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                v9 = 2;
                v10 = 0;
                v11 = 4;
                v12 = 0;
                v13 = 32;
                v14 = 1;
                v24 = &g_40dad0;
            }
            v3 = v24;
            v4 = 1;
            v7 = &v9;
            v8 = 1;
            v22 = &v1;
        }
        v5 = v22;
        v6 = 1;
        ::0x4d5560::core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf();
        return a0;
    }
}
