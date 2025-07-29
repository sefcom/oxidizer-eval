long long uu_wc::print_stats(char a0[29], unsigned long long a1[5], unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x190]
    unsigned long long v1;  // [bp-0x188]
    void* v2;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x178]
    unsigned long long v4;  // [bp-0x170]
    char *v5;  // [bp-0x168], Other Possible Types: unsigned long long
    int v6;  // [bp-0x160], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x158]
    unsigned long long v8;  // [bp-0x150]
    char v9;  // [bp-0x148]
    unsigned long long v10;  // [bp-0x140]
    unsigned long long v11;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x120]
    unsigned long long v14;  // [bp-0x118]
    char v15;  // [bp-0x110]
    char *v16;  // [bp-0xf8]
    char *v17;  // [bp-0xf0]
    struct struct_0 v18[8];  // [bp-0xe8]
    char *v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    char *v21;  // [bp-0xd0]
    unsigned long long v22;  // [bp-0xc8]
    void* v23;  // [bp-0xc0]
    unsigned long long v24;  // [bp-0xb8]
    struct struct_0 v25[8];  // [bp-0xb0]
    unsigned long v26;  // [bp-0xa8]
    char v27;  // [bp-0xa0]
    unsigned long v28;  // [bp-0x98]
    char v29;  // [bp-0x90]
    unsigned long v30;  // [bp-0x88]
    char v31;  // [bp-0x80]
    unsigned long v32;  // [bp-0x78]
    char v33;  // [bp-0x70]
    unsigned long v34;  // [bp-0x68]
    char v35;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x58]
    char *v37;  // [bp-0x50]
    unsigned long long v38;  // [bp-0x48]
    char *v39;  // [bp-0x40]
    unsigned long long v40;  // [bp-0x38]
    unsigned long long v42;  // rax
    unsigned long long v43;  // r13

    v3 = std::io::stdio::stdout();
    v0 = v3.lock();
    v25->field_0 = a0[26];
    v26 = a1[2];
    v27 = a0[27];
    v28 = a1[3];
    v29 = a0[25];
    v30 = a1[1];
    v31 = a0[24];
    v32 = a1[0];
    v33 = a0[28];
    v34 = a1[4];
    v1 = 1;
    v2 = 0;
    v16 = &v25[0].field_0;
    v17 = &v35;
    if (v16.find())
    {
        while (true)
        {
            *((unsigned long long *)&v18[0]) = v42 + 8;
            v19 = &v1;
            v20 = <&T as core::fmt::Display>::fmt;
            v21 = &v18[0].field_0;
            v22 = <&T as core::fmt::Display>::fmt;
            v23 = 0;
            v24 = a4;
            v3 = 2;
            v5 = 2;
            v7 = 0;
            v8 = 32;
            v9 = 3;
            v10 = 2;
            v11 = 1;
            v12 = 2;
            v13 = 1;
            v14 = 32;
            v15 = 3;
            v35 = &g_431f30;
            v36 = 2;
            v39 = &v3;
            v40 = 2;
            v37 = &v19;
            v38 = 3;
            if (v0.write_fmt(&v35))
                break;
            v1 = " FilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxwc-error-files-disabledwc-error-stdin-repr-not-allowedwc-error-zero-length-filenamewc-error-zero-length-filename-ctxcapacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs";
            v2 = 1;
            v42 = v16.find();
            if (!v42)
                goto LABEL_4b4822;
        }
    }
LABEL_4b4822:
    if (a2)
    {
        v19 = &v1;
        v20 = <&T as core::fmt::Display>::fmt;
        v3 = &g_430380;
        v4 = 1;
        v7 = 0;
        v5 = &v19;
        v6 = 1;
        v43 = v0.write_fmt(&v3);
        if (!v43)
        {
            v4 = a2;
            v5 = a3;
            v3 = 0x8000000000000000;
            v43 = v0.write_all(a2, a3);
            if (v43)
            {
                core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v3);
            }
            else
            {
                core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v3);
                goto LABEL_4b48eb;
            }
        }
    }
    else
    {
LABEL_4b48eb:
        v3 = &g_59f240;
        v4 = 1;
        v5 = 8;
        *((uint128_t *)&v6) = 0;
        v43 = v0.write_fmt(&v3);
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v43;
}
