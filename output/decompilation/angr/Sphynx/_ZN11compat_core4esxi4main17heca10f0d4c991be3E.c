long long compat_core::esxi::main::heca10f0d4c991be3(struct_5 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x12a]
    char v1;  // [sp-0x129]
    struct_2 *v2;  // [bp-0x128], Other Possible Types: char
    struct_2 *v3;  // [bp-0x120]
    unsigned long long v4;  // [sp-0x118]
    struct_2 *v5;  // [bp-0x108]
    struct_4 *v6;  // [sp-0x100], Other Possible Types: unsigned long long
    void* v7;  // [sp-0xf8], Other Possible Types: unsigned long long
    struct struct_3 **v8;  // [sp-0xe8], Other Possible Types: struct struct_7 **, unsigned long long
    void* v9;  // [sp-0xe0], Other Possible Types: unsigned long long
    struct struct_2 **v10;  // [sp-0xd8]
    struct_1 *v11;  // [sp-0xd0], Other Possible Types: unsigned long long
    struct_2 *v12;  // [sp-0xc8]
    struct_2 *v13;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0xa8]
    unsigned int v15;  // [sp-0xa0]
    unsigned int v16;  // [sp-0x9c]
    struct_2 *v17;  // [sp-0x98]
    char *v18;  // [sp-0x90]
    unsigned long long v19;  // [sp-0x88]
    unsigned long v20;  // [sp-0x80], Other Possible Types: unsigned long long
    struct_2 *v21;  // [sp-0x78]
    char v22;  // [bp-0x68]
    unsigned long long v23;  // [sp-0x58]
    struct_2 *v24;  // [sp-0x50]
    struct_2 *v25;  // [sp-0x48]
    unsigned int v27;  // ecx
    struct struct_2 **v28;  // r12
    struct_4 *v30;  // rbp
    struct_2 *v31;  // xmm0
    struct_2 *v32;  // rbp
    struct_2 *v33;  // rcx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rbp
    struct_2 *v36;  // rdx
    struct_2 *v37;  // rdx
    struct_2 *v38;  // rdi
    int v39;  // ymm0
    struct struct_2 **v40;  // rax
    struct_1 *v41;  // rcx
    struct_2 *v42;  // xmm0
    struct_2 *v43;  // xmm0
    unsigned long long v44;  // rax
    unsigned long long v45[3];  // r15
    struct_4 *v47;  // rsi
    unsigned long long v48[3];  // rbp
    unsigned long long v49;  // r12
    char v50;  // al
    struct_4 *v51;  // rsi
    char v52;  // 4104
    struct_4 *v53;  // rbp
    unsigned long long v54;  // rax
    struct_2 *v55;  // rax
    unsigned long long v56;  // rcx
    struct_2 *v57;  // xmm0
    int v58;  // ymm0
    struct_2 *v59;  // r15
    unsigned long long v60;  // r12
    unsigned long long v61;  // rax
    unsigned long long v62;  // rbx
    struct_2 *v63;  // r15
    unsigned long long v64;  // rax
    struct_2 *v65;  // xmm0
    struct_2 *v66;  // xmm0
    unsigned long long v67;  // rsi
    struct_2 *v68;  // rax
    unsigned long long v69;  // rsi
    struct_2 *v70;  // xmm0
    unsigned long long v72;  // rbp
    unsigned long long v73;  // rsi
    struct_2 *v74;  // rax
    unsigned long long v75;  // rsi
    struct_2 *v76;  // xmm0
    struct_2 *v77;  // xmm0

    compat_kernel::core::stats::Stats::render_thread::h0458801fd31d2801(a1);
    v27 = 1;
    v28 = &v2;
    while (true)
    {
        v0 = 1 < v27;
        v16 = v27;
        v15 = v27 + (v27 < 2);
        if (_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3)
        {
            v10 = &v16;
            v11 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h78ed4d95ee7e652f;
            v5 = &g_7e5ea0.field_-18;
            v6 = 1;
            v7 = 0;
            v8 = &v10;
            v9 = 1;
            log::__private_api_log::hc54142160760cc34(&v5, 3, &g_7e5eb0, 0);
        }
        compat_core::esxi::vm::remove_snapshots::he0b2b50289fbb0c5(&v5);
        if ((char)v5 <= 3 && (char)v5 != 2)
        {
            compat_core::esxi::vm::EsxiVM::get_running::ha53766a000af63c7(&v20);
            if (!v20)
                goto LABEL_4434e3;
            goto LABEL_44343d;
        }
        else
        {
            v30 = v6;
            *((long long *)*((long long *)(v30 + &g_8)))(v30->field_0);
            if (*((long long *)(*((long long *)(v30 + &g_8)) + (char *)&g_8)))
                __rust_dealloc(v30->field_0);
            __rust_dealloc(v30);
            compat_core::esxi::vm::EsxiVM::get_running::ha53766a000af63c7(&v20);
            if (v20)
            {
LABEL_44343d:
                if ((char)v21 < 2)
                    goto LABEL_4438b1;
                v32 = (&v21)[1];
                *((long long *)*((long long *)(v32 + &g_8)))(v32->field_-18);
                if (*((long long *)(*((long long *)(v32 + &g_8)) + (char *)&g_8)))
                    __rust_dealloc(v32->field_-18);
                v38 = v32;
                goto LABEL_4438ae;
            }
            else
            {
LABEL_4434e3:
                v4 = *((long long *)&v22);
                v31 = v21;
                v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                v2 = v31;
                if (_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3)
                {
                    v10 = &v2;
                    v11 = _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hba978591507845f6;
                    v5 = &g_7e5f18.field_-18;
                    v6 = 1;
                    v7 = 0;
                    v8 = &v10;
                    v9 = 1;
                    log::__private_api_log::hc54142160760cc34(&v5, 3, &g_7e5f28, 0);
                }
                v33 = v2;
                v14 = (&v2)[1];
                v34 = v4;
                v35 = v34 * &g_20 + (char *)v33;
                v17 = v33;
                v36 = v33;
                if (v34)
                {
                    v37 = v17;
                    v23 = v35;
                    while (true)
                    {
                        v40 = v37->field_-18;
                        v41 = *((long long *)(v37 + &g_8));
                        v42 = *((int128_t *)(v37 + &g_10));
                        v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
                        v36 = v37 + &g_20;
                        v5 = v42;
                        if (!v11)
                            break;
                        v24 = v36;
                        v43 = *((int128_t *)&v5);
                        v39 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
                        v25 = v43;
                        v10 = v40;
                        v11 = v41;
                        v12 = v43;
                        v44 = a0->field_28;
                        if (v44)
                        {
                            v45 = *((long long *)(a0 + &g_10));
                            v13 = (char *)v45 + v44 * &g_10;
                            do
                            {
                                wildmatch::WildMatch::new::hf95d199595a03d25(&v5, v45[0], *((long long *)(v45 + &g_10)));
                                v47 = v6;
                                if (v47 && v47 * 8)
                                    __rust_dealloc(v5);
                                v45 += &g_10;
                                if ((char)wildmatch::WildMatch::matches::h1ed8d349706a5306(&v5, v11, (&v12)[1]))
                                {
                                    v48 = a0->field_30;
                                    v49 = a0->field_40 * &g_10;
                                    do
                                    {
                                        if (!v49)
                                        {
                                            compat_core::esxi::vm::EsxiVM::kill_ensure::h6163535f591c92d5(&v5, &v10);
                                            v52 = (char)v5;
                                            v1 = v52 == 3;
                                            if (!(v52 <= 3) || !(v52 != 2))
                                            {
                                                v53 = v6;
                                                *((long long *)*((long long *)(v53 + &g_8)))(v53->field_0);
                                                if (*((long long *)(*((long long *)(v53 + &g_8)) + (char *)&g_8)))
                                                    __rust_dealloc(v53->field_0);
                                                __rust_dealloc(v53);
                                                if (_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE < 3)
                                                    break;
                                            }
                                            else if (_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE < 3)
                                            {
                                                break;
                                            }
                                            v18 = &v1;
                                            v19 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::h011406b2b5888d4b;
                                            v5 = &g_7e5f60.field_-18;
                                            v6 = 1;
                                            v7 = 0;
                                            v8 = &v18;
                                            v9 = 1;
                                            log::__private_api_log::hc54142160760cc34(&v5, 3, &g_7e5f70, 0);
                                            break;
                                        }
                                        wildmatch::WildMatch::new::hf95d199595a03d25(&v5, v48[0], *((long long *)(v48 + &g_10)));
                                        v50 = wildmatch::WildMatch::matches::h1ed8d349706a5306(&v5, v11, (&v12)[1]);
                                        v51 = v6;
                                        if (v51 && v51 * 8)
                                            __rust_dealloc(v5);
                                        v48 += &g_10;
                                        v49 -= (char *)&g_10;
                                    } while (v50);
                                }
                            } while (v45 != v13);
                        }
                        if (v12)
                            __rust_dealloc(v11);
                        v35 = v23;
                        v37 = v24;
                        v28 = &v2;
                        if (v37 == v35)
                        {
                            v54 = v14;
                            goto LABEL_443893;
                        }
                    }
                }
                v54 = v14;
                if (v35 != v36)
                {
                    do
                    {
                        if (*((long long *)(v36 + &g_10)))
                        {
                            __rust_dealloc(*((long long *)(v36 + &g_8)));
                            v54 = v14;
                        }
                    } while ((v36 += &g_20, v35 != v36));
                }
LABEL_443893:
                if (!(v54 && !((char)amd64g_calculate_condition(4, &g_20, v54 * &g_20, v54 * &g_10, (unsigned long long)(v27 < 2)))))
                    goto LABEL_4438b1;
                v38 = v17;
LABEL_4438ae:
                __rust_dealloc(v38);
LABEL_4438b1:
                v2 = &g_8;
                *((uint128_t *)&v3) = 0;
                v5 = &g_7e5ee8.field_-18;
                v6 = 1;
                v7 = 0;
                v8 = "*.*/vmfsRunning VMs: Ok -> ";
                v9 = 0;
                alloc::fmt::format::h3807df668a4e013c(&v10, &v5);
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(v28, v4, 1);
                v55 = v2;
                v56 = v4 * &g_20;
                *((unsigned long long *)((char *)&v55->field_-18 + v56)) = 2;
                v57 = *((int128_t *)&v10);
                v58 = v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                *((struct_2 **)((char *)v55 + v56 + &g_8)) = v57;
                *((struct_2 **)((char *)v55 + v56 + &g_10)) = v12;
                v4 += 1;
                compat_core::esxi::utils::target_extensions::hfec7f96988750855(&v5);
                v59 = v5;
                v60 = v6;
                v61 = v7;
                v62 = (char *)v59 + v61 * &g_10;
                v13 = v59;
                if (v61)
                {
                    v63 = v13 + &g_10;
                    v20 = v20;
                    while (true)
                    {
                        v59 = v63;
                        v20 = v20;
                        v64 = *((long long *)(v59 - &g_10));
                        v65 = *((int128_t *)(v59 - &g_10));
                        v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                        v5 = v65;
                        if (!v20)
                            break;
                        v66 = *((int128_t *)&v5);
                        v25 = v66;
                        v20 = v64;
                        v21 = v66;
                        v18 = &v20;
                        v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hdba53b93b23cbc0c;
                        v5 = &g_7e5ef0.field_-18;
                        v6 = 1;
                        v7 = 0;
                        v8 = &v18;
                        v9 = 1;
                        alloc::fmt::format::h3807df668a4e013c(&v10, &v5);
                        v67 = v4;
                        if (v67 == v3)
                        {
                            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(&v2, v67, 1);
                            v67 = v4;
                        }
                        v68 = v2;
                        v69 = v67 * &g_20;
                        *((unsigned long long *)((char *)&v68->field_-18 + v69)) = 2;
                        v70 = *((int128_t *)&v10);
                        v58 = (v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
                        *((struct_2 **)((char *)v68 + v69 + &g_8)) = v70;
                        *((struct_2 **)((char *)v68 + v69 + &g_10)) = v12;
                        v4 += 1;
                        if (v21)
                            __rust_dealloc(v20);
                        v20 = v20;
                        v20 = v20;
                        v63 = v59 + &g_10;
                        if (v59 == v62)
                            goto LABEL_443ac9;
                    }
                }
                v20 = v20;
                if (v62 != v59)
                {
                    do
                    {
                        if (*((long long *)(v59 + &g_8)))
                            __rust_dealloc(v59->field_-18);
                    } while ((v59 += &g_10, v20 = (unsigned long long)v20, v62 != v59));
                }
LABEL_443ac9:
                v20 = v20;
                if (v60 && v60 * &g_10)
                    __rust_dealloc(v13);
                compat_kernel::core::platform_filters::he302441cd02098df(&v5);
                v72 = v7;
                v28 = &v2;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(&v2, v4, v72);
                ::libc.so.0::memcpy(v4 * &g_20 + (char *)v2, v5, v72 * &g_20);
                v4 += v72;
                v7 = 0;
                core::ptr::drop_in_place::h858b25f8e31a269e(&v5);
                v5 = &g_7e5f08.field_-18;
                v6 = 1;
                v7 = 0;
                v8 = "*.*/vmfsRunning VMs: Ok -> ";
                v9 = 0;
                alloc::fmt::format::h3807df668a4e013c(&v10, &v5);
                v73 = v4;
                if (v73 == v3)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::h68438e0eeab99c5f(&v2, v73, 1);
                    v73 = v4;
                }
                v74 = v2;
                v75 = v73 * &g_20;
                *((unsigned long long *)((char *)&v74->field_-18 + v75)) = 3;
                v76 = *((int128_t *)&v10);
                *((struct_2 **)((char *)v74 + v75 + &g_8)) = v76;
                *((struct_2 **)((char *)v74 + v75 + &g_10)) = v12;
                v4 += 1;
                v7 = v4;
                v77 = *((int128_t *)&v2);
                v39 = (v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                v5 = v77;
                if ((int)compat_core::linux::search::default::hd80da9eb87aab2d8(a0, a1, "/vmfsRunning VMs: Ok -> ", 5, &v5))
                    return 1;
                v27 = v15;
                if (!(!2 < v27) || !(!v0))
                    return 0;
            }
        }
    }
}
