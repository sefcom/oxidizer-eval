long long uu_ptx::format_roff_line::h9832972748f4edb9(struct_0 *a0, char a1[91], unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0[91];  // [sp-0x218]
    char v1;  // [sp-0x201]
    unsigned long long v2;  // [sp-0x200]
    char v3[91];  // [sp-0x1e8]
    void* v4;  // [sp-0x1e0]
    unsigned long long v5;  // [sp-0x1d8]
    void* v6;  // [sp-0x1d0]
    unsigned long v7;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x1c0]
    struct struct_1 **v9;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x1b0]
    void* v11;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0x1a0], Other Possible Types: unsigned long long
    char v13;  // [bp-0x198], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x190]
    unsigned long v15;  // [sp-0x188], Other Possible Types: unsigned long long
    char v16;  // [bp-0x180], Other Possible Types: unsigned long long
    char v17;  // [bp-0x170]
    int v18;  // [sp-0x168]
    struct struct_1 **v19;  // [sp-0x158]
    int v20;  // [sp-0x148]
    unsigned long long v21;  // [sp-0x138]
    int v22;  // [sp-0x128]
    unsigned long long v23;  // [sp-0x118]
    int v24;  // [sp-0x108]
    unsigned long long v25;  // [sp-0xf8]
    unsigned long long v26;  // [sp-0xe8]
    char v27[91];  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0xd0]
    unsigned long long v29;  // [sp-0xc8]
    unsigned long long v30;  // [sp-0xc0]
    void* v31;  // [sp-0xb8]
    char v32;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v33;  // [sp-0xa0]
    char v34;  // [bp-0x90]
    char v35;  // [bp-0x78]
    char v36;  // [bp-0x60]
    char v37;  // [bp-0x48]
    unsigned long long v38;  // [bp+0x8]
    char v39;  // [bp+0x10]
    char v40;  // [bp+0x18]
    char v41;  // [bp+0x20]
    unsigned long long v42;  // rax
    unsigned long long v43;  // r8
    void* v44;  // r14
    unsigned long v45;  // rdx
    unsigned long long v46;  // rax
    unsigned long long v47;  // r12
    unsigned long v48;  // rax

    v2 = a2;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    *((char *[91])&v3[0]) = a1;
    *((char *[91])&v27[0]) = a1;
    v28 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v7 = &g_6ee9c8;
    v8 = 1;
    v11 = 0;
    v9 = &v27[0];
    v10 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h03a7327dea4a7f44((unsigned int)::0x5b47d0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hed4f63d3e22cf8b5(&v4, &v7), &g_6ee9d8);
    v1 = v3[90];
    if (!v1)
    {
        v43 = &g_6ee9f0;
        v44 = 0;
        v2 = v2;
        goto LABEL_5b80c3;
    }
    else
    {
        v42 = ::0x5b3250::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(0, v2, a4, a5);
        if (!v42)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hc33c24b839ffc239(core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h84193ab610afa5a7(v42, v45, *((long long *)&v40), *((long long *)&v41)), v45);
        v44 = v2 - v45;
        v46 = ::0x5b16b0::core::cmp::max_by::h387cdd7713a1779c(v45, v44);
        v43 = &g_6eea20;
LABEL_5b80c3:
        v47 = *((long long *)&v39);
        v48 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he963c4e29c1c5532(v44, v2, v38, v47, v43);
        v26 = ::0x5b3250::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v2, a3, a4, a5);
        if (!v26)
        {
            v2 = a3;
        }
        else
        {
            *((char *[91])&v0[0]) = v3;
            uu_ptx::get_output_chunks::hc16b38bdeddd0842(&v7, v48, v45, v45, _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he963c4e29c1c5532(a3, v47, v38, v47, &g_6eea50), v45);
            v19 = v9;
            *((int128_t *)&v18) = *((int128_t *)&v7);
            v21 = v12;
            *((int128_t *)&v20) = *((int128_t *)&v10);
            v23 = v15;
            *((int128_t *)&v22) = *((int128_t *)&v13);
            v25 = *((long long *)&v17);
            *((int128_t *)&v24) = *((int128_t *)&v16);
            uu_ptx::format_roff_field::h58094dbe3cf8bfff(&v34, (long long)(&v18)[8], v19);
            uu_ptx::format_roff_field::h58094dbe3cf8bfff(&v35, (long long)(&v20)[8], v21);
            uu_ptx::format_roff_field::h58094dbe3cf8bfff(&v36, v26, v45);
            uu_ptx::format_roff_field::h58094dbe3cf8bfff(&v37, (long long)(&v22)[8], v23);
            uu_ptx::format_roff_field::h58094dbe3cf8bfff(&v32, (long long)(&v24)[8], v25);
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
            v27 = &g_6eea68;
            v28 = 6;
            v31 = 0;
            v29 = &v7;
            v30 = 5;
            core::result::Result$LT$T$C$E$GT$::unwrap::h03a7327dea4a7f44((unsigned int)::0x5b47d0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hed4f63d3e22cf8b5(&v4, v27), &g_6eeac8);
            ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v32);
            ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v37);
            ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v36);
            ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v35);
            ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v34);
            if (!(!(!v1) || !(!v3[89])))
            {
                a0->field_10 = v6;
                a0->field_0 = *((int128_t *)&v4);
                ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v24);
                ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v22);
                ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v20);
                return ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v18);
            }
            uu_ptx::format_roff_field::h58094dbe3cf8bfff(v27, *((long long *)&v40), *((long long *)&v41));
            v32 = v27;
            v33 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v7 = &g_6eeae0;
            v8 = 2;
            v11 = 0;
            v9 = &v32;
            v10 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h03a7327dea4a7f44((unsigned int)::0x5b47d0::_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hed4f63d3e22cf8b5(&v4, &v7), &g_6eeb00);
            ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(v27);
        }
    }
}
