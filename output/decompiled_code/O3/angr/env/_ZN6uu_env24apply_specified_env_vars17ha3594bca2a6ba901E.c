long long uu_env::apply_specified_env_vars::ha3594bca2a6ba901(unsigned long long a0[9], unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x98]
    unsigned long v2;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x88]
    unsigned long v4;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x78]
    unsigned long long v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    void* v8;  // [sp-0x60]
    unsigned long v9;  // [sp-0x50], Other Possible Types: unsigned long long
    int v10;  // [bp-0x48], Other Possible Types: unsigned long
    char v11;  // [sp-0x38]
    struct_0 *v13;  // rax
    unsigned long long v14;  // rdx
    int v15;  // ymm0
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rsi
    int v18;  // xmm0

    v2 = a0[7];
    v3 = a0[8] * 48 + v2;
    v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hab23b0efb2d1b4b7(&v2);
    if (!v13)
        return v13;
    do
    {
        if (v13->field_10)
        {
            std::env::set_var::h8715179b20ff8e51(v13, &v13->padding_18, v14);
        }
        else
        {
            v9 = uucore::util_name::h412db5e565a079f3();
            v10 = v16;
            v0 = &v9;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf063c1e607342e2f;
            v4 = &g_5493d8;
            v5 = 2;
            v8 = 0;
            v6 = &v0;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4, v17, v16);
            v18 = v13->field_20;
            v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
            v9 = 1;
            v10 = v18;
            v11 = 1;
            v0 = &v9;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v4 = &g_5493f8;
            v5 = 2;
            v8 = 0;
            v6 = &v0;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4, v17, v16);
        }
    } while ((v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hab23b0efb2d1b4b7(&v2), v13));
    return v13;
}
