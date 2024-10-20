long long uu_unexpand::unexpand::hcbf341a5ca36046d(struct_5 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v2;  // [bp-0x188]
    char v4;  // [sp-0x181]
    unsigned int v5;  // [sp-0x180]
    char v6;  // [sp-0x179]
    char *v8;  // [sp-0x170]
    unsigned long v9;  // [sp-0x168], Other Possible Types: unsigned long long
    char *v10;  // [sp-0x160]
    char *v11;  // [sp-0x158]
    char v12;  // [sp-0x150]
    unsigned long long v13;  // [sp-0x148]
    unsigned long v15;  // [sp-0x138]
    void* v17;  // [sp-0x128]
    char *v18;  // [sp-0x120]
    void* v19;  // [sp-0x118]
    struct_0 *v20;  // [sp-0x110], Other Possible Types: struct struct_4 **
    struct_2 *v21;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long v22;  // [sp-0x100], Other Possible Types: unsigned long long
    char v23[4];  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned short v24;  // [sp-0xf4]
    struct struct_6 **v25;  // [sp-0xf0]
    unsigned long long v26;  // [sp-0xe8]
    void* v27;  // [sp-0xe0]
    unsigned long long v28;  // [sp-0xd0]
    unsigned long long v29;  // [sp-0xc8]
    struct struct_4 **v30;  // [bp-0xc0], Other Possible Types: char
    char v31;  // [bp-0xbc]
    unsigned long long v32;  // [sp-0xb8]
    struct struct_0 **v33;  // [bp-0xb0], Other Possible Types: char
    unsigned int v34;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long long v35;  // [sp-0xa0]
    unsigned long long v36;  // [sp-0x98]
    char *v37;  // [sp-0x90]
    unsigned long long v38;  // [sp-0x88]
    unsigned long long v39;  // [sp-0x80]
    unsigned long long v40;  // [sp-0x78]
    void* v41;  // [sp-0x70]
    char *v42;  // [sp-0x68]
    struct_0 *v43;  // [sp-0x58]
    struct_2 *v44;  // [sp-0x50]
    unsigned long long v45;  // [sp-0x48]
    struct_3 *v46;  // [sp-0x40]
    unsigned long long v47;  // [sp-0x38]
    char *v50;  // rax
    char *v51;  // r12
    unsigned long long v52;  // rcx
    unsigned long long v54;  // rax
    struct_3 *v55;  // r15
    int v56;  // ymm0
    int v57;  // ymm1
    char *v58;  // r14
    unsigned long long v59;  // rbx
    struct_0 *v60;  // rax
    char *v62;  // xmm0
    char *v63;  // xmm1
    struct_2 *v64;  // rcx
    struct_0 *v65;  // rax
    struct_2 *v67;  // r15
    unsigned long long v68;  // rax
    unsigned long long v69;  // rsi
    char *v70;  // xmm0
    unsigned long long v71;  // rdx
    struct_0 *v72;  // r14
    struct_2 *v73;  // r15
    struct struct_1 **v74;  // rax
    unsigned long long v132;  // rdx
    unsigned long long v134;  // r8
    unsigned long long v135;  // r9
    unsigned long long v136;  // rsi
    unsigned long long v140;  // rax

    v50 = __rust_alloc(0x2000, 1);
    if (!v50)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v9 = 0x2000;
    v10 = v50;
    v11 = 0;
    v12 = 0;
    v13 = std::io::stdio::stdout::h077da66234850927();
    v51 = a0->field_20;
    v52 = a0->field_28;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    *((int *)&v29) = (v52 < 2 ? *((long long *)&v51[8 + 8 * v52]) : 0);
    v54 = a0->field_10;
    if (v54)
    {
        v55 = a0->field_8;
        v45 = &v55[v54];
        v4 = a0->field_30;
        v6 = a0->field_31;
        v29 -= 1;
        v15 = v52;
        v47 = v52 * 8;
        v36 = &g_4e6cf8;
        v28 = &g_4e6ce0;
        v35 = &g_4e6a38;
        v8 = v51;
        while (true)
        {
            v58 = v55->field_8;
            v59 = v55->field_10;
            v46 = v55;
            if ((char)std::path::Path::is_dir::h9ac0db933706da51(v58, v59))
            {
                v37 = v58;
                v38 = v59;
                v20 = &v37;
                v21 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                v22 = &g_4e6ba8;
                v23 = 2;
                v27 = 0;
                v25 = &v20;
                v26 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v30, &v22);
                v34 = 1;
                v60 = __rust_alloc(32, 8);
                if (!v60)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v62 = *((int128_t *)&v30);
                v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
                v63 = *((int128_t *)&v33);
                v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
                *((char **)&v60->field_10) = v63;
                *((char **)&v60->field_0) = v62;
                v64 = &g_4e6c00.field_0;
                goto LABEL_485ee2;
            }
            if (v59 == 1 && *(v58) == 45)
            {
                v65 = __rust_alloc(8, 8);
                if (!v65)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                *((long long *)&v65->field_0) = std::io::stdio::stdin::h7215cc131abb55d8();
                v67 = &g_4e6b50.field_0;
                goto LABEL_486037;
            }
            v22 = 0x1b600000000;
            v24 = 0;
            *((int *)&v23[0]) = 0;
            v23[0] = 1;
            std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v30, &v22, v58, v59);
            if (!*((int *)&v30))
                break;
            v60 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h2ffb8cbabc59fbb5(v32, v58, v59);
            v64 = &anon.705b3af3dc57375cddb69d0479cfd370.9.llvm.7608811636715282461.field_0;
LABEL_485ee2:
            v20 = v60;
            v21 = v64;
LABEL_485ef5:
            _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = v21->field_60(v20);
            if (CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108))
                goto LABEL_485ef5;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 == 2)
                goto LABEL_485f17;
            once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
LABEL_485f17:
            v70 = *((int128_t *)&g_4eb970);
            v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
            v37 = v70;
            v30 = &v37;
            v32 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc0d950737c3cdc14;
            v33 = &v20;
            v34 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3dfb0158de8736c6;
            v22 = &g_4e6d28;
            *((long long *)&v23) = 3;
            v27 = 0;
            v25 = &v30;
            v26 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v22, v69, v71);
            v72 = v20;
            v73 = v21;
            if (v73->field_0)
                v74(v72);
            if (v73->field_8)
                __rust_dealloc(v72);
            v55 = v46 + 1;
            if (v55 == v45)
            {
                v136 = v17;
                if (v136)
                {
                    __rust_dealloc(v18);
                    goto LABEL_48685d;
                }
            }
        }
        v65 = __rust_alloc(4, 4);
        if (!v65)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v65->field_0 = *((int *)&v31);
        v67 = &g_4e6af8.field_0;
LABEL_486037:
        v68 = __rust_alloc(0x2000, 1);
        if (!v68)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v56 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        *((int128_t *)&v42) = 0;
        v39 = v68;
        v40 = 0x2000;
        v41 = 0;
        v43 = v65;
        v44 = v67;
    }
    else
    {
LABEL_48685d:
        if (!v12)
        {
            v140 = _ZN3std2io8buffered9bufwriter18BufWriter$LT$W$GT$9flush_buf17ha83a6a551ccaabe5E.llvm.8184296018641731324(&v9, v136, v132, v52, v134, v135, *((long long *)&v2), *((long long *)&v5));
            if (v140)
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h0b7de5d6ceec39d8E.llvm.8184296018641731324(v140);
        }
        if (!v9)
            return 0;
        __rust_dealloc(v10);
    }
}
