long long uu_pr::recreate_arguments::h077831d09ded967c(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x1b0]
    int v1;  // [bp-0x1a8], Other Possible Types: void*, unsigned int, unsigned long long
    char *v2;  // [sp-0x1a0], Other Possible Types: unsigned long long *, unsigned long long
    unsigned long long v3;  // [sp-0x198]
    void* v4;  // [sp-0x190], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x188]
    char v6;  // [sp-0x180]
    unsigned long v7;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long *v8;  // [sp-0x170]
    unsigned long long v9;  // [sp-0x168]
    char v10;  // [bp-0x158], Other Possible Types: unsigned long long, unsigned long
    char v11;  // [bp-0x150], Other Possible Types: unsigned long long
    char v12;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0x140], Other Possible Types: unsigned long
    void* v14;  // [sp-0x138]
    unsigned long long v15;  // [sp-0x128]
    unsigned long long v16;  // [sp-0x120]
    char v17;  // [sp-0x118], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v18;  // [sp-0x110]
    struct_0 *v19;  // [sp-0x108]
    char v20;  // [sp-0x100]
    unsigned long long v21;  // [sp-0xf8]
    struct_0 *v22;  // [sp-0xe8]
    unsigned long long v23;  // [sp-0xe0]
    unsigned long long v24;  // [sp-0xd8]
    char v25;  // [bp-0xd0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v26;  // [sp-0xc8]
    int v27;  // [sp-0xb8]
    int v28;  // [sp-0xa8]
    int v29;  // [sp-0x98]
    int v30;  // [sp-0x88]
    int v31;  // [sp-0x78]
    int v32;  // [sp-0x68]
    unsigned long long *v33;  // [sp-0x58]
    unsigned long long *v34;  // [sp-0x50]
    unsigned long long v35;  // [sp-0x48]
    unsigned long long v36;  // [sp-0x40]
    unsigned long long v37;  // [sp-0x38]
    int v39;  // xmm0
    int v40;  // xmm0
    int v41;  // xmm0
    int v42;  // ymm0
    int v43;  // ymm0
    unsigned long long v44;  // r14
    unsigned long long v45;  // 4096
    unsigned long long v46;  // 4096
    unsigned long long *v47;  // rax
    unsigned long long *v48;  // r15
    unsigned long long *v49;  // rbx
    void* v50;  // r12
    int v51;  // xmm0
    unsigned long long v53;  // rbx
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rax
    unsigned long long v56;  // r14
    unsigned long long *v57;  // r15
    unsigned long long *v58;  // r13
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rax
    struct_5 *v61;  // rbp
    struct_0 *v62;  // r12
    struct_3 *v63;  // rcx
    unsigned long long *v64;  // fs
    unsigned long long *v65;  // rax
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rcx
    struct_2 *v69;  // rax
    unsigned long long v70;  // rsi
    struct_0 *v71;  // r12
    unsigned long long v73;  // rsi
    struct_2 *v74;  // rax
    unsigned long long v76;  // rbp
    unsigned long long *v77;  // rbx
    char *v78;  // rax
    unsigned long long *v79;  // rbx
    unsigned long long v80[3];  // r13
    unsigned long long v81;  // r14
    unsigned long long v82[3];  // r15
    unsigned long long v83;  // rax
    unsigned long long *v84;  // rcx

    regex::regex::string::Regex::new::hbbaac77ef03d753b(&v10, "^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    if (!v10)
    {
        v3 = v13;
        *((int128_t *)&v1) = *((int128_t *)&v11);
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v39 = *((int128_t *)&v10);
    *((int128_t *)&v30) = *((int128_t *)&v12);
    v29 = v39;
    regex::regex::string::Regex::new::hbbaac77ef03d753b(&v10, "^[^-]\\d*$^-n\\s*$\n argument -", 9);
    if (!v10)
    {
        v3 = v13;
        *((int128_t *)&v1) = *((int128_t *)&(&v10)[1]);
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v40 = *((int128_t *)&v10);
    *((int128_t *)&v28) = *((int128_t *)&v12);
    v27 = v40;
    regex::regex::string::Regex::new::hbbaac77ef03d753b(&v10, "^-n\\s*$\n argument -", 7);
    if (!v10)
    {
        v3 = v13;
        *((int128_t *)&v1) = *((int128_t *)&(&v10)[1]);
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    v41 = *((int128_t *)&v10);
    v43 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
    *((int128_t *)&v32) = *((int128_t *)&v12);
    v31 = v41;
    if (!a2)
    {
        v1 = 0;
        v2 = 8;
        goto LABEL_543176;
    }
    else
    {
        v44 = a2 * 24;
        if (a2 > 384307168202282325)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v47 = __rust_alloc(v44, 8);
        if (v47)
        {
            v48 = v47;
            v1 = a2;
            v2 = v47;
            v0 = a1 + v44;
            v49 = 0;
            v50 = 0;
            while (v44 != v49 && (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v10, v49 + a1), v50 += 1, *((unsigned long *)(v48 + v49 + 16)) = v12, v51 = *((int128_t *)&v10), v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51, *((void*)(v48 + v49)) = v51, v49 += 24, a2 != v50))
            {
            }
            v46 = v0;
LABEL_543176:
            v53 = v45;
            v7 = v1;
            v8 = v2;
            v9 = a2;
            v10 = v53;
            v11 = v46;
            v55 = itertools::Itertools::find_position::h0cc4b133962b54af(&v10, &v31, v54);
            if (!(v54) || !((v56 = v55, v57 = v55 + 1, v57 < v9)))
            {
LABEL_5435ce:
                v84 = v8;
                v33 = v84;
                v34 = v84;
                v35 = v7;
                v36 = &v84[3 * v9];
                v37 = &v29;
                alloc::vec::in_place_collect::from_iter_in_place::hdd2807cea497a656(a0, &v33);
                core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1d2da5efa1968a4a(&v31);
                core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1d2da5efa1968a4a(&v27);
                core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h1d2da5efa1968a4a(&v29);
                return a0;
            }
            v58 = v57 * 3;
            v59 = *((long long *)(v53 + v58 * 8 + 8));
            v60 = *((long long *)(v53 + v58 * 8 + 16));
            v61 = (long long)v27;
            v62 = (long long)(&v27)[8];
            v1 = 0;
            v2 = v59;
            v3 = v60;
            v4 = 0;
            v5 = v3;
            v6 = 1;
            v63 = v61->field_20->field_a8;
            if (!v63->field_0 || v63->field_8 <= v3 && (!(v63->field_3c & 1) || !(v63->field_40 & 2) || !v63->field_10 || v63->field_18 >= v3))
            {
                v65 = *(v64) - 16;
                v67 = *((long long *)(!*(v65) ? v65 + 1 : std::sys::thread_local::native::lazy::Storage$LT$T$C$D$GT$::initialize::h926b6437bfdd7483(*(v64) - 16, 0)));
                v68 = v62->field_28;
                if (v18 == v62->field_28)
                {
                    v62->field_28 = 1;
                    v19 = v62;
                    v17 = 1;
                    v18 = v67;
                    v20 = 0;
                    v69 = v61->field_18;
                    v70 = v61->field_10 + (v69->field_10 - 1 & -0x10) + 16;
                    goto LABEL_543307;
                }
                else
                {
                    regex_automata::util::pool::inner::Pool$LT$T$C$F$GT$::get_slow::h4c6d7c3e2c964b49(&v17, v62, v18, v68);
                    v69 = v61->field_18;
                    v70 = v61->field_10 + (v69->field_10 - 1 & -0x10) + 16;
                    if (v17)
                    {
                        v71 = v19;
LABEL_543307:
                    }
                }
                v74->field_70(&v25, v73, v71 + 1, &v1);
                if (!v20)
                {
                    ::0x53b220::regex_automata::util::pool::inner::Pool$LT$T$C$F$GT$::put_value::h2a965c19c935ddd9(v19, v24);
                }
                else
                {
                    ::0x53ce30::core::ptr::drop_in_place$LT$regex_automata..meta..regex..Cache$GT$::h675f98eec15ab905(v24);
                    __rust_dealloc(v24);
                }
                if (!(!v25))
                    goto LABEL_5435ce;
            }
            v76 = v9;
            if (v76 <= v57)
                alloc::vec::Vec$LT$T$C$A$GT$::remove::assert_failed::h3e94234f5c0f1d7f(); /* do not return */
            v77 = v8;
            v0 = *((long long *)((char *)v77 + 0x8 * v58));
            v16 = *((long long *)(8 + (char *)v77 + 0x8 * v58));
            v23 = *((long long *)(16 + (char *)v77 + 0x8 * v58));
            memmove((char *)v77 + 0x8 * v58, 24 + (char *)v77 + 0x8 * v58, (v76 - v56) * 24 - 48);
            v9 = v76 - 1;
            v78 = __rust_alloc(1, 1);
            if (!v78)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *(v78) = 9;
            v4 = 5;
            v1 = 1;
            v2 = v78;
            v3 = 1;
            v5 = 1;
            v25 = &v4;
            v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            v10 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v11 = 1;
            v14 = 0;
            v12 = &v25;
            v13 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v17, &v10);
            if (v1)
                __rust_dealloc(v2);
            v15 = v17;
            v21 = v18;
            if (v9 < v57)
                alloc::vec::Vec$LT$T$C$A$GT$::insert::assert_failed::h5d600a0ddcd11fb2(); /* do not return */
            v22 = v19;
            if (v9 == v7)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he97350d29b457a6c(&v7);
                v79 = v8;
            }
            v80 = (char *)v79 + 0x8 * v58;
            if (v9 > v57)
                memmove(v80 + 1, v80, (v9 - (char *)v57) * 24);
            v80[0] = v15;
            v80[1] = v21;
            v80[2] = v22;
            v9 = v76;
            v81 = v56 + 2;
            if (v76 < v81)
                alloc::vec::Vec$LT$T$C$A$GT$::insert::assert_failed::h5d600a0ddcd11fb2(); /* do not return */
            if (v76 == v7)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he97350d29b457a6c(&v7);
            v82 = &v8[3 * v81];
            v83 = v76;
            if (v83 > v81)
                memmove(v82 + 1, v82, (v83 - v81) * 24);
            v82[0] = v0;
            v82[1] = v16;
            v82[2] = v23;
            v9 = v76 + 1;
            goto LABEL_5435ce;
            goto LABEL_5435ce;
        }
    }
}
