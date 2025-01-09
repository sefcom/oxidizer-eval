long long uu_ptx::get_output_chunks::h767f800997394e82(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned int *a4, unsigned long a5)
{
    unsigned long v0;  // [bp-0x1c8], Other Possible Types: unsigned int
    unsigned long long v1;  // [sp-0x1c0]
    char v2;  // [bp-0x1b8], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v3;  // [sp-0x1b0], Other Possible Types: unsigned long
    char *v4;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x1a0]
    void* v6;  // [sp-0x198]
    int v7;  // [sp-0x188], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0x180]
    unsigned long long v9;  // [sp-0x178]
    int v10;  // [sp-0x168], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x160]
    unsigned long long v12;  // [sp-0x158]
    unsigned long v13;  // [sp-0x150]
    unsigned long long v14;  // [sp-0x148]
    char *v15;  // [sp-0x140]
    unsigned long long v16;  // [sp-0x138]
    unsigned long v17;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x120]
    void* v19;  // [sp-0x118]
    unsigned long v20;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x108]
    void* v22;  // [sp-0x100]
    unsigned long v23;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0xf0]
    char *v25;  // [sp-0xe8]
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
    unsigned long v49;  // rdx
    unsigned long long v50;  // rax
    unsigned long v51;  // rcx
    unsigned long long v52;  // rax
    unsigned long v53;  // r15
    unsigned long long v54;  // rax
    unsigned long long v55;  // rax
    unsigned int *v56;  // rbx
    unsigned long long v57;  // r15
    unsigned long long v58;  // rax
    unsigned long long v59[11];  // r13

    v46 = v45;
    v47 = v46[9] >> 1;
    v16 = v46[10];
    v1 = core::cmp::max_by::hbbe48af9e9e1ea74(v47 - v16);
    v27 = v46[5];
    v14 = core::cmp::max_by::hbbe48af9e9e1ea74(~(v27 * 2 + a3) + v47);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v10, v4); /* do not return */
    v10 = v3;
    v11 = v4;
    v12 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v7, v4); /* do not return */
    v7 = v3;
    v8 = v4;
    v9 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v17, v4); /* do not return */
    v17 = v3;
    v18 = v4;
    v19 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v47, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v20, v4); /* do not return */
    v20 = v3;
    v21 = v4;
    v22 = 0;
    v48 = a1;
    uu_ptx::trim_idx::hb7cdb8e465fc0246(v48, a2, 0, a2);
    v13 = uu_ptx::trim_idx::hb7cdb8e465fc0246(v48, a2, uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(v48, a2, core::cmp::max_by::hbbe48af9e9e1ea74(v49 - v1), v49), v49);
    v50 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v13, v49, v48, a2, &g_6edee0);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v29, v50, v50 + v49 * 4);
    v0 = v51 | -0x100 | 1;
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v7, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v30), *((long long *)&v31) + *((long long *)&v30)), v49);
    if (v1 < v9)
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 49, &g_6edef8); /* do not return */
    uu_ptx::trim_idx::hb7cdb8e465fc0246(a4, a5, 0, uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(a4, a5, 0, ::0x5b1c70::core::cmp::min_by::hf83f431a39c20930(v14, a5)));
    v52 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(0, v49, a4, a5, &g_6edf10);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v32, v52, v52 + v49 * 4);
    v0 = v51 | -0x100 | 1;
    v15 = &v17;
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v17, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v33), *((long long *)&v34) + *((long long *)&v33)), v49);
    if (v14 < v19)
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 47, &g_6edf28); /* do not return */
    v53 = uu_ptx::trim_idx::hb7cdb8e465fc0246(a4, a5, v49, a5);
    v54 = uu_ptx::trim_idx::hb7cdb8e465fc0246(a4, a5, v53, uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(a4, a5, v53, ::0x5b1c70::core::cmp::min_by::hf83f431a39c20930(a5, v53 + core::cmp::max_by::hbbe48af9e9e1ea74(v1 - (v9 + v16)))));
    v55 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v54, v49, a4, a5, &g_6edf40);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v35, v55, v55 + v49 * 4);
    v28 = v54;
    v0 = v49;
    v1 = v49;
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v20, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v36), *((long long *)&v37) + *((long long *)&v36)), v49);
    v56 = a1;
    uu_ptx::trim_idx::hb7cdb8e465fc0246(v56, a2, 0, v13);
    v57 = uu_ptx::trim_idx::hb7cdb8e465fc0246(v56, a2, uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(v56, a2, core::cmp::max_by::hbbe48af9e9e1ea74(v49 - core::cmp::max_by::hbbe48af9e9e1ea74(v14 - (v16 + v19))), v49), v49);
    v58 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v57, v49, v56, a2, &g_6edf58);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v38, v58, v58 + v49 * 4);
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v10, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v39), *((long long *)&v40) + *((long long *)&v39)), v49);
    v59 = v45;
    if (v1 != a5 && (v28 == v0 || (v15 = (char *)&v20, v0 != a5)))
    {
        ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(v15, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(v59[4], v27 + v59[4]), v49);
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
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v38);
        v0 = 0;
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v35);
        v0 = 0;
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v32);
        return ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v29);
    }
    if (v57 == v49)
    {
        v23 = &v59[3];
        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v25 = &v7;
        v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_4562c0;
        v3 = 2;
        v6 = 0;
        v4 = &v23;
        v5 = 2;
        ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555();
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v7);
        v9 = *((long long *)&v42);
        *((int128_t *)&v7) = *((int128_t *)&v41);
    }
    else if (v57)
    {
        v23 = v23;
        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v25 = &v10;
        v26 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_4562c0;
        v3 = 2;
        v6 = 0;
        v4 = &v23;
        v5 = 2;
        ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555();
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v10);
        v12 = *((long long *)&v44);
        *((int128_t *)&v10) = *((int128_t *)&v43);
    }
}
