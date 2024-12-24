long long uu_sort::merge::merge_without_limit::h47cdd2e8dfe16873(struct_0 *a0, unsigned long long a1[4], unsigned long long a2, unsigned long a3)
{
    int v0;  // [bp-0x308], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x300]
    int v2;  // [sp-0x2e8]
    unsigned long v3;  // [sp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x2d0]
    void* v5;  // [sp-0x2c8]
    unsigned long v6;  // [sp-0x2c0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x2b8]
    void* v8;  // [sp-0x2b0]
    unsigned long long v9[4];  // [sp-0x2a8]
    unsigned long long v10;  // [sp-0x2a0]
    int v11;  // [sp-0x298]
    int v12;  // [bp-0x288], Other Possible Types: void*, char
    char v13;  // [bp-0x278], Other Possible Types: unsigned long long
    void* v14;  // [bp-0x268], Other Possible Types: char
    char v15;  // [bp-0x258]
    char v16;  // [bp-0x248]
    char v17;  // [bp-0x238]
    char v18;  // [bp-0x228]
    char v19;  // [bp-0x218]
    int v20;  // [bp-0x1e0], Other Possible Types: char, unsigned long, unsigned long long
    int v21;  // [sp-0x1d8], Other Possible Types: unsigned long long, unsigned long
    int v22;  // [bp-0x1d0], Other Possible Types: char, unsigned long, unsigned long long
    void* v23;  // [sp-0x1c8], Other Possible Types: int, unsigned long long
    unsigned long long v24;  // [sp-0x1c0]
    int v25;  // [sp-0x1b8]
    int v26;  // [sp-0x1a8]
    int v27;  // [sp-0x198]
    int v28;  // [sp-0x188], Other Possible Types: unsigned long long
    void* v29;  // [sp-0x180]
    int v30;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x170]
    unsigned long long v32;  // [sp-0x168]
    int v33;  // [sp-0x118], Other Possible Types: void*, unsigned long long
    unsigned long long v34;  // [sp-0x110]
    int v35;  // [bp-0x108], Other Possible Types: void*
    int v36;  // [sp-0xf8]
    int v37;  // [sp-0xe8]
    int v38;  // [sp-0xd8]
    char v39;  // [bp-0xc0]
    char v40;  // [bp-0xb0]
    char v41;  // [bp-0x88]
    char v42;  // [bp-0x80]
    char v43;  // [bp-0x70]
    char v44;  // [bp-0x60]
    char v45;  // [bp-0x50]
    char v46;  // [bp-0x40]
    unsigned long long v48[4];  // r15
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // ymm0
    int v52;  // xmm1
    int v53;  // ymm1
    int v54;  // ymm1
    unsigned long long v55;  // rbx
    unsigned long long v56;  // r14
    int v57;  // ymm2
    int v58;  // ymm3
    unsigned long long v59;  // r12
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm2
    int v64;  // xmm3
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rcx
    int v67;  // xmm0
    int v68;  // xmm0
    int v69;  // xmm1
    int v70;  // xmm2
    int v71;  // xmm3
    int v72;  // xmm1
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm2
    int v79;  // xmm3
    struct_0 *v80;  // rax
    unsigned long long v81;  // rsi
    unsigned long long v82;  // r14
    unsigned long long v84;  // rbp
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
    unsigned long long v101;  // rsi
    int v102;  // xmm0
    unsigned long long v103;  // rsi
    struct_0 *v104;  // rcx
    int v105;  // xmm2

    v48 = a1;
    v9[0] = a1;
    std::sync::mpmc::channel::h4fc0fdfd7dbf5e2c(&v20, a1, a2);
    v49 = *((int128_t *)&v20);
    v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
    v52 = *((int128_t *)&v22);
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v2 = v49;
    v11 = v52;
    v55 = v48[1];
    v56 = v48[3];
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::haf59c8238a93afb7(&v12, v55, v56);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h676f1165cd588b4a(&v20, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v3 = v21;
    v4 = v22;
    v5 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::haf59c8238a93afb7(&v12, v55, v56);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h1b9d7a1e9272c2c4(&v20, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v6 = v21;
    v7 = v22;
    v8 = 0;
    core::iter::traits::iterator::Iterator::enumerate::haa6f540f83f50d08(&v39, v48);
    v10 = 9223372036854775809;
    while (true)
    {
        v22 = v22;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1ac1d57c13526753(&v41, &v39);
        if (*((long long *)&v42) == v10)
            break;
        v59 = *((long long *)&v41);
        v60 = *((int128_t *)&v46);
        v38 = v60;
        v61 = *((int128_t *)&v42);
        v62 = *((int128_t *)&v43);
        v63 = *((int128_t *)&v44);
        v64 = *((int128_t *)&v45);
        v37 = v64;
        v36 = v63;
        v35 = v62;
        v33 = v61;
        std::sync::mpmc::sync_channel::hea3f01e536bee9f9(&v20, 2, v65, v66);
        v67 = *((int128_t *)&v20);
        v0 = v67;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h2df95c7e4c53f2af(&v6, v22, v23);
        v68 = (int128_t)(&v33)[8];
        if (v22 == 0x8000000000000000)
        {
            v80 = a0;
            *((void*)&(&v80->field_0)[1]) = v68;
            v80->field_0 = 3;
            ::0x526780::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h6a2a83be83d80e2e(&v0, v81, v65);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h6c154e8bf159eaf5(&v39);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h87a60a1d420cd877(&v6, v81, v65);
            ::0x525100::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::ha489805525e801d6(&v3, v81, v65);
            ::0x524f30::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h8c94067eb0790b66(&v11, v81, v65);
            v96 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h429e0745cb0b4f56(&v2, v81, v65);
            return v96;
        }
        v28 = (long long)(&v38)[8];
        v69 = (int128_t)(&v35)[8];
        v70 = (int128_t)(&v36)[8];
        v71 = (int128_t)(&v37)[8];
        v27 = v71;
        v26 = v70;
        v25 = v69;
        v72 = (int128_t)v0;
        v20 = v72;
        v22 = v33;
        v23 = v68;
        v29 = 0;
        v30 = 1;
        v31 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h3a3e08d04c020bb5(&v3, &v20, v65);
        uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v12, 0x2000);
        v20 = v59;
        v32 = *((long long *)&v19);
        v73 = *((int128_t *)&v18);
        v30 = v73;
        v74 = *((int128_t *)&v17);
        v28 = v74;
        v75 = *((int128_t *)&v16);
        v27 = v75;
        v76 = *((int128_t *)&v12);
        v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
        v77 = *((int128_t *)&v13);
        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
        v78 = *((int128_t *)&v14);
        v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
        v79 = *((int128_t *)&v15);
        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
        v26 = v79;
        v25 = v78;
        v23 = v77;
        v21 = v76;
        std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v12, &v2, &v20, v66);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v12, &g_5ff8c8);
        v22 = v22;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h6c154e8bf159eaf5(&v39);
    v82 = v5;
    if (v82)
    {
        do
        {
            v84 = 0;
            v85 = ::0x524ca0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v84);
            uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v12, 0x2000);
            v20 = v84;
            v32 = *((long long *)&v19);
            v86 = *((int128_t *)&v18);
            v30 = v86;
            v87 = *((int128_t *)&v17);
            v28 = v87;
            v88 = *((int128_t *)&v16);
            v27 = v88;
            v89 = *((int128_t *)&v12);
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
            v90 = *((int128_t *)&v13);
            v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
            v91 = *((int128_t *)&v14);
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
            v92 = *((int128_t *)&v15);
            v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
            v26 = v92;
            v25 = v91;
            v23 = v90;
            v21 = v89;
            std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v12, &v2, &v20, v66);
            core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v12, &g_5ff8b0);
        } while (v85 < v82);
    }
    ::0x533a70::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h62b65dc7b074b444(&v12, a2);
    v93 = v11;
    v20 = v93;
    v94 = *((int128_t *)&v3);
    v95 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v94;
    v22 = v94;
    v24 = v5;
    memcpy(&v25, &v12, 160);
    v13 = 0x8000000000000000;
    v12 = 0;
    std::thread::Builder::spawn_unchecked::h7ed3b0646cf31510(&v41, &v12, &v20);
    ::0x526d50::core::result::Result$LT$T$C$E$GT$::expect::h3933e51fa8b24ee0(&v39, &v41);
    v33 = 0;
    v34 = 8;
    v35 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9e3e78db0150d95a(&v12, &v6);
    v14 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v41, &v12, v65);
    v97 = *((long long *)&v42);
    if (v97 != 3)
    {
        do
        {
            v99 = *((long long *)&v41);
            v0 = v97;
            v1 = *((long long *)&(&v42)[8]);
            v100 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5cbfc81a1cdf3f84(&v0, v98, v65);
            if (!v100)
            {
                ::0x5266c0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hc7f43a514ea22bcb(&v0, v101, v65);
            }
            else
            {
                v20 = 1;
                v21 = 1;
                v22 = v100;
                v102 = *((int128_t *)&v0);
                v95 = v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102;
                *((double *)&v22) = alloc::boxed::Box$LT$T$GT$::new::hef2d18b7f5ca45f3(&v20);
                v23 = 0;
                v20 = v102;
                v24 = v99;
                alloc::vec::Vec$LT$T$C$A$GT$::push::he29fd7a541233d2e(&v33, &v20, v65);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v41, &v12, v65), v97 = *((long long *)&v42), v97 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::h973b5ad2b35071b0(&v12, v103, v65);
    v13 = v35;
    *((int128_t *)&v12) = *((int128_t *)&v33);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::h43eaa4832bfa0aa6(&v20, &v12, a2, 1);
    v104 = a0;
    v104->field_20 = *((int128_t *)&v39);
    v96 = *((long long *)&v40);
    *((unsigned long long *)&v104->field_30) = v96;
    v105 = (int128_t)v22;
    v104->field_8 = (int128_t)v20;
    *((void*)&v104->padding_18[0]) = v105;
    *((void*)&v104->field_0) = v2;
    *((long long *)((char *)&v104->field_30 + 8)) = 0;
    return v96;
}
