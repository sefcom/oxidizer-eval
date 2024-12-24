long long uu_split::strategy::Strategy::from::h77b8e4cc4043c9ac(unsigned long long a0[5], unsigned long long a1, unsigned long long a2[3])
{
    int v0;  // [sp-0xd8]
    int v1;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v2;  // [bp-0xb8], Other Possible Types: char
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x80]
    char v9;  // [bp-0x78]
    unsigned long v10;  // [sp-0x70], Other Possible Types: unsigned long long
    int v11;  // [sp-0x68]
    unsigned long long v12;  // [sp-0x58]
    unsigned long long v13[3];  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    char v17;  // r13b
    char v18;  // r12b
    char v19;  // bpl
    char v20;  // al
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r8
    unsigned long long v23;  // r9
    unsigned long long v25[3];  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx

    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::he19a64bd7fd01b64(a1, "lines", 5);
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::he19a64bd7fd01b64(a1, "bytes", 5);
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::he19a64bd7fd01b64(a1, "line-bytes", 10);
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::he19a64bd7fd01b64(a1, "number", 6);
    if (v20 != 3)
    {
        if (a2[0] != 0x8000000000000000)
        {
            if (v17 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            if (v18 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            if (v19 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            if (v20 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            goto LABEL_4d75f5;
        }
        else if (v17 != 2)
        {
            if (v18 == 2)
            {
                if (v19 == 2)
                {
                    a0[0] = 3;
                    return a0;
                }
                else if (v20 == 2)
                {
                    a0[0] = 3;
                    return a0;
                }
                else
                {
                    uu_split::strategy::Strategy::from::get_and_parse::hc31bb432046fb79c(a0, a1, v21, 5, v22, v23);
                    return a0;
                }
            }
            else
            {
                if (v19 == 2)
                {
                    if (v20 != 2)
                    {
                        uu_split::strategy::Strategy::from::get_and_parse::hc31bb432046fb79c(a0, a1, "line-bytes", 10, uu_split::strategy::Strategy::LineBytes::hebc5fe0306a176b6, uu_split::strategy::StrategyError::Bytes::hc305560a798be149);
                        return a0;
                    }
                    a0 = a0;
                    a0[0] = 3;
                    return a0;
                }
                else
                {
                    if (v20 == 2)
                    {
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6852572f55164c77(&v5, a1, "number", 6);
                        v25 = clap_builder::parser::error::MatchesError::unwrap::h12d8ea78234f129c("number", 6, &v5);
                        if (!v25)
                            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                        uu_split::strategy::NumberType::from::ha79806469f52295d(v13, v25[1], v25[2]);
                        if ((int)v13[0] == 2)
                        {
                            v1 = *((long long *)&v15);
                            *((int128_t *)&v0) = *((int128_t *)&v14);
                        }
                        else
                        {
                            core::ops::function::FnOnce::call_once::h43214f84b2bc6d71(&v5, v13);
                            v28 = *((long long *)&v5);
                            *((int128_t *)&v0) = *((int128_t *)&v6);
                            v1 = *((long long *)&v8);
                            a0 = a0;
                            if (v28 != 4)
                            {
                                v29 = *((long long *)&v9);
                                v4 = v1;
                                v2 = v0;
                                a0[3] = v4;
                                *((void*)&a0[1]) = v2;
                                a0[0] = v28;
                                a0[4] = v29;
                                return a0;
                            }
                        }
                        v4 = v1;
                        v2 = v0;
                        a0[3] = v4;
                        *((void*)&a0[1]) = v2;
                        a0[0] = 4;
                        return a0;
                    }
                    else
                    {
                        vvar_473{reg 40} = a0;
                        a0[1] = 6;
                        a0[2] = 1000;
                        a0[0] = 4;
                        return a0;
                    }
                }
            }
        }
        else
        {
            if (v18 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            else if (v19 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            else if (v20 == 2)
            {
                a0[0] = 3;
                return a0;
            }
        }
    }
    else
    {
        if (a2[0] != 0x8000000000000000)
        {
            if (v17 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            if (v18 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            if (v19 == 2)
            {
                a0[0] = 3;
                return a0;
            }
LABEL_4d75f5:
            uucore::parser::parse_size::parse_size_u64_max::h87e2f290a0681a26(&v2, a2[1], a2[2]);
            if (*((int *)&v2) == 3)
            {
                v26 = *((long long *)&v3);
            }
            else
            {
                *((int128_t *)&v1) = *((int128_t *)&v4);
                v0 = v2;
                uu_split::strategy::Strategy::from::_$u7b$$u7b$closure$u7d$$u7d$::h86111e9e048dd223(&v5, a2, &v0);
                v27 = *((long long *)&v5);
                v26 = *((long long *)&v6);
                *((int128_t *)&v11) = *((int128_t *)&v7);
                v12 = *((long long *)&v9);
                if (v27 != 4)
                {
                    a0 = a0;
                    a0[4] = v12;
                    *((void*)&a0[2]) = v11;
                    a0[0] = v27;
                    a0[1] = v26;
                    return a0;
                }
            }
            a0 = a0;
            v10 = v26;
            if (v10)
                a0[2] = v10;
            else
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h5e048c977c02dbae(&a0[2], &v10);
            *((int128_t *)&a0[0]) = 110680464442257309700;
            return a0;
        }
        else if (v17 != 2)
        {
            if (v18 == 2)
            {
                if (v19 == 2)
                {
                    a0[0] = 3;
                    return a0;
                }
                v21 = "bytes";
                v22 = uu_split::strategy::Strategy::Bytes::hae1d6faca3bd9eeb;
                v23 = uu_split::strategy::StrategyError::Bytes::hc305560a798be149;
                a0 = a0;
                uu_split::strategy::Strategy::from::get_and_parse::hc31bb432046fb79c(a0, a1, v21, 5, v22, v23);
                return a0;
            }
            else
            {
                if (v19 == 2)
                {
                    uu_split::strategy::Strategy::from::get_and_parse::hc31bb432046fb79c(a0, a1, "line-bytes", 10, uu_split::strategy::Strategy::LineBytes::hebc5fe0306a176b6, uu_split::strategy::StrategyError::Bytes::hc305560a798be149);
                    return a0;
                }
                a0 = a0;
                a0[1] = 6;
                a0[2] = 1000;
                a0[0] = 4;
                return a0;
            }
        }
        else
        {
            if (v18 == 2)
            {
                a0[0] = 3;
                return a0;
            }
            else if (v19 == 2)
            {
                a0[0] = 3;
                return a0;
            }
        }
    }
    uu_split::strategy::Strategy::from::get_and_parse::hc31bb432046fb79c(a0, a1, v21, 5, v22, v23);
    return a0;
}
