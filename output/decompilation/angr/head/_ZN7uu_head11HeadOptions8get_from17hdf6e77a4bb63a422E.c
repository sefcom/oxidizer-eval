long long uu_head::HeadOptions::get_from(struct_1 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x128]
    void* v2;  // [bp-0x120]
    unsigned long long v3;  // [bp-0x118]
    void* v4;  // [bp-0x110], Other Possible Types: unsigned long long
    char v5;  // [bp-0x108], Other Possible Types: unsigned int
    char v6;  // [bp-0x107]
    char v7;  // [bp-0x106]
    char v8;  // [bp-0x105]
    char v9;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x100]
    struct_0 *v11;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xf0]
    int v13;  // [bp-0xb8], Other Possible Types: char
    int v14;  // [bp-0xa8]
    int v15;  // [bp-0x98]
    int v16;  // [bp-0x88]
    int v17;  // [bp-0x78], Other Possible Types: char
    unsigned long long v18;  // [bp-0x68]
    int v19;  // [bp-0x58]
    int v20;  // [bp-0x48]
    int v21;  // [bp-0x38]
    int v22;  // [bp-0x28]
    struct_0 *v25;  // rax
    struct_0 *v26;  // r14
    int v27;  // xmm0
    int v28;  // xmm1

    v5 = 0xa000000;
    v0 = 0;
    v1 = 10;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = a1.get_flag("QUIETquietsilenthead-help-quietVERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x8", 5);
    v6 = a1.get_flag("VERBOSEverbosehead-help-verbose-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rust", 7);
    *((int *)&v8) = ((char)a1.get_flag("ZEROkeysu128", 4) ? 0 : 10);
    v7 = a1.get_flag("-PRESUME-INPUT-PIPEpresume-input-pipe-presume-input-pipezero-terminatedhead-help-zero-terminatederrhead-error-invalid-byteshead-error-invalid-lines-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/i", 19);
    v9.from(a1);
    if (!((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63)))
    {
        *((unsigned long long *)&a0->padding_1[7]) = v9;
        *((unsigned long long *)&a0->field_10) = v11;
        *((unsigned long long *)&a0->padding_11[7]) = v12;
        *((unsigned long long *)&a0->field_0) = 4;
        core::ptr::drop_in_place<uu_head::HeadOptions>(&v0);
        return a0;
    }
    v0 = v11;
    v1 = v12;
    v9.try_get_many(a1, "FILEchar", 4);
    v13.unwrap("FILEchar", 4, &v9);
    if (*((long long *)&v13))
    {
        v22 = v16;
        v21 = v15;
        v20 = v14;
        v19 = v13;
        v9.from_iter(&v19, &g_5933f8);
    }
    else
    {
        v25 = 24.alloc_impl();
        if (!v25)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v26 = v25;
        v9.to_vec("-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
        v18 = v12;
        memcpy(&v17, &v9, 16);
        v26->field_10 = v12;
        *((void*)&v26->field_0) = v17;
        v10 = 1;
        v11 = v26;
        v12 = 1;
    }
    ::0x4ac760::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    v4 = v12;
    memcpy(&v2, &v9, 16);
    v27 = *((int128_t *)&v0);
    v28 = *((int128_t *)&v2);
    a0->field_20 = *((int128_t *)&v4);
    *((void*)&a0->field_10) = v28;
    *((void*)&a0->field_0) = v27;
    return a0;
}
