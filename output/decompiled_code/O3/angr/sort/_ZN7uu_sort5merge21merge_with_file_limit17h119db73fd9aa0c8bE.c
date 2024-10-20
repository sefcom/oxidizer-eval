long long uu_sort::merge::merge_with_file_limit::h119db73fd9aa0c8b(unsigned long long a0[2], uint128_t a1[3], struct_1 *a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x288]
    void* v1;  // [sp-0x278]
    unsigned long long *v2;  // [sp-0x270]
    unsigned long long *v3;  // [sp-0x268]
    unsigned long long v4;  // [sp-0x260], Other Possible Types: unsigned long
    unsigned long long v5;  // [sp-0x258]
    char v6;  // [bp-0x250], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v7;  // [sp-0x248]
    char v8;  // [bp-0x240], Other Possible Types: unsigned long, unsigned long long
    void* v9;  // [sp-0x238]
    char v10;  // [sp-0x230]
    unsigned int v11;  // [sp-0x22c]
    unsigned long long v12;  // [sp-0x228]
    unsigned long long *v13;  // [sp-0x218], Other Possible Types: int, unsigned long, unsigned long long
    unsigned long long *v14;  // [sp-0x210], Other Possible Types: unsigned long long
    int v15;  // [sp-0x208], Other Possible Types: unsigned long, unsigned long long
    unsigned long v16;  // [sp-0x200], Other Possible Types: unsigned long long
    int v17;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x1f0]
    int v19;  // [bp-0x1e8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x1e0]
    int v21;  // [sp-0x1d8]
    char v22;  // [bp-0x1d0]
    int v23;  // [sp-0x1c8]
    char v24;  // [bp-0x1c0]
    int v25;  // [sp-0x1b8]
    unsigned long long v26;  // [sp-0x1a8]
    unsigned long long v27;  // [sp-0x1a0]
    unsigned long v28;  // [sp-0x198], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x190]
    unsigned long v30;  // [sp-0x188], Other Possible Types: unsigned long long
    int v31;  // [sp-0x180]
    int v32;  // [sp-0x170]
    int v33;  // [sp-0x160]
    int v34;  // [sp-0x150]
    unsigned long long v35;  // [sp-0x140]
    int v36;  // [sp-0x138]
    void* v37;  // [sp-0x120]
    unsigned long long v38;  // [sp-0x118]
    void* v39;  // [sp-0x110]
    unsigned long long v40;  // [sp-0x108]
    int v41;  // [sp-0xe8]
    int v42;  // [sp-0xd8]
    int v43;  // [sp-0xc8]
    unsigned long long v44;  // [sp-0xb8]
    int v45;  // [sp-0xb0]
    int v46;  // [sp-0xa0]
    void* v47;  // [sp-0x90]
    unsigned long long v48;  // [sp-0x88]
    char v49;  // [sp-0x80]
    void* v50;  // [sp-0x78]
    int v51;  // [sp-0x68]
    int v52;  // [sp-0x58]
    int v53;  // [sp-0x48]
    void* v55;  // rbx
    unsigned long long v56;  // r14
    int v57;  // ymm0
    int v58;  // ymm0
    int v59;  // xmm1
    int v60;  // ymm1
    int v61;  // ymm1
    int v62;  // xmm2
    int v63;  // ymm2
    int v64;  // ymm2
    int v65;  // xmm3
    int v66;  // ymm3
    int v67;  // ymm3
    unsigned long long v68;  // rbx
    int v70;  // xmm0
    int v71;  // xmm1
    int v72;  // xmm2
    unsigned long long v73;  // rcx
    unsigned long long v74;  // r8
    unsigned long long v75;  // r9
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm2
    int v79;  // xmm3
    unsigned long long v80;  // rbp
    struct_1 *v81;  // r14
    unsigned long long v83;  // rax
    int v84;  // xmm0
    int v85;  // xmm0
    int v86;  // xmm0
    int v87;  // xmm1
    int v88;  // xmm2
    int v89;  // xmm3
    unsigned long long v90;  // rax
    int v91;  // xmm0
    int v92;  // xmm1
    int v93;  // xmm2
    unsigned long long v94;  // r13
    int v95;  // xmm0
    unsigned long long v96;  // rsi
    unsigned long long v97;  // rdx
    unsigned long long *v98;  // rbx
    unsigned long long *v99;  // rax
    unsigned long long *v100;  // rcx
    int v101;  // xmm0
    unsigned long long v102[2];  // rdx
    unsigned long long v103[2];  // rax
    unsigned long long v104[2];  // rcx
    unsigned long long v105[2];  // rax
    unsigned long long *v106;  // rcx
    unsigned long long v107;  // rdx
    unsigned long long *v108;  // rbx
    struct_0 *v109;  // r14
    unsigned long long *v111;  // rbx

    v55 = (*((long long *)((char *)&a1[1] + 8)) - *((long long *)((char *)&a1[0] + 8))) / 24;
    v56 = a2->field_70;
    if (v55 <= v56)
    {
        return uu_sort::merge::merge_without_limit::h3e1b9c964edc06bd(a0, a1, a2);
    }
    else if (!v56)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else
    {
        v37 = 0;
        v58 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)&v36) = 0;
        v38 = 8;
        v39 = 0;
        v40 = 9223372036854775809;
        v59 = a1[0];
        v61 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v62 = a1[1];
        v64 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
        v65 = a1[2];
        v67 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
        v41 = v59;
        v42 = v62;
        v43 = v65;
        v44 = v56;
        *((int128_t *)&v45) = 0;
        *((int128_t *)&v46) = 0;
        v47 = 0;
        v48 = -1;
        v49 = 0;
        v50 = 0;
        v1 = 0;
        v2 = 8;
        v3 = 0;
        v12 = 9223372036854775810;
        v26 = v56;
        do
        {
            v55 = v68 - v56;
            if (v68 < v56)
                v55 = 0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75183f5be7e6acd6();
            if (v4 == v12)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v70 = *((int128_t *)&v4);
            v71 = *((int128_t *)&v6);
            v72 = *((int128_t *)&v8);
            v53 = v72;
            v52 = v71;
            v51 = v70;
            uu_sort::merge::merge_without_limit::h948927bf668a40ca(&v13, &v51, a2, v73, v74, v75);
            if (v28 == 3)
            {
                v102 = a0;
                v102[1] = v29;
                v102[1] = v30;
                v102[0] = 3;
                goto LABEL_4d8154;
            }
            v35 = *((long long *)&v24);
            v76 = *((int128_t *)&v16);
            v77 = (int128_t)(&v17)[8];
            v78 = *((int128_t *)&v20);
            v79 = *((int128_t *)&v22);
            v34 = v79;
            v33 = v78;
            v32 = v77;
            v31 = v76;
            v28 = v13;
            v29 = v14;
            v30 = v15;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::h1ae3bb5131807fb8(&v13, a3);
            v80 = v14;
            if (v80 == 0x8000000000000000)
            {
                v103 = a0;
                *((int128_t *)&v103[1]) = *((int128_t *)&v15);
                v103[0] = 3;
                core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hced887e5b12fefe4(&v28);
                goto LABEL_4d8154;
            }
            v27 = v55;
            v81 = a2;
            v83 = __rust_alloc(0x2000, 1);
            if (!v83)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v7 = 0x2000;
            v8 = v83;
            v9 = 0;
            v10 = 0;
            v11 = v13;
            v4 = v80;
            v5 = v15;
            v6 = v16;
            v84 = (int128_t)(&v34)[8];
            v23 = v84;
            v85 = (int128_t)(&v33)[8];
            v21 = v85;
            v86 = *((int128_t *)&v28);
            v87 = *((int128_t *)&v30);
            v88 = (int128_t)(&v31)[8];
            v89 = (int128_t)(&v32)[8];
            v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
            v19 = v89;
            v17 = v88;
            v15 = v87;
            v13 = v86;
            a2 = v81;
            v90 = uu_sort::merge::FileMerger::write_all_to::h636df7f1f37562fd(&v13, v81, &v7, v73, v74, v75, *((long long *)&v0), a0, 0);
            v56 = v26;
            if (v90)
            {
                v104 = a0;
                v104[1] = v90;
                v104[1] = v97;
                v104[0] = 3;
                if (v4)
                    __rust_dealloc(v5);
                _ZN4core3ptr81drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..fs..File$GT$$GT$17h158db536696b081bE.llvm.12220514456557089628(&v7, v4, v107, v104, v74, v75, *((long long *)&v0), a0, 0, 8, v3);
                goto LABEL_4d8154;
            }
            v91 = *((int128_t *)&v4);
            v92 = *((int128_t *)&v6);
            v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92;
            v93 = *((int128_t *)&v8);
            v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93;
            v13 = v91;
            v15 = v92;
            v19 = *((long long *)&v10);
            v17 = v93;
            v94 = v13;
            v95 = (int128_t)(&v13)[8];
            v25 = v95;
            _ZN4core3ptr81drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..fs..File$GT$$GT$17h158db536696b081bE.llvm.12220514456557089628(&v15, v96, v97, v73, v74, v75, *((long long *)&v0), a0, 0, 8, v3);
            if (v94 == 0x8000000000000000)
            {
                v105 = a0;
                *((void*)&v105[1]) = v25;
                v105[0] = 3;
LABEL_4d8154:
                v108 = v3;
                if (v108)
                {
                    v109 = v2 + 1;
                    do
                    {
                        if (v109->field_0)
                            __rust_dealloc(v109->field_-8);
                    } while ((v109 += 24, v111 = v108 - 1, v108 != 1));
                }
                if (v1)
                {
                    __rust_dealloc(v2);
                    goto LABEL_4d823f__0;
                }
            }
            v98 = v3;
            if (v98 == v1)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he2a19f095e6f27e7(&v1);
            v99 = v2;
            v100 = v98 * 3;
            *((unsigned long long *)((char *)v99 + 0x8 * v100)) = v94;
            v101 = v25;
            v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101;
            *((void*)(8 + (char *)v99 + 0x8 * v100)) = v101;
            v3 = (char *)v98 + 1;
        } while (v27 > v56);
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75183f5be7e6acd6(&v13, &v36);
        if (v13 != v12)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h0a98a06d36b5b11f(&v13);
            core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
        }
        v106 = v2;
        v13 = v106;
        v14 = v106;
        v15 = v1;
        v16 = (char *)v106 + 0x18 * v3;
        v17 = 1;
        v18 = &g_593348;
        uu_sort::merge::merge_with_file_limit::h119db73fd9aa0c8b(a0, &v13, a2, a3, v74, v75);
        return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h1312440dcb8ae8a7(&v36);
LABEL_4d823f__0:
        return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h1312440dcb8ae8a7(&v36);
    }
}
