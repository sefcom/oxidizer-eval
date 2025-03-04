long long uu_ls::return_total::h87a8c45b5866afa6(unsigned long long a0[3], unsigned long a1, unsigned long a2, struct_1 *a3, unsigned long long a4)
{
    struct struct_0 **v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long v4;  // [sp-0x90]
    unsigned long long v5;  // [sp-0x88]
    struct struct_0 **v6;  // [sp-0x80]
    unsigned long long v7;  // [sp-0x78]
    void* v8;  // [sp-0x70]
    char v9;  // [bp-0x60]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    unsigned long long v13;  // rax
    void* v15;  // r12
    struct struct_0 **v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19[3];  // rcx
    unsigned long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22[3];  // rcx

    v4 = a1;
    v5 = a2 * 304 + a1;
    v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v4);
    if (!v13)
    {
        v15 = 0;
    }
    else
    {
        v15 = 0;
        do
        {
            v17 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(v13, a4);
            v0 = v17;
            if (v0)
                v17 = &v0;
            v15 += core::option::Option$LT$T$GT$::map_or::h56c943784bd347cb(v17, a3->field_d8, a3->field_f1);
            v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v4);
        } while (v13);
    }
    if (a3->field_ee)
    {
        v18 = uu_ls::dired::indent::h541a64321517b8c5(a4);
        if (v18)
        {
            v19 = a0;
            v19[1] = v18;
            v19[2] = v20;
            v19[0] = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    uu_ls::display_size::hba9b1cbdd7c6b199(&v11, v15, a3->field_f1);
    v0 = &v11;
    v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v2 = &a3[1].padding_0[8];
    v3 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
    v4 = &g_6125c8;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    ::0x51ccf0::core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&v9, &v4);
    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&v11);
    v21 = *((long long *)&v10);
    v22 = a0;
    v22[2] = v21;
    *((int128_t *)&v22[0]) = *((int128_t *)&v9);
    return v21;
}
