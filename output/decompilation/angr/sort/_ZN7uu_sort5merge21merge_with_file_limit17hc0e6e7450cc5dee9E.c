long long uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(unsigned long long a0[2], uint128_t a1[3], struct_0 *a2, unsigned long long a3)
{
    int v0;  // [sp-0x278]
    int v1;  // [sp-0x278]
    int v2;  // [sp-0x268]
    int v3;  // [sp-0x268]
    int v4;  // [bp-0x258], Other Possible Types: unsigned long long
    int v5;  // [bp-0x258]
    int v6;  // [bp-0x250], Other Possible Types: unsigned long long
    int v7;  // [bp-0x248], Other Possible Types: unsigned long long
    int v9;  // [sp-0x238]
    int v11;  // [sp-0x228]
    void* v13;  // [sp-0x218]
    unsigned long long v14;  // [sp-0x210]
    void* v15;  // [sp-0x208]
    unsigned long v16;  // [sp-0x200]
    unsigned long long v17;  // [sp-0x1f8]
    unsigned long v18;  // [bp-0x1f0]
    int v19;  // [sp-0x1e8]
    char v20;  // [bp-0x1e0]
    int v21;  // [sp-0x1d8]
    int v22;  // [sp-0x1c8]
    int v23;  // [sp-0x1b8]
    int v24;  // [sp-0x1a8]
    unsigned long long v25;  // [sp-0x198]
    unsigned long v26;  // [sp-0x190]
    unsigned long long v27;  // [sp-0x188]
    unsigned long v28;  // [sp-0x180]
    int v29;  // [sp-0x178]
    int v30;  // [sp-0x168]
    int v31;  // [sp-0x158]
    int v32;  // [sp-0x148]
    unsigned long long v33;  // [sp-0x138]
    unsigned long v34;  // [sp-0x130]
    unsigned long long v35;  // [sp-0x128]
    unsigned long long v36;  // [sp-0x120]
    unsigned long long v37;  // [sp-0x118]
    unsigned long long v38;  // [sp-0x110]
    int v39;  // [sp-0x108]
    int v40;  // [sp-0xf8]
    int v41;  // [sp-0xe8]
    int v42;  // [sp-0xd8]
    unsigned long long v44;  // r12
    unsigned long long v45;  // rax
    unsigned long long v46;  // r14
    int v47;  // xmm0
    int v48;  // ymm0
    int v49;  // ymm0
    int v50;  // xmm1
    int v51;  // ymm1
    int v52;  // ymm1
    int v53;  // xmm2
    int v54;  // ymm2
    int v55;  // ymm2
    void* v56;  // r13
    int v58;  // ymm3
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    unsigned long long v64;  // rcx
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    int v68;  // xmm3
    unsigned long long v69;  // rax
    int v70;  // xmm0
    unsigned long long v71;  // rdx
    unsigned long long v72;  // rax
    unsigned long long v73;  // rcx
    int v74;  // xmm0
    int v75;  // xmm1
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // xmm1
    int v80;  // xmm2
    int v81;  // xmm3
    unsigned long long v82;  // rax
    int v83;  // xmm0
    int v84;  // xmm1
    int v85;  // xmm2
    unsigned long long v86;  // rdx
    unsigned long long v88[2];  // rdx
    unsigned long long v89[2];  // rax
    unsigned long long v90[2];  // rdx
    unsigned long long v91[2];  // rcx
    unsigned long v92;  // rdx

    v44 = a2->field_70;
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(a1) <= v44)
    {
        *((uint128_t *)&v42) = a1[2];
        *((uint128_t *)&v41) = a1[1];
        *((uint128_t *)&v40) = a1[0];
        v45 = uu_sort::merge::merge_without_limit::he170aa40d43822dc(a0, &v40, a2);
        return v45;
    }
    v46 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(a1);
    v47 = a1[0];
    v49 = v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
    v50 = a1[1];
    v52 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
    v53 = a1[2];
    v55 = v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
    v5 = v53;
    v3 = v50;
    v1 = v47;
    itertools::Itertools::chunks::h4fc89ec69f227a1e(&v40, &v1, v44);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    if (v46)
    {
        v25 = 9223372036854775810;
        v56 = v46;
        do
        {
            v16 = v16;
            v56 -= v44;
            if (v56 < v44)
                v56 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&v16, &v40);
            if (v16 == v25)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_6002e0); /* do not return */
            v59 = *((int128_t *)&v16);
            v60 = *((int128_t *)&v18);
            v61 = *((int128_t *)&v20);
            v24 = v61;
            v23 = v60;
            v22 = v59;
            uu_sort::merge::merge_without_limit::hae787fc1656c52a4(&v1, &v22, a2);
            v62 = (long long)v1;
            v63 = (long long)(&v1)[8];
            v64 = (long long)v3;
            if (v26 == 3)
            {
                v88 = a0;
                v88[1] = v63;
                v88[1] = v64;
                v88[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                vvar_651{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v40);
                return v45;
            }
            v33 = (long long)(&v11)[8];
            v65 = (int128_t)(&v3)[8];
            v66 = (int128_t)v6;
            v67 = (int128_t)(&v7)[8];
            v68 = (int128_t)(&v9)[8];
            v32 = v68;
            v31 = v67;
            v30 = v66;
            v29 = v65;
            v26 = v62;
            v27 = v63;
            v28 = v64;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&v22, a3);
            v69 = (long long)(&v22)[8];
            if (v38 == 0x8000000000000000)
            {
                v89 = a0;
                *((void*)&v89[1]) = v23;
                v89[0] = 3;
                goto LABEL_52b864;
            }
            else
            {
                v70 = v23;
                v37 = (long long)v22;
                v38 = v69;
                v39 = v70;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&v1, &v37);
                v71 = (long long)v1;
                v72 = (long long)(&v1)[8];
                v73 = (long long)v3;
                if (v16 == 0x8000000000000000)
                {
                    v90 = a0;
                    v90[1] = v17;
                    v90[1] = v18;
                    v90[0] = 3;
LABEL_52b864:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&v26);
                    ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                    vvar_646{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v40);
                    return v45;
                }
            }
            v74 = (int128_t)(&v3)[8];
            v75 = (int128_t)v6;
            v21 = v75;
            v19 = v74;
            v16 = v71;
            v17 = v72;
            v18 = v73;
            v76 = (int128_t)(&v32)[8];
            v11 = v76;
            v77 = (int128_t)(&v31)[8];
            v9 = v77;
            v78 = *((int128_t *)&v26);
            v79 = *((int128_t *)&v28);
            v80 = (int128_t)(&v29)[8];
            v81 = (int128_t)(&v30)[8];
            v58 = (v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81;
            v7 = v81;
            v4 = v80;
            v2 = v79;
            v0 = v78;
            v82 = uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(&v1, a2, ::0x533c70::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&v16));
            if (v82)
            {
                v91 = a0;
                v91[1] = v82;
                v91[1] = v92;
                v91[0] = 3;
                ::0x5270e0::core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&v16);
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                vvar_641{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v40);
                return v45;
            }
            v7 = (long long)(&v21)[8];
            v83 = *((int128_t *)&v16);
            v49 = (((((((v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
            v84 = *((int128_t *)&v18);
            v52 = ((((v52 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
            v85 = (int128_t)(&v19)[8];
            v55 = (((v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
            v5 = v85;
            v3 = v84;
            v1 = v83;
            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&v22, &v1);
            v86 = (long long)v22;
            v63 = (long long)(&v22)[8];
            v64 = (long long)v23;
            if (v34 == 0x8000000000000000)
            {
                vvar_657{reg 32} = a0;
                v88[1] = v63;
                v88[1] = v64;
                v88[0] = 3;
                ::0x5276c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&v13);
                vvar_660{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v40);
                return v45;
            }
            v34 = v86;
            v35 = v63;
            v36 = v64;
            ::0x5280f0::alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&v13, &v34);
            v16 = v16;
            v46 = v56;
        } while (v46 > v44);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&v1, &v40);
    if ((long long)v1 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&v1);
        ::0x5288f0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&v26, &v13);
        *((int128_t *)&v2) = *((int128_t *)&v28);
        *((int128_t *)&v0) = *((int128_t *)&v26);
        v4 = alloc::boxed::Box$LT$T$GT$::new::h4cf6d2eb54d1ad8d();
        v6 = &g_600348;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(a0, &v1, a2, a3);
        vvar_637{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&v40);
        return v45;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&v1);
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next().is_none()src/uu/sort/src/merge.rs", 42, &g_6002a0); /* do not return */
}
