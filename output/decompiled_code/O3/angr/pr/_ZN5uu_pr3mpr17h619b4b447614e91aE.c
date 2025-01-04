long long uu_pr::mpr::h619b4b447614e91a(unsigned long long a0[3], unsigned long a1, unsigned long long a2, struct_0 *a3)
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
    char v14;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v15;  // [sp-0x1c8]
    int v16;  // [sp-0x1b8]
    int v17;  // [sp-0x1a8]
    int v18;  // [sp-0x198]
    unsigned long v19;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long v20;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v21;  // [sp-0x170]
    char v22;  // [bp-0x168]
    unsigned long long v23;  // [sp-0x160]
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
    unsigned long long v36;  // rbx
    unsigned long long v37[2];  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rdi
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rcx
    unsigned long long v42[3];  // rdx
    unsigned long long v43;  // r14
    int v44;  // ymm0
    int v45;  // ymm1
    int v46;  // ymm2
    int v47;  // ymm3
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // xmm1
    int v52;  // ymm1
    int v53;  // xmm2
    int v54;  // ymm2
    int v55;  // xmm3
    int v56;  // ymm3
    int v57;  // xmm0
    int v58;  // ymm0
    int v59;  // xmm1
    int v60;  // ymm1
    int v61;  // xmm2
    int v62;  // ymm2
    int v63;  // xmm3
    int v64;  // ymm3
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    int v68;  // xmm3
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm2
    int v72;  // xmm3
    unsigned long long v73;  // rbx
    unsigned long long v75;  // rdx
    int v76;  // xmm0
    int v77;  // xmm1
    int v78;  // xmm2
    int v79;  // xmm3
    unsigned long long v80;  // rdx
    unsigned long long v81[3];  // rax
    unsigned long long v82[3];  // rax
    unsigned long long v83;  // rdx
    unsigned long long v84[3];  // rax
    int v85;  // xmm0
    unsigned long long v86[3];  // rax

    v36 = a1;
    v19 = a1;
    v20 = a2 * 16 + a1;
    v37 = ::0x5c2c60::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&v19);
    if (v37)
    {
        do
        {
            uu_pr::open::h24aeb0fb8cb9559f(v31, v37[0], v37[1]);
            v38 = v31[0];
            v39 = *((long long *)&v32);
            v40 = *((long long *)&v33);
            if (v38 != 9223372036854775813)
            {
                v41 = *((long long *)&v34);
                v42 = a0;
                v42[0] = v38;
                v42[1] = v39;
                v42[2] = v40;
                v42[1] = v41;
                return a0;
            }
            ::0x5c0a60::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h8e650e61c5f2ff37(v39, v40);
            v37 = ::0x5c2c60::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf96e6303219a00ba(&v19);
        } while (v37);
    }
    v19 = v36;
    v20 = a2 * 16 + v36;
    v21 = 0;
    v23 = &v3;
    itertools::kmerge_impl::kmerge_by::hb8a7993f4fdaf3b4(&v14, &v19);
    itertools::groupbylazy::new::h42b2a1d7236db7b0(v31, &v14);
    v43 = a3->field_130;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    *((unsigned long long [3])&v4) = v31;
    v13 = 9223372036854775810;
    while (true)
    {
        _$LT$itertools..groupbylazy..Groups$LT$K$C$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h98c90782a6d1a4f2(&v19, &v4);
        if (v20 != v13)
        {
            v48 = *((int128_t *)&v26);
            v18 = v48;
            v49 = *((int128_t *)&v20);
            v50 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v51 = *((int128_t *)&v22);
            v52 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
            v53 = *((int128_t *)&v24);
            v54 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
            v55 = *((int128_t *)&v25);
            v56 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
            v17 = v55;
            v16 = v53;
            v15 = v51;
            *((void*)&v14) = v49;
            v57 = *((int128_t *)&v14);
            v58 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
            v59 = v15;
            v60 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
            v61 = v16;
            v62 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
            v63 = v17;
            v64 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
            v9 = v57;
            v12 = v63;
            v11 = v61;
            v10 = v59;
            v14 = 9223372036854775809;
            if ((long long)v9 == 9223372036854775809)
            {
                ::0x5c08c0::core::ptr::drop_in_place$LT$core..option..Option$LT$uu_pr..FileLine$GT$$GT$::h6e5d49c74ea73e74(&v9);
                itertools::groupbylazy::ChunkBy$LT$K$C$I$C$F$GT$::step::h70e3b0161418e13d(&v27, (long long)v18, (long long)(&v18)[8]);
                if ((long long)v27 == 9223372036854775809)
                    goto LABEL_5c7530;
                goto LABEL_5c742e;
            }
            v65 = v9;
            v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
            v66 = v10;
            v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
            v67 = v11;
            v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
            v68 = v12;
            v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
            v30 = v68;
            v29 = v67;
            v28 = v66;
            v27 = v65;
            if ((long long)v27 == 9223372036854775809)
            {
LABEL_5c7530:
                core::ptr::drop_in_place$LT$itertools..groupbylazy..Group$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h87de2da8d7ae081f(&v14);
            }
            else
            {
LABEL_5c742e:
                v69 = v27;
                v70 = v28;
                v71 = v29;
                v72 = v30;
                v5 = v69;
                v8 = v72;
                v7 = v71;
                v6 = v70;
                if ((long long)v5 == 0x8000000000000000)
                {
                    _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&v9, (long long)(&v5)[8]);
                    v81 = a0;
                    *((void*)&v81[2]) = v10;
                    *((void*)&v81[0]) = v9;
                    if ((long long)v5 == 0x8000000000000000)
                        goto LABEL_5c75ef;
                    goto LABEL_5c75e5;
                }
                v73 = (long long)(&v7)[8];
                if (v43 == v73)
                    goto LABEL_5c74df;
                if (uu_pr::print_page::h6e73dbc2020375d5(v1, v2, a3, v43))
                {
                    _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&v9, v80);
                    v82 = a0;
                    *((void*)&v82[2]) = v10;
                    *((void*)&v82[0]) = v9;
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
                    v76 = v5;
                    v50 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                    v77 = v6;
                    v52 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                    v78 = v7;
                    v54 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                    v79 = v8;
                    v56 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
                    v12 = v79;
                    v11 = v78;
                    v10 = v77;
                    v9 = v76;
                    ::0x5c2320::alloc::vec::Vec$LT$T$C$A$GT$::push::ha8dcf02c5afcbd08(&v0, &v9, v75);
                    continue;
                }
LABEL_5c75fc:
                ::0x5c0500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&v0);
                break;
            }
        }
        else if (uu_pr::print_page::h6e73dbc2020375d5(v1, v2, a3, v43))
        {
            _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::hd5738b82e658b7c8(&v19, v83);
            v85 = *((int128_t *)&v19);
            v86 = a0;
            *((int128_t *)&v86[2]) = *((int128_t *)&v21);
            *((void*)&v86[0]) = v85;
            goto LABEL_5c75fc;
        }
        else
        {
            v84 = a0;
            *((int *)&v84[1]) = 0;
            v84[0] = 9223372036854775813;
            ::0x5c0500::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::h05f5eb491a1c9ca3(&v0);
            break;
        }
    }
    core::ptr::drop_in_place$LT$itertools..groupbylazy..ChunkBy$LT$usize$C$itertools..kmerge_impl..KMergeBy$LT$core..iter..adapters..flatten..FlatMap$LT$alloc..boxed..Box$LT$dyn$u20$core..iter..traits..iterator..Iterator$u2b$Item$u20$$u3d$$u20$$LP$usize$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$RP$$GT$$C$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$C$uu_pr..mpr..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h48898fe4a1a5cca7(v31);
    return a0;
}
