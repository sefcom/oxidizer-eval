long long uu_env::apply_specified_env_vars::ha326473558d292da(unsigned long long a0[9])
{
    char *v0;  // [sp-0xa0]
    unsigned long long v1;  // [sp-0x98]
    unsigned long v2;  // [sp-0x90]
    unsigned long long v3;  // [sp-0x88]
    unsigned long v4;  // [sp-0x80]
    unsigned long long v5;  // [sp-0x78]
    struct struct_0 **v6;  // [sp-0x70]
    unsigned long long v7;  // [sp-0x68]
    void* v8;  // [sp-0x60]
    unsigned long v9;  // [sp-0x50], Other Possible Types: unsigned long long
    int v10;  // [bp-0x48], Other Possible Types: unsigned long
    char v11;  // [sp-0x38]
    struct_1 *v13;  // rax
    int v14;  // ymm0
    unsigned long v15;  // rdx
    int v16;  // xmm0

    v2 = a0[7];
    v3 = a0[8] * 48 + v2;
    v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5a91fe410bc96a89(&v2);
    if (!v13)
        return v13;
    do
    {
        if (v13->field_10)
        {
            std::env::set_var::h6a4f0c86b7bc3f19(v13, &v13->padding_18);
        }
        else
        {
            v9 = uucore::util_name::h60d842bf27b05e82();
            v10 = v15;
            v0 = &v9;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h402b3702303fb18e;
            v4 = &g_548c18;
            v5 = 2;
            v8 = 0;
            v6 = &v0;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4);
            v16 = v13->field_20;
            v14 = v14 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16;
            v9 = 1;
            v10 = v16;
            v11 = 1;
            v0 = &v9;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v4 = &g_548c38;
            v5 = 2;
            v8 = 0;
            v6 = &v0;
            v7 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v4);
        }
    } while ((v13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5a91fe410bc96a89(&v2), v13));
    return v13;
}
