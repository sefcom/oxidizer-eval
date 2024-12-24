long long uu_sort::merge::merge_without_limit::h7059d9de90fa17c5(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    void* v0;  // [bp-0x280], Other Possible Types: char, unsigned long
    unsigned long v1;  // [sp-0x278], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x270], Other Possible Types: unsigned long
    char v3;  // [bp-0x268]
    int v4;  // [sp-0x250]
    unsigned long v5;  // [sp-0x240], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x238]
    void* v7;  // [sp-0x230]
    int v8;  // [sp-0x228]
    char v9;  // [bp-0x218]
    unsigned long v10;  // [sp-0x210], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x208]
    unsigned long v12;  // [sp-0x200], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x1f8]
    void* v14;  // [sp-0x1f0]
    char v15;  // [bp-0x1e8]
    char v16;  // [bp-0x1e0]
    char v17;  // [bp-0x1d8]
    unsigned long long v18;  // [sp-0x1b8]
    int v19;  // [sp-0x1b0]
    int v20;  // [bp-0x1a0], Other Possible Types: char, unsigned long, unsigned long long
    int v21;  // [sp-0x198], Other Possible Types: unsigned long long, unsigned long
    void* v22;  // [bp-0x190], Other Possible Types: int, char, unsigned long, unsigned long long
    void* v23;  // [sp-0x188], Other Possible Types: int, unsigned long long
    void* v24;  // [sp-0x180], Other Possible Types: unsigned long long
    int v25;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x170]
    int v27;  // [sp-0x168]
    int v28;  // [sp-0x158]
    int v29;  // [sp-0x148]
    int v30;  // [sp-0x138]
    unsigned long long v31;  // [sp-0x128]
    int v32;  // [bp-0xd8], Other Possible Types: void*, char
    char v33;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v34;  // [bp-0xb8], Other Possible Types: char
    char v35;  // [bp-0xa8]
    char v36;  // [bp-0x98]
    char v37;  // [bp-0x88]
    char v38;  // [bp-0x78]
    char v39;  // [bp-0x68]
    int v41;  // xmm0
    int v42;  // ymm0
    int v43;  // ymm0
    int v44;  // xmm1
    int v45;  // ymm1
    int v46;  // ymm1
    int v47;  // ymm2
    int v48;  // ymm3
    unsigned long long v49;  // rbx
    unsigned long long v50;  // r13
    unsigned long long v51;  // rbp
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
    struct_0 *v63;  // rax
    unsigned long long v64;  // rsi
    unsigned long long v65;  // r14
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

    v18 = a1;
    std::sync::mpmc::channel::h4fc0fdfd7dbf5e2c(&v20, a1, a2);
    v41 = *((int128_t *)&v20);
    v43 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
    v44 = *((int128_t *)&v22);
    v46 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
    v4 = v41;
    v19 = v44;
    core::iter::traits::iterator::Iterator::size_hint::h1a1f503825fc604f(&v32);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hea338b95995aa2b7(&v20, *((long long *)&v32), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v5 = v21;
    v6 = v22;
    v7 = 0;
    core::iter::traits::iterator::Iterator::size_hint::h1a1f503825fc604f(&v32);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h1b9d7a1e9272c2c4(&v20, *((long long *)&v32), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v12 = v21;
    v13 = v22;
    v14 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h94bfe356d95967d0(&v15, a1);
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h84444bdb4d4c6744(&v0, &v15);
        v49 = v1;
        if (v49 == 2)
            break;
        v50 = v2;
        v51 = *((long long *)&v3);
        std::sync::mpmc::sync_channel::hea3f01e536bee9f9(&v20, 2, v52, v53);
        v54 = *((int128_t *)&v20);
        v8 = v54;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h2df95c7e4c53f2af(&v12, v22, v23);
        if (v49)
        {
            v63 = a0;
            *((unsigned long long *)&v63->padding_8[0]) = v50;
            v63->field_10 = v51;
            v63->field_0 = 3;
            ::0x526780::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h6a2a83be83d80e2e(&v8, v64, v52);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::ha1706c90ad51644a(&v15);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h87a60a1d420cd877(&v12, v64, v52);
            ::0x525430::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h558247fd4d72fcf0(&v5, v64, v52);
            ::0x524f30::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h8c94067eb0790b66(&v19, v64, v52);
            v79 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h429e0745cb0b4f56(&v4, v64, v52);
            return v79;
        }
        v55 = v8;
        v20 = v55;
        v22 = 0;
        v23 = 1;
        v24 = 0;
        v25 = v50;
        v26 = v51;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h221a547d59416ce7(&v5, &v20, v52);
        uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v32, 0x2000);
        v20 = v0;
        v31 = *((long long *)&v39);
        v56 = *((int128_t *)&v38);
        v30 = v56;
        v57 = *((int128_t *)&v37);
        v29 = v57;
        v58 = *((int128_t *)&v36);
        v28 = v58;
        v59 = *((int128_t *)&v32);
        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v60 = *((int128_t *)&v33);
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v61 = *((int128_t *)&v34);
        v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
        v62 = *((int128_t *)&v35);
        v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v27 = v62;
        v25 = v61;
        v23 = v60;
        v21 = v59;
        std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v32, &v4, &v20, v53);
        core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v32, &g_5ff8c8);
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::ha1706c90ad51644a(&v15);
    v65 = v7;
    if (v65)
    {
        do
        {
            v67 = 0;
            v68 = ::0x524ca0::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v67);
            uu_sort::chunks::RecycledChunk::new::h16b59a802d3f48e5(&v32, 0x2000);
            v20 = v67;
            v31 = *((long long *)&v39);
            v69 = *((int128_t *)&v38);
            v30 = v69;
            v70 = *((int128_t *)&v37);
            v29 = v70;
            v71 = *((int128_t *)&v36);
            v28 = v71;
            v72 = *((int128_t *)&v32);
            v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
            v73 = *((int128_t *)&v33);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v74 = *((int128_t *)&v34);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
            v75 = *((int128_t *)&v35);
            v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            v27 = v75;
            v25 = v74;
            v23 = v73;
            v21 = v72;
            std::sync::mpmc::Sender$LT$T$GT$::send::h36ab465206f24040(&v32, &v4, &v20, v53);
            core::result::Result$LT$T$C$E$GT$::unwrap::ha3500ebb15a04206(&v32, &g_5ff8b0);
        } while (v68 < v65);
    }
    ::0x533a70::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h62b65dc7b074b444(&v32, a2);
    v76 = v19;
    v20 = v76;
    v77 = *((int128_t *)&v5);
    v78 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
    v22 = v77;
    v24 = v7;
    memcpy(&v25, &v32, 160);
    v33 = 0x8000000000000000;
    v32 = 0;
    std::thread::Builder::spawn_unchecked::hb2d633e4d3237b06(&v15, &v32, &v20);
    ::0x526d50::core::result::Result$LT$T$C$E$GT$::expect::h3933e51fa8b24ee0(&v8, &v15);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9e3e78db0150d95a(&v32, &v12);
    v34 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v15, &v32, v52);
    v80 = *((long long *)&v16);
    if (v80 != 3)
    {
        do
        {
            v82 = *((long long *)&v15);
            v10 = v80;
            v11 = *((long long *)&v17);
            v83 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h5cbfc81a1cdf3f84(&v10, v81, v52);
            if (!v83)
            {
                ::0x5266c0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hc7f43a514ea22bcb(&v10, v84, v52);
            }
            else
            {
                v20 = 1;
                v21 = 1;
                v22 = v83;
                v85 = *((int128_t *)&v10);
                v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                *((double *)&v22) = alloc::boxed::Box$LT$T$GT$::new::hef2d18b7f5ca45f3(&v20);
                v23 = 0;
                v20 = v85;
                v24 = v82;
                alloc::vec::Vec$LT$T$C$A$GT$::push::he29fd7a541233d2e(&v0, &v20, v52);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1b1a42a6329eecbf(&v15, &v32, v52), v80 = *((long long *)&v16), v80 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::h973b5ad2b35071b0(&v32, v86, v52);
    v33 = v2;
    *((int128_t *)&v32) = *((int128_t *)&v0);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::h43eaa4832bfa0aa6(&v20, &v32, a2, 1);
    v87 = a0;
    *((void*)&v87->field_30) = v8;
    v79 = *((long long *)&v9);
    v87->field_40 = v79;
    v88 = (int128_t)v22;
    *((int128_t *)&v87->field_10) = (int128_t)v20;
    *((void*)&v87->field_20) = v88;
    *((void*)&v87->field_0) = v4;
    v87->field_48 = 0;
    return v79;
}
