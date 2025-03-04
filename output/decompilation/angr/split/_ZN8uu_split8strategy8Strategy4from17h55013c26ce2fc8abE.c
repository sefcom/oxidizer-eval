long long uu_split::strategy::Strategy::from::h55013c26ce2fc8ab(unsigned long long a0[5], unsigned long long a1, unsigned long long a2[3])
{
    int v0;  // [sp-0xd8]
    int v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc8]
    int v3;  // [bp-0xb8], Other Possible Types: char
    char v4;  // [bp-0xb0]
    char v5;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x98]
    char v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    unsigned long v11;  // [sp-0x70]
    int v12;  // [sp-0x68]
    unsigned long long v13;  // [sp-0x58]
    unsigned long long v14[3];  // [bp-0x50]
    char v15;  // [bp-0x48]
    char v16;  // [bp-0x38]
    char v18;  // r13b
    char v19;  // r12b
    char v20;  // bpl
    char v21;  // al
    unsigned long long v22;  // rdx
    unsigned long long v23;  // r8
    unsigned long long v24;  // r9
    unsigned long long v26[5];  // rbx
    unsigned long long v27[3];  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rcx

    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "lines", 5);
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "bytes", 5);
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "line-bytes", 10);
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(a1, "number", 6);
    if (v21 != 3)
    {
        if (a2[0] != 0x8000000000000000)
        {
            if (v18 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            if (v19 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            if (v20 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            if (v21 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            goto LABEL_4d7525;
        }
        else if (v18 != 2)
        {
            if (v19 == 2)
            {
                if (v20 == 2)
                {
                    a0[0] = 3;
                    return v26;
                }
                else if (v21 == 2)
                {
                    a0[0] = 3;
                    return v26;
                }
                else
                {
                    uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(a0, a1, v22, 5, v23, v24);
                    return v26;
                }
            }
            else
            {
                if (v20 == 2)
                {
                    if (v21 != 2)
                    {
                        uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(a0, a1, "line-bytes", 10, uu_split::strategy::Strategy::LineBytes::hf26230de56a853cc, uu_split::strategy::StrategyError::Bytes::h676736075b7531fc);
                        return v26;
                    }
                    v26 = a0;
                    v26[0] = 3;
                    return v26;
                }
                else
                {
                    if (v21 == 2)
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&v6, a1, "number", 6);
                        v27 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba("number", 6, &v6);
                        if (!v27)
                            core::option::unwrap_failed::h0e11329e76906eaa(&g_548f18); /* do not return */
                        uu_split::strategy::NumberType::from::h9e6ddc21e9e979a9(v14, v27[1], v27[2]);
                        if ((int)v14[0] == 2)
                        {
                            v2 = *((long long *)&v16);
                            *((int128_t *)&v0) = *((int128_t *)&v15);
                            v26 = a0;
                        }
                        else
                        {
                            core::ops::function::FnOnce::call_once::h363c2133120cb604(&v6, v14);
                            v30 = *((long long *)&v6);
                            *((int128_t *)&v0) = *((int128_t *)&v7);
                            v2 = *((long long *)&v9);
                            v26 = a0;
                            if (v30 != 4)
                            {
                                v31 = *((long long *)&v10);
                                v5 = v2;
                                v3 = v0;
                                v26[3] = v5;
                                *((void*)&v26[1]) = v3;
                                v26[0] = v30;
                                v26[4] = v31;
                                return v26;
                            }
                        }
                        v5 = v2;
                        v3 = v0;
                        v26[3] = v5;
                        *((void*)&v26[1]) = v3;
                        v26[0] = 4;
                        return v26;
                    }
                    else
                    {
                        vvar_470{reg 40} = a0;
                        v26[1] = 6;
                        v26[2] = 1000;
                        v26[0] = 4;
                        return v26;
                    }
                }
            }
        }
        else
        {
            if (v19 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            else if (v20 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            else if (v21 == 2)
            {
                a0[0] = 3;
                return v26;
            }
        }
    }
    else
    {
        if (a2[0] != 0x8000000000000000)
        {
            if (v18 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            if (v19 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            if (v20 == 2)
            {
                a0[0] = 3;
                return v26;
            }
LABEL_4d7525:
            uucore::parser::parse_size::parse_size_u64_max::h351ae83d3c4e9b23(&v3, a2[1], a2[2]);
            if (*((int *)&v3) == 3)
            {
                v28 = *((long long *)&v4);
            }
            else
            {
                *((int128_t *)&v1) = *((int128_t *)&v5);
                v0 = v3;
                uu_split::strategy::Strategy::from::_$u7b$$u7b$closure$u7d$$u7d$::h0a4775b5dcd4ac08(&v6, a2, &v0);
                v29 = *((long long *)&v6);
                v28 = *((long long *)&v7);
                *((int128_t *)&v12) = *((int128_t *)&v8);
                v13 = *((long long *)&v10);
                if (v29 != 4)
                {
                    v26 = a0;
                    v26[4] = v13;
                    *((void*)&v26[2]) = v12;
                    v26[0] = v29;
                    v26[1] = v28;
                    return v26;
                }
            }
            v26 = a0;
            v11 = v28;
            if (v28)
                v26[2] = v28;
            else
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hfac9650ce491ceb2(&v26[2], &v11);
            *((uint128_t *)&v26[0]) = 110680464442257309700;
            return v26;
        }
        else if (v18 != 2)
        {
            if (v19 == 2)
            {
                if (v20 == 2)
                {
                    a0[0] = 3;
                    return v26;
                }
                v22 = "bytes";
                v23 = uu_split::strategy::Strategy::Bytes::hb7425c208cd7a728;
                v24 = uu_split::strategy::StrategyError::Bytes::h676736075b7531fc;
                v26 = a0;
                uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(v26, a1, v22, 5, v23, v24);
                return v26;
            }
            else
            {
                if (v20 == 2)
                {
                    uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(a0, a1, "line-bytes", 10, uu_split::strategy::Strategy::LineBytes::hf26230de56a853cc, uu_split::strategy::StrategyError::Bytes::h676736075b7531fc);
                    return v26;
                }
                v26 = a0;
                v26[1] = 6;
                v26[2] = 1000;
                v26[0] = 4;
                return v26;
            }
        }
        else
        {
            if (v19 == 2)
            {
                a0[0] = 3;
                return v26;
            }
            else if (v20 == 2)
            {
                a0[0] = 3;
                return v26;
            }
        }
    }
    uu_split::strategy::Strategy::from::get_and_parse::h2131435d3ea4b88e(a0, a1, v22, 5, v23, v24);
    return v26;
}
