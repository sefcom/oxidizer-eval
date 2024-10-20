long long uu_sort::merge::FileMerger::write_all::h7e91e6c3620ca5db(struct_7 *a0, struct_10 *a1, void* a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x278]
    char v1;  // [bp-0x270]
    char v2;  // [sp-0x269]
    char v3;  // [bp-0x268]
    char v4;  // [bp-0x260]
    struct_0 *v5;  // [sp-0x258]
    struct_0 *v6;  // [sp-0x248]
    struct_0 *v7;  // [sp-0x238]
    struct_0 *v8;  // [bp-0x228]
    struct_2 *v9;  // [sp-0x220]
    int v10;  // [sp-0x218], Other Possible Types: struct_0 *
    unsigned long long v11;  // [sp-0x200]
    struct_0 *v12;  // [sp-0x1f8]
    unsigned long long v13;  // [sp-0x1e8]
    struct_0 *v14;  // [sp-0x1d8], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v15;  // [sp-0x1d0], Other Possible Types: struct_1 *
    unsigned long long v16[2];  // [sp-0x1c8], Other Possible Types: unsigned long long
    struct_0 *v17;  // [sp-0x1c0]
    struct_0 *v18;  // [sp-0x1b0]
    struct_0 *v19;  // [sp-0x1a0]
    struct_0 *v20;  // [sp-0x190]
    struct_0 *v21;  // [sp-0x180]
    struct_0 *v22;  // [sp-0x170]
    unsigned long long v23;  // [sp-0x160]
    unsigned long long v24[2];  // [sp-0x158]
    char v25;  // [bp-0x148]
    char v26;  // [bp-0x138]
    char v27;  // [bp-0x128]
    char v28;  // [bp-0x118]
    char v29;  // [bp-0x108]
    char v30;  // [bp-0xf8]
    char v31;  // [bp-0xe8]
    char v32;  // [bp-0xe0]
    unsigned long long v33[2];  // [sp-0xb0]
    char v34;  // [bp-0xa8]
    struct_0 *v36;  // xmm0
    struct_0 *v37;  // xmm0
    int v38;  // ymm0
    int v39;  // ymm0
    struct_0 *v40;  // xmm1
    int v41;  // ymm1
    int v42;  // ymm1
    struct_0 *v43;  // xmm2
    int v44;  // ymm2
    int v45;  // ymm2
    struct_0 *v46;  // xmm3
    int v47;  // ymm3
    int v48;  // ymm3
    char v49;  // al
    unsigned long long v50;  // r8
    unsigned long long v51;  // cc_ndep
    unsigned long long v52;  // cc_dep1
    struct_6 *v53;  // r14
    struct_2 *v54;  // rbx
    unsigned long long v55;  // rbp
    struct_0 *v56;  // xmm0
    struct_0 *v58;  // xmm1
    unsigned long long v59[6];  // rax
    char **v60;  // r13
    unsigned long long v61;  // cc_op
    struct_5 *v62;  // cc_dep1
    unsigned long long v63[6];  // rcx
    unsigned long long v64;  // rax
    unsigned long long v65;  // r9
    char v66;  // al
    unsigned long long v67;  // rsi
    unsigned long long v68;  // rdx
    unsigned long long v69[2];  // rax
    unsigned long long v70;  // cc_dep1
    struct_4 *v71;  // rax
    unsigned long long v72;  // rbx
    unsigned long long v73[2];  // r14
    unsigned long long v74;  // cc_ndep
    struct_4 *v75;  // r14
    struct_0 *v76;  // xmm0
    struct_8 *v77;  // rbx
    unsigned long long v78[2];  // r13
    struct_0 *v79;  // r14
    unsigned long long v80[3];  // rdi
    unsigned long long v81;  // rax
    unsigned long long v82;  // rsi
    struct_0 *v83;  // xmm0
    struct_0 *v84;  // xmm0
    struct_0 *v85;  // xmm0
    struct_0 *v86;  // xmm0
    struct_0 *v87;  // xmm1
    struct_0 *v88;  // xmm2
    struct_0 *v89;  // xmm3
    unsigned long long v90;  // rcx
    struct_1 *v91;  // r14
    unsigned long long v92;  // rax
    unsigned long long v94;  // rdx
    unsigned long long v95;  // cc_dep2
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // r14
    unsigned long long v99;  // rsi
    unsigned long long v100;  // rdx
    struct_2 *v101;  // rbx
    unsigned long long v102;  // r8

    uu_sort::Output::into_write::h870c005d8ea28443(&v32, a2);
    v36 = *((int128_t *)&a0->field_50);
    v10 = v36;
    v37 = *((int128_t *)&a0->field_40);
    v8 = v37;
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | a0->field_0;
    v40 = *((int128_t *)&a0->field_10);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
    v43 = *((int128_t *)&a0->field_20);
    v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
    v46 = *((int128_t *)&a0->field_30);
    v48 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46;
    v7 = v46;
    v6 = v43;
    v5 = v40;
    v2 = a1->field_84;
    v49 = !v6;
    v11 = &g_5934d0;
    while (true)
    {
        v9 = v9;
        v52 = v49 & 1;
        v9 = v9;
        if ((v49 & 1))
        {
LABEL_4e2bd1:
            v91 = *((long long *)&v4);
            v14 = *((long long *)&v3);
            v15 = v91;
            if (!v14)
            {
LABEL_4e2c06:
                v91->field_200 = vvar_785 - 1;
                if (CasCmpNE(v91->field_200, vvar_785))
                    goto LABEL_4e2c06;
                v92 = v91->field_80;
                do
                {
                    v94 = v92 | v91->field_190;
                    v91->field_80 = v94;
                    if (v92 == v91->field_80)
                    {
                        v91->field_80 = v94;
                        v95 = v91->field_80;
                    }
                    else
                    {
                        v91->field_80 = v94;
                        v95 = v91->field_80;
                        v97 = v91->field_80;
                    }
                } while (v96 != v95);
                if (!(v92 & v91->field_190))
                    _ZN3std4sync4mpmc5waker9SyncWaker10disconnect17hed06c07e0ee88640E.llvm.7986240523035248243(&v91->padding_88[184]);
                *((char *)(v91 + &g_209)) = 1;
                if (CasCmpNE(*((char *)(v91 + &g_209)), *((char *)(v91 + &g_209))))
                    goto LABEL_0x4e2c4c;
                if (!vvar_790)
                    break;
                _ZN4core3ptr172drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$$GT$17h19380b8d307749b8E.llvm.17343790245676626513(v91);
                break;
            }
            else if ((unsigned int)v14 != 1)
            {
                std::sync::mpmc::counter::Sender$LT$C$GT$::release::h2b76ec98a97a24c2(&v15);
                break;
            }
            else
            {
                std::sync::mpmc::counter::Sender$LT$C$GT$::release::hf4f144f3b7052f8f(&v15);
                break;
            }
        }
        v53 = (&v5)[1];
        v54 = v53->field_10;
        v9->field_0 = v9->field_0 + 1;
        if ((char)amd64g_calculate_condition(4, 24, vvar_734 + 1, 0, amd64g_calculate_rflags_c(17, v52, 0, v51)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 5123384()
        v55 = v53->field_18;
        v56 = *((int128_t *)&v53->field_18);
        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
        v13 = (long long)(&v10)[8];
        v58 = *((int128_t *)&v9);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
        v12 = v58;
        v9 = v54;
        v10 = v56;
        v59 = v9->field_10;
        if (v55 >= v59[5])
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v60 = 3 * v55 * 8 + v59[4];
        v61 = 5;
        v62 = v2;
        if (!(v2) || !((v62 = v12, v61 = 20, v62)))
        {
LABEL_4e28a9:
            uu_sort::Line::print::h3ae0461d0c58fb66(v60, &v32, a1, &v9, v50, v65);
            goto LABEL_4e28bc;
        }
        v63 = v62->field_10;
        v64 = (&v12)[1];
        if (v64 >= v63[5])
        {
            v11 = &g_5934e8;
            goto LABEL_0x4e2d58;
        }
        v66 = uu_sort::compare_by::h8ef91666f986b458(v64 * 24 + v63[4], v60, a1, v63 + 1, v53->field_10->field_10 + 1, v65, *((long long *)&v0), *((long long *)&v1));
        v61 = 17;
        v62 = v66;
        if (!(!v66))
            goto LABEL_4e28a9;
LABEL_4e28bc:
        v51 = amd64g_calculate_rflags_c(v61, v62, 0, amd64g_calculate_rflags_c(17, v52, 0, v51));
        if (v9->field_10->field_28 != v55 + 1)
        {
            v70 = v6;
            if (!v6)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            *((long long *)&(&v5)[1]->padding_0[24]) = *((long long *)&(&v5)[1]->padding_0[24]) + 1;
            v51 = v70 < 0;
            _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(&v5, 0, v6);
            goto LABEL_4e29e6;
        }
        v69 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(v53, v67, v68);
        v24[0] = v69;
        if (v69)
        {
            v33[0] = v69;
            if (!v6)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v14 = 1;
            v15 = 1;
            v16[0] = v69;
            v71 = __rust_alloc(24, 8);
            if (!v71)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v75 = v71;
            v75->field_10 = v16;
            v76 = *((int128_t *)&v14);
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            *((struct_0 **)&v75->field_0) = v76;
            v77 = (&v5)[1];
            v78 = v77->field_10;
            v78[0] = v78[0] - 1;
            v51 = amd64g_calculate_rflags_c(20, v71, 0, v51);
            if (vvar_751 == 1)
            {
                self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(v78 + 1);
                v78[1] = vvar_755 - 1;
                v51 &= 1;
                if (vvar_755 == 1)
                    __rust_dealloc(v78);
            }
            v77->field_10 = &v75->field_0;
            *((long long *)&(&v5)[1]->padding_0[24]) = 0;
            _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(&v5, 0, v6);
            goto LABEL_4e29e6;
            goto LABEL_4e29e6;
        }
        binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::pop::h4d00ecbf28d1988c(&v14, &v5);
        v72 = v14;
        if (v72 != 3)
        {
            v73 = v16;
            v73[0] = vvar_750 - 1;
            v74 = v72 < 3;
            if (!(vvar_750 == 1) || !((self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(v73 + 16), v73[1] = (unsigned long long)(vvar_754 - 1), v74 &= 1, vvar_754 == 1)))
            {
                if (!v72)
                    goto LABEL_4e2b81;
LABEL_4e2b46:
                if ((unsigned int)v72 == 1)
                {
                    std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h457d1330e04fe7ed(&v15);
                    goto LABEL_4e2bb0;
                }
                else
                {
                    std::sync::mpmc::counter::Receiver$LT$C$GT$::release::hcd8762d1b5f36dbd(&v15);
                    goto LABEL_4e2bb0;
                }
            }
            __rust_dealloc(v73);
            if (!(!v72))
                goto LABEL_4e2b46;
LABEL_4e2b81:
            v79 = v15;
            v79->field_208 = vvar_758 - 1;
            if (CasCmpNE(v79->field_208, vvar_758))
                goto LABEL_0x4e2b89;
            v51 = amd64g_calculate_rflags_c(20, v72, 0, v74);
            if ((Not ((vvar_758 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
            std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::h0efa9efa079a022c(v79);
            *((char *)(v79 + &g_209)) = 1;
            if (CasCmpNE(*((char *)(v79 + &g_209)), *((char *)(v79 + &g_209))))
                goto LABEL_0x4e2b9d;
            if (!vvar_763)
                goto LABEL_4e2bb0;
            _ZN4core3ptr148drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$17hb4b964f79e10f499E.llvm.17343790245676626513(v79);
        }
LABEL_4e2bb0:
        if (v24)
            self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(v24);
LABEL_4e29e6:
        v80 = v12;
        if (v80)
        {
            v81 = v80[0];
            if (v81 != 1)
            {
                v51 = v81 < 1;
                v80[0] = v81 - 1;
            }
            else
            {
                v82 = v80[2];
                v80[0] = 0;
                if (v80 != -1)
                {
                    v80[1] = vvar_766 - 1;
                    v51 = v80 < -1;
                    if (vvar_766 == 1)
                        __rust_dealloc(v80);
                }
                uu_sort::chunks::Chunk::recycle::h68bc1b3fa362e7ef(v24, v82);
                v14 = v13;
                v23 = *((long long *)&v31);
                v83 = *((int128_t *)&v30);
                v22 = v83;
                v84 = *((int128_t *)&v29);
                v21 = v84;
                v85 = *((int128_t *)&v28);
                v20 = v85;
                v86 = *((int128_t *)&v24);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v86;
                v87 = *((int128_t *)&v25);
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v87;
                v88 = *((int128_t *)&v26);
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88;
                v89 = *((int128_t *)&v27);
                v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v89;
                v19 = v89;
                v18 = v88;
                v17 = v87;
                v15 = v86;
                std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(v33, &v3, &v14, v90);
                if (*((long long *)&v34) != 0x8000000000000000)
                    ::0x4d0570::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h47457fd3f631faa4(&v34);
            }
        }
        v9 = v9;
        v9 = v9;
        if (!v6)
            goto LABEL_4e2bd1;
    }
    v16 = v8;
    v14 = v7;
    std::thread::JoinInner$LT$T$GT$::join::hcfbd41d2830080e5(v33, &v14);
    if (v33)
    {
        *((int128_t *)&v14) = *((int128_t *)&v34);
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v98 = *((long long *)&v34);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h147659c825fc8ecc(&v5);
    if (v5)
        __rust_dealloc((&v5)[1]);
    v101 = v9;
    if (!v101)
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::haf0144e8e9813ab9(&v32, v99, v100, v90, v102, v65, *((long long *)&v0), *((long long *)&v1), *((long long *)&v3));
        return v98;
    }
    v101->field_0 = v101->field_0 - 1;
    if (vvar_797 == 1)
    {
        self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(&v101->field_10);
        v101->field_8 = v101->field_8 - 1;
        if (vvar_799 == 1)
            __rust_dealloc(v101);
    }
}
