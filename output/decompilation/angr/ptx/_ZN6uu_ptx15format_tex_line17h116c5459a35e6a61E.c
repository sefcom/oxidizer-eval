long long uu_ptx::format_tex_line::h116c5459a35e6a61(struct_0 *a0, char a1[91], unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long a9)
{
    char v0;  // [sp-0x201]
    unsigned long long v1;  // [sp-0x200]
    void* v2;  // [sp-0x1e0]
    unsigned long long v3;  // [sp-0x1d8]
    void* v4;  // [sp-0x1d0]
    char *v5;  // [sp-0x1c8]
    unsigned long long v6;  // [sp-0x1c0]
    char *v7;  // [sp-0x1b8], Other Possible Types: struct struct_1 **, struct struct_2 **
    unsigned long long v8;  // [sp-0x1b0]
    char *v9;  // [sp-0x1a8], Other Possible Types: void*
    unsigned long v10;  // [sp-0x1a0], Other Possible Types: unsigned long long
    char *v11;  // [bp-0x198], Other Possible Types: char
    unsigned long long v12;  // [sp-0x190]
    struct struct_2 **v13;  // [sp-0x188], Other Possible Types: unsigned long
    char v14;  // [bp-0x180], Other Possible Types: unsigned long long
    char v15;  // [bp-0x170]
    int v16;  // [sp-0x168]
    struct struct_1 **v17;  // [sp-0x158]
    int v18;  // [sp-0x148]
    unsigned long v19;  // [sp-0x138]
    int v20;  // [sp-0x128]
    unsigned long v21;  // [sp-0x118]
    int v22;  // [sp-0x108]
    unsigned long long v23;  // [sp-0xf8]
    unsigned long long v24;  // [sp-0xe8]
    char v25[91];  // [sp-0xd8]
    unsigned long long v26;  // [sp-0xd0]
    struct struct_3 **v27;  // [sp-0xc8]
    unsigned long long v28;  // [sp-0xc0]
    void* v29;  // [sp-0xb8]
    struct struct_1 **v30;  // [bp-0xa8]
    unsigned long long v31;  // [sp-0xa0]
    char v32;  // [bp-0x90]
    char v33;  // [bp-0x78]
    char v34;  // [bp-0x60]
    char v35;  // [bp-0x48]
    void* v36;  // r14
    unsigned long long v37;  // rax
    unsigned long long v38;  // r8
    void* v39;  // r14
    unsigned long long v40;  // rsi
    unsigned long long v41;  // r8
    unsigned long v42;  // rdx
    unsigned long v43;  // rax

    v1 = a2;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    *((char *[91])&v25[0]) = a1;
    v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v5 = &g_6edfa0;
    v6 = 2;
    v9 = 0;
    v7 = &v25[0];
    v8 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed((unsigned int)::0x5b4d50::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&v2, &v5), &g_6ee040);
    v0 = a1[90];
    if (!v0)
    {
        v38 = &g_6ee058;
        v39 = 0;
        v40 = v1;
        goto LABEL_5b7fd3;
    }
    else
    {
        v36 = 0;
        v37 = ::0x5b37d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, v1, a4, a5);
        if (!v37)
        {
            v41 = &g_6ee070;
        }
        else
        {
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::he60d0121d8eb8a5f(core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h6c3139838afd9563(v37, v42, a8, a9), v42);
            v39 = v1 - v42;
            v40 = ::0x5b1c30::core::cmp::max_by::h25e6646c8b089280(v42, v39);
            v38 = &g_6ee088;
LABEL_5b7fd3:
            v43 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v39, v40, a6, a7, v38);
            v36 = v1;
            v24 = ::0x5b37d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v36, a3, a4, a5);
            if (!v24)
            {
                v41 = &g_6ee0a0;
                v1 = a3;
            }
            else
            {
                uu_ptx::get_output_chunks::h767f800997394e82(&v5, v43, v42, v42, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(a3, a7, a6, a7, &g_6ee0b8), v42, a1);
                v17 = v7;
                *((int128_t *)&v16) = *((int128_t *)&v5);
                v19 = v10;
                *((int128_t *)&v18) = *((int128_t *)&v8);
                v21 = v13;
                *((int128_t *)&v20) = *((int128_t *)&v11);
                v23 = *((long long *)&v15);
                *((int128_t *)&v22) = *((int128_t *)&v14);
                uu_ptx::format_tex_field::h87a349a13005cc2f(&v32, (long long)(&v16)[8], v17);
                uu_ptx::format_tex_field::h87a349a13005cc2f(&v33, (long long)(&v18)[8], v19);
                uu_ptx::format_tex_field::h87a349a13005cc2f(&v34, v24, v42);
                uu_ptx::format_tex_field::h87a349a13005cc2f(&v35, (long long)(&v20)[8], v21);
                uu_ptx::format_tex_field::h87a349a13005cc2f(&v30, (long long)(&v22)[8], v23);
                v5 = &v32;
                v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v7 = &v33;
                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v9 = &v34;
                v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v11 = &v35;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v13 = &v30;
                v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                *((char **)&v25[0]) = &g_6edfc0[0];
                v26 = 6;
                v29 = 0;
                v27 = &v5;
                v28 = 5;
                core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed((unsigned int)::0x5b4d50::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&v2, v25), &g_6ee0d0);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v30);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v35);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v34);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v33);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v32);
                if (!(!(!v0) || !(!a1[89])))
                {
                    a0->field_10 = v4;
                    a0->field_0 = *((int128_t *)&v2);
                    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v22);
                    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v20);
                    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v18);
                    return ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v16);
                }
                uu_ptx::format_tex_field::h87a349a13005cc2f(v25, a8, a9);
                v30 = &v25[0];
                v31 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v5 = &g_6ee020;
                v6 = 2;
                v9 = 0;
                v7 = &v30;
                v8 = 1;
                core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed((unsigned int)::0x5b4d50::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&v2, &v5), &g_6ee0e8);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(v25);
            }
        }
        core::str::slice_error_fail::h5dbb61534404fe7e(a4, a5, v36, v1, v41); /* do not return */
    }
}
