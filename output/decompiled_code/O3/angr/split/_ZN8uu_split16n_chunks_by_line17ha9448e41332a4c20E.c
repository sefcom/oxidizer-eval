long long uu_split::n_chunks_by_line::ha9448e41332a4c20(struct_1 *a0, unsigned int a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x148]
    char v1;  // [bp-0x140]
    char v2;  // [sp-0x139]
    void* v3;  // [sp-0x130], Other Possible Types: unsigned long, unsigned long long
    uint128_t v4[2];  // [sp-0x128]
    void* v5;  // [sp-0x120]
    struct_2 *v6;  // [sp-0x110]
    unsigned long v7;  // [sp-0x108], Other Possible Types: unsigned long long
    char *v8;  // [sp-0x100]
    char *v9;  // [sp-0xf8]
    void* v10;  // [sp-0xf0]
    char v11;  // [bp-0xe8], Other Possible Types: unsigned long
    unsigned long long v12;  // [sp-0xe0]
    unsigned long long v13;  // [sp-0xd8]
    void* v14;  // [sp-0xc8]
    unsigned long long v15;  // [sp-0xc0]
    void* v16;  // [sp-0xb8]
    unsigned long v17;  // [sp-0xb0], Other Possible Types: unsigned long long
    uint128_t v18[2];  // [sp-0xa8], Other Possible Types: unsigned long long
    char v19;  // [bp-0xa0], Other Possible Types: unsigned long, unsigned long long
    char v20;  // [bp-0x98], Other Possible Types: unsigned long
    char v21;  // [sp-0x90]
    uint128_t v22[2];  // [sp-0x88]
    unsigned long long v23;  // [sp-0x80]
    unsigned long long v24[3];  // [sp-0x78]
    unsigned long long v25;  // [sp-0x70]
    uint128_t v26[2];  // [bp-0x68], Other Possible Types: char, unsigned long long
    char v27;  // [bp-0x60]
    char v28;  // [bp-0x58]
    char *v29;  // [sp-0x50]
    char v30;  // [bp-0x48]
    char v31;  // [bp-0x40]
    char v32;  // [bp-0x38]
    uint128_t v35[2];  // rax
    unsigned long long v36;  // rdx
    int v37;  // xmm0
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned int v41;  // eax
    struct_1 *v42;  // 4096
    unsigned long long v43;  // r8
    unsigned long long v44;  // r9
    uint128_t v45[2];  // rbp
    unsigned long long v47;  // rbx
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rdx
    unsigned long long v50;  // r14
    void* v51;  // rbp
    unsigned long long v52;  // rax
    char *v53;  // r13
    char *v54;  // r15
    unsigned long long v55;  // rcx
    char *v56;  // r13
    char *v57;  // r13
    char *v58;  // r13
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rax
    unsigned long long v61;  // rcx
    uint128_t v62[2];  // rdi
    unsigned long long v63;  // rax
    unsigned long long v64[3];  // rdi
    unsigned long long v65;  // rcx
    unsigned long long v66;  // r13
    unsigned long long v67;  // rax
    int v68;  // xmm0
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rcx
    uint128_t v71[2];  // rbp
    unsigned long long v72;  // r15
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rcx
    struct_0 *v75;  // r14
    unsigned long long v76;  // r15
    unsigned long long v77;  // rsi
    unsigned long long v79;  // r14
    struct_0 *v80;  // r15
    struct_2 *v81;  // rdi
    unsigned long long v82;  // r14
    unsigned long long v83;  // rsi
    struct_2 *v85;  // rdi

    v14 = &g_0;
    v15 = &g_0;
    v16 = &g_0;
    if (!uu_split::get_input_size::he7fa2a9fb4a5171c(&a0->padding_10[96], a1, &v14, a0->field_0, *((long long *)(a0 + &g_0))))
    {
        v13 = v15;
        v11 = v16;
        if (v36 || (v35 = &g_0, a3 != 1 && !a0->field_a1))
        {
            v17 = std::io::stdio::stdout::h077da66234850927();
            v6 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v17, v38, v36);
            v3 = &g_0;
            *((uint128_t **)&v4[0]) = &g_0;
            v5 = &g_0;
            if (!a2)
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
            v25 = v36;
            if ((v36 | a2) >> 32)
            {
                v39 = v36;
                v40 = (&g_0 CONCAT v39) /m a2;
                v12 = (&g_0 CONCAT v39) /m a2 >> 64;
            }
            else
            {
                v41 = v36;
                v12 = (&g_0 CONCAT v41) /m (unsigned int)a2 >> 32 & 4294967295;
                v40 = (&g_0 CONCAT v41) /m (unsigned int)a2 & 4294967295 & 4294967295;
            }
            if (a3 == 1)
            {
                v2 = a0->field_a1;
                *((uint128_t **)&v22[0]) = &g_0;
                v10 = &g_0;
                v3 = v3;
                goto LABEL_49c30f;
            }
            else
            {
                v2 = a0->field_a1;
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::hcb8cb86ff76e36da(&v17, a2, a0, v2, v43, v44);
                v35 = v18;
                if (v3 == 0x8000000000000000)
                {
                    v45 = &g_0;
                }
                else
                {
                    v3 = v17;
                    *((uint128_t *[2])&v22[0]) = v35;
                    *((uint128_t *[2])&v4[0]) = v35;
                    v5 = v19;
                    v10 = v5;
                    v3 = v3;
LABEL_49c30f:
                    v47 = v40 - -1 - (v12 < &g_0);
                    v48 = v42->field_a2;
                    v17 = v13;
                    v49 = v11;
                    v18 = v49;
                    *((unsigned int *)&v19) = a1;
                    *((uint128_t **)&v20) = &g_0;
                    v11 = v48;
                    v21 = v48;
                    v23 = v42->field_88;
                    v50 = &g_0;
                    v51 = &g_0;
                    v13 = 9223372036854775809;
                    while (true)
                    {
                        _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h09e92b002fd6681b(&v30, &v17, v49, v48, v43, v44, *((long long *)&v0), *((long long *)&v1));
                        v52 = *((long long *)&v30);
                        if (v52 == v13)
                            break;
                        v53 = *((long long *)&v31);
                        if (v52 == 0x8000000000000000)
                        {
                            v26 = 0x8000000000000000;
                            v29 = v53;
                            v35 = __rust_alloc(32, 8);
                            if (!v35)
                                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                            v68 = *((int128_t *)&v26);
                            *((int128_t *)(v35 + &g_10)) = *((int128_t *)&v28);
                            *((void*)&v35[0]) = v68;
                            goto LABEL_49c77d;
                        }
                        v54 = *((long long *)&v32);
                        v7 = v52;
                        v8 = v53;
                        v9 = v54;
                        v55 = v54 + v51;
                        if (v55 < v25)
                        {
                            if (v54 == v52)
                            {
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h7afb710812f2498a(&v7);
                                v57 = v8;
                            }
                            *((char *)(v57 + v54)) = v11;
                            v54 += &g_0;
                            v9 = v54;
                            v57 = v8;
                        }
                        v58 = v56;
                        if (a3)
                        {
                            if (!(v50 == a4) || !((v60 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v6, v58, v54), v60)))
                                goto LABEL_49c550;
                            v35 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v60);
                            goto LABEL_49c75d;
                        }
                        v59 = v50 - (char *)&g_0;
                        if (v10 <= v59)
                            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                        v61 = v59 * 80;
                        v62 = v22;
                        v63 = *((long long *)((char *)v62 + v61 + &g_10));
                        if (v63 != 0x8000000000000000)
                        {
                            v64 = (char *)v62 + v61 + &g_10;
                            goto LABEL_49c4d0;
                        }
                        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::instantiate_writer::h63f4b02c82bf1aec(&v26, &v3, v59, a0, v43, v44);
                        v35 = v26;
                        v64 = *((long long *)&v27);
                        if (v35)
                            goto LABEL_49c763;
                        v63 = v64[0];
LABEL_49c4d0:
                        v65 = *((long long *)(v64 + &g_10));
                        if (v63 - v65 > v54)
                        {
                            v24[0] = v64;
                            memcpy(*((long long *)(v64 + &g_0)) + v65, v58, v54);
                            *((char **)(v24 + &g_10)) = &v54[v65];
                        }
                        else
                        {
                            v66 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h490bc7d417bab506(v64, v58, v54, v65, v43, v44);
                            if (v66)
                            {
                                if (!((char)::0x492cf0::std::io::error::Error::kind::hb2ff5fa058639b3d(v66) != 11) && !(v23 == 0x8000000000000000))
                                {
                                    _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h1c7c86aae06dd8b1E.llvm.4507047988568940441(v66);
                                }
                                else
                                {
                                    v35 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v66);
LABEL_49c75d:
LABEL_49c763:
                                    if (v7)
                                        __rust_dealloc(v8);
LABEL_49c77d:
                                    v45 = v4;
                                    v79 = v5;
                                    if (v79)
                                    {
                                        v80 = &v45[2 + 1];
                                        do
                                        {
                                            v82 = v79;
                                            v83 = v80[2].padding_-40;
                                            if (v83)
                                                __rust_dealloc(v80[2].field_-48);
                                            if (v80[1].field_-38 != 0x8000000000000000)
                                                _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17h4849725892e12fffE.llvm.12874152752476265872(&v80[1].field_-38, v83, v73, v74, v43, v44);
                                            v80 = &v80[2].padding_-40;
                                        } while (v82 != 1);
                                    }
                                    goto LABEL_49c7d8;
                                }
                            }
                        }
LABEL_49c550:
                        v51 += v54;
                        if (v47 > v51)
                        {
LABEL_49c558:
                            if (a3 == &g_0)
                                goto LABEL_49c5a9;
                            goto LABEL_49c5c0;
                        }
                        v67 = 4294967295;
                        v55 = 4294967294;
                        v49 = v12;
                        do
                        {
                            v47 = v47 + v40 + (v50 < v49);
                            v50 += (char *)&g_0;
                            v67 += (char *)&g_0;
                            v55 += (char *)&g_0;
                        } while (v47 <= v51);
                        if (!(v2) || !((unsigned int)v55 < 2147483647))
                            goto LABEL_49c558;
                        if (a3 != 1)
                        {
                            v50 -= v67 & 4294967295;
LABEL_49c5c0:
                            if (v7)
                                __rust_dealloc(v8);
                        }
                        else
                        {
LABEL_49c5a9:
                            if (v50 <= a4)
                                goto LABEL_49c5c0;
                            if (v7)
                                __rust_dealloc(v8);
                            break;
                        }
                    }
                    v71 = v4;
                    v72 = v5;
                    if (v72)
                    {
                        v75 = &v71[2 + 1];
                        do
                        {
                            v76 = v72;
                            v77 = v75[2].padding_-40;
                            if (v77)
                                __rust_dealloc(v75[2].field_-48);
                            if (v75[1].field_-38 != 0x8000000000000000)
                                _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17h4849725892e12fffE.llvm.12874152752476265872(&v75[1].field_-38, v77, v69, v70, v43, v44);
                            v75 = &v75[2].padding_-40;
                        } while (v76 != 1);
                    }
                    if (v3)
                        __rust_dealloc(v71);
                    v81 = v6;
                    *((uint128_t **)(v81 + &g_0)) = *((int *)(v81 + &g_0)) - (char *)&g_0;
                    if (vvar_1005 == 1)
                    {
                        v81->field_0 = &g_0;
                        *((uint128_t **)(v81 + &g_0)) = &g_0;
                        if (CasCmpNE(*((int *)(v81 + &g_0)), *((int *)(v81 + &g_0))))
                            goto LABEL_0x49c6e5;
                        if ((Not (Load(addr=(vvar_715{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                        std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(v81 + &g_0);
                    }
                    if (!v14)
                        return &g_0;
                    __rust_dealloc(v15);
                }
            }
LABEL_49c7d8:
            if (v3)
                __rust_dealloc(v45);
            v85 = v6;
            *((uint128_t **)(v85 + &g_0)) = *((int *)(v85 + &g_0)) - (char *)&g_0;
            if (vvar_1011 == 1)
            {
                v85->field_0 = &g_0;
                *((uint128_t **)(v85 + &g_0)) = &g_0;
                if (CasCmpNE(*((int *)(v85 + &g_0)), *((int *)(v85 + &g_0))))
                    goto LABEL_0x49c80f;
                if ((Not (Load(addr=(vvar_777{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(v85 + &g_0);
                goto LABEL_49c17c;
            }
        }
    }
    else
    {
        v17 = 0x8000000000000000;
        v20 = v36;
        v35 = __rust_alloc(32, 8);
        if (!v35)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v37 = *((int128_t *)&v17);
        *((int128_t *)(v35 + &g_10)) = *((int128_t *)&v19);
        *((void*)&v35[0]) = v37;
    }
LABEL_49c17c:
    if (v14)
        __rust_dealloc(v15);
    return v35;
}
