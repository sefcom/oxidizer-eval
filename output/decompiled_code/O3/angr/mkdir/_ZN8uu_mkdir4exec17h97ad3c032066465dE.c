long long uu_mkdir::exec::h97ad3c032066465d(uint128_t a0[4], unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x108], Other Possible Types: unsigned long long
    int v1;  // [sp-0xf8]
    struct struct_0 **v2;  // [sp-0xe8]
    unsigned long v3;  // [sp-0xd8], Other Possible Types: unsigned long long
    struct_2 *v4;  // [sp-0xd0]
    char v5;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v6;  // [sp-0xc0]
    struct struct_0 **v7;  // [sp-0xb8]
    unsigned long long v8;  // [sp-0xb0]
    void* v9;  // [sp-0xa8]
    char *v10;  // [sp-0x98]
    unsigned long long v11;  // [sp-0x90]
    char *v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x80]
    int v14;  // [sp-0x78]
    int v15;  // [sp-0x68]
    int v16;  // [sp-0x58]
    int v17;  // [sp-0x48]
    int v19;  // xmm0
    int v20;  // ymm0
    int v21;  // ymm0
    unsigned long long v22[3];  // rax
    int v23;  // xmm0
    unsigned long long v24;  // r9
    unsigned long long v25;  // rax
    unsigned long long v26;  // rsi
    struct_2 *v27;  // rdx

    v19 = a0[0];
    v21 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19;
    *((uint128_t *)&v17) = a0[3];
    *((uint128_t *)&v16) = a0[2];
    *((uint128_t *)&v15) = a0[1];
    v14 = v19;
    v22 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&v14, a1, a2);
    if (!v22)
        return 0;
    do
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v5, v22[1], v22[2]);
        v2 = v7;
        v23 = *((int128_t *)&v5);
        v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
        v1 = v23;
        v25 = uu_mkdir::mkdir::h25ca5a950d7e6473((long long)(&v1)[8], v7, a1, a2, a3, v24);
        if (v25)
        {
            v0 = v25;
            v27->field_60(v25, v26);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
            v3 = uucore::util_name::h60d842bf27b05e82();
            v4 = v27;
            v10 = &v3;
            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
            v12 = &v0;
            v13 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf47c6583a9945374;
            v5 = &g_520510;
            v6 = 3;
            v9 = 0;
            v7 = &v10;
            v8 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v26, v27);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h71810d9408842807(v0, v27);
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb7551ff5f0211b82(&v1);
        v22 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&v14, v26, v27);
    } while (v22);
    return 0;
}
