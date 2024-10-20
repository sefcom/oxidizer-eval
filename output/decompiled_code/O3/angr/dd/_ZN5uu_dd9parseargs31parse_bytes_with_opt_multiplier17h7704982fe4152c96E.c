long long uu_dd::parseargs::parse_bytes_with_opt_multiplier::h7704982fe4152c96(unsigned long long a0[3], unsigned long a1, unsigned long long a2)
{
    unsigned long long v1;  // [sp-0x130]
    void* v2;  // [sp-0x128]
    unsigned long v3;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x118]
    unsigned long v5;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x108]
    void* v7;  // [sp-0x100]
    char v8;  // [bp-0xf0]
    char v9;  // [bp-0xe8]
    char v10;  // [bp-0xe0]
    void* v11;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0xd0]
    unsigned long long v13;  // [sp-0xc8]
    char v14;  // [sp-0xc0]
    int v15;  // [bp-0xb8], Other Possible Types: void*
    unsigned long long v16;  // [sp-0xb0]
    unsigned long long v17;  // [sp-0xa8]
    char v18;  // [sp-0xa0]
    unsigned long v19;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x90]
    unsigned long long v21;  // [sp-0x88]
    unsigned long long v22;  // [sp-0x80]
    void* v23;  // [sp-0x78]
    unsigned long long v24;  // [sp-0x70]
    unsigned long long v25;  // [sp-0x68]
    unsigned long long v26;  // [sp-0x60]
    void* v27;  // [sp-0x58]
    unsigned long long v28;  // [sp-0x50]
    unsigned long long v29;  // [sp-0x48]
    char v30;  // [sp-0x40]
    unsigned short v31;  // [sp-0x38]
    unsigned long v33;  // r12
    void* v34;  // r15
    unsigned long long v35;  // r14
    struct_2 *v36;  // r14
    unsigned long long v37[3];  // rax
    struct_0 *v38;  // r13
    unsigned long long v39;  // rbp
    struct_0 *v40;  // r13
    struct_0 *v41;  // r13
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rdx
    int v45;  // ymm0
    unsigned long long v46;  // cc_ndep
    char *v47;  // rbx
    char *v48;  // r15
    int v49;  // xmm0
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rax
    unsigned long long v52;  // rcx
    unsigned long long v53;  // rax
    struct_0 *v54;  // r13
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rbx

    v33 = a2;
    v34 = a1;
    v23 = 0;
    v24 = a2;
    v25 = a1;
    v26 = a2;
    v27 = 0;
    v28 = a2;
    v29 = 515396075640;
    v30 = 1;
    v31 = 1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdaaa4efc434890d8(&v8, &v23, a2);
    v35 = *((long long *)&v10);
    if (v35 == 1)
    {
        v36 = *((long long *)&v9);
        v37 = uu_dd::parseargs::parse_bytes_no_x::h26f99bf566ca2c2b(a0, v34, v33, v36->field_0, v36->field_8);
        if (!*((long long *)&v8))
            return v37;
    }
    v1 = *((long long *)&v8);
    v38 = *((long long *)&v9);
    v36 = &v38->field_0;
    if (!v35)
        v39 = 1;
    v2 = v34;
    v39 = 1;
    do
    {
        v41 = v40;
        v47 = v41->field_0;
        v48 = v41->field_8;
        if (v48 == 1 && *(v47) == 48)
        {
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            v49 = g_51be68;
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v15 = v49;
            v11 = &v15;
            v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7f7f90908f26f7ca;
            v3 = &g_515ac0;
            v4 = 2;
            v7 = 0;
            v5 = &v11;
            v6 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v42, v53 * v52 >> 64);
            v11 = 0;
            v12 = "0x00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs";
            v13 = 2;
            v14 = 1;
            v15 = 0;
            v16 = "00x is a zero multiplier; use  if that is intended\nsrc/uu/dd/src/parseargs.rs";
            v17 = 3;
            v18 = 1;
            v19 = &v11;
            v20 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v21 = &v15;
            v22 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v3 = &g_515ae0;
            v4 = 3;
            v7 = 0;
            v5 = &v19;
            v6 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v50, v43);
        }
        uu_dd::parseargs::parse_bytes_no_x::h26f99bf566ca2c2b(&v3, v2, v33, v47, v48);
        v51 = v3;
        v52 = v4;
        if (v51 != 14)
        {
            a0 = a0;
            *((int128_t *)&a0[2]) = *((int128_t *)&v5);
            a0[0] = v51;
            v37 = 8;
            goto LABEL_498344;
        }
        v53 = v39;
        if ((char)amd64g_calculate_condition(0, 48, v53, v52, v46))
        {
            if (!v33)
            {
                v56 = 1;
LABEL_49831e:
                memcpy(v56, v2, v33);
                a0[0] = 13;
                a0[1] = v33;
                a0[2] = v56;
                v37 = 24;
LABEL_498344:
                *((unsigned long long *)(a0 + v37)) = v55;
                if (!v1)
                    return v37;
            }
            else
            {
                if (v33 < 0)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v56 = __rust_alloc(v33, 1);
                if (v56)
                    goto LABEL_49831e;
            }
        }
    } while ((v39 = (unsigned long long)(v53 * v52), v54 = v41 + 16, v54 != (v35 << 4) + v38));
}
