long long uu_fmt::process_file::ha3de746fae5e84ae(char *a0, unsigned long long a1, unsigned long long a2, struct_2 *a3, unsigned long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x1b8]
    unsigned long long v1;  // [sp-0x1b0]
    unsigned long v2;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x198]
    int v4;  // [sp-0x190]
    void* v5;  // [sp-0x180]
    unsigned int *v6;  // [sp-0x178]
    struct_1 *v7;  // [sp-0x170]
    char v8;  // [bp-0x168], Other Possible Types: unsigned long, unsigned long long
    char v9;  // [bp-0x160]
    unsigned long long v10;  // [sp-0x128]
    unsigned long long v11;  // [sp-0x120]
    char v12;  // [sp-0x118]
    unsigned long long v13;  // [sp-0x110]
    int v14;  // [bp-0x108], Other Possible Types: char, unsigned int
    unsigned short v15;  // [sp-0x104]
    unsigned long long v16;  // [sp-0xf8]
    int v17;  // [sp-0xf0]
    int v18;  // [sp-0xe0]
    int v19;  // [sp-0xd0]
    int v20;  // [sp-0xc0]
    int v21;  // [sp-0xb0]
    char v22;  // [bp-0xa0]
    char v23;  // [bp-0x98]
    char v25;  // [bp-0x88]
    char v26;  // [bp-0x80]
    char v27;  // [bp-0x70]
    char v28;  // [bp-0x60]
    char v29;  // [bp-0x50]
    char v30;  // [bp-0x40]
    unsigned int *v33;  // rax
    void* v34;  // r12
    struct_1 *v35;  // r15
    unsigned long long v37;  // rax
    int v38;  // ymm0
    int v39;  // ymm0
    unsigned long long v40;  // rdx
    int v41;  // ymm1
    int v42;  // ymm2
    int v43;  // ymm3
    unsigned long long v44;  // rax
    unsigned long long v45;  // r14
    unsigned long long v46;  // r12
    char *v47;  // r13
    int v48;  // xmm0
    int v49;  // xmm0
    int v50;  // xmm0
    int v51;  // xmm1
    int v52;  // xmm2
    int v53;  // xmm3
    unsigned long long v54;  // r8
    unsigned long long v55;  // r9
    void* v56;  // rax
    char *v57;  // rax
    unsigned long long v58;  // rcx
    void* v59;  // rax
    unsigned long long v60;  // rsi
    unsigned long long v61;  // rsi
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rdx
    unsigned int *v67;  // r14
    struct_1 *v68;  // r15
    struct struct_0 **v69;  // rax
    unsigned int *v70;  // r14
    struct_1 *v71;  // r15
    struct struct_0 **v72;  // rax

    if (a1 != 1 || *(a0) != 45)
    {
        v13 = 0x1b600000000;
        v14 = 0;
        v15 = 0;
        v14 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v22, &v13, a0, a1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he717f15fde63f874(&v8, &v22, a0, a1);
        v34 = v8;
        if (v34)
            return v34;
        v33 = __rust_alloc(4, 4);
        if (!v33)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v33) = *((int *)&v9);
        v35 = &g_4ec250.field_0;
    }
    else
    {
        v33 = __rust_alloc(8, 8);
        if (!v33)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *((long long *)&v33) = std::io::stdio::stdin::h7215cc131abb55d8();
        v35 = &g_4ec2a8.field_0;
    }
    v37 = __rust_alloc(0x2000, 1);
    if (!v37)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v2 = v37;
    v3 = 0x2000;
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    *((int128_t *)&v4) = 0;
    v5 = 0;
    v6 = v33;
    v7 = v35;
    v8 = 9223372036854775810;
    v10 = &v2;
    v11 = a2;
    v12 = 1;
    v1 = &v8;
    while (true)
    {
        _$LT$uu_fmt..parasplit..ParagraphStream$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd60cc29995b081e9(&v22, &v8, v40);
        v44 = *((long long *)&v22);
        if (v44 != 0x8000000000000000)
        {
            if (v44 == 9223372036854775809)
            {
                v60 = v8;
                if (9223372036854775807 + v60 >= 2)
                {
                    if (v60 == 0x8000000000000000)
                    {
                        v1 = &v9;
                        v60 = *((long long *)&v9);
                    }
                    if (v60)
                        __rust_dealloc(*((long long *)(v1 + 8)));
                }
                v63 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17h6b959cc70dc76e88E.llvm.11855400893249631284(a3, v60, v62, 9223372036854775809, v54, v55, v0, v1);
                if (!v63)
                    v63 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::h392d0be644ab70e9(&a3[1].field_8, v65, v66);
                v34 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h4a1e22577299f1ce(v63);
                if (v34)
                {
                    goto LABEL_4840fa;
                }
                else
                {
                    if (v3)
                        __rust_dealloc(v2);
                    v67 = v6;
                    v68 = v7;
                    if (v68->field_0)
                        v69(v67);
                    if (!v68->field_8)
                        return 0;
                    __rust_dealloc(v67);
                }
            }
            else
            {
                v13 = v44;
                v16 = *((long long *)&v25);
                v48 = *((int128_t *)&v23);
                v14 = v48;
                v49 = *((int128_t *)&v30);
                v21 = v49;
                v50 = *((int128_t *)&v26);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                v51 = *((int128_t *)&v27);
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                v52 = *((int128_t *)&v28);
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
                v53 = *((int128_t *)&v29);
                v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
                v20 = v53;
                v19 = v52;
                v18 = v51;
                v17 = v50;
                v34 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8171ebd966ab16e4(uu_fmt::linebreak::break_lines::ha0e6e3ea976fbe8d(&v13, a2, a3, 9223372036854775809, v54, v55));
                if (v34)
                {
                    core::ptr::drop_in_place$LT$uu_fmt..parasplit..Paragraph$GT$::h76237e252e8273bf(&v13);
                }
                else
                {
                    core::ptr::drop_in_place$LT$uu_fmt..parasplit..Paragraph$GT$::h76237e252e8273bf(&v13);
                    continue;
                }
            }
        }
        v0 = *((long long *)&v23);
        v45 = *((long long *)&(&v23)[8]);
        v46 = *((long long *)&v25);
        v47 = a3->field_10;
        if (v46 >= a3->field_0 - v47)
        {
            v56 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h365a0fe6a29bdb0b(a3, v45, v46, 0x8000000000000000, v54, v55);
        }
        else
        {
            memcpy(&v47[a3->field_8], v45, v46);
            a3->field_10 = &v47[v46];
            v56 = 0;
        }
        v34 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1396d7a047d837e1(v56);
        if (v34)
        {
LABEL_483ff4:
            if (v0)
                __rust_dealloc(v45);
            v61 = v8;
            if (9223372036854775807 + v61 >= 2)
            {
                if (v61 == 0x8000000000000000)
                {
                    v64 = &v9;
                    if (!*((long long *)&v9))
                        goto LABEL_4840fa;
                }
                else
                {
                    v64 = &v8;
                    if (!v61)
                        goto LABEL_4840fa;
                }
                __rust_dealloc(*((long long *)(v64 + 8)));
            }
LABEL_4840fa:
            if (v3)
                __rust_dealloc(v2);
            v70 = v6;
            v71 = v7;
            if (v71->field_0)
                v72(v70);
            if (!v71->field_8)
                return v34;
            __rust_dealloc(v70);
        }
        else
        {
            v57 = a3->field_10;
            v58 = a3->field_0 - v57;
            if (a3->field_0 - v57 > 1)
            {
                v57[a3->field_8] = 10;
                a3->field_10 = &v57[1];
                v59 = 0;
            }
            else
            {
                v59 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h365a0fe6a29bdb0b(a3, "\nfileswidthinvalid width: src/uu/fmt/src/fmt.rs", 1, v58, v54, v55);
            }
            v34 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6b942285399c6c64(v59);
            if (!(!v34))
                goto LABEL_483ff4;
            if (v0)
                __rust_dealloc(v45);
        }
    }
}
