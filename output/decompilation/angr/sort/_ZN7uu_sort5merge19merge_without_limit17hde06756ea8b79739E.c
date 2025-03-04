long long uu_sort::merge::merge_without_limit::hde06756ea8b79739(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x260]
    char v1;  // [bp-0x258]
    char v2;  // [bp-0x250]
    char v3;  // [bp-0x248]
    int v4;  // [sp-0x230]
    unsigned long v5;  // [sp-0x220]
    unsigned long long v6;  // [sp-0x218]
    void* v7;  // [sp-0x210]
    void* v8;  // [bp-0x208], Other Possible Types: char
    unsigned long long v9;  // [sp-0x200]
    void* v10;  // [sp-0x1f8]
    int v11;  // [sp-0x1f0]
    char v12;  // [bp-0x1e0]
    unsigned long v13;  // [sp-0x1d8]
    unsigned long long v14;  // [sp-0x1d0]
    unsigned long v15;  // [sp-0x1c8]
    unsigned long long v16;  // [sp-0x1c0]
    void* v17;  // [sp-0x1b8]
    int v18;  // [sp-0x1b0]
    int v19;  // [bp-0x1a0], Other Possible Types: char, unsigned long
    int v20;  // [sp-0x1a0]
    int v21;  // [sp-0x1a0], Other Possible Types: unsigned long long, unsigned long
    int v22;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    void* v23;  // [sp-0x190], Other Possible Types: int, unsigned long long
    void* v24;  // [sp-0x190], Other Possible Types: char, unsigned long, unsigned long long
    int v25;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v26;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long v27;  // [sp-0x178]
    int v28;  // [bp-0x178]
    unsigned long long v29;  // [sp-0x170]
    int v30;  // [sp-0x168]
    int v31;  // [sp-0x158]
    int v32;  // [sp-0x148]
    int v33;  // [sp-0x138]
    unsigned long long v34;  // [sp-0x128]
    int v35;  // [bp-0xd8], Other Possible Types: void*, char
    char v36;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v37;  // [bp-0xb8], Other Possible Types: char
    char v38;  // [bp-0xa8]
    char v39;  // [bp-0x98]
    char v40;  // [bp-0x88]
    char v41;  // [bp-0x78]
    char v42;  // [bp-0x68]
    int v44;  // xmm0
    int v45;  // ymm0
    int v46;  // ymm0
    int v47;  // xmm1
    int v48;  // ymm1
    int v49;  // ymm1
    int v50;  // ymm2
    int v51;  // ymm3
    unsigned long long v52;  // rbp
    unsigned long long v53;  // r14
    unsigned long long v54;  // r12
    unsigned long long v55;  // r13
    unsigned long long v56;  // rcx
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm3
    unsigned long long v66;  // r14
    struct_0 *v67;  // rax
    void* v68;  // rbp
    unsigned long long v69;  // r13
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm1
    int v75;  // xmm2
    int v76;  // xmm3
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // ymm0
    unsigned long long v80;  // rax
    unsigned long long v81;  // rax
    unsigned long long v82;  // rsi
    unsigned long long v83;  // rbp
    unsigned long long v84;  // rax
    int v85;  // xmm0
    struct_0 *v86;  // rcx
    int v87;  // xmm2

    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v19);
    v44 = *((int128_t *)&v19);
    v46 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
    v47 = *((int128_t *)&v24);
    v49 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
    v4 = v44;
    v18 = v47;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hcc2a59b82d3dd26a(&v35, a1, a2);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h518af1d201706e3d(&v19, *((long long *)&v35), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, v24); /* do not return */
    v5 = v22;
    v6 = v24;
    v7 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hcc2a59b82d3dd26a(&v35, a1, a2);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v19, *((long long *)&v35), 0);
    if (v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v15, v24); /* do not return */
    v15 = v22;
    v16 = v24;
    v17 = 0;
    core::iter::traits::iterator::Iterator::enumerate::ha395dc1baea0f0f6(&v8, a1, a2);
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd629a68963faaf53(&v0, &v8);
        v52 = *((long long *)&v1);
        if (v52 == 2)
            break;
        v53 = *((long long *)&v0);
        v54 = *((long long *)&v2);
        v55 = *((long long *)&v3);
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v19, 2, a2, v56);
        v57 = *((int128_t *)&v19);
        v11 = v57;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v15, v24, v25);
        if (v52)
        {
            v67 = a0;
            *((unsigned long long *)&v67->padding_8[0]) = v54;
            v67->field_10 = v55;
            v67->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v11);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v15);
            ::0x5263c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h7da5697cc958b506(&v5);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v18);
            v80 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v4);
            return v80;
        }
        v58 = v11;
        v21 = v58;
        v24 = 0;
        v25 = 1;
        v26 = 0;
        v27 = v54;
        v29 = v55;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0518107e2aaed03f(&v5, &v19);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v35, 0x2000);
        v19 = v53;
        v34 = *((long long *)&v42);
        v59 = *((int128_t *)&v41);
        v33 = v59;
        v60 = *((int128_t *)&v40);
        v32 = v60;
        v61 = *((int128_t *)&v39);
        v31 = v61;
        v62 = *((int128_t *)&v35);
        v46 = (((((v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v63 = *((int128_t *)&v36);
        v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
        v64 = *((int128_t *)&v37);
        v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
        v65 = *((int128_t *)&v38);
        v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v30 = v65;
        v28 = v64;
        v25 = v63;
        v19 = v62;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v35, &v4, &v19, v56);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v35, &g_6003f0);
    }
    v66 = v7;
    if (v66)
    {
        v68 = 0;
        do
        {
            v69 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v68);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v35, 0x2000);
            v21 = v68;
            v34 = *((long long *)&v42);
            v70 = *((int128_t *)&v41);
            v33 = v70;
            v71 = *((int128_t *)&v40);
            v32 = v71;
            v72 = *((int128_t *)&v39);
            v31 = v72;
            v73 = *((int128_t *)&v35);
            v46 = (((v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v74 = *((int128_t *)&v36);
            v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
            v75 = *((int128_t *)&v37);
            v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            v76 = *((int128_t *)&v38);
            v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v30 = v76;
            v28 = v75;
            v25 = v74;
            v22 = v73;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v35, &v4, &v19, v56);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v35, &g_6003d8);
            v68 = v69;
        } while (v69 < v66);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v35, v56);
    v77 = v18;
    v20 = v77;
    v78 = *((int128_t *)&v5);
    v79 = (v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
    v23 = v78;
    v26 = v7;
    memcpy(&v28, &v35, 160);
    v36 = 0x8000000000000000;
    v35 = 0;
    std::thread::Builder::spawn_unchecked::h6fb72c524b5cb07e(&v0, &v35, &v19);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v11, &v0);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v35, &v15);
    v37 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v0, &v35);
    v81 = *((long long *)&v1);
    if (v81 != 3)
    {
        do
        {
            v83 = *((long long *)&v0);
            v13 = v81;
            v14 = *((long long *)&v2);
            v84 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v13, v82, a2);
            if (v84)
            {
                v21 = 1;
                v22 = 1;
                v24 = v84;
                v85 = *((int128_t *)&v13);
                v79 = v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                *((double *)&v23) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v19);
                v23 = 0;
                v20 = v85;
                v26 = v83;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v8, &v19);
            }
            else
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v13);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v0, &v35), v81 = *((long long *)&v1), v81 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v35);
    v36 = v10;
    *((int128_t *)&v35) = *((int128_t *)&v8);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v19, &v35, v56, 1);
    v86 = a0;
    *((void*)&v86->field_30) = v11;
    v80 = *((long long *)&v12);
    v86->field_40 = v80;
    v87 = (int128_t)v23;
    *((int128_t *)&v86->field_10) = (int128_t)v20;
    *((void*)&v86->field_20) = v87;
    *((void*)&v86->field_0) = v4;
    v86->field_48 = 0;
    return v80;
}
