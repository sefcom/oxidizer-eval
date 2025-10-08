long long linera_summary::performance_summary::PerformanceSummary::format_comment_body(unsigned long a0, struct_2 *a1)
{
    char *v0;  // [sp-0x1d8], Other Possible Types: unsigned long, unsigned long long
    unsigned int v1;  // [sp-0x1d0], Other Possible Types: unsigned long long
    char *v2;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x1c0]
    char *v4;  // [sp-0x1b8], Other Possible Types: void*, unsigned long long
    unsigned long long v5;  // [bp-0x1b0]
    char *v6;  // [bp-0x1a8]
    unsigned long long v7;  // [bp-0x1a0]
    int v8;  // [bp-0x198], Other Possible Types: char
    char *v9;  // [bp-0x188]
    unsigned long v10;  // [bp-0x178]
    int v11;  // [bp-0x178]
    char *v12;  // [bp-0x168]
    int v13;  // [sp-0x158], Other Possible Types: char *
    unsigned long long v14;  // [sp-0x150]
    unsigned long long v15;  // [bp-0x148]
    char v16;  // [bp-0x140]
    unsigned long long v17;  // [bp-0x140]
    unsigned long long v18;  // [bp-0x138]
    char *v19;  // [bp-0x130]
    unsigned long long v20;  // [bp-0x128]
    void* v21;  // [bp-0x120]
    char *v22;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x108], Other Possible Types: unsigned long long
    char *v24;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long v25;  // [bp-0xf8], Other Possible Types: unsigned long long
    char *v26;  // [bp-0xf0], Other Possible Types: unsigned long long
    void* v27;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long v28;  // [bp-0xe0]
    int v29;  // [bp-0xd8]
    struct_0 *v30;  // [bp-0xc8]
    unsigned long long v31;  // [bp-0xc0]
    unsigned long v32;  // [bp-0xb8]
    unsigned long long v33;  // [bp-0xb0]
    char v34;  // [bp-0xa8]
    char *v35;  // [bp-0x98]
    unsigned long v36;  // [bp-0x90]
    unsigned long v37;  // [bp-0x88]
    unsigned long long v38;  // [bp-0x80]
    unsigned long long v39;  // [bp-0x78]
    char v40;  // [bp-0x70]
    int v41;  // [bp-0x58]
    int v42;  // [bp-0x40]
    unsigned long long v43;  // [bp-0x18]
    unsigned long long v44;  // [bp-0x10]
    unsigned long long v46;  // r15
    unsigned long long v47;  // r14
    unsigned long long v48;  // rax
    unsigned long long v49[3];  // rdx
    char *v50;  // r12
    unsigned long v51;  // rax
    int v52;  // xmm0
    unsigned long v53;  // xmm0lq
    unsigned long long v54;  // rcx
    char *v55;  // r15
    char *v56;  // r13
    unsigned long long v57;  // rax
    unsigned long v58;  // rbp
    void* v59;  // r15
    unsigned long v60;  // r13

    v44 = v46;
    v43 = v47;
    v36 = *((long long *)((char *)&a1->field_b0 + 8));
    *((char [8])&v37) = a1->padding_c0;
    v48 = v36.get(v37);
    if (!v48)
        core::str::slice_error_fail(v36, v37, 0, 7, &g_cf35d0); /* do not return */
    v38 = v48;
    v39 = 7;
    *((int128_t *)&v11) = *((int128_t *)&(&a1->padding_0)[1]);
    *((int128_t *)&v13) = *((int128_t *)&a1->padding_a8);
    v22 = &v11;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &(char)v13;
    v25 = <&T as core::fmt::Display>::fmt;
    v26 = &v36;
    v27 = <&T as core::fmt::Display>::fmt;
    v0 = &g_cf34f0;
    v1 = 3;
    v4 = 0;
    v2 = &v22;
    v3 = 3;
    v16.map_or_else(0, v49, &v0);
    memcpy(&v34, &v16, 16);
    v35 = v19;
    v22 = &g_cf35e8;
    v23 = <&T as core::fmt::Display>::fmt;
    v24 = &v38;
    v25 = <&T as core::fmt::Display>::fmt;
    v26 = &v34;
    v27 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = &g_cf3520;
    v1 = 4;
    v4 = 0;
    v2 = &v22;
    v3 = 3;
    v50 = &v0;
    v16.map_or_else(0, v49, &v0);
    memcpy(&v8, &v16, 16);
    v9 = v19;
    v8.spec_extend("### CI Runtime Comparison\n\n#### Workflow: \n\n| Job Name | Base Runtime | PR Runtime | Runtime Difference (%) |\n| --- | --- | --- | --- |\n|  |  |\nlinera-summary/src/performance_summary.rs## Performance Summary for commit%", "#### Workflow: \n\n| Job Name | Base Runtime | PR Runtime | Runtime Difference (%) |\n| --- | --- | --- | --- |\n|  |  |\nlinera-summary/src/performance_summary.rs## Performance Summary for commit%");
    v51 = *((long long *)&a1->padding_d8[48]);
    if (v51)
    {
        v52 = *((int128_t *)&a1->padding_d8[56]);
        v53 = (unsigned long long)v52;
        v54 = 1;
    }
    else
    {
        v52 = 0;
        v53 = 0;
        v54 = 0;
    }
    v22 = v54;
    v23 = 0;
    v24 = v51;
    v25 = v53;
    v26 = v54;
    v27 = 0;
    v28 = v51;
    v29 = v52;
    v55 = &v8;
    v56 = &v40;
    while (true)
    {
        v57 = v22.next();
        if (!v57)
            break;
        v33 = v57;
        v13 = &v33;
        v14 = <&T as core::fmt::Display>::fmt;
        v0 = &g_cf3560;
        v1 = 2;
        v4 = 0;
        v2 = &v13;
        v3 = 1;
        v16.map_or_else(0, v49, v50);
        memcpy(&v0, &v16, 16);
        v2 = v19;
        v55.spec_extend(2, v19 + 2);
        core::ptr::drop_in_place<alloc::string::String>(v50);
        v55.spec_extend("| Job Name | Base Runtime | PR Runtime | Runtime Difference (%) |\n| --- | --- | --- | --- |\n|  |  |\nlinera-summary/src/performance_summary.rs## Performance Summary for commit%", "| --- | --- | --- | --- |\n|  |  |\nlinera-summary/src/performance_summary.rs## Performance Summary for commit%");
        v55.spec_extend("| --- | --- | --- | --- |\n|  |  |\nlinera-summary/src/performance_summary.rs## Performance Summary for commit%", "|  |  |\nlinera-summary/src/performance_summary.rs## Performance Summary for commit%");
        if (v49[2])
        {
            v58 = v49[1];
            v31 = v49[2] * 72;
            v59 = 0;
            v32 = v49[1];
            do
            {
                v0 = *((long long *)(48 + v58 + (char *)v59));
                v1 = 0;
                v56.spec_to_string(v50);
                v0 = *((long long *)(56 + v58 + (char *)v59));
                v1 = 0;
                v41.spec_to_string(v50);
                v10 = *((long long *)(64 + v58 + (char *)v59));
                v13 = &v10;
                v14 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
                v0 = &g_cf35f8;
                v1 = 2;
                v4 = &g_57a838;
                v5 = 1;
                v2 = &v13;
                v3 = 1;
                v16.map_or_else(0, v49, v50);
                memcpy(&v10, &v16, 16);
                v12 = v19;
                *((int128_t *)&v42) = *((int128_t *)(8 + v58 + (char *)v59));
                v0 = &v42;
                v1 = <&T as core::fmt::Display>::fmt;
                v2 = &v40;
                v3 = <alloc::string::String as core::fmt::Display>::fmt;
                v4 = &v41;
                v5 = <alloc::string::String as core::fmt::Display>::fmt;
                v6 = &v10;
                v7 = <alloc::string::String as core::fmt::Display>::fmt;
                v17 = &g_cf3580;
                v18 = 5;
                v21 = 0;
                v60 = v50;
                v19 = v50;
                v20 = 4;
                v13.map_or_else(0, v49, &v17);
                memcpy(&v0, &v13, 16);
                v2 = v15;
                v8.spec_extend(<&T as core::fmt::Display>::fmt, v15 + <&T as core::fmt::Display>::fmt);
                v50 = v60;
                core::ptr::drop_in_place<alloc::string::String>(v60);
                core::ptr::drop_in_place<alloc::string::String>(&v10);
                core::ptr::drop_in_place<alloc::string::String>(&v41);
                v56 = &v40;
                core::ptr::drop_in_place<alloc::string::String>(&v40);
                v59 += 72;
                v58 = v32;
            } while (v31 != v59);
        }
        v55 = &v8;
        v8.push(10);
    }
    v30->field_10 = v9;
    *((void*)&v30->field_0) = v8;
    core::ptr::drop_in_place<alloc::string::String>(&v34);
    return v30;
}
