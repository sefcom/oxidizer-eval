long long uu_env::variable_parser::VariableParser::parse_variable::h462d93b11ed9b169(struct_2 *a0, struct struct_0 **a1, unsigned long long a2)
{
    char *v0;  // [bp-0xd8], Other Possible Types: char, unsigned long long, unsigned long
    char *v1;  // [sp-0xd0], Other Possible Types: unsigned long, unsigned long long
    char v2;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v3;  // [sp-0xc0], Other Possible Types: unsigned long long
    void* v4;  // [sp-0xb8]
    char v5;  // [bp-0xa4]
    char *v6;  // [sp-0x98], Other Possible Types: char
    uint128_t *v7;  // [bp-0x90], Other Possible Types: char, unsigned long
    unsigned long long v8;  // [sp-0x88]
    unsigned int v9;  // [sp-0x7c]
    unsigned long v10;  // [bp-0x78], Other Possible Types: unsigned int
    unsigned long long v11;  // [sp-0x70]
    char *v12;  // [sp-0x68]
    char *v13;  // [sp-0x60]
    unsigned long v14;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x50]
    char v17;  // [bp-0x48]
    struct_0 *v21;  // r14
    char *v22;  // r15
    uint128_t *v24;  // rax
    unsigned long long v25;  // rdx
    char *v26;  // r15
    unsigned long long v28;  // rax
    char v29;  // cl
    char *v30;  // rax
    unsigned int v34;  // eax
    char *v35;  // rax
    unsigned int v36;  // eax
    char *v37;  // rdx
    char *v38;  // rax
    unsigned int v39;  // ecx
    char *v40;  // r14
    uint128_t *v41;  // rax
    unsigned long long v42;  // rsi
    char *v44;  // rax
    char *v45;  // rdx
    char *v47;  // r12
    unsigned long long v48;  // rax
    unsigned int v51;  // ecx
    unsigned long long v52;  // rdx
    unsigned int v54;  // eax
    unsigned int v56;  // ecx
    unsigned long long v57;  // rdx
    uint128_t *v58;  // rax
    char *v59;  // rax
    char *v60;  // rbp
    unsigned long long v61;  // r15
    char *v63;  // rax
    unsigned int v66;  // ecx
    char *v67;  // rax
    char *v68;  // r15
    unsigned int v70;  // ecx
    char v71;  // sil
    unsigned int v72;  // edi
    unsigned short v73;  // r8w
    char v74;  // r9b

    v21 = *(a1);
    uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v0, v21, a2);
    if (v0)
    {
LABEL_4a182a:
        v28 = v1;
        v29 = v2;
        a0->field_0 = 5;
        a0->field_8 = v28;
        a0->field_10 = v28;
        a0->field_18 = v29;
        return a0;
    }
    v22 = v21->field_20;
    if (v21->field_8 < v22)
    {
LABEL_4a1bf7:
        v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    if (v21->field_8 == v22)
    {
        v24 = __rust_alloc(21, 1);
        if (v24)
        {
            *(v24) = 134814791028905390117784995422593575277;
            *((long long *)((char *)v24 + 13)) = 7308604895909997666;
            a0->field_0 = 4;
            a0->field_8 = v22;
            a0->field_10 = 21;
            *((uint128_t **)&a0->field_18) = v24;
            a0->field_20 = 21;
            return a0;
        }
        goto LABEL_4a1e7a;
    }
    if ((int)uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v22[v21->field_0]) != 123)
    {
        v26 = v21->field_20;
        if (v21->field_8 < v26)
            goto LABEL_4a1bf7;
        if (v21->field_8 == v26)
            goto LABEL_4a1a34;
        v34 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v26[v21->field_0]);
        if (v34 != 0x110000 && (v9 = v34, v34 - 48 < 10))
        {
            v10 = &v9;
            v11 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            v0 = &g_50ca08;
            v1 = 2;
            v4 = 0;
            v2 = &v10;
            v3 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v17, &v0);
            goto LABEL_0x4a1b4c;
        }
        else
        {
            v37 = v21->field_8;
            v38 = v21->field_20;
            if (v37 < v38)
                goto LABEL_4a1bf7;
LABEL_4a1a34:
        }
    }
    else
    {
        uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v0, v21, v25);
        if (!(!v0))
            goto LABEL_4a182a;
        v30 = v21->field_20;
        if (v21->field_8 < v30)
            goto LABEL_4a1bf7;
        v13 = v30;
        if (v21->field_8 != v30)
        {
            v36 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v13[v21->field_0]);
            if (v36 != 0x110000 && (v10 = v36, v36 - 48 < 10))
            {
                v47 = v21->field_20;
                v14 = &v10;
                v16 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v48 = &g_50ca08;
                goto LABEL_4a1d69;
            }
            else
            {
                v35 = v21->field_8;
                v30 = v21->field_20;
                if (v35 < v30)
                    goto LABEL_4a1bf7;
            }
        }
        while (true)
        {
            if (v47 == v30)
            {
                v58 = __rust_alloc(21, 1);
                if (v58)
                {
                    *(v58) = 43072341861285339599737224862310295885;
                    *((long long *)((char *)v58 + 13)) = 7305790164425533294;
                    v6 = 21;
                    v7 = v58;
                    v8 = 21;
                    goto LABEL_4a1da3;
                }
                goto LABEL_4a1e7a;
            }
            v54 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v30[v21->field_0]);
            if (v56 < 128 && v56 - 48 >= 10 && (v56 & 95) - 65 > 25 && v56 != 95)
                break;
            uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v0, v21, v25);
            if (!(!v0))
                goto LABEL_4a1cac;
            v47 = v21->field_8;
            v30 = v21->field_20;
            if (v47 < v30)
                goto LABEL_4a1bf7;
        }
        if (v56 != 58)
        {
            if (v56 != 125)
            {
                v10 = v56;
                v47 = v21->field_20;
                v14 = &v10;
                v16 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v48 = &g_50ca28;
            }
            else
            {
                v60 = v21->field_20;
                uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v0, v21, v25);
                if (!v0)
                    goto LABEL_4a1e04;
            }
LABEL_4a1d69:
            v0 = v48;
            v1 = 2;
            v4 = 0;
            v2 = &v14;
            v3 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v6, &v0);
LABEL_4a1da3:
            v70 = *((int *)&v5);
            v71 = v7;
            v72 = *((int *)((char *)&v7 + 1));
            v73 = *((short *)((char *)&v7 + 5));
            v74 = *((char *)&v7 + 7);
            a0->field_0 = 4;
            a0->field_4 = v70;
            a0->field_8 = v47;
            a0->field_10 = v6;
            a0->field_18 = v71;
            *((unsigned int *)&a0->padding_19[0]) = v72;
            *((unsigned short *)&a0->padding_19[4]) = v73;
            a0->padding_19[6] = v74;
            a0->field_20 = v8;
            return a0;
        }
        v47 = v21->field_8;
        v12 = &v21->field_20->field_0;
        if (v47 < v12)
            goto LABEL_4a1bf7;
        v12 = v12;
        while (true)
        {
            v63 = v12;
            if (v47 == v63)
            {
LABEL_4a1e6b:
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd8e211e62d9fc30a(&v6);
                goto LABEL_4a1da3;
            }
            if (v66 == 125)
                break;
            if (v66 == 0x110000)
            {
                v47 = v21->field_20;
                goto LABEL_4a1e6b;
            }
            uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v0, v21, v25);
            if (!(!v0))
                goto LABEL_4a1cac;
            v47 = v21->field_8;
            v67 = v21->field_20;
            if (v47 < v67)
                goto LABEL_4a1bf7;
        }
        v68 = v21->field_20;
        uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v0, v21, v25);
        if (v0)
        {
LABEL_4a1cac:
            v6 = v1;
            v7 = v2;
            goto LABEL_0x4a1da8;
        }
        else
        {
            v60 = v12;
            v0 = v60 + 1;
            v1 = v68;
            uu_env::string_parser::StringParser::substring::h86b54ee2f2203128(v21, &v0);
LABEL_4a1e04:
            v0 = v13;
            v1 = v60;
            uu_env::string_parser::StringParser::substring::h86b54ee2f2203128(v21, &v0);
            goto LABEL_0x4a1b1f;
        }
    }
    do
    {
        if (v45 == v44)
        {
LABEL_4a1ab1:
            v57 = v45 - v26;
            if (v45 != v26)
            {
                v59 = v21->field_8;
                if (v59 < v26)
                {
                    v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
                    v1 = 1;
                    v2 = 8;
                    *((int128_t *)&v3) = 0;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
                }
                if (v57 > v59 - v26)
                {
                    v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
                    v1 = 1;
                    v2 = 8;
                    *((int128_t *)&v3) = 0;
                    core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
                }
                v61 = &v26[v21->field_0];
            }
            else
            {
                v41 = __rust_alloc(21, 1);
                if (!v41)
                {
LABEL_4a1e7a:
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
                *(v41) = 134814791028905390117784995422593575245;
                *((long long *)((char *)v41 + 13)) = 7308604895909997666;
                goto LABEL_0x4a1b4c;
            }
            a0->field_8 = v61;
            a0->field_10 = v57;
            *((long long *)&a0->field_18) = 0;
            a0->field_20 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3;
            a0->field_0 = 8;
            return a0;
        }
        if (v51 != 95 && v51 - 48 >= 10 && (v51 & 2097119) - 65 >= 26)
        {
            v45 = v21->field_20;
            goto LABEL_4a1ab1;
        }
        uu_env::string_parser::StringParser::consume_chunk::h273ffbace99edc38(&v0, v21, v52);
        if (v0)
        {
            v40 = v1;
            v41 = v2;
            a0->field_0 = 5;
            a0->field_4 = v39;
            a0->field_8 = v26;
            a0->field_10 = v40;
            *((uint128_t **)&a0->field_18) = v41;
            a0->field_20 = v42;
            return a0;
        }
        v45 = v21->field_8;
        v44 = v21->field_20;
    } while (v45 >= v44);
}
