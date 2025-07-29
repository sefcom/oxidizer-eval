long long uu_split::strategy::Strategy::from(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[3];  // [bp-0xf0]
    int v1;  // [bp-0xe8], Other Possible Types: char
    char v2;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0xd8]
    int v4;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v5;  // [bp-0xc0]
    char v6;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v7;  // [bp-0xa0], Other Possible Types: unsigned long
    char v8;  // [bp-0x98]
    char v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    unsigned long v11;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x78]
    unsigned long long v13;  // [bp-0x70]
    int v14;  // [bp-0x68], Other Possible Types: char
    unsigned long long v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    char v20;  // bpl
    char v21;  // r13b
    char v22;  // bl
    char v23;  // al
    uint128_t v24;  // xmm0
    unsigned long long v25;  // rdx
    char v28;  // cl
    unsigned long long v29[3];  // rax

    v20 = a1.value_source(_ZN8uu_split9OPT_LINES17h01627071752102daE, g_5a6d50);
    v21 = a1.value_source(_ZN8uu_split9OPT_BYTES17hd2dd5dfa56187493E, g_5a6d30);
    v22 = a1.value_source(_ZN8uu_split14OPT_LINE_BYTES17h96f3ab196bd03256E, g_5a6d40);
    v23 = a1.value_source(_ZN8uu_split10OPT_NUMBER17h343a1fdf52b25f77E, g_5a6d70);
    if (a2)
    {
        if (v22 != 2 && v21 != 2 && v20 != 2 && v23 != 2)
        {
            uucore::features::parser::parse_size::parse_size_u64_max(&v4, a2, v12);
            if (*((int *)&v4) != 4)
            {
                memcpy(&v2, &v6, 16);
                memcpy(&v1, &v4, 16);
                uu_split::strategy::Strategy::from::{{closure}}(&v7, a2, v12, &v1);
                memcpy(&v14, &v9, 16);
                v15 = v11;
                if (v7 != 4)
                {
                    a0->field_20 = v15;
                    *((void*)&a0->field_10[0]) = v14;
                    *((unsigned long *)&a0->field_0) = v7;
                    *((unsigned long long *)&a0->field_8) = v5;
                    return a0;
                }
            }
            v13 = v5;
            if (v5)
            {
                a0->field_10[0] = v5;
                v24 = 110680464442257309700;
            }
            else
            {
                a0->field_10.spec_to_string(&v13);
                v24 = 0x10000000000000000;
            }
            *((uint128_t *)&a0->field_0) = v24;
            return a0;
        }
    }
    else
    {
        if (v20 == 2)
        {
            if (v22 != 2 && v21 != 2 && v23 != 2)
            {
                uu_split::strategy::Strategy::from::get_and_parse(v0, a1, _ZN8uu_split9OPT_LINES17h01627071752102daE, v28, uu_split::strategy::Strategy::Lines, uu_split::strategy::StrategyError::Lines);
                return a0;
            }
        }
        else
        {
            if (v21 == 2)
            {
                if (!v22 == 2 && !v23 == 2)
                {
                    uu_split::strategy::Strategy::from::get_and_parse(v0, a1, v25, v28, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
                    return a0;
                }
            }
            else
            {
                if (v22 == 2)
                {
                    if (v23 != 2)
                    {
                        v25 = _ZN8uu_split14OPT_LINE_BYTES17h96f3ab196bd03256E;
                        uu_split::strategy::Strategy::from::get_and_parse(v0, a1, v25, v28, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
                        return a0;
                    }
                }
                else
                {
                    if (v23 == 2)
                    {
                        (char)v7.try_get_one(a1, _ZN8uu_split10OPT_NUMBER17h343a1fdf52b25f77E, g_5a6d70);
                        v29 = _ZN8uu_split10OPT_NUMBER17h343a1fdf52b25f77E.unwrap(g_5a6d70, &(char)v7);
                        if (!v29)
                            core::option::unwrap_failed(&g_5a7c30); /* do not return */
                        v16.from(v29[1], v29[2]);
                        if (*((int *)&v16) == 2)
                        {
                            v2 = *((long long *)&v18);
                            memcpy(&v1, &v17, 16);
                        }
                        else
                        {
                            (char)v7.call_once(&v16);
                            memcpy(&v1, &v8, 16);
                            v2 = v10;
                            if (v7 != 4)
                            {
                                v6 = v3;
                                v4 = v1;
                                a0->field_10[1] = v3;
                                *((void*)&a0->field_8) = v1;
                                *((unsigned long *)&a0->field_0) = v7;
                                a0->field_20 = v11;
                                return a0;
                            }
                        }
                        v6 = v2;
                        v4 = v1;
                        a0->field_10[1] = v2;
                        *((void*)&a0->field_8) = v1;
                        *((unsigned long long *)&a0->field_0) = 4;
                        return a0;
                    }
                    else
                    {
                        v0[1] = 6;
                        v0[2] = 1000;
                        v0[0] = 4;
                        return a0;
                    }
                }
            }
        }
    }
    v0[0] = 3;
    return a0;
}
