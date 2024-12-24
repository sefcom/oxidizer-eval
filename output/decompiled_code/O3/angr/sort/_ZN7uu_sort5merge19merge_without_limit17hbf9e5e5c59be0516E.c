long long uu_sort::merge::merge_without_limit::hbf9e5e5c59be0516(struct_0 *a0, unsigned long long a1[4], unsigned long long a2, unsigned long a3)
{
    int v0;  // [bp-0x2a0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x298]
    int v2;  // [sp-0x280]
    unsigned long v3;  // [sp-0x270], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x268]
    void* v5;  // [sp-0x260]
    int v6;  // [sp-0x258]
    int v7;  // [sp-0x248]
    unsigned long v8;  // [sp-0x230], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x228]
    void* v10;  // [sp-0x220]
    void* v11;  // [bp-0x218], Other Possible Types: char, unsigned long
    unsigned long v12;  // [sp-0x210], Other Possible Types: unsigned long long
    void* v13;  // [sp-0x208]
    char v14;  // [bp-0x200]
    unsigned long long v15[4];  // [sp-0x1f0]
    int v16;  // [sp-0x1e8]
    char v17;  // [bp-0x1d8]
    char v18;  // [bp-0x1d0]
    char v19;  // [bp-0x1c8]
    int v20;  // [bp-0x1a0], Other Possible Types: char, unsigned long, unsigned long long
    int v21;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    int v22;  // [bp-0x190], Other Possible Types: char, unsigned long, unsigned long long
    void* v23;  // [sp-0x188], Other Possible Types: int, unsigned long long
    unsigned long long v24;  // [sp-0x180]
    int v25;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v26;  // [sp-0x170]
    int v27;  // [sp-0x168], Other Possible Types: unsigned long long
    void* v28;  // [sp-0x160]
    int v29;  // [sp-0x158]
    int v30;  // [sp-0x148]
    int v31;  // [sp-0x138]
    unsigned long long v32;  // [sp-0x128]
    int v33;  // [bp-0xd8], Other Possible Types: void*, char
    char v34;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v35;  // [bp-0xb8], Other Possible Types: char
    char v36;  // [bp-0xa8]
    char v37;  // [bp-0x98]
    char v38;  // [bp-0x88]
    char v39;  // [bp-0x78]
    char v40;  // [bp-0x68]
    unsigned long long v42[4];  // r15
    int v43;  // xmm0
    int v44;  // ymm0
    int v45;  // ymm0
    int v46;  // xmm1
    int v47;  // ymm1
    int v48;  // ymm1
    unsigned long long v49;  // rbx
    unsigned long long v50;  // r14
    int v51;  // ymm2
    int v52;  // ymm3
    int v53;  // xmm0
    int v54;  // xmm1
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rcx
    int v57;  // xmm0
    unsigned long long v58;  // rax
    int v59;  // xmm0
    unsigned long long v60;  // rcx
    int v61;  // xmm1
    int v62;  // xmm0
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    int v68;  // xmm3
    struct_0 *v69;  // rax
    unsigned long long v70;  // rsi
    unsigned long long v71;  // r14
    unsigned long long v73;  // rbp
    unsigned long long v74;  // r13
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm3
    int v82;  // xmm0
    int v83;  // xmm0
    int v84;  // ymm0
    unsigned long long v85;  // rax
    unsigned long long v86;  // rax
    unsigned long long v87;  // rsi
    unsigned long long v88;  // rbp
    unsigned long long v89;  // rax
    unsigned long long v90;  // rsi
    int v91;  // xmm0
    unsigned long long v92;  // rsi
    struct_0 *v93;  // rcx
    int v94;  // xmm2

    v42 = a1;
    v15[0] = a1;
    std::sync::mpmc::channel::h4fc0fdfd7dbf5e2c(&v20, a1, a2);
    v43 = *((int128_t *)&v20);
    v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
    v46 = *((int128_t *)&v22);
    v48 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
    v2 = v43;
    v16 = v46;
    v49 = v42[1];
    v50 = v42[3];
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hef05e49200640b6f(&v33, v49, v50);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::ha3945848524a1f37(&v20, *((long long *)&v33), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v3 = v21;
    v4 = v22;
    v5 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hef05e49200640b6f(&v33, v49, v50);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h1b9d7a1e9272c2c4(&v20, *((long long *)&v33), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v8 = v21;
    v9 = v22;
    v10 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h099320b26935d12b(&v17, v42);
    while (true)
    {
        v22 = v22;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9be5eb38b3614d4c(&v11, &v17);
        if (v12 == 9223372036854775809)
            break;
        v53 = *((int128_t *)&v12);
        v54 = *((int128_t *)&v14);
        v7 = v54;
        v6 = v53;
        std::sync::mpmc::sync_channel::hea3f01e536bee9f9(&v20, 2, v55, v56);
        v57 = *((int128_t *)&v20);
        v0 = v57;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h2df95c7e4c53f2af(&v8, v22, v23);
        v58 = (long long)v6;
        v59 = (int128_t)(&v6)[8];
        if (v22 == 0x8000000000000000)
        {
            v69 = a0;
            *((void*)&(&v69->field_0)[1]) = v59;
            v69->field_0 = 3;
            ::0x526780::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h6a2a83be83d80e2e(&v0, v70, v55);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h0e448d77add793f9(&v17);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h87a60a1d420cd877(&v8, v70, v55);
            ::0x5250a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainTmpMergeInput$GT$$GT$$GT$$GT$::h7e6d3cd211c8405f(&v3, v70, v55);
            ::0x524f30::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h8c94067eb0790b66(&v16, v70, v55);
            v85 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h429e0745cb0b4f56(&v2, v70, v55);
            return v85;
        }
        v60 = (long long)(&v7)[8];
        v61 = (int128_t)v0;
        v20 = v61;
        v22 = v58;
        v23 = v59;
        v25 = v60;
        v26 = 0;
        v27 = 1;
        v28 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7f43b8cca5e6d4cb(&v3, &v20, v55);
        uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v33, 0x2000);
        v20 = v11;
        v32 = *((long long *)&v40);
        v62 = *((int128_t *)&v39);
        v31 = v62;
        v63 = *((int128_t *)&v38);
        v30 = v63;
        v64 = *((int128_t *)&v37);
        v29 = v64;
        v65 = *((int128_t *)&v33);
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v66 = *((int128_t *)&v34);
        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
        v67 = *((int128_t *)&v35);
        v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
        v68 = *((int128_t *)&v36);
        v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
        v27 = v68;
        v25 = v67;
        v23 = v66;
        v21 = v65;
        std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v33, &v2, &v20, v56);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v33, &g_5ff8c8);
        v22 = v22;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h0e448d77add793f9(&v17);
    v71 = v5;
    if (v71)
    {
        do
        {
            v73 = 0;
            v74 = ::0x524ca0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v73);
            uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v33, 0x2000);
            v20 = v73;
            v32 = *((long long *)&v40);
            v75 = *((int128_t *)&v39);
            v31 = v75;
            v76 = *((int128_t *)&v38);
            v30 = v76;
            v77 = *((int128_t *)&v37);
            v29 = v77;
            v78 = *((int128_t *)&v33);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v79 = *((int128_t *)&v34);
            v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
            v80 = *((int128_t *)&v35);
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v81 = *((int128_t *)&v36);
            v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v27 = v81;
            v25 = v80;
            v23 = v79;
            v21 = v78;
            std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v33, &v2, &v20, v56);
            core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v33, &g_5ff8b0);
        } while (v74 < v71);
    }
    ::0x533a70::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h62b65dc7b074b444(&v33, a2);
    v82 = v16;
    v20 = v82;
    v83 = *((int128_t *)&v3);
    v84 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
    v22 = v83;
    v24 = v5;
    memcpy(&v25, &v33, 160);
    v34 = 0x8000000000000000;
    v33 = 0;
    std::thread::Builder::spawn_unchecked::hb583b690004ddf25(&v17, &v33, &v20);
    ::0x526d50::core::result::Result$LT$T$C$E$GT$::expect::h3933e51fa8b24ee0(&v6, &v17);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9e3e78db0150d95a(&v33, &v8);
    v35 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v17, &v33, v55);
    v86 = *((long long *)&v18);
    if (v86 != 3)
    {
        do
        {
            v88 = *((long long *)&v17);
            v0 = v86;
            v1 = *((long long *)&v19);
            v89 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5cbfc81a1cdf3f84(&v0, v87, v55);
            if (!v89)
            {
                ::0x5266c0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hc7f43a514ea22bcb(&v0, v90, v55);
            }
            else
            {
                v20 = 1;
                v21 = 1;
                v22 = v89;
                v91 = *((int128_t *)&v0);
                v84 = v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
                *((double *)&v22) = alloc::boxed::Box$LT$T$GT$::new::hef2d18b7f5ca45f3(&v20);
                v23 = 0;
                v20 = v91;
                v24 = v88;
                alloc::vec::Vec$LT$T$C$A$GT$::push::he29fd7a541233d2e(&v11, &v20, v55);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v17, &v33, v55), v86 = *((long long *)&v18), v86 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::h973b5ad2b35071b0(&v33, v92, v55);
    v34 = v13;
    *((int128_t *)&v33) = *((int128_t *)&v11);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::h43eaa4832bfa0aa6(&v20, &v33, a2, 1);
    v93 = a0;
    *((void*)&v93->field_20) = v6;
    v85 = (long long)v7;
    *((unsigned long long *)&v93->field_30) = v85;
    v94 = (int128_t)v22;
    v93->field_8 = (int128_t)v20;
    *((void*)&v93->padding_18[0]) = v94;
    *((void*)&v93->field_0) = v2;
    *((long long *)((char *)&v93->field_30 + 8)) = 0;
    return v85;
}
