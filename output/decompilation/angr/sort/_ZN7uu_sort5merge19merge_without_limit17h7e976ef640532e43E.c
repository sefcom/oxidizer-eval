long long uu_sort::merge::merge_without_limit::h7e976ef640532e43(struct_0 *a0, unsigned long long a1, unsigned long long a2)
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
    unsigned long long v64;  // r14
    void* v65;  // rbp
    unsigned long long v66;  // rbp
    unsigned long long v67;  // r13
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm2
    int v74;  // xmm3
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // ymm0
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long v80;  // rsi
    unsigned long long v81;  // rbp
    unsigned long long v82;  // rax
    int v83;  // xmm0
    struct_0 *v84;  // rcx
    int v85;  // xmm2

    v18 = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v20);
    v41 = *((int128_t *)&v20);
    v43 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
    v44 = *((int128_t *)&v22);
    v46 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
    v4 = v41;
    v19 = v44;
    core::iter::traits::iterator::Iterator::size_hint::h696b96077833da96(&v32);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h518af1d201706e3d(&v20, *((long long *)&v32), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v5, v22); /* do not return */
    v5 = v21;
    v6 = v22;
    v7 = 0;
    core::iter::traits::iterator::Iterator::size_hint::h696b96077833da96(&v32);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v20, *((long long *)&v32), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v12, v22); /* do not return */
    v12 = v21;
    v13 = v22;
    v14 = 0;
    core::iter::traits::iterator::Iterator::enumerate::hf7aa1a58076079fe(&v15, a1);
    while (true)
    {
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf953a0acfae760b(&v0, &v15);
        v49 = v1;
        if (v49 == 2)
            break;
        v50 = v2;
        v51 = *((long long *)&v3);
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v20, 2, v52, v53);
        v54 = *((int128_t *)&v20);
        v8 = v54;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v12, v22, v23);
        if (v49)
        {
            v63 = a0;
            *((unsigned long long *)&v63->padding_8[0]) = v50;
            v63->field_10 = v51;
            v63->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af();
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h934af70cdb3bb56e(&v15);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v12);
            ::0x5263c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..PlainMergeInput$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$$GT$$GT$$GT$$GT$::h7da5697cc958b506(&v5);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425();
            v78 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066();
            return v78;
        }
        v55 = v8;
        v20 = v55;
        v22 = 0;
        v23 = 1;
        v24 = 0;
        v25 = v50;
        v26 = v51;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0518107e2aaed03f(&v5, &v20);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v32, 0x2000);
        v20 = v0;
        v31 = *((long long *)&v39);
        v56 = *((int128_t *)&v38);
        v30 = v56;
        v57 = *((int128_t *)&v37);
        v29 = v57;
        v58 = *((int128_t *)&v36);
        v28 = v58;
        v59 = *((int128_t *)&v32);
        v43 = (((((v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v60 = *((int128_t *)&v33);
        v46 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
        v61 = *((int128_t *)&v34);
        v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
        v62 = *((int128_t *)&v35);
        v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v27 = v62;
        v25 = v61;
        v23 = v60;
        v21 = v59;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v32, &v4, &v20, v53);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v32, &g_6003f0);
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h934af70cdb3bb56e(&v15);
    v64 = v7;
    if (v64)
    {
        v65 = 0;
        do
        {
            v66 = v65;
            v67 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v66);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v32, 0x2000);
            v20 = v66;
            v31 = *((long long *)&v39);
            v68 = *((int128_t *)&v38);
            v30 = v68;
            v69 = *((int128_t *)&v37);
            v29 = v69;
            v70 = *((int128_t *)&v36);
            v28 = v70;
            v71 = *((int128_t *)&v32);
            v43 = (((v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
            v72 = *((int128_t *)&v33);
            v46 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
            v73 = *((int128_t *)&v34);
            v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
            v74 = *((int128_t *)&v35);
            v48 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
            v27 = v74;
            v25 = v73;
            v23 = v72;
            v21 = v71;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v32, &v4, &v20, v53);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v32, &g_6003d8);
            v65 = v67;
        } while (v67 < v64);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v32, a2);
    v75 = v19;
    v20 = v75;
    v76 = *((int128_t *)&v5);
    v77 = (v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
    v22 = v76;
    v24 = v7;
    memcpy(&v25, &v32, 160);
    v33 = 0x8000000000000000;
    v32 = 0;
    std::thread::Builder::spawn_unchecked::h3b01fcfabb9c426f(&v15, &v32, &v20);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v8, &v15);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v32, &v12);
    v34 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v15, &v32);
    v79 = *((long long *)&v16);
    if (v79 != 3)
    {
        do
        {
            v81 = *((long long *)&v15);
            v10 = v79;
            v11 = *((long long *)&v17);
            v82 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v10, v80, v52);
            if (v82)
            {
                v20 = 1;
                v21 = 1;
                v22 = v82;
                v83 = *((int128_t *)&v10);
                v77 = v77 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
                *((double *)&v22) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v20);
                v23 = 0;
                v20 = v83;
                v24 = v81;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v0, &v20);
            }
            else
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f();
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v15, &v32), v79 = *((long long *)&v16), v79 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c();
    v33 = v2;
    *((int128_t *)&v32) = *((int128_t *)&v0);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v20, &v32, a2, 1);
    v84 = a0;
    *((void*)&v84->field_30) = v8;
    v78 = *((long long *)&v9);
    v84->field_40 = v78;
    v85 = (int128_t)v22;
    *((int128_t *)&v84->field_10) = (int128_t)v20;
    *((void*)&v84->field_20) = v85;
    *((void*)&v84->field_0) = v4;
    v84->field_48 = 0;
    return v78;
}
