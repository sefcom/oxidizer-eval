long long uu_hashsum::uu_app_custom::h20352c472376330f(void* a0)
{
    void* v0;  // [sp-0xb18], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xb10]
    void* v2;  // [sp-0xb08], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xaf0]
    int v4;  // [sp-0xae8]
    void* v5;  // [bp-0xad8], Other Possible Types: char
    void* v6;  // [sp-0xac8]
    void* v7;  // [sp-0xab0]
    void* v8;  // [sp-0xaa0]
    unsigned long long v9;  // [sp-0xa88]
    void* v10;  // [sp-0xa70]
    unsigned long long v11;  // [sp-0xa68]
    int v12;  // [sp-0xa60]
    unsigned long long v13;  // [sp-0xa50]
    int v14;  // [sp-0xa48]
    unsigned long long v15;  // [sp-0xa38]
    int v16;  // [sp-0xa30]
    unsigned long long v17;  // [sp-0xa20]
    int v18;  // [sp-0xa18]
    unsigned long long v19;  // [sp-0xa08]
    int v20;  // [sp-0xa00]
    unsigned long long v21;  // [sp-0x9f0]
    int v22;  // [sp-0x9e8]
    unsigned long long v23;  // [sp-0x9d8]
    int v24;  // [sp-0x9d0]
    unsigned long long v25;  // [sp-0x9c0]
    int v26;  // [sp-0x9b8]
    unsigned long long v27;  // [sp-0x9a8]
    int v28;  // [sp-0x9a0]
    unsigned long long v29;  // [sp-0x990]
    int v30;  // [sp-0x988]
    unsigned long long v31;  // [sp-0x978]
    int v32;  // [sp-0x970]
    unsigned long long v33;  // [sp-0x960]
    int v34;  // [sp-0x958]
    unsigned long long v35;  // [sp-0x948]
    int v36;  // [sp-0x940]
    unsigned long long v37;  // [sp-0x930]
    void* v38;  // [sp-0x928]
    unsigned long long v39;  // [sp-0x920]
    int v40;  // [sp-0x918]
    unsigned long long v41;  // [sp-0x908]
    unsigned long long v42;  // [sp-0x8e0]
    unsigned long long v43;  // [sp-0x8c8]
    unsigned long long v44;  // [sp-0x8c0]
    unsigned long long v45;  // [sp-0x8b8]
    unsigned long long v46;  // [sp-0x8b0]
    void* v47;  // [sp-0x8a8]
    unsigned long long v48;  // [sp-0x898]
    unsigned int v49;  // [sp-0x890]
    unsigned short v50;  // [sp-0x88c]
    char v51;  // [bp-0x889]
    char v52;  // [bp-0x810]
    char v53;  // [sp-0x5c4]
    unsigned short v54;  // [sp-0x5c3]
    char v55;  // [sp-0x5c1]
    char v56;  // [bp-0x5c0]
    char v57;  // [bp-0x2f8]
    unsigned long long v59[885696];  // r12
    int v60;  // ymm0
    unsigned long long v61;  // rcx
    void* v62;  // rbp
    unsigned long v63;  // rbx
    int v64;  // xmm0
    int v65;  // ymm0
    int v66;  // xmm0
    int v67;  // xmm0

    uu_hashsum::uu_app_common::h7d3dd46f0fb032b6(&v57);
    uu_hashsum::uu_app_opt_bits::h052f527ca6148bd1(&v5, &v57);
    uu_hashsum::uu_app_b3sum_opts::h05f909aa0071285c(&v56, &v5);
    v59 = 0;
    v3 = 9223372036854775809;
    do
    {
        memcpy(&v57, &v56, 712);
        v61 = *((long long *)(v59 + &g_6c1de8));
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
        *((int128_t *)&v36) = 0;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 5;
        v10 = 0;
        v11 = 8;
        v13 = 8;
        v15 = 8;
        v17 = 8;
        v19 = 8;
        v21 = 8;
        v23 = 8;
        v25 = 8;
        v27 = 8;
        v29 = 4;
        v31 = 8;
        v33 = 8;
        v35 = 8;
        v37 = 8;
        v38 = 0;
        v39 = 0x8000000000000000;
        v41 = 0x8000000000000000;
        v42 = v3;
        v43 = v45;
        v44 = v61;
        v45 = v43;
        v46 = v44;
        v47 = 0;
        v48 = 0x11000000110000;
        v49 = 0;
        v50 = 3337;
        v62 = *((long long *)(v59 + &g_6c1df0));
        v63 = *((long long *)(v59 + &g_6c1df8));
        v0 = 0;
        v1 = 1;
        v2 = 0;
        if (v63)
        {
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hec979437f3c01b0b(&v0, 0, v63);
        }
        else
        {
            v0 = 0;
            v2 = 0;
        }
        memcpy(1 + v2, v62, v63);
        v2 += v63;
        v64 = *((int128_t *)&v1);
        v65 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v4 = v64;
        if (v0 != 0x8000000000000000)
        {
            v66 = v4;
            v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
            *((void*)&v0) = v66;
        }
        v59 = &v59[4];
        v39 = v0;
        v67 = *((int128_t *)&v0);
        v60 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v40 = v67;
        memcpy(&v52, &v5, 588);
        v54 = v50;
        v55 = v51;
        v53 = 2;
        clap_builder::builder::command::Command::arg::hec4ce23b02ec3c5c(&v56, &v57, &v52);
    } while (v59 != 480);
    memcpy(a0, &v56, 712);
    return a0;
}
