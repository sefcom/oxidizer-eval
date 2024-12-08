long long uu_sort::merge::merge_without_limit::h959f99cd91cb4632(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x260]
    char v1;  // [bp-0x258]
    char v2;  // [bp-0x250]
    char v3;  // [bp-0x248]
    int v4;  // [sp-0x230]
    unsigned long v5;  // [sp-0x220], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x218]
    void* v7;  // [sp-0x210]
    void* v8;  // [bp-0x208], Other Possible Types: char
    unsigned long long v9;  // [sp-0x200]
    void* v10;  // [sp-0x1f8]
    int v11;  // [sp-0x1f0]
    char v12;  // [bp-0x1e0]
    unsigned long v13;  // [sp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x1d0]
    unsigned long v15;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x1c0]
    void* v17;  // [sp-0x1b8]
    int v18;  // [sp-0x1b0]
    int v19;  // [bp-0x1a0], Other Possible Types: char, unsigned long, unsigned long long
    int v20;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    void* v21;  // [bp-0x190], Other Possible Types: int, char, unsigned long, unsigned long long
    void* v22;  // [sp-0x188], Other Possible Types: int, unsigned long long
    void* v23;  // [sp-0x180], Other Possible Types: unsigned long long
    int v24;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x170]
    int v26;  // [sp-0x168]
    int v27;  // [sp-0x158]
    int v28;  // [sp-0x148]
    int v29;  // [sp-0x138]
    unsigned long long v30;  // [sp-0x128]
    int v31;  // [bp-0xd8], Other Possible Types: void*, char
    char v32;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v33;  // [bp-0xb8], Other Possible Types: char
    char v34;  // [bp-0xa8]
    char v35;  // [bp-0x98]
    char v36;  // [bp-0x88]
    char v37;  // [bp-0x78]
    char v38;  // [bp-0x68]
    int v40;  // xmm0
    int v41;  // ymm0
    int v42;  // ymm0
    int v43;  // xmm1
    int v44;  // ymm1
    int v45;  // ymm1
    int v46;  // ymm2
    int v47;  // ymm3
    unsigned long long v48;  // rbp
    unsigned long long v49;  // r14
    unsigned long long v50;  // r12
    unsigned long long v51;  // r13
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rcx
    int v54;  // xmm0
    int v55;  // xmm0
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2
    int v62;  // xmm3
    unsigned long long v63;  // r14
    struct_0 *v64;  // rax
    unsigned long long v65;  // rsi
    unsigned long long v67;  // rbp
    unsigned long long v68;  // r13
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm1
    int v74;  // xmm2
    int v75;  // xmm3
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // ymm0
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v81;  // rsi
    unsigned long long v82;  // rbp
    unsigned long long v83;  // rax
    unsigned long long v84;  // rsi
    int v85;  // xmm0
    unsigned long long v86;  // rsi
    struct_0 *v87;  // rcx
    int v88;  // xmm2

    std::sync::mpmc::channel::h4fc0fdfd7dbf5e2c(&v19, a1, a2);
    v40 = *((int128_t *)&v19);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
    v43 = *((int128_t *)&v21);
    v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
    v4 = v40;
    v18 = v43;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hb482060cb936e9a9(&v31, a1, a2);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hea338b95995aa2b7(&v19, *((long long *)&v31), 0);
    if (v19)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v5 = v20;
    v6 = v21;
    v7 = 0;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::size_hint::hb482060cb936e9a9(&v31, a1, a2);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h1b9d7a1e9272c2c4(&v19, *((long long *)&v31), 0);
    if (v19)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v15 = v20;
    v16 = v21;
    v17 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h10e25a98968247b5(&v8, a1, a2);
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80f9bf7b5e74bdf(&v0, &v8);
        v48 = *((long long *)&v1);
        if (v48 == 2)
            break;
        v49 = *((long long *)&v0);
        v50 = *((long long *)&v2);
        v51 = *((long long *)&v3);
        std::sync::mpmc::sync_channel::hea3f01e536bee9f9(&v19, 2, v52, v53);
        v54 = *((int128_t *)&v19);
        v11 = v54;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h2df95c7e4c53f2af(&v15, v21, v22);
        if (v48)
        {
            v64 = a0;
            *((unsigned long long *)&v64->padding_8[0]) = v50;
            v64->field_10 = v51;
            v64->field_0 = 3;
            ::0x526780::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h6a2a83be83d80e2e(&v11, v65, v52);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h87a60a1d420cd877(&v15, v65, v52);
            ::0x525430::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h558247fd4d72fcf0(&v5, v65, v52);
            ::0x524f30::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h8c94067eb0790b66(&v18, v65, v52);
            v79 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h429e0745cb0b4f56(&v4, v65, v52);
            return v79;
        }
        v55 = v11;
        v19 = v55;
        v21 = 0;
        v22 = 1;
        v23 = 0;
        v24 = v50;
        v25 = v51;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h221a547d59416ce7(&v5, &v19, v52);
        uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v31, 0x2000);
        v19 = v49;
        v30 = *((long long *)&v38);
        v56 = *((int128_t *)&v37);
        v29 = v56;
        v57 = *((int128_t *)&v36);
        v28 = v57;
        v58 = *((int128_t *)&v35);
        v27 = v58;
        v59 = *((int128_t *)&v31);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v60 = *((int128_t *)&v32);
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v61 = *((int128_t *)&v33);
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
        v62 = *((int128_t *)&v34);
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v26 = v62;
        v24 = v61;
        v22 = v60;
        v20 = v59;
        std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v31, &v4, &v19, v53);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v31, &g_5ff8c8);
    }
    v63 = v7;
    if (v63)
    {
        do
        {
            v67 = 0;
            v68 = ::0x524ca0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v67);
            uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v31, 0x2000);
            v19 = v67;
            v30 = *((long long *)&v38);
            v69 = *((int128_t *)&v37);
            v29 = v69;
            v70 = *((int128_t *)&v36);
            v28 = v70;
            v71 = *((int128_t *)&v35);
            v27 = v71;
            v72 = *((int128_t *)&v31);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
            v73 = *((int128_t *)&v32);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v74 = *((int128_t *)&v33);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
            v75 = *((int128_t *)&v34);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            v26 = v75;
            v24 = v74;
            v22 = v73;
            v20 = v72;
            std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v31, &v4, &v19, v53);
            core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v31, &g_5ff8b0);
        } while (v68 < v63);
    }
    ::0x533a70::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h62b65dc7b074b444(&v31, a3);
    v76 = v18;
    v19 = v76;
    v77 = *((int128_t *)&v5);
    v78 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
    v21 = v77;
    v23 = v7;
    memcpy(&v24, &v31, 160);
    v32 = 0x8000000000000000;
    v31 = 0;
    std::thread::Builder::spawn_unchecked::h198b1a2da61ff567(&v0, &v31, &v19);
    ::0x526d50::core::result::Result$LT$T$C$E$GT$::expect::h3933e51fa8b24ee0(&v11, &v0);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9e3e78db0150d95a(&v31, &v15);
    v33 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v0, &v31, v52);
    v80 = *((long long *)&v1);
    if (v80 != 3)
    {
        do
        {
            v82 = *((long long *)&v0);
            v13 = v80;
            v14 = *((long long *)&v2);
            v83 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5cbfc81a1cdf3f84(&v13, v81, v52);
            if (v83)
            {
                v19 = 1;
                v20 = 1;
                v21 = v83;
                v85 = *((int128_t *)&v13);
                v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                *((double *)&v21) = alloc::boxed::Box$LT$T$GT$::new::hef2d18b7f5ca45f3(&v19);
                v22 = 0;
                v19 = v85;
                v23 = v82;
                alloc::vec::Vec$LT$T$C$A$GT$::push::he29fd7a541233d2e(&v8, &v19, v52);
            }
            else
            {
                ::0x5266c0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hc7f43a514ea22bcb(&v13, v84, v52);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v0, &v31, v52), v80 = *((long long *)&v1), v80 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::h973b5ad2b35071b0(&v31, v86, v52);
    v32 = v10;
    *((int128_t *)&v31) = *((int128_t *)&v8);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::h43eaa4832bfa0aa6(&v19, &v31, a3, 1);
    v87 = a0;
    *((void*)&v87->field_30) = v11;
    v79 = *((long long *)&v12);
    v87->field_40 = v79;
    v88 = (int128_t)v21;
    *((int128_t *)&v87->field_10) = (int128_t)v19;
    *((void*)&v87->field_20) = v88;
    *((void*)&v87->field_0) = v4;
    v87->field_48 = 0;
    return v79;
}
