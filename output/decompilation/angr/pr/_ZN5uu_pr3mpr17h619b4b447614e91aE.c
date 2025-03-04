long long uu_pr::mpr::h619b4b447614e91a()
{
    void* v0;  // [sp-0x298]
    unsigned long long v1;  // [sp-0x290]
    void* v2;  // [sp-0x288]
    char v3;  // [bp-0x278]
    char *v4;  // [sp-0x270]
    int v5;  // [sp-0x268]
    int v6;  // [sp-0x258]
    int v7;  // [sp-0x248]
    int v8;  // [sp-0x238]
    int v9;  // [sp-0x228]
    int v10;  // [sp-0x218]
    int v11;  // [sp-0x208]
    int v12;  // [sp-0x1f8]
    unsigned long long v13;  // [sp-0x1e0]
    char v14;  // [bp-0x1d8]
    unsigned long long v15;  // [bp-0x1d8]
    int v16;  // [sp-0x1c8]
    int v17;  // [sp-0x1b8]
    int v18;  // [sp-0x1a8]
    int v19;  // [sp-0x198]
    unsigned long v20;  // [sp-0x180]
    unsigned long v21;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v22;  // [sp-0x170]
    unsigned long v23;  // [sp-0x160], Other Possible Types: unsigned long long
    char v24;  // [bp-0x158]
    char v25;  // [bp-0x148]
    char v26;  // [bp-0x138]
    int v27;  // [sp-0x128]
    int v28;  // [sp-0x118]
    int v29;  // [sp-0x108]
    int v30;  // [sp-0xf8]
    unsigned long long v31[3];  // [bp-0xe8]
    char v32;  // [bp-0xe0]
    char v33;  // [bp-0xd8]
    char v34;  // [bp-0xd0]
    unsigned long long v36;  // rdx
    unsigned long long v37;  // r15
    unsigned long v38;  // rsi
    unsigned long long v39[2];  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdi
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rcx
    unsigned long long v44[4];  // rdx
    struct_1 *v45;  // rcx
    unsigned long long v46;  // r14
    int v47;  // xmm0
    int v48;  // xmm0
    int v49;  // ymm0
    int v50;  // xmm1
    int v51;  // ymm1
    int v52;  // xmm2
    int v53;  // ymm2
    int v54;  // xmm3
    int v55;  // ymm3
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm2
    int v59;  // xmm3
    int v60;  // xmm0
    int v61;  // xmm1
    int v62;  // xmm2
    int v63;  // xmm3
    int v64;  // xmm0
    int v65;  // xmm1
    int v66;  // xmm2
    int v67;  // xmm3
    unsigned long long v68;  // rbx
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm2
    int v72;  // xmm3
    unsigned long long v73[4];  // rdi
    uint128_t v74[2];  // rax
    uint128_t v75[2];  // rax
    struct_0 *v76;  // rax
    int v77;  // xmm0
    uint128_t v78[2];  // rax
    int v79;  // ymm0
    int v80;  // ymm1
    int v81;  // ymm2
    int v82;  // ymm3

    v37 = v36;
    v20 = v38;
    v21 = v36 * 16 + v38;
    v39 = ::0x5c2c60::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&v20);
    if (v39)
    {
        do
        {
            uu_pr::open::h24aeb0fb8cb9559f(v31, v39[0], v39[1]);
            v40 = v31[0];
            v41 = *((long long *)&v32);
            v42 = *((long long *)&v33);
            if (v40 != 9223372036854775813)
            {
                v43 = *((long long *)&v34);
                v44 = v73;
                v44[0] = v40;
                v44[1] = v41;
                v44[2] = v42;
                v44[3] = v43;
                return v73;
            }
            ::0x5c0a60::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h8e650e61c5f2ff37(v41, v42);
            v39 = ::0x5c2c60::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&v20);
        } while (v39);
        v37 = v36;
    }
    v20 = v38;
    v21 = v37 * 16 + v38;
    v22 = 0;
    v23 = &v3;
    itertools::kmerge_impl::kmerge_by::hb8a7993f4fdaf3b4(&v14, &v20);
    itertools::groupbylazy::new::h42b2a1d7236db7b0(v31, &v14);
    v46 = v45->field_130;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    *((unsigned long long [3])&v4) = v31;
    v13 = 9223372036854775810;
    while (true)
    {
        _$LT$itertools..groupbylazy..Groups$LT$K$C$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98c90782a6d1a4f2(&v20, &v4);
        if (v21 != v13)
        {
            v47 = *((int128_t *)&v26);
            v19 = v47;
            v48 = *((int128_t *)&v21);
            v49 = (v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
            v50 = *((int128_t *)&v23);
            v51 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
            v52 = *((int128_t *)&v24);
            v53 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
            v54 = *((int128_t *)&v25);
            v55 = v82 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
            v18 = v54;
            v17 = v52;
            v16 = v50;
            *((void*)&v15) = v48;
            v56 = *((int128_t *)&v15);
            v79 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
            v57 = v16;
            v80 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
            v58 = v17;
            v81 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
            v59 = v18;
            v82 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v9 = v56;
            v12 = v59;
            v11 = v58;
            v10 = v57;
            v15 = 9223372036854775809;
            if ((long long)v9 == 9223372036854775809)
            {
                ::0x5c08c0::core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..FileLine$GT$$GT$::h6e5d49c74ea73e74(&v9);
                itertools::groupbylazy::ChunkBy$LT$K$C$I$C$F$GT$::step::h70e3b0161418e13d(&v27, (long long)v19, (long long)(&v19)[8]);
                if ((long long)v27 == 9223372036854775809)
                    goto LABEL_5c7530;
                goto LABEL_5c742e;
            }
            v60 = v9;
            v79 = v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
            v61 = v10;
            v80 = v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
            v62 = v11;
            v81 = v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
            v63 = v12;
            v82 = v82 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
            v30 = v63;
            v29 = v62;
            v28 = v61;
            v27 = v60;
            if ((long long)v27 == 9223372036854775809)
            {
LABEL_5c7530:
                core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h87de2da8d7ae081f(&v14);
            }
            else
            {
LABEL_5c742e:
                v64 = v27;
                v65 = v28;
                v66 = v29;
                v67 = v30;
                v5 = v64;
                v8 = v67;
                v7 = v66;
                v6 = v65;
                if ((long long)v5 == 0x8000000000000000)
                {
                    _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&v9, (long long)(&v5)[8]);
                    v74 = v73;
                    *((void*)&v74[1]) = v10;
                    *((void*)&v74[0]) = v9;
                    if ((long long)v5 == 0x8000000000000000)
                        goto LABEL_5c75ef;
                    goto LABEL_5c75e5;
                }
                v68 = (long long)(&v7)[8];
                if (v46 == v68)
                {
                    v68 = v46;
                    goto LABEL_5c74df;
                }
                if (uu_pr::print_page::h6e73dbc2020375d5(v1, v2, v45, v46))
                {
                    _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&v9, v36);
                    v75 = v73;
                    *((void*)&v75[1]) = v10;
                    *((void*)&v75[0]) = v9;
                    if ((long long)v5 == 0x8000000000000000)
                    {
                        ::0x5bfcf0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb25dbb2025c82b2d((long long)(&v5)[8]);
                        goto LABEL_5c75ef;
                    }
LABEL_5c75e5:
                    ::0x5c12e0::core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::he04cd6cf833c6dbe(&v5);
LABEL_5c75ef:
                    core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h87de2da8d7ae081f(&v14);
                }
                else
                {
                    ::0x5c0500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&v0);
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
LABEL_5c74df:
                    v69 = v5;
                    v49 = (v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                    v70 = v6;
                    v51 = (v80 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
                    v71 = v7;
                    v53 = (v81 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
                    v72 = v8;
                    v55 = (v82 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                    v12 = v72;
                    v11 = v71;
                    v10 = v70;
                    v9 = v69;
                    ::0x5c2320::alloc::vec::Vec$LT$T$C$A$GT$::push::ha8dcf02c5afcbd08(&v0, &v9);
                    v46 = v68;
                    continue;
                }
LABEL_5c75fc:
                ::0x5c0500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&v0);
                break;
            }
        }
        else if (uu_pr::print_page::h6e73dbc2020375d5(v1, v2, v45, v46))
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&v20, v36);
            v77 = *((int128_t *)&v20);
            v78 = v73;
            v78[1] = *((int128_t *)&v22);
            *((void*)&v78[0]) = v77;
            goto LABEL_5c75fc;
        }
        else
        {
            v76 = v73;
            v76->field_8 = 0;
            v76->field_0 = 9223372036854775813;
            ::0x5c0500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&v0);
            break;
        }
    }
    core::ptr::drop_in_place$LT$itertools..groupbylazy..ChunkBy$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h48898fe4a1a5cca7(v31);
    return v73;
}
