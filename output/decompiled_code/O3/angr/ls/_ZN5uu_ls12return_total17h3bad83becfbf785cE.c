long long uu_ls::return_total::h3bad83becfbf785c(unsigned long long a0[3], unsigned long a1, unsigned long a2, struct_0 *a3, unsigned long a4)
{
    unsigned long v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long v4;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x88]
    unsigned long long v6;  // [sp-0x80]
    unsigned long long v7;  // [sp-0x78]
    void* v8;  // [sp-0x70]
    char v9;  // [bp-0x60]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    unsigned long v13;  // rax
    void* v15;  // r12
    unsigned long long v18;  // r14
    unsigned long long v20;  // rax
    unsigned long long v21[3];  // rcx
    unsigned long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24[3];  // rcx

    v4 = a1;
    v5 = a2 * 304 + a1;
    v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v4);
    if (!v13)
    {
        v15 = 0;
    }
    else
    {
        v15 = 0;
        do
        {
            v0 = uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(v13, a4);
            if (!v0)
                v18 = v0;
            v15 += core::option::Option$LT$T$GT$::map_or::h7f86602529f22162(v18, a3->field_d8, a3->field_f1);
            v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v4);
        } while (v13);
    }
    if (a3->field_ee)
    {
        v20 = uu_ls::dired::indent::h52b1e672ce4893b9(a4);
        if (v20)
        {
            v21 = a0;
            v21[1] = v20;
            v21[2] = v22;
            v21[0] = 0x8000000000000000;
            return 0x8000000000000000;
        }
    }
    uu_ls::display_size::h7e7c99f8b13c4a8e(&v11, v15, a3->field_f1);
    v0 = &v11;
    v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v2 = &a3[1].padding_0[8];
    v3 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
    v4 = &g_6127c8;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    ::0x51ccd0::core::option::Option$LT$T$GT$::map_or_else::h4ac335b83d8d44c4(&v9, &v4);
    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(&v11);
    v23 = *((long long *)&v10);
    v24 = a0;
    v24[2] = v23;
    *((int128_t *)&v24[0]) = *((int128_t *)&v9);
    return v23;
}
