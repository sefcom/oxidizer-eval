long long uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(unsigned long long a0[2], uint128_t a1[3], struct_0 *a2, unsigned long long a3)
{
    int v0;  // [sp-0x278]
    int v1;  // [sp-0x268]
    int v2;  // [bp-0x258], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x250]
    int v4;  // [bp-0x248], Other Possible Types: unsigned long long
    int v6;  // [sp-0x238]
    int v8;  // [sp-0x228]
    char v9;  // [bp-0x220]
    void* v10;  // [sp-0x218]
    unsigned long long v11;  // [sp-0x210]
    void* v12;  // [sp-0x208]
    unsigned long v13;  // [sp-0x200], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x1f8]
    char v15;  // [bp-0x1f0], Other Possible Types: unsigned long, unsigned long long
    int v16;  // [sp-0x1e8]
    char v17;  // [bp-0x1e0]
    int v18;  // [sp-0x1d8]
    int v19;  // [sp-0x1c8]
    int v20;  // [sp-0x1b8]
    int v21;  // [sp-0x1a8]
    unsigned long long v22;  // [sp-0x198]
    unsigned long v23;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x188]
    unsigned long v25;  // [sp-0x180], Other Possible Types: unsigned long long
    int v26;  // [sp-0x178]
    int v27;  // [sp-0x168]
    int v28;  // [sp-0x158]
    int v29;  // [sp-0x148]
    unsigned long long v30;  // [sp-0x138]
    unsigned long v31;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v32;  // [sp-0x128]
    unsigned long long v33;  // [sp-0x120]
    unsigned long long v34;  // [sp-0x118]
    unsigned long long v35;  // [sp-0x110]
    int v36;  // [sp-0x108]
    int v37;  // [sp-0xf8]
    int v38;  // [sp-0xe8]
    int v39;  // [sp-0xd8]
    unsigned long long v41;  // r12
    unsigned long long v42;  // rax
    void* v43;  // r14
    int v44;  // xmm0
    int v45;  // ymm0
    int v46;  // ymm0
    int v47;  // xmm1
    int v48;  // ymm1
    int v49;  // ymm1
    int v50;  // xmm2
    int v51;  // ymm2
    int v52;  // ymm2
    unsigned long long v53;  // r14
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
    unsigned long long v84[2];  // rdx
    unsigned long long v85[2];  // rax
    unsigned long long v86[2];  // rdx
    unsigned long long v87[2];  // rcx
    unsigned long v88;  // rdx

    v41 = a2->field_70;
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(a1) <= v41)
    {
        *((uint128_t *)&v39) = a1[2];
        *((uint128_t *)&v38) = a1[1];
        *((uint128_t *)&v37) = a1[0];
        v42 = uu_sort::merge::merge_without_limit::he170aa40d43822dc(a0, &v37, a2);
        return v42;
    }
    v43 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(a1);
    v44 = a1[0];
    v46 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44;
    v47 = a1[1];
    v49 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
    v50 = a1[2];
    v52 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
    v2 = v50;
    v1 = v47;
    v0 = v44;
    itertools::Itertools::chunks::h4fc89ec69f227a1e(&v37, &v0, v41);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if (v43)
    {
        v22 = 9223372036854775810;
        do
        {
            v13 = v13;
            v43 -= v41;
            if (v43 < v41)
                v43 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&v13, &v37);
            if (v13 == v22)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v56 = *((int128_t *)&v13);
            v57 = *((int128_t *)&v15);
            v58 = *((int128_t *)&v17);
            v21 = v58;
            v20 = v57;
            v19 = v56;
            uu_sort::merge::merge_without_limit::hae787fc1656c52a4(&v0, &v19, a2);
            v59 = (long long)v0;
            v60 = (long long)(&v0)[8];
            v61 = (long long)v1;
            if (v23 == 3)
            {
                v84 = a0;
                v84[1] = v60;
                v84[1] = v61;
                v84[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v37);
                return v42;
            }
            v30 = *((long long *)&v9);
            v62 = (int128_t)(&v1)[8];
            v63 = (int128_t)(&v2)[8];
            v64 = (int128_t)(&v4)[8];
            v65 = (int128_t)(&v6)[8];
            v29 = v65;
            v28 = v64;
            v27 = v63;
            v26 = v62;
            v23 = v59;
            v24 = v60;
            v25 = v61;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v19, a3);
            v66 = (long long)(&v19)[8];
            if (v35 == 0x8000000000000000)
            {
                v85 = a0;
                *((void*)&v85[1]) = v20;
                v85[0] = 3;
                goto LABEL_52b864;
            }
            else
            {
                v67 = v20;
                v34 = (long long)v19;
                v35 = v66;
                v36 = v67;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&v0, &v34);
                v68 = (long long)v0;
                v69 = (long long)(&v0)[8];
                v70 = (long long)v1;
                if (v13 == 0x8000000000000000)
                {
                    v86 = a0;
                    v86[1] = v14;
                    v86[1] = v15;
                    v86[0] = 3;
LABEL_52b864:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v23);
                    ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v37);
                    return v42;
                }
            }
            v71 = (int128_t)(&v1)[8];
            v72 = (int128_t)(&v2)[8];
            v18 = v72;
            v16 = v71;
            v13 = v68;
            v14 = v69;
            v15 = v70;
            v73 = (int128_t)(&v29)[8];
            v8 = v73;
            v74 = (int128_t)(&v28)[8];
            v6 = v74;
            v75 = *((int128_t *)&v23);
            v76 = *((int128_t *)&v25);
            v77 = (int128_t)(&v26)[8];
            v78 = (int128_t)(&v27)[8];
            v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
            v4 = v78;
            v2 = v77;
            v1 = v76;
            v0 = v75;
            v79 = uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(&v0, a2, ::0x533c70::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&v13));
            if (v79)
            {
                v87 = a0;
                v87[1] = v79;
                v87[1] = v88;
                v87[0] = 3;
                ::0x5270e0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&v13);
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v37);
                return v42;
            }
            v4 = (long long)(&v18)[8];
            v80 = *((int128_t *)&v13);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v81 = *((int128_t *)&v15);
            v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v82 = (int128_t)(&v16)[8];
            v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
            v2 = v82;
            v1 = v81;
            v0 = v80;
            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&v19, &v0);
            v83 = (long long)v19;
            v60 = (long long)(&v19)[8];
            v61 = (long long)v20;
            if (v31 == 0x8000000000000000)
            {
                vvar_662{reg 32} = a0;
                v84[1] = v60;
                v84[1] = v61;
                v84[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v10);
                core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v37);
                return v42;
            }
            v31 = v83;
            v32 = v60;
            v33 = v61;
            ::0x5280f0::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v10, &v31);
            v13 = v13;
        } while (v53 > v41);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&v0, &v37);
    if ((long long)v0 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&v0);
        ::0x5288f0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&v23, &v10);
        *((int128_t *)&v1) = *((int128_t *)&v25);
        *((int128_t *)&v0) = *((int128_t *)&v23);
        v2 = alloc::boxed::Box$LT$T$GT$::new::h4cf6d2eb54d1ad8d();
        v3 = &g_600348;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(a0, &v0, a2, a3);
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v37);
        return v42;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&v0);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
