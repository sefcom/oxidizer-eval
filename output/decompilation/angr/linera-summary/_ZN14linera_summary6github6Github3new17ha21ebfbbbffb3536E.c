long long linera_summary::github::Github::new(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x428]
    unsigned long long v1;  // [bp-0x420]
    unsigned long long v2;  // [bp-0x418]
    char v3;  // [bp-0x410]
    unsigned long long v4;  // [bp-0x408]
    unsigned long long v5;  // [bp-0x400]
    unsigned long long v6;  // [bp-0x3f8]
    char v7;  // [bp-0x3f0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x3e8]
    char v9;  // [bp-0x3e0]
    int v10;  // [bp-0x3d0]
    char v11;  // [bp-0x3c0]
    int v12;  // [bp-0x3b0]
    char v13;  // [bp-0x3a0]
    int v14;  // [bp-0x390]
    char v15;  // [bp-0x380]
    int v16;  // [bp-0x370]
    unsigned long long v17;  // [bp-0x360]
    unsigned long long v18;  // [bp-0x358]
    unsigned long long v19;  // [bp-0x350]
    int v20;  // [bp-0x340]
    char v21;  // [bp-0x330]
    int v22;  // [bp-0x320]
    char v23;  // [bp-0x310]
    int v24;  // [bp-0x300]
    char v25;  // [bp-0x2f0]
    int v26;  // [bp-0x2e0], Other Possible Types: void*
    unsigned long long v27;  // [bp-0x2d8]
    uint128_t v28;  // [bp-0x2d0]
    unsigned long long v29;  // [bp-0x2c0]
    void* v30;  // [bp-0x2b8]
    unsigned int v31;  // [bp-0x2a8]
    unsigned int v32;  // [bp-0x298]
    unsigned int v33;  // [bp-0x288]
    char v34;  // [bp-0x280]
    char v35;  // [bp-0x228]
    void* v36;  // [bp-0x1d0]
    unsigned long long v37;  // [bp-0x1c0]
    unsigned long long v38;  // [bp-0x1b8]
    unsigned long long v39;  // [bp-0x1b0]
    int v40;  // [bp-0x1a0]
    int v41;  // [bp-0x190]
    int v42;  // [bp-0x180]
    int v43;  // [bp-0x170]
    int v44;  // [bp-0x160]
    int v45;  // [bp-0x150]
    void* v46;  // [bp-0x140]
    unsigned long long v47;  // [bp-0x138]
    uint128_t v48;  // [bp-0x130]
    unsigned long long v49;  // [bp-0x120]
    void* v50;  // [bp-0x118]
    unsigned int v51;  // [bp-0x108]
    unsigned int v52;  // [bp-0xf8]
    unsigned int v53;  // [bp-0xe8]
    char v54;  // [bp-0xe0]
    char v55;  // [bp-0x88]
    void* v56;  // [bp-0x30]
    unsigned long v58;  // rbp
    int v59;  // xmm0

    v58 = a1;
    if (a1)
    {
        v37 = 1;
        v38 = 3;
        v39 = 2;
        v46 = 0;
        v47 = 8;
        v48 = 0;
        v49 = 8;
        v50 = 0;
        v51 = 0x3b9aca00;
        v52 = 0x3b9aca00;
        v53 = 0x3b9aca00;
        v54 = 3;
        v55 = 3;
        v56 = 0;
    }
    else
    {
        v17 = 1;
        v18 = 3;
        v19 = 2;
        v26 = 0;
        v27 = 8;
        v28 = 0;
        v29 = 8;
        v30 = 0;
        v31 = 0x3b9aca00;
        v32 = 0x3b9aca00;
        v33 = 0x3b9aca00;
        v34 = 3;
        v35 = 3;
        v36 = 0;
        std::env::var(&v3, "GITHUB_TOKENGITHUB_TOKEN is not set! This must be run from within CICreating Octocrab instance should not fail!https://github.com// []()\n\n", 12);
        if (*((int *)&v3) == 1)
        {
            a0->field_8 = linera_summary::github::Github::new::{{closure}}(v4, v1);
            a0->field_0 = 4;
            v17.drop_in_place<octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>>();
            return a0;
        }
        v0 = v4;
        v1 = v5;
        v2 = v6;
        (char)v37.personal_token(&v17, &v0);
    }
    v7.build(&v37);
    if (v7 == 4)
    {
        a0->field_8 = linera_summary::github::Github::new::{{closure}}(&(char)v8);
        a0->field_0 = 4;
        return a0;
    }
    v26 = v16;
    memcpy(&v25, &v15, 16);
    v24 = v14;
    memcpy(&v23, &v13, 16);
    v22 = v12;
    memcpy(&v21, &v11, 16);
    v20 = v10;
    memcpy(&v19, &v9, 16);
    v17 = v7;
    v18 = v8;
    v37.from_env(v58, a2);
    if (!((char)(((0 ^ v37) & (0 ^ -(v37))) >> 63)))
    {
        *((void*)&a0->field_100) = v45;
        *((void*)&a0->field_f0) = v44;
        *((void*)&a0->field_e0) = v43;
        v59 = *((int128_t *)&v39);
        *((void*)&a0->field_d0) = v42;
        *((void*)&a0->field_c0) = v41;
        *((void*)&a0->field_b0) = v40;
        *((void*)&a0->field_a0) = v59;
        ::libc.so.0::memcpy(a0, &v17, 144);
        a0->field_90 = v37;
        a0->field_98 = v38;
        a0->field_110 = v58;
        return a0;
    }
    a0->field_8 = v38;
    a0->field_0 = 4;
    core::ptr::drop_in_place<octocrab::Octocrab>(&v17);
    return a0;
}
