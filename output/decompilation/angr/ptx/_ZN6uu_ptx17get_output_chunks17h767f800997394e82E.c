long long uu_ptx::get_output_chunks::h767f800997394e82(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned int *a4, unsigned long a5, unsigned long long a6[11])
{
    unsigned long v0;  // [bp-0x1c8], Other Possible Types: unsigned int
    unsigned long long v1;  // [sp-0x1c0]
    char v2;  // [sp-0x1b8], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0x1b0], Other Possible Types: unsigned long
    char *v4;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x1a0]
    void* v6;  // [sp-0x198]
    unsigned long long v7;  // [sp-0x188]
    unsigned long long v8;  // [sp-0x178]
    unsigned long long v9;  // [sp-0x160]
    unsigned long long v10;  // [sp-0x158]
    unsigned long v11;  // [sp-0x150]
    unsigned long long v12;  // [sp-0x148]
    char *v13;  // [sp-0x140]
    unsigned long long v14;  // [sp-0x138]
    unsigned long v15;  // [sp-0x128]
    unsigned long long v16;  // [sp-0x120]
    void* v17;  // [sp-0x118]
    unsigned long v18;  // [sp-0x110]
    unsigned long long v19;  // [sp-0x108]
    void* v20;  // [sp-0x100]
    unsigned long v21;  // [sp-0xf8]
    unsigned long long v22;  // [sp-0xf0]
    char *v23;  // [sp-0xe8]
    unsigned long long v24;  // [sp-0xe0]
    unsigned long long v25;  // [sp-0xd8]
    unsigned long long v26;  // [sp-0xd0]
    char v27;  // [bp-0xc0]
    char v28;  // [bp-0xb8]
    char v29;  // [bp-0xb0]
    char v30;  // [bp-0xa8]
    char v31;  // [bp-0xa0]
    char v32;  // [bp-0x98]
    char v33;  // [bp-0x90]
    char v34;  // [bp-0x88]
    char v35;  // [bp-0x80]
    char v36;  // [bp-0x78]
    char v37;  // [bp-0x70]
    char v38;  // [bp-0x68]
    char v39;  // [bp-0x60]
    char v40;  // [bp-0x50]
    char v41;  // [bp-0x48]
    char v42;  // [bp-0x38]
    unsigned long long v43;  // r15
    unsigned int *v44;  // r13
    unsigned long v45;  // rdx
    unsigned long long v46;  // rax
    unsigned long v47;  // rcx
    unsigned long long v48;  // rax
    unsigned long v49;  // r15
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    unsigned int *v52;  // rbx
    unsigned long long v53;  // r15
    unsigned long long v54;  // rax

    v43 = a6[9] >> 1;
    v14 = a6[10];
    v1 = core::cmp::max_by::hbbe48af9e9e1ea74(v43 - v14);
    v25 = a6[5];
    v12 = core::cmp::max_by::hbbe48af9e9e1ea74(~(v25 * 2 + a3) + v43);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v43, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v9, v4); /* do not return */
    v9 = v3;
    v9 = v4;
    v10 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v43, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v7, v4); /* do not return */
    v7 = v3;
    v7 = v4;
    v8 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v43, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v15, v4); /* do not return */
    v15 = v3;
    v16 = v4;
    v17 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&v2, v43, 0);
    if (v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v18, v4); /* do not return */
    v18 = v3;
    v19 = v4;
    v20 = 0;
    v44 = a1;
    uu_ptx::trim_idx::hb7cdb8e465fc0246(v44, a2, 0, a2);
    v11 = uu_ptx::trim_idx::hb7cdb8e465fc0246(v44, a2, uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(v44, a2, core::cmp::max_by::hbbe48af9e9e1ea74(v45 - v1), v45), v45);
    v46 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v11, v45, v44, a2, &g_6edee0);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v27, v46, v46 + v45 * 4);
    v0 = v47 & 0xffffffffffffff00 | 1;
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v7, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v28), *((long long *)&v29) + *((long long *)&v28)), a2);
    if (v1 < v8)
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 49, &g_6edef8); /* do not return */
    uu_ptx::trim_idx::hb7cdb8e465fc0246(a4, a5, 0, uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(a4, a5, 0, ::0x5b1c70::core::cmp::min_by::hf83f431a39c20930(v12, a5)));
    v48 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(0, v45, a4, a5, &g_6edf10);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v30, v48, v48 + v45 * 4);
    v0 = v47 & 0xffffffffffffff00 | 1;
    v13 = &v15;
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v15, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v31), *((long long *)&v32) + *((long long *)&v31)), a2);
    if (v12 < v17)
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 47, &g_6edf28); /* do not return */
    v49 = uu_ptx::trim_idx::hb7cdb8e465fc0246(a4, a5, v45, a5);
    v50 = uu_ptx::trim_idx::hb7cdb8e465fc0246(a4, a5, v49, uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(a4, a5, v49, ::0x5b1c70::core::cmp::min_by::hf83f431a39c20930(a5, v49 + core::cmp::max_by::hbbe48af9e9e1ea74(v1 - (v8 + v14)))));
    v51 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v50, v45, a4, a5, &g_6edf40);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v33, v51, v51 + v45 * 4);
    v26 = v50;
    v0 = v45;
    v1 = v45;
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v18, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v34), *((long long *)&v35) + *((long long *)&v34)), a2);
    v52 = a1;
    uu_ptx::trim_idx::hb7cdb8e465fc0246(v52, a2, 0, v11);
    v53 = uu_ptx::trim_idx::hb7cdb8e465fc0246(v52, a2, uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(v52, a2, core::cmp::max_by::hbbe48af9e9e1ea74(v45 - core::cmp::max_by::hbbe48af9e9e1ea74(v12 - (v14 + v17))), v45), v45);
    v54 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(v53, v45, v52, a2, &g_6edf58);
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&v36, v54, v54 + v45 * 4);
    ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&v9, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(*((long long *)&v37), *((long long *)&v38) + *((long long *)&v37)), a2);
    if (v1 != a5 && (v26 == v0 || (v13 = (char *)&v18, v0 != a5)))
    {
        ::0x5b4820::alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(v13, ::0x5b40b0::core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(a6[4], v25 + a6[4]), a2);
    }
    if (!v11)
    {
        a0->field_10 = v20;
        a0->field_0 = *((int128_t *)&v18);
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
        *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v7);
        *((int128_t *)&a0->field_28) = *((int128_t *)&v15);
        *((void* *)&a0->field_30) = v17;
        *((int128_t *)((char *)&a0->field_30 + 8)) = *((int128_t *)&v9);
        (&a0->field_40)[1] = v10;
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v36);
        v0 = 0;
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v33);
        v0 = 0;
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v30);
        return ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v27);
    }
    if (v53 == v45)
    {
        v21 = &a6[3];
        v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v23 = &v7;
        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_4562c0;
        v3 = 2;
        v6 = 0;
        v4 = &v21;
        v5 = 2;
        ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&v39, &v2);
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v7);
        v8 = *((long long *)&v40);
        *((int128_t *)&v7) = *((int128_t *)&v39);
    }
    else if (v53)
    {
        v21 = v21;
        v22 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v23 = &v9;
        v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &g_4562c0;
        v3 = 2;
        v6 = 0;
        v4 = &v21;
        v5 = 2;
        ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&v41, &v2);
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v9);
        v10 = *((long long *)&v42);
        *((int128_t *)&v9) = *((int128_t *)&v41);
    }
}
