long long uu_ptx::get_output_chunks::hc16b38bdeddd0842(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned int *a4, unsigned long a5)
{
    unsigned long v0;  // [bp-0x1c8], Other Possible Types: unsigned int
    unsigned long long v1;  // [sp-0x1c0]
    char v2;  // [bp-0x1b8], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v3;  // [sp-0x1b0], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x1a8], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x1a0]
    void* v6;  // [sp-0x198]
    int v7;  // [sp-0x188], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0x180]
    unsigned long long v9;  // [sp-0x178]
    int v10;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x160]
    unsigned long long v12;  // [sp-0x158]
    unsigned int *v13;  // [sp-0x150]
    unsigned long long v14;  // [sp-0x148]
    unsigned long long v15;  // [sp-0x140]
    unsigned long long v16;  // [sp-0x138]
    unsigned long v17;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x120]
    void* v19;  // [sp-0x118]
    unsigned long v20;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x108]
    void* v22;  // [sp-0x100]
    unsigned long v23;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0xf0]
    unsigned long long v25;  // [sp-0xe8]
    unsigned long long v26;  // [sp-0xe0]
    unsigned long long v27;  // [sp-0xd8]
    unsigned long long v28;  // [sp-0xd0]
    char v29;  // [bp-0xc0]
    char v30;  // [bp-0xb8]
    char v31;  // [bp-0xb0]
    char v32;  // [bp-0xa8]
    char v33;  // [bp-0xa0]
    char v34;  // [bp-0x98]
    char v35;  // [bp-0x90]
    char v36;  // [bp-0x88]
    char v37;  // [bp-0x80]
    char v38;  // [bp-0x78]
    char v39;  // [bp-0x70]
    char v40;  // [bp-0x68]
    char v41;  // [bp-0x60]
    char v42;  // [bp-0x50]
    char v43;  // [bp-0x48]
    char v44;  // [bp-0x38]
    unsigned long long v45[11];  // [bp+0x8]
    unsigned long long v46[11];  // rbx
    unsigned long long v47;  // r15
    unsigned int *v48;  // r13
    unsigned int *v49;  // rdx
    unsigned long long v50;  // rax
    unsigned long v51;  // rcx
    unsigned long long v52;  // rax
    unsigned int *v53;  // r15
    unsigned long long v54;  // rax
    unsigned long long v55;  // rax
    unsigned int *v56;  // rbx
    unsigned long long v57;  // r15
    unsigned long long v58;  // rax
    unsigned long long v59[11];  // r13

    v46 = v45;
    v47 = v46[9] >> 1;
    v16 = v46[10];
    v1 = core::cmp::max_by::h79f71330d360da68(v47 - v16);
    v27 = v46[5];
    v14 = core::cmp::max_by::h79f71330d360da68(~(v27 * 2 + a3) + v47);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h6898abccb0e857a5(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v10 = v3;
    v11 = v4;
    v12 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h6898abccb0e857a5(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v7 = v3;
    v8 = v4;
    v9 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h6898abccb0e857a5(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v17 = v3;
    v18 = v4;
    v19 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h6898abccb0e857a5(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v20 = v3;
    v21 = v4;
    v22 = 0;
    v48 = a1;
    uu_ptx::trim_idx::h7ecb08936888c49c(v48, a2, NULL, a2);
    v13 = uu_ptx::trim_idx::h7ecb08936888c49c(v48, a2, uu_ptx::trim_broken_word_left::h74ba8196f87843e9(v48, a2, core::cmp::max_by::h79f71330d360da68((char *)v49 - v1), v49), v49);
    v50 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he963c4e29c1c5532(v13, v49, v48, a2, &g_6ee7a8);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hf53f6a06b4bf4b1e(&v29, v50, v50 + v49 * 4);
    v0 = v51 | -0x100 | 1;
    ::0x5b42a0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h45b164fe84481493(&v7, ::0x5b3b30::core::slice::iter::Iter$LT$T$GT$::make_slice::h230ee1895ea25f27(*((long long *)&v30), *((long long *)&v31) + *((long long *)&v30)), v49);
    if (v1 < v9)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    uu_ptx::trim_idx::h7ecb08936888c49c(a4, a5, NULL, uu_ptx::trim_broken_word_right::ha76bad28250e0a11(a4, a5, NULL, ::0x5b16f0::core::cmp::min_by::h9427d548c05ca610(v14, a5)));
    v52 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he963c4e29c1c5532(0, v49, a4, a5, &g_6ee7d8);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hf53f6a06b4bf4b1e(&v32, v52, v52 + v49 * 4);
    v0 = v51 | -0x100 | 1;
    v15 = &v17;
    ::0x5b42a0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h45b164fe84481493(&v17, ::0x5b3b30::core::slice::iter::Iter$LT$T$GT$::make_slice::h230ee1895ea25f27(*((long long *)&v33), *((long long *)&v34) + *((long long *)&v33)), v49);
    if (v14 < v19)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    v53 = uu_ptx::trim_idx::h7ecb08936888c49c(a4, a5, v49, a5);
    v54 = uu_ptx::trim_idx::h7ecb08936888c49c(a4, a5, v53, uu_ptx::trim_broken_word_right::ha76bad28250e0a11(a4, a5, v53, ::0x5b16f0::core::cmp::min_by::h9427d548c05ca610(a5, (char *)v53 + core::cmp::max_by::h79f71330d360da68(v1 - (v9 + v16)))));
    v55 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he963c4e29c1c5532(v54, v49, a4, a5, &g_6ee808);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hf53f6a06b4bf4b1e(&v35, v55, v55 + v49 * 4);
    v28 = v54;
    v0 = v49;
    v1 = v49;
    ::0x5b42a0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h45b164fe84481493(&v20, ::0x5b3b30::core::slice::iter::Iter$LT$T$GT$::make_slice::h230ee1895ea25f27(*((long long *)&v36), *((long long *)&v37) + *((long long *)&v36)), v49);
    v56 = a1;
    uu_ptx::trim_idx::h7ecb08936888c49c(v56, a2, NULL, v13);
    v57 = uu_ptx::trim_idx::h7ecb08936888c49c(v56, a2, uu_ptx::trim_broken_word_left::h74ba8196f87843e9(v56, a2, core::cmp::max_by::h79f71330d360da68((char *)v49 - core::cmp::max_by::h79f71330d360da68(v14 - (v16 + v19))), v49), v49);
    v58 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he963c4e29c1c5532(v57, v49, v56, a2, &g_6ee820);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hf53f6a06b4bf4b1e(&v38, v58, v58 + v49 * 4);
    ::0x5b42a0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h45b164fe84481493(&v10, ::0x5b3b30::core::slice::iter::Iter$LT$T$GT$::make_slice::h230ee1895ea25f27(*((long long *)&v39), *((long long *)&v40) + *((long long *)&v39)), v49);
    v59 = v45;
    if (v1 != a5 && (v28 == v0 || (v15 = (unsigned long long)&v20, v0 != a5)))
    {
        ::0x5b42a0::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h45b164fe84481493(v15, ::0x5b3b30::core::slice::iter::Iter$LT$T$GT$::make_slice::h230ee1895ea25f27(v59[4], v27 + v59[4]), v49);
    }
    if (!v13)
    {
        a0->field_10 = v22;
        a0->field_0 = *((int128_t *)&v20);
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v9;
        *((int128_t *)&(&a0->field_10)[1]) = (int128_t)v7;
        *((int128_t *)&a0->field_28) = *((int128_t *)&v17);
        *((void* *)&a0->field_30) = v19;
        *((int128_t *)((char *)&a0->field_30 + 8)) = (int128_t)v10;
        (&a0->field_40)[1] = v12;
        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v38);
        v0 = 0;
        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v35);
        v0 = 0;
        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v32);
        return ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v29);
    }
    if (v57 == v49)
    {
        v23 = &v59[3];
        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v25 = &v7;
        v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_4563d0;
        v3 = 2;
        v6 = 0;
        v4 = &v23;
        v5 = 2;
        ::0x5b3b90::core::option::Option$LT$T$GT$::map_or_else::h2b6b835b61421c58(&v41, &v2);
        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v7);
        v9 = *((long long *)&v42);
        *((int128_t *)&v7) = *((int128_t *)&v41);
    }
    else if (v57)
    {
        v23 = v23;
        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v25 = &v10;
        v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_4563d0;
        v3 = 2;
        v6 = 0;
        v4 = &v23;
        v5 = 2;
        ::0x5b3b90::core::option::Option$LT$T$GT$::map_or_else::h2b6b835b61421c58(&v43, &v2);
        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v10);
        v12 = *((long long *)&v44);
        *((int128_t *)&v10) = *((int128_t *)&v43);
    }
}
