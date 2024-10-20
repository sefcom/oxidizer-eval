long long uu_tail::uumain::hddf9d86c85896139(unsigned long long a0, unsigned long long a1)
{
    uint128_t v0[2];  // [sp-0x128], Other Possible Types: unsigned long, unsigned long long
    struct_1 *v1;  // [sp-0x120], Other Possible Types: unsigned long long
    int v2;  // [bp-0x118], Other Possible Types: char, unsigned long, unsigned long long
    uint128_t v3[2];  // [sp-0x110], Other Possible Types: unsigned long long
    struct struct_3 **v4;  // [sp-0x108], Other Possible Types: struct_1 *, unsigned long long
    char v5;  // [bp-0x100], Other Possible Types: unsigned int, unsigned long long
    void* v6;  // [sp-0xf8]
    char v7;  // [bp-0xf0]
    char v8;  // [bp-0xe0]
    char v9;  // [bp-0xd0]
    void* v10;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xb8]
    unsigned long long v12;  // [sp-0xb0]
    char v13;  // [sp-0xa8]
    char v14;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x98]
    char v16;  // [bp-0x90]
    int v17;  // [sp-0x88], Other Possible Types: struct struct_2 **, unsigned long, unsigned long long
    uint128_t v18[2];  // [sp-0x80], Other Possible Types: unsigned long long
    struct_1 *v19;  // [sp-0x78], Other Possible Types: unsigned long long
    int v20;  // [sp-0x70]
    int v21;  // [sp-0x60]
    int v22;  // [sp-0x50]
    unsigned long long v23;  // [sp-0x40]
    char v24;  // [bp-0x38]
    char v25;  // [bp-0x28]
    uint128_t v27[2];  // r14
    struct_1 *v28;  // r15
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax
    int v32;  // xmm0
    unsigned int v33;  // eax
    uint128_t v34[2];  // r15
    struct_1 *v35;  // r12
    struct struct_0 **v36;  // rax

    uu_tail::args::parse_args::h9f80788d9a960d2d(&v2, a0, a1);
    v27 = v3;
    v28 = v4;
    if (v17 != 5)
    {
        v23 = *((long long *)&v9);
        *((int128_t *)&v22) = *((int128_t *)&v8);
        *((int128_t *)&v21) = *((int128_t *)&v7);
        *((int128_t *)&v20) = *((int128_t *)&v5);
        v17 = v2;
        *((uint128_t *[2])&v18[0]) = v27;
        v19 = v28;
        uu_tail::args::Settings::check_warnings::h1d0939100b3dae9c(&v17, v29, v30);
        v31 = uu_tail::args::Settings::verify::h3d84f0412ed18ee3(&v17);
        if ((char)v31 == 2)
        {
            v27 = 0;
            goto LABEL_455f36;
        }
        if ((unsigned int)v31 == 1)
        {
            v10 = 0;
            v11 = "-cannot follow ";
            v12 = 1;
            v13 = 1;
            v0 = &v10;
            v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v2 = &g_558b78;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v2);
            v5 = 1;
            *((int128_t *)&v2) = *((int128_t *)&v14);
            v4 = *((long long *)&v16);
            v27 = __rust_alloc(32, 8);
            if (!v27)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v32 = (int128_t)v2;
            v27[1] = *((int128_t *)&v4);
            *((void*)&v27[0]) = v32;
LABEL_455f36:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb4ccdaef57ed5026(&v20);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h737cfef988148fed(&v20);
            v28 = &g_558bd0.field_0;
        }
        else
        {
            v27 = uu_tail::uu_tail::h578011e9ff2a01b8(&v17);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb4ccdaef57ed5026(&v20);
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h737cfef988148fed(&v20);
            if (!v27)
            {
                v33 = uucore::mods::error::get_exit_code::hf050de69600a682c();
                return v33;
            }
LABEL_455f56:
            *((uint128_t *[2])&v0[0]) = v27;
            v1 = v28;
            v17 = &v0;
            v18 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h675a187a36a6a61f;
            v2 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v3 = 1;
            v6 = 0;
            v4 = &v17;
            v5 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v24, &v2);
            *((int128_t *)&v17) = *((int128_t *)&v24);
            v19 = *((long long *)&v25);
            if (v19)
            {
                v10 = uucore::util_name::h359eff083fe53467();
                v11 = v30;
                v14 = &v10;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadf5940f0f4d6078;
                v2 = &g_558b18;
                v3 = 2;
                v6 = 0;
                v4 = &v14;
                v5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v29, v30);
                v10 = &v17;
                v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v2 = &g_558b38;
                v3 = 2;
                v6 = 0;
                v4 = &v10;
                v5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v29, v30);
            }
            if ((char)v1->field_68(v0))
            {
                v10 = uucore::execution_phrase::hded5ccd87df1fcab();
                v11 = v30;
                v14 = &v10;
                v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hadf5940f0f4d6078;
                v2 = &g_558b58;
                v3 = 2;
                v6 = 0;
                v4 = &v14;
                v5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v2, v29, v30);
            }
            v33 = v1->field_60(v0);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha46f9862c3b09f7b();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h014eeaab42db4d7f(&v17);
            v34 = v0;
            v35 = v1;
            if (v35->field_0)
                v36(v34);
            if (v35->field_8)
            {
                __rust_dealloc(v34);
                return v33;
            }
            return v33;
        }
    }
    if (!v27)
    {
        vvar_466{reg 16} = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v33;
    }
    goto LABEL_455f56;
}
