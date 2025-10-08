long long uu_split::strategy::Strategy::from(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xe0]
    char v1;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v2;  // [bp-0xd0]
    char v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb0]
    int v7;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v8;  // [bp-0x98]
    int v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x78]
    char v11;  // [bp-0x68]
    char v12;  // [bp-0x60]
    int v13;  // [bp-0x48], Other Possible Types: char
    char v14;  // [bp-0x38]
    char v16;  // r13b
    char v17;  // bpl
    char v18;  // bl
    char v19;  // al
    unsigned long long v20;  // rax
    unsigned long long *v21;  // rcx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r8
    unsigned long long v26;  // r9
    char v27;  // cl
    unsigned long long v28[3];  // rax

    v16 = a1.value_source("linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v17 = a1.value_source("bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 5);
    v18 = a1.value_source("line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 10);
    v19 = a1.value_source("number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
    if (v19 == 3)
    {
        if (a2)
        {
            if (!v16 == 2 && !v17 == 2 && !v18 == 2)
                goto LABEL_46cdb9;
        }
        else
        {
            if (v16 == 2)
            {
                if (!v17 == 2 && !v18 == 2)
                {
                    v24 = "linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
                    v25 = uu_split::strategy::Strategy::Lines;
                    v26 = uu_split::strategy::StrategyError::Lines;
                    return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, "linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", v27, uu_split::strategy::Strategy::Lines, uu_split::strategy::StrategyError::Lines);
                }
            }
            else
            {
                if (v17 == 2)
                {
                    if (v18 != 2)
                    {
                        v24 = "bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
                        v25 = uu_split::strategy::Strategy::Bytes;
                        v26 = uu_split::strategy::StrategyError::Bytes;
                        return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, "bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", v27, uu_split::strategy::Strategy::Bytes, uu_split::strategy::StrategyError::Bytes);
                    }
                }
                else
                {
                    if (v18 == 2)
                    {
                        return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, "line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", v27, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
                    }
                    *((unsigned long long *)&v0[8]) = 6;
                    *((unsigned long long *)&v0[16]) = 1000;
                    *((unsigned long long *)v0) = 4;
                    return a0;
                }
            }
        }
    }
    else
    {
        if (a2)
        {
            if (v18 != 2 && v17 != 2 && v16 != 2 && v19 != 2)
            {
LABEL_46cdb9:
                uucore::features::parser::parse_size::parse_size_u64_max(&v11, a2, v6);
                if (*((int *)&v11) == 4)
                {
                    v20 = *((long long *)&v12);
                }
                else
                {
                    uu_split::strategy::Strategy::from::{{closure}}(&v1, a2, v6, &v11);
                    memcpy(&v7, &v3, 16);
                    v8 = v5;
                    if (v1 != 4)
                    {
                        *((unsigned long long *)&v0[32]) = v8;
                        v0[16] = v7;
                        *((unsigned long long *)v0) = v1;
                        *((unsigned long long *)&v0[8]) = v20;
                        return v20;
                    }
                }
                if (!v20)
                {
                    v13.to_vec(core::fmt::num::imp::<impl usize>::_fmt(0, &v1, 20), a2);
                    *((unsigned long long *)v0) = 0;
                    *((unsigned long long *)&v0[8]) = 1;
                    v0[16] = v13;
                    v23 = *((long long *)&v14);
                    *((unsigned long long *)&v0[32]) = v23;
                    return v23;
                }
                *((unsigned long long *)&v0[8]) = 6;
                *((unsigned long long *)&v0[16]) = v20;
                *(a0) = 4;
                return v20;
            }
        }
        else
        {
            if (v16 == 2)
            {
                if (v18 != 2 && v17 != 2 && v19 != 2)
                {
                    v24 = "linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
                    v25 = uu_split::strategy::Strategy::Lines;
                    v26 = uu_split::strategy::StrategyError::Lines;
                    return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, "linesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", v27, uu_split::strategy::Strategy::Lines, uu_split::strategy::StrategyError::Lines);
                }
            }
            else
            {
                if (v17 == 2)
                {
                    if (!v18 == 2 && !v19 == 2)
                    {
                        v24 = "bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
                        v25 = uu_split::strategy::Strategy::Bytes;
                        v26 = uu_split::strategy::StrategyError::Bytes;
                        return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, "bytesline-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", v27, uu_split::strategy::Strategy::Bytes, uu_split::strategy::StrategyError::Bytes);
                    }
                }
                else
                {
                    if (v18 == 2)
                    {
                        if (v19 != 2)
                        {
                            v24 = "line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs";
                            v25 = uu_split::strategy::Strategy::LineBytes;
                            v26 = uu_split::strategy::StrategyError::Bytes;
                            return uu_split::strategy::Strategy::from::get_and_parse(a0, a1, "line-byteslinesadditional-suffixfilternumber-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", v27, uu_split::strategy::Strategy::LineBytes, uu_split::strategy::StrategyError::Bytes);
                        }
                    }
                    else
                    {
                        if (v19 == 2)
                        {
                            v1.try_get_one(a1, "number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs", 6);
                            v28 = "number-dhex-suffixes-xsuffix-lengthverboseseparatorelide-empty-files-io-blksizeinputprefix---a-b-C-l-n-tsrc/uu/split/src/split.rs".unwrap(6, &v1);
                            if (!v28)
                                core::option::unwrap_failed(&g_50ae00); /* do not return */
                            v1.from(v28[1], v28[2]);
                            if ((int)v1 != 2)
                            {
                                v8 = v3;
                                memcpy(&v9, &v1, 16);
                                v10 = v8;
                                *((unsigned long long *)&v0[24]) = v8;
                                v0[8] = v9;
                                *((unsigned long long *)v0) = 2;
                                *((unsigned long long *)&v0[32]) = v4;
                                return v8;
                            }
                            v20 = v4;
                            memcpy(&v9, &v2, 16);
                            v10 = v20;
                            v21 = a0;
                            *((unsigned long long *)&v0[24]) = v10;
                            v0[8] = v9;
                            *(v21) = 4;
                            return v20;
                        }
                        else
                        {
                            *((unsigned long long *)&v0[8]) = 6;
                            *((unsigned long long *)&v0[16]) = 1000;
                            *((unsigned long long *)v0) = 4;
                            return a0;
                        }
                    }
                }
            }
        }
    }
    *((unsigned long long *)v0) = 3;
    return a0;
}
