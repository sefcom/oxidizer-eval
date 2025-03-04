long long uu_sort::merge::merge_with_file_limit::hee8bdf8579433eee(unsigned long long a0[2], uint128_t a1[2], struct_0 *a2, unsigned long long a3)
{
    unsigned long long v0[2];  // [sp-0x280]
    int v1[3];  // [sp-0x268]
    int v2;  // [sp-0x268], Other Possible Types: BOT[3]
    int v3;  // [sp-0x258]
    int v4;  // [sp-0x258]
    int v5;  // [bp-0x248], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x240]
    int v7;  // [bp-0x238], Other Possible Types: unsigned long long
    int v9;  // [sp-0x228]
    int v11;  // [sp-0x218]
    void* v13;  // [sp-0x208]
    unsigned long long v14;  // [sp-0x200]
    void* v15;  // [sp-0x1f8]
    unsigned long v16;  // [sp-0x1f0]
    unsigned long long v17;  // [sp-0x1e8]
    unsigned long v18;  // [bp-0x1e0]
    int v19;  // [sp-0x1d8]
    int v21;  // [sp-0x1c8]
    int v22;  // [sp-0x1b8]
    int v23;  // [sp-0x1a8]
    int v24;  // [sp-0x198]
    unsigned long long v25;  // [sp-0x188]
    unsigned long v26;  // [sp-0x180]
    unsigned long long v27;  // [sp-0x178]
    unsigned long v28;  // [sp-0x170]
    int v29;  // [sp-0x168]
    int v30;  // [sp-0x158]
    int v31;  // [sp-0x148]
    int v32;  // [sp-0x138]
    unsigned long long v33;  // [sp-0x128]
    unsigned long v34;  // [sp-0x120]
    unsigned long long v35;  // [sp-0x118]
    unsigned long long v36;  // [sp-0x110]
    unsigned long long v37;  // [sp-0x108]
    unsigned long long v38;  // [sp-0x100]
    int v39;  // [sp-0xf8]
    int v40;  // [sp-0xe8]
    int v41;  // [sp-0xd8]
    unsigned long long v43[2];  // rbx
    unsigned long long v44;  // r12
    unsigned long long v45;  // r14
    int v46;  // xmm0
    int v47;  // ymm0
    int v48;  // ymm0
    int v49;  // xmm1
    int v50;  // ymm1
    int v51;  // ymm1
    void* v52;  // r13
    int v54;  // ymm2
    int v55;  // ymm3
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm2
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rax
    unsigned long long v61;  // rcx
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm2
    int v65;  // xmm3
    unsigned long long v66;  // rax
    int v67;  // xmm0
    unsigned long long v68;  // rdx
    unsigned long long v69;  // rax
    unsigned long long v70;  // rcx
    int v71;  // xmm0
    int v72;  // xmm1
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm1
    int v77;  // xmm2
    int v78;  // xmm3
    unsigned long long v79;  // rax
    int v80;  // xmm0
    int v81;  // xmm1
    int v82;  // xmm2
    unsigned long long v83;  // rdx
    unsigned long v85;  // rdx

    v43 = a0;
    v44 = a2->field_70;
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(a1) <= v44)
    {
        *((uint128_t *)&v41) = a1[1];
        *((uint128_t *)&v40) = a1[0];
        uu_sort::merge::merge_without_limit::h9b5b2c5845db30df(a0, &v40, a2);
        return v43;
    }
    v45 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(a1);
    v0[0] = a0;
    v46 = a1[0];
    v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
    v49 = a1[1];
    v51 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
    v3 = v49;
    *((void*)v2) = v46;
    itertools::Itertools::chunks::hc1d2676d26c759d9(&v40, v2, v44);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    if (v45)
    {
        v25 = 9223372036854775810;
        v52 = v45;
        do
        {
            v16 = v16;
            v52 -= v44;
            if (v52 < v44)
                v52 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hebe185d9380178ad(&v16, &v40);
            if (v16 == v25)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v56 = *((int128_t *)&v16);
            v57 = *((int128_t *)&v18);
            v58 = (int128_t)(&v19)[8];
            v24 = v58;
            v23 = v57;
            v22 = v56;
            uu_sort::merge::merge_without_limit::h2875c70cfc96a2e1(v2, &v22, a2);
            v59 = (long long)v2[0];
            v60 = (long long)(&v2)[8];
            v61 = (long long)v3;
            if (v26 == 3)
            {
                v43 = v0;
                v43[1] = v60;
                v43[1] = v61;
                v43[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v40);
                return v43;
            }
            v33 = (long long)(&v11)[8];
            v62 = (int128_t)v3;
            v63 = (int128_t)(&v5)[8];
            v64 = (int128_t)(&v7)[8];
            v65 = (int128_t)(&v9)[8];
            v32 = v65;
            v31 = v64;
            v30 = v63;
            v29 = v62;
            v26 = v59;
            v27 = v60;
            v28 = v61;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v22, a3);
            v66 = (long long)(&v22)[8];
            if (v38 == 0x8000000000000000)
            {
                v43 = v0;
                *((void*)&v43[1]) = v23;
                goto LABEL_52c3da;
            }
            else
            {
                v67 = v23;
                v37 = (long long)v22;
                v38 = v66;
                v39 = v67;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(v2, &v37);
                v68 = (long long)v2[0];
                v69 = (long long)(&v2)[8];
                v70 = (long long)v3;
                if (v16 == 0x8000000000000000)
                {
                    v43 = v0;
                    v43[1] = v17;
                    v43[1] = v18;
LABEL_52c3da:
                    v43[0] = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v26);
                    ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v40);
                    return v43;
                }
            }
            v71 = (int128_t)(&v3)[8];
            v72 = (int128_t)(&v5)[8];
            v21 = v72;
            v19 = v71;
            v16 = v68;
            v17 = v69;
            v18 = v70;
            v73 = (int128_t)(&v32)[8];
            v11 = v73;
            v74 = (int128_t)(&v31)[8];
            v9 = v74;
            v75 = *((int128_t *)&v26);
            v76 = *((int128_t *)&v28);
            v77 = (int128_t)(&v29)[8];
            v78 = (int128_t)(&v30)[8];
            v55 = (v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v7 = v78;
            v5 = v77;
            v4 = v76;
            *((void*)v1) = v75;
            v79 = uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(v2, a2, ::0x533c70::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&v16));
            if (v79)
            {
                v43 = v0;
                v43[1] = v79;
                v43[1] = v85;
                v43[0] = 3;
                ::0x5270e0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&v16);
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v40);
                return v43;
            }
            v7 = (long long)(&v21)[8];
            v80 = *((int128_t *)&v16);
            v48 = (((((((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v81 = *((int128_t *)&v18);
            v51 = ((((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v82 = (int128_t)(&v19)[8];
            v54 = (((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
            v5 = v82;
            v3 = v81;
            *((void*)v2) = v80;
            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&v22, v2);
            v83 = (long long)v22;
            v60 = (long long)(&v22)[8];
            v61 = (long long)v23;
            if (v34 == 0x8000000000000000)
            {
                vvar_654{reg 40} = v0;
                v43[1] = v60;
                v43[1] = v61;
                v43[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v40);
                return v43;
            }
            v34 = v83;
            v35 = v60;
            v36 = v61;
            ::0x5280f0::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v13, &v34);
            v16 = v16;
            v45 = v52;
        } while (v45 > v44);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hebe185d9380178ad(v2, &v40);
    if ((long long)v2[0] == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h0b384b4f21d54495(v2);
        ::0x5288f0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&v26, &v13);
        *((int128_t *)&v4) = *((int128_t *)&v28);
        *((int128_t *)v1) = *((int128_t *)&v26);
        v5 = alloc::boxed::Box$LT$T$GT$::new::h8cfa0d4394d8defc();
        v6 = &g_600398;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(v0, v2, a2, a3);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&v40);
        return v43;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h0b384b4f21d54495(v2);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
