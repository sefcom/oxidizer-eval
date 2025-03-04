long long uu_mkdir::exec::h97ad3c032066465d(uint128_t a0[4], unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long v0;  // [sp-0x108]
    int v1;  // [sp-0xf8]
    struct struct_0 **v2;  // [sp-0xe8]
    unsigned long v3;  // [sp-0xd8]
    struct_2 *v4;  // [sp-0xd0]
    char v5;  // [sp-0xc8], Other Possible Types: unsigned long long, unsigned long
    struct struct_0 **v6;  // [sp-0xb8]
    unsigned long long v7;  // [sp-0xb0]
    void* v8;  // [sp-0xa8]
    char *v9;  // [sp-0x98]
    unsigned long long v10;  // [sp-0x90]
    char *v11;  // [sp-0x88]
    unsigned long long v12;  // [sp-0x80]
    int v13;  // [sp-0x78]
    int v14;  // [sp-0x68]
    int v15;  // [sp-0x58]
    int v16;  // [sp-0x48]
    int v18;  // xmm0
    int v19;  // ymm0
    int v20;  // ymm0
    unsigned long long v21[3];  // rax
    int v22;  // xmm0
    unsigned long long v23;  // rax
    struct_2 *v24;  // rdx

    v18 = a0[0];
    v20 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
    *((uint128_t *)&v16) = a0[3];
    *((uint128_t *)&v15) = a0[2];
    *((uint128_t *)&v14) = a0[1];
    v13 = v18;
    v21 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&v13);
    if (!v21)
        return 0;
    do
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v5, v21[1], v21[2]);
        v2 = v6;
        v22 = *((int128_t *)&v5);
        v20 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
        v1 = v22;
        v23 = uu_mkdir::mkdir::h25ca5a950d7e6473((long long)(&v1)[8], v6, a1, a2, a3);
        if (v23)
        {
            v0 = v23;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v24->field_60(v23, a1));
            v3 = uucore::util_name::h60d842bf27b05e82();
            v4 = v24;
            v9 = &v3;
            v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
            v11 = &v0;
            v12 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf47c6583a9945374;
            v5 = &g_520510;
            v5 = 3;
            v8 = 0;
            v6 = &v9;
            v7 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h71810d9408842807(v0, v24);
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb7551ff5f0211b82(&v1);
        v21 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&v13);
    } while (v21);
    return 0;
}
