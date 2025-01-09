long long uu_sort::merge::merge_without_limit::hb625e29ae468ce09(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x338], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x330]
    int v2;  // [sp-0x318]
    unsigned long v3;  // [sp-0x308], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x300]
    void* v5;  // [sp-0x2f8]
    unsigned long v6;  // [sp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x2e8]
    void* v8;  // [sp-0x2e0]
    unsigned long long v9;  // [sp-0x2d8]
    unsigned long long v10;  // [sp-0x2d0]
    int v11;  // [sp-0x2c8]
    int v12;  // [bp-0x2b8], Other Possible Types: void*, char
    char v13;  // [bp-0x2a8], Other Possible Types: unsigned long long
    void* v14;  // [bp-0x298], Other Possible Types: char
    char v15;  // [bp-0x288]
    char v16;  // [bp-0x278]
    char v17;  // [bp-0x268]
    char v18;  // [bp-0x258]
    char v19;  // [bp-0x248]
    int v20;  // [bp-0x210], Other Possible Types: char, unsigned long, unsigned long long
    int v21;  // [sp-0x208], Other Possible Types: unsigned long long, unsigned long
    int v22;  // [bp-0x200], Other Possible Types: char, unsigned long, unsigned long long
    void* v23;  // [sp-0x1f8], Other Possible Types: int, unsigned long long
    unsigned long long v24;  // [sp-0x1f0]
    int v25;  // [sp-0x1e8]
    int v26;  // [sp-0x1d8]
    int v27;  // [sp-0x1c8]
    int v28;  // [sp-0x1b8], Other Possible Types: unsigned long long
    void* v29;  // [sp-0x1b0]
    int v30;  // [sp-0x1a8], Other Possible Types: unsigned long long
    void* v31;  // [sp-0x1a0]
    unsigned long long v32;  // [sp-0x198]
    int v33;  // [sp-0x148]
    int v34;  // [sp-0x138]
    int v35;  // [sp-0x128]
    int v36;  // [sp-0x118]
    int v37;  // [sp-0x108]
    char v38;  // [bp-0xf0]
    char v39;  // [bp-0xe8]
    char v40;  // [bp-0xe0]
    void* v41;  // [bp-0x88], Other Possible Types: char, unsigned long
    unsigned long v42;  // [sp-0x80], Other Possible Types: unsigned long long
    void* v43;  // [sp-0x78]
    char v44;  // [bp-0x70]
    char v45;  // [bp-0x60]
    char v46;  // [bp-0x50]
    char v47;  // [bp-0x40]
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // ymm0
    int v52;  // xmm1
    int v53;  // ymm1
    int v54;  // ymm1
    int v55;  // ymm2
    int v56;  // ymm3
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm1
    int v60;  // xmm2
    int v61;  // xmm3
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rcx
    int v64;  // xmm0
    unsigned long long v65;  // rax
    int v66;  // xmm0
    int v67;  // xmm1
    int v68;  // xmm2
    int v69;  // xmm3
    int v70;  // xmm1
    int v71;  // xmm0
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm1
    int v76;  // xmm2
    int v77;  // xmm3
    struct_0 *v78;  // rax
    unsigned long long v79;  // r14
    void* v80;  // rbp
    unsigned long long v81;  // rbp
    unsigned long long v82;  // r13
    int v83;  // xmm0
    int v84;  // xmm0
    int v85;  // xmm0
    int v86;  // xmm0
    int v87;  // xmm1
    int v88;  // xmm2
    int v89;  // xmm3
    int v90;  // xmm0
    int v91;  // xmm0
    int v92;  // ymm0
    unsigned long long v93;  // rax
    unsigned long long v94;  // rax
    unsigned long long v95;  // rsi
    unsigned long long v96;  // rbp
    unsigned long long v97;  // rax
    int v98;  // xmm0
    struct_0 *v99;  // rcx
    int v100;  // xmm2

    v9 = a1;
    std::sync::mpmc::channel::h5ddab1e5e6a1bd36(&v20);
    v49 = *((int128_t *)&v20);
    v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
    v52 = *((int128_t *)&v22);
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v2 = v49;
    v11 = v52;
    core::iter::traits::iterator::Iterator::size_hint::hc5375b5a717271de(&v12);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h9f8de3280e7f9938(&v20, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v3, v22); /* do not return */
    v3 = v21;
    v4 = v22;
    v5 = 0;
    core::iter::traits::iterator::Iterator::size_hint::hc5375b5a717271de(&v12);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h42915b5ffb9cc436(&v20, *((long long *)&v12), 0);
    if (v20)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(v6, v22); /* do not return */
    v6 = v21;
    v7 = v22;
    v8 = 0;
    core::iter::traits::iterator::Iterator::enumerate::h3979d50f35976674(&v38, a1);
    v10 = 9223372036854775809;
    while (true)
    {
        v22 = v22;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7bd62f8297192e3(&v41, &v38);
        if (v42 == v10)
            break;
        v57 = *((int128_t *)&v47);
        v37 = v57;
        v58 = *((int128_t *)&v42);
        v59 = *((int128_t *)&v44);
        v60 = *((int128_t *)&v45);
        v61 = *((int128_t *)&v46);
        v36 = v61;
        v35 = v60;
        v34 = v59;
        v33 = v58;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&v20, 2, v62, v63);
        v64 = *((int128_t *)&v20);
        v0 = v64;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd9bef9599e472281(&v6, v22, v23);
        v65 = (long long)v33;
        v66 = (int128_t)(&v33)[8];
        if (v22 == 0x8000000000000000)
        {
            v78 = a0;
            *((void*)&(&v78->field_0)[1]) = v66;
            v78->field_0 = 3;
            ::0x527710::core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..Chunk$GT$$GT$::h65b4bf175f2f49af();
            core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::he06ddb1f55f7d2d4(&v38);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h6707b4dafa67dfe9(&v6);
            ::0x526090::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$uu_sort..merge..ReaderFile$LT$uu_sort..merge..CompressedTmpMergeInput$GT$$GT$$GT$$GT$::h2d6b64055ac9a9df(&v3);
            ::0x525ec0::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h91a7dc3f5ffa2425();
            v93 = core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::h2b3b5e18f7d08066();
            return v93;
        }
        v28 = (long long)(&v37)[8];
        v67 = (int128_t)(&v34)[8];
        v68 = (int128_t)(&v35)[8];
        v69 = (int128_t)(&v36)[8];
        v27 = v69;
        v26 = v68;
        v25 = v67;
        v70 = (int128_t)v0;
        v20 = v70;
        v22 = v65;
        v23 = v66;
        v29 = 0;
        v30 = 1;
        v31 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbd7385c0063bae75(&v3, &v20);
        uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v12, 0x2000);
        v20 = v41;
        v32 = *((long long *)&v19);
        v71 = *((int128_t *)&v18);
        v30 = v71;
        v72 = *((int128_t *)&v17);
        v28 = v72;
        v73 = *((int128_t *)&v16);
        v27 = v73;
        v74 = *((int128_t *)&v12);
        v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
        v75 = *((int128_t *)&v13);
        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
        v76 = *((int128_t *)&v14);
        v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
        v77 = *((int128_t *)&v15);
        v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
        v26 = v77;
        v25 = v76;
        v23 = v75;
        v21 = v74;
        std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v12, &v2, &v20, v63);
        core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v12, &g_6003f0);
        v22 = v22;
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::he06ddb1f55f7d2d4(&v38);
    v79 = v5;
    if (v79)
    {
        v80 = 0;
        do
        {
            v81 = v80;
            v82 = ::0x525c30::_$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(v81);
            uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&v12, 0x2000);
            v20 = v81;
            v32 = *((long long *)&v19);
            v83 = *((int128_t *)&v18);
            v30 = v83;
            v84 = *((int128_t *)&v17);
            v28 = v84;
            v85 = *((int128_t *)&v16);
            v27 = v85;
            v86 = *((int128_t *)&v12);
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
            v87 = *((int128_t *)&v13);
            v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
            v88 = *((int128_t *)&v14);
            v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
            v89 = *((int128_t *)&v15);
            v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
            v26 = v89;
            v25 = v88;
            v23 = v87;
            v21 = v86;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&v12, &v2, &v20, v63);
            core::result::Result$LT$T$C$E$GT$::unwrap::hba54edb95cb18084(&v12, &g_6003d8);
            v80 = v82;
        } while (v82 < v79);
    }
    ::0x534a00::_$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(&v12, a2);
    v90 = v11;
    v20 = v90;
    v91 = *((int128_t *)&v3);
    v92 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91;
    v22 = v91;
    v24 = v5;
    memcpy(&v25, &v12, 160);
    v13 = 0x8000000000000000;
    v12 = 0;
    std::thread::Builder::spawn_unchecked::h45a2032dbc3b2a60(&v38, &v12, &v20);
    ::0x527ce0::core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&v33, &v38);
    v41 = 0;
    v42 = 8;
    v43 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h198381c625d86b96(&v12, &v6);
    v14 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v38, &v12);
    v94 = *((long long *)&v39);
    if (v94 != 3)
    {
        do
        {
            v96 = *((long long *)&v38);
            v0 = v94;
            v1 = *((long long *)&v40);
            v97 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(&v0, v95, v62);
            if (!v97)
            {
                ::0x527650::core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$::hbe8a0150e5b7ae7f();
            }
            else
            {
                v20 = 1;
                v21 = 1;
                v22 = v97;
                v98 = *((int128_t *)&v0);
                v92 = v92 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98;
                *((double *)&v22) = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&v20);
                v23 = 0;
                v20 = v98;
                v24 = v96;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hc28a32eabbe87ae2(&v41, &v20);
            }
        } while ((_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9c16468c94bb4837(&v38, &v12), v94 = *((long long *)&v39), v94 != 3));
    }
    core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$std..sync..mpsc..Receiver$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$::hc305886e897b9a8c();
    v13 = v43;
    *((int128_t *)&v12) = *((int128_t *)&v41);
    binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::from_vec_cmp_raw::hf2caa71b6fc3d8b6(&v20, &v12, a2, 1);
    v99 = a0;
    *((void*)&v99->field_20) = v33;
    v93 = (long long)v34;
    *((unsigned long long *)&v99->field_30) = v93;
    v100 = (int128_t)v22;
    v99->field_8 = (int128_t)v20;
    *((void*)&v99->padding_18[0]) = v100;
    *((void*)&v99->field_0) = v2;
    *((long long *)((char *)&v99->field_30 + 8)) = 0;
    return v93;
}
