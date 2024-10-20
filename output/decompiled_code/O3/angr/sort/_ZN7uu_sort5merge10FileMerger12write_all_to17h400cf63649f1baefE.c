long long uu_sort::merge::FileMerger::write_all_to::h400cf63649f1baef(struct_6 *a0, struct_0 *a1, void* a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x1e8]
    char v1;  // [sp-0x1e1]
    unsigned long long *v2;  // [sp-0x1e0]
    struct_9 *v3;  // [sp-0x1d8]
    unsigned long long v4;  // [sp-0x1d0]
    struct_3 *v5;  // [sp-0x1c8]
    unsigned long long v6;  // [sp-0x1b8]
    int v7;  // [sp-0x1a8], Other Possible Types: struct_3 *, unsigned long, unsigned long long
    struct_3 *v8;  // [sp-0x1a0], Other Possible Types: struct_5 *
    unsigned long long v9[2];  // [sp-0x198], Other Possible Types: unsigned long long
    struct_3 *v10;  // [sp-0x190]
    struct_3 *v11;  // [sp-0x180]
    struct_3 *v12;  // [sp-0x170]
    struct_3 *v13;  // [sp-0x160]
    struct_3 *v14;  // [sp-0x150]
    struct_3 *v15;  // [sp-0x140]
    unsigned long long v16;  // [sp-0x130]
    unsigned long long v17[2];  // [sp-0x128]
    char v18;  // [bp-0x118]
    char v19;  // [bp-0x108]
    char v20;  // [bp-0xf8]
    char v21;  // [bp-0xe8]
    char v22;  // [bp-0xd8]
    char v23;  // [bp-0xc8]
    char v24;  // [bp-0xb8]
    unsigned long long v25[2];  // [sp-0xb0]
    char v26;  // [bp-0xa8]
    char v28;  // al
    unsigned long long v29;  // cc_ndep
    int v30;  // ymm0
    int v31;  // ymm1
    int v32;  // ymm2
    int v33;  // ymm3
    unsigned long long v34;  // cc_dep1
    struct_4 *v35;  // rbp
    struct_1 *v36;  // r12
    unsigned long long v37;  // r15
    struct_3 *v38;  // xmm0
    struct_9 *v39;  // rcx
    struct_3 *v40;  // xmm1
    unsigned long long v41[6];  // rax
    char **v42;  // rbx
    unsigned long long v43;  // cc_op
    struct_10 *v44;  // cc_dep1
    unsigned long long v45[6];  // rcx
    unsigned long long v46;  // rax
    char v47;  // al
    unsigned long long v48;  // r8
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rdx
    unsigned long long v51[2];  // rax
    unsigned long long v52;  // cc_dep1
    struct_7 *v53;  // rax
    unsigned long long v54;  // r15
    unsigned long long v55[2];  // rbx
    unsigned long long v56;  // cc_ndep
    struct_7 *v57;  // rbx
    struct_3 *v58;  // xmm0
    struct_4 *v59;  // r12
    struct_1 *v60;  // r15
    struct_3 *v61;  // rbx
    unsigned long long v62[3];  // rdi
    unsigned long long v63;  // rax
    unsigned long long v64;  // rsi
    struct_3 *v65;  // xmm0
    struct_3 *v66;  // xmm0
    struct_3 *v67;  // xmm0
    struct_3 *v68;  // xmm0
    struct_3 *v69;  // xmm1
    struct_3 *v70;  // xmm2
    struct_3 *v71;  // xmm3
    struct_5 *v72;  // rbx
    unsigned long long v75;  // rax
    unsigned long long v76;  // rdx
    unsigned long long v77;  // cc_dep2
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v81;  // r15
    unsigned long long *v82;  // rbx
    unsigned long long v83[2];  // rbx

    v2 = &a0->padding_10[0];
    v3 = &a0->field_48;
    v1 = a1->field_84;
    v28 = !a0->field_20;
    v4 = &g_5934d0;
    while (true)
    {
        v34 = v28 & 1;
        if ((v28 & 1))
        {
LABEL_4e3340:
            v72 = a0->field_8;
            v7 = a0->field_0;
            v8 = v72;
            if (!v7)
            {
LABEL_4e336a:
                v72->field_200 = vvar_754 - 1;
                if (CasCmpNE(v72->field_200, vvar_754))
                    goto LABEL_4e336a;
                do
                {
                    v75 = v72->field_80;
                    v76 = v75 | v72->field_190;
                    v72->field_80 = v76;
                    if (v75 == v72->field_80)
                    {
                        v72->field_80 = v76;
                        v77 = v72->field_80;
                    }
                    else
                    {
                        v72->field_80 = v76;
                        v77 = v72->field_80;
                        v79 = v72->field_80;
                    }
                } while ((v80 = v78, v75 != v77));
                if (!(v80 & v72->field_190))
                    _ZN3std4sync4mpmc5waker9SyncWaker10disconnect17hed06c07e0ee88640E.llvm.7986240523035248243(&v72->padding_88[184]);
                *((char *)(v72 + &g_209)) = 1;
                if (CasCmpNE(*((char *)(v72 + &g_209)), *((char *)(v72 + &g_209))))
                    goto LABEL_0x4e33be;
                if (!vvar_759)
                    break;
                _ZN4core3ptr172drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$$GT$17h19380b8d307749b8E.llvm.17343790245676626513(v72);
                break;
            }
            else if ((unsigned int)v7 != 1)
            {
                std::sync::mpmc::counter::Sender$LT$C$GT$::release::h2b76ec98a97a24c2(&v8);
                break;
            }
            else
            {
                std::sync::mpmc::counter::Sender$LT$C$GT$::release::hf4f144f3b7052f8f(&v8);
                break;
            }
        }
        v35 = a0->field_18;
        v36 = v35->field_10;
        v36->field_0 = v36->field_0 + 1;
        if ((char)amd64g_calculate_condition(4, 24, vvar_705 + 1, 0, amd64g_calculate_rflags_c(17, v34, 0, v29)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 5125269()
        v37 = v35->field_18;
        v38 = *((int128_t *)&v35->field_18);
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
        v39 = v3;
        v6 = v39->field_10;
        v40 = *((int128_t *)&v39->field_0);
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
        v5 = v40;
        a0->field_48 = v36;
        *((struct_3 **)&a0->field_50) = v38;
        v41 = v36->field_10;
        if (v37 >= v41[5])
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v42 = v37 * 24 + v41[4];
        v43 = 5;
        v44 = v1;
        if (!(v1) || !((v44 = v5, v43 = 20, v44)))
        {
LABEL_4e3064:
            uu_sort::Line::print::hd0b0350841fa008a(v42, a2, a1, v39, v48, a5);
            goto LABEL_4e3074;
        }
        v45 = v44->field_10;
        v46 = (&v5)[1];
        if (v46 >= v45[5])
        {
            v4 = &g_5934e8;
            goto LABEL_0x4e34b5;
        }
        v47 = uu_sort::compare_by::h8ef91666f986b458(v46 * 24 + v45[4], v42, a1, v45 + 1, v35->field_10->field_10 + 1, a5, *((long long *)&v0), (struct struct_6 *)&a0->padding_10, (struct struct_6 *)&a0->field_48);
        v43 = 17;
        v44 = v47;
        if (!(!v47))
            goto LABEL_4e3064;
LABEL_4e3074:
        v29 = amd64g_calculate_rflags_c(v43, v44, 0, amd64g_calculate_rflags_c(17, v34, 0, v29));
        if (v36->field_10->field_28 != v37 + 1)
        {
            v52 = a0->field_20;
            if (!a0->field_20)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            a0->field_18->field_18 = &a0->field_18->field_18->padding_0[1];
            v29 = v52 < 0;
            _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(v2, 0, a0->field_20);
            goto LABEL_4e3183;
        }
        v51 = std::sync::mpmc::Receiver$LT$T$GT$::recv::ha346a0eed7613f4f(v35, v49, v50);
        v17[0] = v51;
        if (v51)
        {
            v25[0] = v51;
            if (!a0->field_20)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v7 = 1;
            v8 = 1;
            v9[0] = v51;
            v53 = __rust_alloc(24, 8);
            if (!v53)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v57 = v53;
            v57->field_10 = v9;
            v58 = *((int128_t *)&v7);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
            *((struct_3 **)&v57->field_0) = v58;
            v59 = a0->field_18;
            v60 = v59->field_10;
            v60->field_0 = v60->field_0 - 1;
            v29 = amd64g_calculate_rflags_c(20, v53, 0, v29);
            if (vvar_720 == 1)
            {
                self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(&v60->field_10);
                v60->field_8 = vvar_724 - 1;
                v29 &= 1;
                if (vvar_724 == 1)
                    __rust_dealloc(v60);
            }
            v59->field_10 = &v57->field_0;
            a0->field_18->field_18 = 0;
            _ZN16binary_heap_plus11binary_heap23BinaryHeap$LT$T$C$C$GT$15sift_down_range17ha26e80cda5545093E.llvm.1043401367004276470(v2, 0, a0->field_20);
            goto LABEL_4e3183;
            goto LABEL_4e3183;
        }
        binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::pop::h4d00ecbf28d1988c(&v7, v2);
        v54 = v7;
        if (v54 != 3)
        {
            v55 = v9;
            v55[0] = vvar_719 - 1;
            v56 = v54 < 3;
            if (!(vvar_719 == 1) || !((self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(v55 + 16), v55[1] = (unsigned long long)(vvar_723 - 1), v56 &= 1, vvar_723 == 1)))
            {
                if (!v54)
                    goto LABEL_4e32f4;
LABEL_4e32be:
                if ((unsigned int)v54 != 1)
                {
                    std::sync::mpmc::counter::Receiver$LT$C$GT$::release::hcd8762d1b5f36dbd(&v8);
                    goto LABEL_4e331f;
                }
                else
                {
                    std::sync::mpmc::counter::Receiver$LT$C$GT$::release::h457d1330e04fe7ed(&v8);
                    goto LABEL_4e331f;
                }
            }
            __rust_dealloc(v55);
            if (!(!v54))
                goto LABEL_4e32be;
LABEL_4e32f4:
            v61 = v8;
            v61->field_208 = vvar_728 - 1;
            if (CasCmpNE(v61->field_208, vvar_728))
                goto LABEL_0x4e32f9;
            v29 = amd64g_calculate_rflags_c(20, v54, 0, v56);
            if ((Not ((vvar_728 - 0x1<64>) == 0x0<64>))) { Goto None } else { Goto None }
            std::sync::mpmc::array::Channel$LT$T$GT$::disconnect_receivers::h0efa9efa079a022c(v61);
            *((char *)(v61 + &g_209)) = 1;
            if (CasCmpNE(*((char *)(v61 + &g_209)), *((char *)(v61 + &g_209))))
                goto LABEL_0x4e330d;
            if (!vvar_732)
                goto LABEL_4e331f;
            _ZN4core3ptr148drop_in_place$LT$alloc..boxed..Box$LT$std..sync..mpmc..counter..Counter$LT$std..sync..mpmc..array..Channel$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$$GT$17hb4b964f79e10f499E.llvm.17343790245676626513(v61);
        }
LABEL_4e331f:
        if (v17)
            self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(v17);
LABEL_4e3183:
        v62 = v5;
        if (v62)
        {
            v63 = v62[0];
            if (v63 != 1)
            {
                v29 = v63 < 1;
                v62[0] = v63 - 1;
            }
            else
            {
                v64 = v62[2];
                v62[0] = 0;
                if (v62 != -1)
                {
                    v62[1] = vvar_735 - 1;
                    v29 = v62 < -1;
                    if (vvar_735 == 1)
                        __rust_dealloc(v62);
                }
                uu_sort::chunks::Chunk::recycle::h68bc1b3fa362e7ef(v17, v64);
                v7 = v6;
                v16 = *((long long *)&v24);
                v65 = *((int128_t *)&v23);
                v15 = v65;
                v66 = *((int128_t *)&v22);
                v14 = v66;
                v67 = *((int128_t *)&v21);
                v13 = v67;
                v68 = *((int128_t *)&v17);
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                v69 = *((int128_t *)&v18);
                v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                v70 = *((int128_t *)&v19);
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
                v71 = *((int128_t *)&v20);
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
                v12 = v71;
                v11 = v70;
                v10 = v69;
                v8 = v68;
                std::sync::mpmc::Sender$LT$T$GT$::send::h3f39fd9a61f69cd3(v25, a0, &v7, &v8);
                if (*((long long *)&v26) != 0x8000000000000000)
                    ::0x4d0570::core::ptr::drop_in_place$LT$uu_sort..chunks..RecycledChunk$GT$::h47457fd3f631faa4(&v26);
            }
        }
        if (!a0->field_20)
            goto LABEL_4e3340;
    }
    v9 = a0->field_40;
    *((uint128_t *)&v7) = a0->field_30;
    std::thread::JoinInner$LT$T$GT$::join::hcfbd41d2830080e5(v25, &v7);
    if (v25)
    {
        *((int128_t *)&v7) = *((int128_t *)&v26);
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v81 = *((long long *)&v26);
    v82 = v2;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h147659c825fc8ecc(v82);
    if (*(v82))
        __rust_dealloc(a0->field_18);
    v83 = v3->field_0;
    if (!v83)
        return v81;
    v83[0] = v83[0] - 1;
    if (vvar_766 != 1)
        return v81;
    self_cell::unsafe_self_cell::UnsafeSelfCell$LT$ContainedIn$C$Owner$C$DependentStatic$GT$::drop_joined::hb86d14ea116fac9a(v83 + 1);
    v83[1] = v83[1] - 1;
    if (vvar_768 == 1)
    {
        __rust_dealloc(v83);
        return v81;
    }
    return v81;
}
