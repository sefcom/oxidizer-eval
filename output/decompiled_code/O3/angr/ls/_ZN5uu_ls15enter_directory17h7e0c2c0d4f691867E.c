long long uu_ls::enter_directory::h7e0c2c0d4f691867(struct_3 *a0, unsigned long long *a1, unsigned long long a2, struct_1 *a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x578]
    char v1;  // [bp-0x570]
    char v2;  // [sp-0x569]
    unsigned long long v4;  // [sp-0x558]
    struct_2 *v5;  // [sp-0x550]
    unsigned long v6;  // [sp-0x548]
    unsigned int v8;  // [bp-0x538], Other Possible Types: unsigned long
    void* v9;  // [sp-0x530], Other Possible Types: unsigned long long
    int v10;  // [sp-0x528], Other Possible Types: unsigned long long *
    struct_0 *v11;  // [sp-0x520]
    unsigned long long *v12;  // [bp-0x518], Other Possible Types: unsigned long
    unsigned long long v14;  // [bp-0x4f8]
    char v15;  // [bp-0x4f0]
    int v20;  // [bp-0x4c8], Other Possible Types: void*
    struct_0 *v22;  // [sp-0x4b8]
    unsigned long long *v25;  // [sp-0x498]
    char v26;  // [sp-0x490]
    struct_0 *v28;  // [bp-0x478]
    unsigned long v31;  // [sp-0x468]
    unsigned long long *v36;  // [sp-0x340]
    char v37;  // [sp-0x338]
    char v38;  // [bp-0x330]
    struct_0 *v40;  // [sp-0x320]
    struct_2 *v49;  // r15
    unsigned long long v50;  // rax
    unsigned long long v51;  // 4096
    struct_2 *v52;  // rax
    unsigned long long *v54;  // r14
    struct_0 *v55;  // r12
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // ymm0
    int v59;  // ymm0

    v36 = a1;
    v37 = a2;
    v2 = a3->field_f0;
    if (v2)
    {
        v49 = 8;
        v50 = 0;
        goto LABEL_4d075f;
    }
    v8 = a2;
    a1 = a1;
    v52 = __rust_alloc(608, 8);
    if (!v52)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v49 = v52;
    v54 = a0->field_28;
    if (!v54)
    {
        v55 = 1;
        goto LABEL_4d05fd;
    }
    if (v54 < 0)
    {
        v9 = 0;
        goto LABEL_4d1a14;
    }
    else
    {
        v9 = 1;
        v55 = __rust_alloc(v54, 1);
        if (!v55)
        {
LABEL_4d1a14:
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
LABEL_4d05fd:
        memcpy(v11, a0->field_20, v54);
        v10 = v54;
        v11 = v55;
        v12 = v54;
        v28 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v38, "...a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5d", 1);
        v22 = v40;
        v56 = *((int128_t *)&v38);
        v20 = v56;
        uu_ls::PathData::new::hfdca4be64b8c2591(&v38, &v10, &v28, &v20, a3, 0, *((long long *)&v0), *((long long *)&v1));
        std::path::Path::_join::h609728e54bd034cb(&v15, a0->field_20, a0->field_28, "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v20 = 0;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v28, "..a Display implementation returned an error unexpectedly/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/string.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rsoverflow in Duration::new/rustc/8bfcae730a5db", 2);
        v12 = v31;
        v57 = *((int128_t *)&v28);
        v59 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
        v10 = v57;
        uu_ls::PathData::new::hfdca4be64b8c2591(&v28, &v15, &v20, &v10, a3, 0, *((long long *)&v0), *((long long *)&v1));
        memcpy(v49, &v38, 304);
        memcpy(&v49[1].padding_0[6], &v28, 304);
        v50 = 2;
LABEL_4d075f:
        v4 = v50;
        v5 = v49;
        v6 = v4;
        v25 = a1;
        v26 = v8;
        v8 = a3->field_8;
        v14 = v51 + 32;
        v9 = a3->field_10 * 56;
        v10 = v10;
    }
}
