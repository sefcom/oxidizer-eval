long long uu_ptx::format_roff_line::h4297720d7d6a4583(struct_3 *a0, char a1[91], unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0[91];  // [sp-0x218]
    char v1;  // [sp-0x201]
    unsigned long long v2;  // [sp-0x200]
    char v3[91];  // [sp-0x1e8]
    void* v4;  // [sp-0x1e0]
    unsigned long long v5;  // [sp-0x1d8]
    void* v6;  // [sp-0x1d0]
    char *v7;  // [sp-0x1c8]
    unsigned long long v8;  // [sp-0x1c0]
    char *v9;  // [sp-0x1b8], Other Possible Types: struct struct_0 **, struct struct_1 **
    unsigned long long v10;  // [sp-0x1b0]
    char *v11;  // [sp-0x1a8], Other Possible Types: void*
    unsigned long v12;  // [sp-0x1a0], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x198], Other Possible Types: char
    unsigned long long v14;  // [sp-0x190]
    struct struct_1 **v15;  // [sp-0x188], Other Possible Types: unsigned long
    char v16;  // [bp-0x180], Other Possible Types: unsigned long long
    char v17;  // [bp-0x170]
    int v18;  // [sp-0x168]
    struct struct_0 **v19;  // [sp-0x158]
    int v20;  // [sp-0x148]
    unsigned long long v21;  // [sp-0x138]
    int v22;  // [sp-0x128]
    unsigned long long v23;  // [sp-0x118]
    int v24;  // [sp-0x108]
    unsigned long long v25;  // [sp-0xf8]
    unsigned long long v26;  // [sp-0xe8]
    char v27[91];  // [sp-0xd8]
    unsigned long long v28;  // [sp-0xd0]
    struct struct_2 **v29;  // [sp-0xc8]
    unsigned long long v30;  // [sp-0xc0]
    void* v31;  // [sp-0xb8]
    struct struct_0 **v32;  // [bp-0xa8]
    unsigned long long v33;  // [sp-0xa0]
    char v34;  // [bp-0x90]
    char v35;  // [bp-0x78]
    char v36;  // [bp-0x60]
    char v37;  // [bp-0x48]
    unsigned long long v38;  // [bp+0x8]
    char v39;  // [bp+0x10]
    char v40;  // [bp+0x18]
    char v41;  // [bp+0x20]
    void* v42;  // r14
    unsigned long long v43;  // rax
    unsigned long long v44;  // r8
    void* v45;  // r14
    unsigned long long v46;  // r8
    unsigned long v47;  // rdx
    unsigned long long v48;  // rax
    unsigned long long v49;  // r12
    unsigned long v50;  // rax

    v2 = a2;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    *((char *[91])&v3[0]) = a1;
    *((char *[91])&v27[0]) = a1;
    v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v7 = &g_6ee100;
    v8 = 1;
    v11 = 0;
    v9 = &v27[0];
    v10 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed((unsigned int)::0x5b4d50::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&v4, &v7), &g_6ee190);
    v1 = v3[90];
    if (!v1)
    {
        v44 = &g_6ee1a8;
        v45 = 0;
        v2 = v2;
        goto LABEL_5b85d3;
    }
    else
    {
        v42 = 0;
        v43 = ::0x5b37d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, v2, a4, a5);
        if (!v43)
        {
            v46 = &g_6ee1c0;
        }
        else
        {
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::he60d0121d8eb8a5f(core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h6c3139838afd9563(v43, v47, *((long long *)&v40), *((long long *)&v41)), v47);
            v45 = v2 - v47;
            v48 = ::0x5b1c30::core::cmp::max_by::h25e6646c8b089280(v47, v45);
            v44 = &g_6ee1d8;
LABEL_5b85d3:
            v49 = *((long long *)&v39);
            v50 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v45, v2, v38, v49, v44);
            v42 = v2;
            v26 = ::0x5b37d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v42, a3, a4, a5);
            if (!v26)
            {
                v46 = &g_6ee1f0;
                v2 = a3;
            }
            else
            {
                *((char *[91])&v0[0]) = v3;
                uu_ptx::get_output_chunks::h767f800997394e82(&v7, v50, v47, v47, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(a3, v49, v38, v49, &g_6ee208), v47);
                v19 = v9;
                *((int128_t *)&v18) = *((int128_t *)&v7);
                v21 = v12;
                *((int128_t *)&v20) = *((int128_t *)&v10);
                v23 = v15;
                *((int128_t *)&v22) = *((int128_t *)&v13);
                v25 = *((long long *)&v17);
                *((int128_t *)&v24) = *((int128_t *)&v16);
                uu_ptx::format_roff_field::h47edd2e5708f32dc(&v34, (long long)(&v18)[8], v19);
                uu_ptx::format_roff_field::h47edd2e5708f32dc(&v35, (long long)(&v20)[8], v21);
                uu_ptx::format_roff_field::h47edd2e5708f32dc(&v36, v26, v47);
                uu_ptx::format_roff_field::h47edd2e5708f32dc(&v37, (long long)(&v22)[8], v23);
                uu_ptx::format_roff_field::h47edd2e5708f32dc(&v32, (long long)(&v24)[8], v25);
                v7 = &v34;
                v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v9 = &v35;
                v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v11 = &v36;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v13 = &v37;
                v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v15 = &v32;
                v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                *((char **)&v27[0]) = &g_6ee110[0];
                v28 = 6;
                v31 = 0;
                v29 = &v7;
                v30 = 5;
                core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed((unsigned int)::0x5b4d50::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&v4, v27), &g_6ee220);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v32);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v37);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v36);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v35);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v34);
                if (!(!(!v1) || !(!v3[89])))
                {
                    a0->field_10 = v6;
                    a0->field_0 = *((int128_t *)&v4);
                    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v24);
                    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v22);
                    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v20);
                    return ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v18);
                }
                uu_ptx::format_roff_field::h47edd2e5708f32dc(v27, *((long long *)&v40), *((long long *)&v41));
                v32 = &v27[0];
                v33 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v7 = &g_6ee170;
                v8 = 2;
                v11 = 0;
                v9 = &v32;
                v10 = 1;
                core::result::Result$LT$T$C$E$GT$::unwrap::h3bbd009910b604ed((unsigned int)::0x5b4d50::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h48ff5af1aa7ea5e9(&v4, &v7), &g_6ee238);
                ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(v27);
            }
        }
        core::str::slice_error_fail::h5dbb61534404fe7e(a4, a5, v42, v2, v46); /* do not return */
    }
}
