long long uu_sort::merge::merge_without_limit::h90f0af993e6589a0(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [sp-0x338], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x330]
    int v2;  // [sp-0x318]
    unsigned long v3;  // [sp-0x308]
    unsigned long long v4;  // [sp-0x300]
    void* v5;  // [sp-0x2f8]
    unsigned long v6;  // [sp-0x2f0]
    unsigned long long v7;  // [sp-0x2e8]
    void* v8;  // [sp-0x2e0]
    unsigned long long v9;  // [sp-0x2d8]
    unsigned long long v10;  // [sp-0x2d0]
    int v11;  // [sp-0x2c8]
    int v12;  // [bp-0x2b8], Other Possible Types: void*, char
    char v13;  // [sp-0x2a8], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x298], Other Possible Types: char
    char v15;  // [bp-0x288]
    char v16;  // [bp-0x278]
    char v17;  // [bp-0x268]
    char v18;  // [bp-0x258]
    char v19;  // [bp-0x248]
    int v20;  // [sp-0x210], Other Possible Types: unsigned long long, unsigned long
    int v21;  // [bp-0x210]
    int v22;  // [bp-0x210], Other Possible Types: char, unsigned long
    int v23;  // [sp-0x208], Other Possible Types: unsigned long long, unsigned long
    char v24;  // [sp-0x200], Other Possible Types: unsigned long, unsigned long long
    void* v25;  // [sp-0x200], Other Possible Types: int, unsigned long long
    int v26;  // [sp-0x1f8], Other Possible Types: unsigned long
    unsigned long long v27;  // [sp-0x1f0]
    int v28;  // [sp-0x1e8]
    int v29;  // [sp-0x1e8]
    int v30;  // [sp-0x1d8]
    int v31;  // [sp-0x1c8]
    int v32;  // [sp-0x1b8], Other Possible Types: unsigned long long
    void* v33;  // [sp-0x1b0]
    int v34;  // [sp-0x1a8], Other Possible Types: unsigned long long
    void* v35;  // [sp-0x1a0]
    unsigned long long v36;  // [sp-0x198]
    int v37;  // [sp-0x148]
    int v38;  // [sp-0x138]
    int v39;  // [sp-0x128]
    int v40;  // [sp-0x118]
    int v41;  // [sp-0x108]
    char v42;  // [bp-0xf0]
    char v43;  // [bp-0xe8]
    char v44;  // [bp-0xe0]
    void* v45;  // [sp-0x88], Other Possible Types: char, unsigned long
    unsigned long v46;  // [sp-0x80], Other Possible Types: unsigned long long
    void* v47;  // [sp-0x78]
    char v48;  // [bp-0x70]
    char v49;  // [bp-0x60]
    char v50;  // [bp-0x50]
    char v51;  // [bp-0x40]
    int v53;  // xmm0
    int v54;  // ymm0
    int v55;  // ymm0
    int v56;  // xmm1
    int v57;  // ymm1
    int v58;  // ymm1
    int v59;  // ymm2
    int v60;  // ymm3
    int v61;  // xmm0
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm3
    unsigned long long v66;  // rcx
    int v67;  // xmm0
    unsigned long long v68;  // rax
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm2
    int v72;  // xmm3
    int v73;  // xmm1
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2
    int v80;  // xmm3
    struct_0 *v81;  // rax
    unsigned long long v82;  // r14
    void* v83;  // rbp
    unsigned long long v84;  // r13
    int v85;  // xmm0
    int v86;  // xmm0
    int v87;  // xmm0
    int v88;  // xmm0
    int v89;  // xmm1
    int v90;  // xmm2
    int v91;  // xmm3
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // ymm0
    unsigned long long v95;  // rax
    unsigned long long v96;  // rax
    unsigned long long v97;  // rsi
    unsigned long long v98;  // rbp
    unsigned long long v99;  // rax
    int v100;  // xmm0
    struct_0 *v101;  // rcx
    int v102;  // xmm2

    v9 = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v22);
    v53 = *((int128_t *)&v22);
    v55 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
    v56 = *((int128_t *)&v24);
    v58 = v57 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
    v2 = v53;
    v11 = v56;
    core::iter::traits::iterator::Iterator::size_hint::hc920bdbb84672c97(&v12);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&v22, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, v24); /* do not return */
    v3 = v23;
    v4 = v24;
    v5 = 0;
    core::iter::traits::iterator::Iterator::size_hint::hc920bdbb84672c97(&v12);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v22, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v6, v24); /* do not return */
    v6 = v23;
    v7 = v24;
    v8 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h6b14892366491be4(&v42, a1);
    v10 = 9223372036854775809;
    while (true)
    {
        v24 = v24;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c455ea14e0b8ab9(&v45, &v42);
        if (v46 == v10)
            break;
        v61 = *((int128_t *)&v51);
        v41 = v61;
        v62 = *((int128_t *)&v46);
        v63 = *((int128_t *)&v48);
        v64 = *((int128_t *)&v49);
        v65 = *((int128_t *)&v50);
        v40 = v65;
        v39 = v64;
        v38 = v63;
        v37 = v62;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v22, 2, a2, v66);
        v67 = *((int128_t *)&v22);
        v0 = v67;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v6, v24, v26);
        v68 = (long long)v37;
        v69 = (int128_t)(&v37)[8];
        if (v24 == 0x8000000000000000)
        {
            v81 = a0;
            *((void*)&(&v81->field_0)[1]) = v69;
            v81->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af(&v0);
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h4e2fc01d8e622ffb(&v42);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v6);
            ::0x526090::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&v3);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425(&v11);
            v95 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066(&v2);
            return v95;
        }
        v32 = (long long)(&v41)[8];
        v70 = (int128_t)(&v38)[8];
        v71 = (int128_t)(&v39)[8];
        v72 = (int128_t)(&v40)[8];
        v31 = v72;
        v30 = v71;
        v28 = v70;
        v73 = (int128_t)v0;
        v20 = v73;
        v24 = v68;
        v26 = v69;
        v33 = 0;
        v34 = 1;
        v35 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&v3, &v22);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v12, 0x2000);
        v22 = v45;
        v36 = *((long long *)&v19);
        v74 = *((int128_t *)&v18);
        v34 = v74;
        v75 = *((int128_t *)&v17);
        v32 = v75;
        v76 = *((int128_t *)&v16);
        v31 = v76;
        v77 = *((int128_t *)&v12);
        v55 = (((((((v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
        v78 = *((int128_t *)&v13);
        v58 = (((v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
        v79 = *((int128_t *)&v14);
        v59 = ((v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
        v80 = *((int128_t *)&v15);
        v60 = ((v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
        v30 = v80;
        v29 = v79;
        v26 = v78;
        v22 = v77;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v12, &v2, &v22, v66);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v12, &g_6003f0);
        v24 = v24;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h4e2fc01d8e622ffb(&v42);
    v82 = v5;
    if (v82)
    {
        v83 = 0;
        do
        {
            v84 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v83);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v12, 0x2000);
            v20 = v83;
            v36 = *((long long *)&v19);
            v85 = *((int128_t *)&v18);
            v34 = v85;
            v86 = *((int128_t *)&v17);
            v32 = v86;
            v87 = *((int128_t *)&v16);
            v31 = v87;
            v88 = *((int128_t *)&v12);
            v55 = (((v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
            v89 = *((int128_t *)&v13);
            v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
            v90 = *((int128_t *)&v14);
            v59 = v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90;
            v91 = *((int128_t *)&v15);
            v60 = v60 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
            v30 = v91;
            v29 = v90;
            v26 = v89;
            v23 = v88;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v12, &v2, &v22, v66);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v12, &g_6003d8);
            v83 = v84;
        } while (v84 < v82);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v12, a2);
    v92 = v11;
    v21 = v92;
    v93 = *((int128_t *)&v3);
    v94 = (v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
    v25 = v93;
    v27 = v5;
    memcpy(&v29, &v12, 160);
    v13 = 0x8000000000000000;
    v12 = 0;
    std::thread::Builder::spawn_unchecked::hf926034b83ad36ac(&v42, &v12, &v22);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v37, &v42);
    v45 = 0;
    v46 = 8;
    v47 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v12, &v6);
    v14 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v42, &v12);
    v96 = *((long long *)&v43);
    if (v96 != 3)
    {
        do
        {
            v98 = *((long long *)&v42);
            v0 = v96;
            v1 = *((long long *)&v44);
            v99 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v97, a2);
            if (!v99)
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f(&v0);
            }
            else
            {
                v20 = 1;
                v23 = 1;
                v24 = v99;
                v100 = *((int128_t *)&v0);
                v94 = v94 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100;
                *((double *)&v25) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v22);
                v25 = 0;
                v21 = v100;
                v27 = v98;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v45, &v22);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v42, &v12), v96 = *((long long *)&v43), v96 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c(&v12);
    v13 = v47;
    *((int128_t *)&v12) = *((int128_t *)&v45);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v22, &v12, a2, 1);
    v101 = a0;
    *((void*)&v101->field_20) = v37;
    v95 = (long long)v38;
    *((unsigned long long *)&v101->field_30) = v95;
    v102 = (int128_t)v25;
    v101->field_8 = (int128_t)v21;
    *((void*)&v101->padding_18[0]) = v102;
    *((void*)&v101->field_0) = v2;
    *((unsigned long long *)((char *)&v101->field_30 + 8)) = 0;
    return v95;
}
