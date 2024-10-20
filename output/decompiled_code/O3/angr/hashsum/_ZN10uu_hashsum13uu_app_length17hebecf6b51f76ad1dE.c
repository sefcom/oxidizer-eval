long long uu_hashsum::uu_app_length::hebecf6b51f76ad1d(unsigned long long a0)
{
    int v0;  // [sp-0x7a8], Other Possible Types: unsigned long long
    unsigned long long *v1;  // [sp-0x7a0]
    unsigned long long v2;  // [sp-0x798]
    void* v3;  // [sp-0x788]
    void* v4;  // [sp-0x778]
    void* v5;  // [sp-0x760]
    void* v6;  // [sp-0x750]
    unsigned long long v7;  // [sp-0x738]
    void* v8;  // [sp-0x720]
    unsigned long long v9;  // [sp-0x718]
    int v10;  // [sp-0x710]
    unsigned long long v11;  // [sp-0x700]
    int v12;  // [sp-0x6f8]
    unsigned long long v13;  // [sp-0x6e8]
    int v14;  // [sp-0x6e0]
    unsigned long long v15;  // [sp-0x6d0]
    int v16;  // [sp-0x6c8]
    unsigned long long v17;  // [sp-0x6b8]
    int v18;  // [sp-0x6b0]
    unsigned long long v19;  // [sp-0x6a0]
    int v20;  // [sp-0x698]
    unsigned long long v21;  // [sp-0x688]
    int v22;  // [sp-0x680]
    unsigned long long v23;  // [sp-0x670]
    int v24;  // [sp-0x668]
    unsigned long long v25;  // [sp-0x658]
    int v26;  // [sp-0x650]
    unsigned long long v27;  // [sp-0x640]
    int v28;  // [sp-0x638]
    unsigned long long v29;  // [sp-0x628]
    int v30;  // [sp-0x620]
    unsigned long long v31;  // [sp-0x610]
    int v32;  // [sp-0x608]
    unsigned long long v33;  // [sp-0x5f8]
    int v34;  // [sp-0x5f0]
    unsigned long long v35;  // [sp-0x5e0]
    void* v36;  // [sp-0x5d8]
    unsigned long long v37;  // [sp-0x5d0]
    int v38;  // [bp-0x5c8], Other Possible Types: char
    unsigned long long v39;  // [sp-0x5b8]
    unsigned long long v40;  // [sp-0x590]
    unsigned long long v41;  // [sp-0x578]
    unsigned long long v42;  // [sp-0x570]
    unsigned long long v43;  // [sp-0x568]
    unsigned long long v44;  // [sp-0x560]
    void* v45;  // [sp-0x558]
    unsigned long long v46;  // [sp-0x548]
    unsigned int v47;  // [sp-0x540]
    char v48;  // [bp-0x53c], Other Possible Types: unsigned short
    unsigned short v49;  // [sp-0x53b]
    char v50;  // [sp-0x539]
    void* v51;  // [bp-0x538], Other Possible Types: char, unsigned long long
    unsigned long long v52;  // [sp-0x530]
    void* v53;  // [sp-0x528], Other Possible Types: unsigned long long
    char v54;  // [bp-0x4b8]
    char v55;  // [bp-0x4b0]
    unsigned long long *v56;  // [sp-0x4a8], Other Possible Types: unsigned long long
    unsigned int v57;  // [sp-0x2f8]
    char v58;  // [bp-0x2eb]
    char v59;  // [bp-0x2e9]
    char v60;  // [bp-0x2e8]
    unsigned long long *v62;  // rax
    unsigned long long v63;  // rcx
    unsigned long long v64;  // rdx
    unsigned long long v65;  // r12
    unsigned long long v66;  // rsi
    unsigned long long *v67;  // r15
    unsigned long long *v68;  // rax
    unsigned long long *v69;  // rcx

    uu_hashsum::uu_app_common::h7d3dd46f0fb032b6(&v60);
    *((int128_t *)&v10) = 0;
    *((int128_t *)&v12) = 0;
    *((int128_t *)&v14) = 0;
    *((int128_t *)&v16) = 0;
    *((int128_t *)&v18) = 0;
    *((int128_t *)&v20) = 0;
    *((int128_t *)&v22) = 0;
    *((int128_t *)&v24) = 0;
    *((int128_t *)&v26) = 0;
    *((int128_t *)&v28) = 0;
    *((int128_t *)&v30) = 0;
    *((int128_t *)&v32) = 0;
    *((int128_t *)&v34) = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = "length";
    v42 = &g_1;
    v43 = "length";
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v47 = 0;
    v48 = 3337;
    v62 = __rust_alloc(8, 8);
    if (!v62)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    *(v62) = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5;
    v0 = &g_1;
    v1 = v62;
    v2 = &g_6c1d90;
    clap_builder::builder::arg::Arg::value_parser::h49814437a5f3c263(&v51, &v3, &v0);
    v57 = 108;
    memcpy(&v3, &v51, 592);
    v51 = 0;
    v52 = &g_1;
    v53 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v51, 0, 99);
    v63 = v52;
    v64 = v53;
    *((int128_t *)(v63 + v64 + (char *)&g_41)) = 147712518146400104841968849825202266656;
    *((int128_t *)(v63 + v64 + (char *)&g_31)) = 154789943337600021882603460153404714855;
    *((int128_t *)(v63 + v64 + (char *)&g_21)) = 144060929369952036243771645136834949743;
    *((int128_t *)(v63 + v64 + (char *)&g_11)) = 135749850677591766186991148893909252197;
    *((int128_t *)(v63 + v64 + (char *)&g_1)) = 43139862373315530789961833071013093920;
    *((int128_t *)(v63 + v64)) = 146760928019348423087281112063047854436;
    *((int *)(v63 + v64 + (char *)&g_51)) = 941647471;
    v53 = v64 + 99;
    v65 = v51;
    *((int128_t *)&v0) = *((int128_t *)&v52);
    if (v65 != 0x8000000000000000)
        *((int128_t *)&v51) = (int128_t)v0;
    v66 = v37;
    if (v66 != 0x8000000000000000 && v66)
        __rust_dealloc(*((long long *)&v38));
    v37 = v65;
    *((int128_t *)&v38) = *((int128_t *)&v51);
    memcpy(&v51, &v3, 592);
    v67 = v56;
    if (v67 != *((long long *)&v54))
    {
        v68 = *((long long *)&v55);
        v69 = v67 * &g_1;
        *((char **)(v68 + v69)) = "length";
        *((uint128_t **)(v68 + v69 + (char *)&g_1)) = &g_1;
        v56 = v67 + &g_1;
        memcpy(&v3, &v51, 588);
        v49 = *((short *)&v58);
        v50 = v59;
        v48 = 0;
        clap_builder::builder::command::Command::arg::hec4ce23b02ec3c5c(a0, &v60, &v3);
        return a0;
    }
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h6c947dae1cd4837d(&v54);
}
