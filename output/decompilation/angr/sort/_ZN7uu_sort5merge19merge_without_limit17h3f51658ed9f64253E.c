long long uu_sort::merge::merge_without_limit::h3f51658ed9f64253(struct_0 *a0, unsigned long long a1[4], unsigned long long a2)
{
    int v0;  // [sp-0x308], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x300]
    int v2;  // [sp-0x2e8]
    unsigned long v3;  // [sp-0x2d8]
    unsigned long long v4;  // [sp-0x2d0]
    void* v5;  // [sp-0x2c8]
    unsigned long v6;  // [sp-0x2c0]
    unsigned long long v7;  // [sp-0x2b8]
    void* v8;  // [sp-0x2b0]
    unsigned long long v9[4];  // [sp-0x2a8]
    unsigned long long v10;  // [sp-0x2a0]
    int v11;  // [sp-0x298]
    int v12;  // [bp-0x288], Other Possible Types: void*, char
    char v13;  // [sp-0x278], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x268], Other Possible Types: char
    char v15;  // [bp-0x258]
    char v16;  // [bp-0x248]
    char v17;  // [bp-0x238]
    char v18;  // [bp-0x228]
    char v19;  // [bp-0x218]
    int v20;  // [sp-0x1e0], Other Possible Types: unsigned long long, unsigned long
    int v21;  // [bp-0x1e0]
    int v22;  // [bp-0x1e0], Other Possible Types: char, unsigned long
    int v23;  // [sp-0x1d8], Other Possible Types: unsigned long long, unsigned long
    char v24;  // [sp-0x1d0], Other Possible Types: unsigned long, unsigned long long
    void* v25;  // [sp-0x1d0], Other Possible Types: int, unsigned long long
    int v26;  // [sp-0x1c8], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x1c0]
    int v28;  // [sp-0x1b8]
    int v29;  // [sp-0x1b8]
    int v30;  // [sp-0x1a8]
    int v31;  // [sp-0x198]
    int v32;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v33;  // [sp-0x180]
    int v34;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v35;  // [sp-0x170]
    unsigned long long v36;  // [sp-0x168]
    int v37;  // [sp-0x118], Other Possible Types: void*, unsigned long
    unsigned long long v38;  // [sp-0x110]
    int v39;  // [bp-0x108], Other Possible Types: void*
    int v40;  // [sp-0xf8]
    int v41;  // [sp-0xe8]
    int v42;  // [sp-0xd8]
    char v43;  // [bp-0xc0]
    char v44;  // [bp-0xb0]
    char v45;  // [bp-0x88]
    char v46;  // [bp-0x80]
    char v47;  // [bp-0x70]
    char v48;  // [bp-0x60]
    char v49;  // [bp-0x50]
    char v50;  // [bp-0x40]
    int v52;  // xmm0
    int v53;  // ymm0
    int v54;  // ymm0
    int v55;  // xmm1
    int v56;  // ymm1
    int v57;  // ymm1
    unsigned long long v58;  // rbx
    unsigned long long v59;  // r14
    int v60;  // ymm2
    int v61;  // ymm3
    unsigned long long v62;  // r12
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm3
    unsigned long long v68;  // rcx
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm2
    int v73;  // xmm3
    int v74;  // xmm1
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm3
    struct_0 *v82;  // rax
    unsigned long long v83;  // r14
    void* v84;  // rbp
    unsigned long long v85;  // r13
    int v86;  // xmm0
    int v87;  // xmm0
    int v88;  // xmm0
    int v89;  // xmm0
    int v90;  // xmm1
    int v91;  // xmm2
    int v92;  // xmm3
    int v93;  // xmm0
    int v94;  // xmm0
    int v95;  // ymm0
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // rsi
    unsigned long long v99;  // rbp
    unsigned long long v100;  // rax
    int v101;  // xmm0
    struct_0 *v102;  // rcx
    int v103;  // xmm2

    v9[0] = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v22);
    v52 = *((int128_t *)&v22);
    v54 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v55 = *((int128_t *)&v24);
    v57 = v56 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
    v2 = v52;
    v11 = v55;
    v58 = a1[1];
    v59 = a1[3];
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h7b20c5f54fb69ecf(&v12, v58, v59);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&v22, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, v24); /* do not return */
    v3 = v23;
    v4 = v24;
    v5 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::h7b20c5f54fb69ecf(&v12, v58, v59);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v22, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v6, v24); /* do not return */
    v6 = v23;
    v7 = v24;
    v8 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h1228247505420bdd(&v43, a1);
    v10 = 9223372036854775809;
    while (true)
    {
        v24 = v24;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf119c123769f4d04(&v45, &v43);
        if (*((long long *)&v46) == v10)
            break;
        v62 = *((long long *)&v45);
        v63 = *((int128_t *)&v50);
        v42 = v63;
        v64 = *((int128_t *)&v46);
        v65 = *((int128_t *)&v47);
        v66 = *((int128_t *)&v48);
        v67 = *((int128_t *)&v49);
        v41 = v67;
        v40 = v66;
        v39 = v65;
        v37 = v64;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v22, 2, a2, v68);
        v69 = *((int128_t *)&v22);
        v0 = v69;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v6, v24, v26);
        v70 = (int128_t)(&v37)[8];
        if (v24 == 0x8000000000000000)
        {
            v82 = a0;
            *((void*)&(&v82->field_0)[1]) = v70;
            v82->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h18fd41d9722d8243(&v43);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v6);
            ::0x526090::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&v3);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v11);
            v96 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2);
            return v96;
        }
        v32 = (long long)(&v42)[8];
        v71 = (int128_t)(&v39)[8];
        v72 = (int128_t)(&v40)[8];
        v73 = (int128_t)(&v41)[8];
        v31 = v73;
        v30 = v72;
        v28 = v71;
        v74 = (int128_t)v0;
        v20 = v74;
        v24 = v37;
        v26 = v70;
        v33 = 0;
        v34 = 1;
        v35 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&v3, &v22);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v12, 0x2000);
        v22 = v62;
        v36 = *((long long *)&v19);
        v75 = *((int128_t *)&v18);
        v34 = v75;
        v76 = *((int128_t *)&v17);
        v32 = v76;
        v77 = *((int128_t *)&v16);
        v31 = v77;
        v78 = *((int128_t *)&v12);
        v54 = (((((((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
        v79 = *((int128_t *)&v13);
        v57 = (((v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
        v80 = *((int128_t *)&v14);
        v60 = ((v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
        v81 = *((int128_t *)&v15);
        v61 = ((v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
        v30 = v81;
        v29 = v80;
        v26 = v79;
        v22 = v78;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v12, &v2, &v22, v68);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v12, &g_6003f0);
        v24 = v24;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h18fd41d9722d8243(&v43);
    v83 = v5;
    if (v83)
    {
        v84 = 0;
        do
        {
            v85 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v84);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v12, 0x2000);
            v20 = v84;
            v36 = *((long long *)&v19);
            v86 = *((int128_t *)&v18);
            v34 = v86;
            v87 = *((int128_t *)&v17);
            v32 = v87;
            v88 = *((int128_t *)&v16);
            v31 = v88;
            v89 = *((int128_t *)&v12);
            v54 = (((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
            v90 = *((int128_t *)&v13);
            v57 = v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
            v91 = *((int128_t *)&v14);
            v60 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
            v92 = *((int128_t *)&v15);
            v61 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
            v30 = v92;
            v29 = v91;
            v26 = v90;
            v23 = v89;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v12, &v2, &v22, v68);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v12, &g_6003d8);
            v84 = v85;
        } while (v85 < v83);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v12, a2);
    v93 = v11;
    v21 = v93;
    v94 = *((int128_t *)&v3);
    v95 = (v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
    v25 = v94;
    v27 = v5;
    memcpy(&v29, &v12, 160);
    v13 = 0x8000000000000000;
    v12 = 0;
    std::thread::Builder::spawn_unchecked::h85f432c29e7d33dc(&v45, &v12, &v22);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v43, &v45);
    v37 = 0;
    v38 = 8;
    v39 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v12, &v6);
    v14 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v45, &v12);
    v97 = *((long long *)&v46);
    if (v97 != 3)
    {
        do
        {
            v99 = *((long long *)&v45);
            v0 = v97;
            v1 = *((long long *)&(&v46)[8]);
            v100 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v98, a2);
            if (!v100)
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0);
            }
            else
            {
                v20 = 1;
                v23 = 1;
                v24 = v100;
                v101 = *((int128_t *)&v0);
                v95 = v95 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
                *((double *)&v25) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v22);
                v25 = 0;
                v21 = v101;
                v27 = v99;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v37, &v22);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v45, &v12), v97 = *((long long *)&v46), v97 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v12);
    v13 = v39;
    *((int128_t *)&v12) = *((int128_t *)&v37);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v22, &v12, a2, 1);
    v102 = a0;
    v102->field_20 = *((int128_t *)&v43);
    v96 = *((long long *)&v44);
    *((unsigned long long *)&v102->field_30) = v96;
    v103 = (int128_t)v25;
    v102->field_8 = (int128_t)v21;
    *((void*)&v102->padding_18[0]) = v103;
    *((void*)&v102->field_0) = v2;
    *((unsigned long long *)((char *)&v102->field_30 + 8)) = 0;
    return v96;
}
