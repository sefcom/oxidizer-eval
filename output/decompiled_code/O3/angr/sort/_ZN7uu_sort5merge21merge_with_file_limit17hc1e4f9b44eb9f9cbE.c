long long uu_sort::merge::merge_with_file_limit::hc1e4f9b44eb9f9cb(unsigned long long a0[2], uint128_t a1[3], struct_0 *a2, unsigned long long a3)
{
    int v0;  // [sp-0x278]
    int v1;  // [sp-0x268]
    int v2;  // [bp-0x258], Other Possible Types: unsigned long long
    int v3;  // [bp-0x250], Other Possible Types: unsigned long long
    int v4;  // [bp-0x248], Other Possible Types: unsigned long long
    char v5;  // [bp-0x240]
    int v6;  // [sp-0x238]
    char v7;  // [bp-0x230]
    int v8;  // [sp-0x228]
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
    unsigned long long v31;  // [sp-0x130]
    unsigned long long v32;  // [sp-0x128]
    unsigned long long v33;  // [sp-0x120]
    unsigned long long v34;  // [sp-0x118]
    unsigned long long v35;  // [sp-0x110]
    int v36;  // [sp-0x108]
    int v37;  // [sp-0xf8]
    int v38;  // [sp-0xe8]
    int v39;  // [sp-0xd8]
    unsigned long long v41;  // r12
    unsigned long long v42;  // rcx
    unsigned long long v43;  // rax
    void* v44;  // r14
    int v45;  // xmm0
    int v46;  // ymm0
    int v47;  // ymm0
    int v48;  // xmm1
    int v49;  // ymm1
    int v50;  // ymm1
    int v51;  // xmm2
    int v52;  // ymm2
    int v53;  // ymm2
    unsigned long long v54;  // r14
    int v56;  // ymm3
    int v57;  // xmm0
    int v58;  // xmm1
    int v59;  // xmm2
    unsigned long long v60;  // rcx
    unsigned long long v61;  // rdx
    unsigned long long v62;  // rax
    unsigned long long v63;  // rcx
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm3
    unsigned long long v68;  // rax
    int v69;  // xmm0
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rax
    unsigned long long v72;  // rcx
    int v73;  // xmm0
    int v74;  // xmm1
    int v75;  // xmm0
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm1
    int v79;  // xmm2
    int v80;  // xmm3
    unsigned long long v81;  // rax
    int v82;  // xmm0
    int v83;  // xmm1
    int v84;  // xmm2
    unsigned long long v85;  // rdx
    unsigned long long v86[2];  // rdx
    unsigned long long v87[2];  // rax
    unsigned long long v88[2];  // rdx
    unsigned long long v89[2];  // rcx
    unsigned long v90;  // rdx
    unsigned long long v91;  // rsi

    v41 = a2->field_70;
    if (_$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::heecdf305c420e8d0(a1) <= v41)
    {
        *((uint128_t *)&v39) = a1[2];
        *((uint128_t *)&v38) = a1[1];
        *((uint128_t *)&v37) = a1[0];
        v43 = uu_sort::merge::merge_without_limit::hbf9e5e5c59be0516(a0, &v37, a2, v42);
        return v43;
    }
    v44 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::heecdf305c420e8d0(a1);
    v45 = a1[0];
    v47 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v48 = a1[1];
    v50 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
    v51 = a1[2];
    v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
    v2 = v51;
    v1 = v48;
    v0 = v45;
    itertools::Itertools::chunks::h04c76a7520706674(&v37, &v0, v41);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if (v44)
    {
        v22 = 9223372036854775810;
        do
        {
            v13 = v13;
            v44 -= v41;
            if (v44 < v41)
                v44 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0901162af48bf1e0(&v13, &v37);
            if (v13 == v22)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v57 = *((int128_t *)&v13);
            v58 = *((int128_t *)&v15);
            v59 = *((int128_t *)&v17);
            v21 = v59;
            v20 = v58;
            v19 = v57;
            uu_sort::merge::merge_without_limit::h027b09708ed09c8f(&v0, &v19, a2, v60);
            v61 = (long long)v0;
            v62 = (long long)(&v0)[8];
            v63 = (long long)v1;
            if (v23 == 3)
            {
                v86 = a0;
                v86[1] = v62;
                v86[1] = v63;
                v86[0] = 3;
                ::0x526730::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::hcada1487a33b1a31(&v10);
                vvar_656{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h1705102a2021bf9b(&v37);
                return v43;
            }
            v30 = (long long)(&v8)[8];
            v64 = (int128_t)(&v1)[8];
            v65 = (int128_t)v3;
            v66 = *((int128_t *)&v5);
            v67 = *((int128_t *)&v7);
            v29 = v67;
            v28 = v66;
            v27 = v65;
            v26 = v64;
            v23 = v61;
            v24 = v62;
            v25 = v63;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h68c2347c8b817f75(&v19, a3, v23);
            v68 = (long long)(&v19)[8];
            if (v35 == 0x8000000000000000)
            {
                v87 = a0;
                *((void*)&v87[1]) = v20;
                v87[0] = 3;
                goto LABEL_52a244;
            }
            else
            {
                v69 = v20;
                v34 = (long long)v19;
                v35 = v68;
                v36 = v69;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h50efcba1f39d4bae(&v0, &v34);
                v70 = (long long)v0;
                v71 = (long long)(&v0)[8];
                v72 = (long long)v1;
                if (v13 == 0x8000000000000000)
                {
                    v88 = a0;
                    v88[1] = v14;
                    v88[1] = v15;
                    v88[0] = 3;
LABEL_52a244:
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::h8fdc30bab70f8c96(&v23, v91, v88);
                    ::0x526730::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::hcada1487a33b1a31(&v10);
                    vvar_651{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h1705102a2021bf9b(&v37);
                    return v43;
                }
            }
            v73 = (int128_t)(&v1)[8];
            v74 = (int128_t)v3;
            v18 = v74;
            v16 = v73;
            v13 = v70;
            v14 = v71;
            v15 = v72;
            v75 = (int128_t)(&v29)[8];
            v8 = v75;
            v76 = (int128_t)(&v28)[8];
            v6 = v76;
            v77 = *((int128_t *)&v23);
            v78 = *((int128_t *)&v25);
            v79 = (int128_t)(&v26)[8];
            v80 = (int128_t)(&v27)[8];
            v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
            v4 = v80;
            v2 = v79;
            v1 = v78;
            v0 = v77;
            ::0x532ce0::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::h465e666f13f3431d(&v13);
            v81 = uu_sort::merge::FileMerger::write_all_to::h8b0da5b639879774(&v0, a2);
            if (v81)
            {
                v89 = a0;
                v89[1] = v81;
                v89[1] = v90;
                v89[0] = 3;
                ::0x526150::core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h41d2a07c7e82435b(&v13);
                ::0x526730::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::hcada1487a33b1a31(&v10);
                vvar_646{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h1705102a2021bf9b(&v37);
                return v43;
            }
            v4 = (long long)(&v18)[8];
            v82 = *((int128_t *)&v13);
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
            v83 = *((int128_t *)&v15);
            v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
            v84 = (int128_t)(&v16)[8];
            v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
            v2 = v84;
            v1 = v83;
            v0 = v82;
            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h8cc9b203376681b7(&v19, &v0);
            v85 = (long long)v19;
            v62 = (long long)(&v19)[8];
            v63 = (long long)v20;
            if (v31 == 0x8000000000000000)
            {
                vvar_662{reg 32} = a0;
                v86[1] = v62;
                v86[1] = v63;
                v86[0] = 3;
                ::0x526730::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::hcada1487a33b1a31(&v10);
                vvar_665{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h1705102a2021bf9b(&v37);
                return v43;
            }
            v31 = v85;
            v32 = v62;
            v33 = v63;
            ::0x527300::alloc::vec::Vec$LT$T$C$A$GT$::push::h851127a9217d76da(&v10, &v31, v31);
            v13 = v13;
        } while (v54 > v41);
    }
    _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0901162af48bf1e0(&v0, &v37);
    if ((long long)v0 == 9223372036854775810)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hee06e02a31a97a5d(&v0);
        ::0x527960::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd77c4856cdaaa81e(&v23, &v10);
        *((int128_t *)&v1) = *((int128_t *)&v25);
        *((int128_t *)&v0) = *((int128_t *)&v23);
        v2 = alloc::boxed::Box$LT$T$GT$::new::h321c8eae7657dca7();
        v3 = &g_5ff7f8;
        uu_sort::merge::merge_with_file_limit::hc1e4f9b44eb9f9cb(a0, &v0, a2, a3);
        vvar_642{reg 16} = core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h1705102a2021bf9b(&v37);
        return v43;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hee06e02a31a97a5d(&v0);
    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
}
