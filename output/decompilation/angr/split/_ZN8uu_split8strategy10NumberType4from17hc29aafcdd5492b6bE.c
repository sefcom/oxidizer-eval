long long uu_split::strategy::NumberType::from(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x150]
    int v3;  // [bp-0x148]
    int v4;  // [bp-0x138]
    char v5;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x120]
    int v7;  // [bp-0x118]
    char v8;  // [bp-0x108], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x108]
    int v10;  // [bp-0xf8]
    unsigned long long v11;  // [bp-0xe8]
    unsigned long long v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xd0]
    void* v15;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    void* v16;  // [bp-0xc0]
    unsigned long long v17;  // [bp-0xb8]
    char v18;  // [bp-0xb0]
    unsigned short v19;  // [bp-0x80]
    int v20;  // [bp-0x78], Other Possible Types: char
    unsigned long long v21;  // [bp-0x68]
    int v22;  // [bp-0x60], Other Possible Types: char
    unsigned long long v23;  // [bp-0x50]
    int v24;  // [bp-0x48], Other Possible Types: char
    char v25;  // [bp-0x38]
    unsigned long long v27;  // r13
    struct_0 *v28;  // rbx
    unsigned long long v29;  // rax
    void* v30;  // rax
    unsigned long long v31;  // rdx
    void* v32;  // rax
    unsigned long long v33;  // r12
    unsigned long long v34;  // rax
    unsigned long long v38;  // rdx

    v27 = a1;
    v28 = a0;
    v18.into_searcher(a1, a2);
    v16 = 0;
    v17 = a2;
    v19 = 1;
    v15 = 3;
    v11 = v16.next();
    v13 = a1;
    v15 = 2;
    v29 = v16.next();
    if (v15)
    {
        if (v15 == 1)
        {
            v15 = 0;
            v30 = v16.get_end();
        }
        else
        {
            v15 -= 1;
            v30 = v16.next();
        }
        v14 = v31;
        if (!v15)
        {
            v32 = 0;
        }
        else if (v15 == 1)
        {
            v15 = 0;
            v32 = v16.get_end();
        }
        else
        {
            v15 -= 1;
            v32 = v16.next();
        }
    }
    else
    {
        v30 = 0;
        v32 = 0;
    }
    v33 = v29;
    v28 = a0;
    v27 = v13;
    if (v11)
    {
        if (!v33)
        {
            if (!v30 && !v32)
            {
                uucore::features::parser::parse_size::parse_size_u64(&v0, v11, v38);
                if (*((int *)&v0) != 4)
                {
                    v10 = v3;
                    memcpy(&v8, &v0, 16);
                    uu_split::strategy::NumberType::from::{{closure}}(&v5, v11, v38, &v8);
                    v2 = v6;
                    v4 = v7;
                    if (v5 != 2)
                    {
                        *((void*)&v28->field_10[0]) = v4;
                        v28->field_0 = v5;
                        *((unsigned long long *)&v28->field_8) = v2;
                        return v2;
                    }
                }
                if (v2)
                {
                    *((unsigned long long *)&v28->field_8) = 0;
                    v28->field_10[0] = v2;
                    v28->field_0 = 2;
                    return 2;
                }
            }
        }
        else if (v30)
        {
            v27 = v27;
            if (!v32)
            {
                if ((char)v11.equal(v31, "lsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v30, v14);
                    if (*((int *)&v0) == 4)
                    {
                        v2 = v1;
                    }
                    else
                    {
                        v10 = v3;
                        memcpy(&v8, &v0, 16);
                        uu_split::strategy::NumberType::from::{{closure}}(&v5, v30, v14, &v8);
                        v1 = v6;
                        v4 = v7;
                        if (v5 != 2)
                        {
                            *((void*)&v28->field_10[0]) = v4;
                            v28->field_0 = v5;
                            *((unsigned long long *)&v28->field_8) = v1;
                            return v5;
                        }
                    }
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v33, v12);
                    if (*((int *)&v0) == 4)
                    {
                        goto LABEL_4bb950;
                    }
                    else
                    {
                        v10 = v3;
                        memcpy(&v8, &v0, 16);
                        uu_split::strategy::NumberType::from::{{closure}}(&v5, v33, v12, &v8);
                        v2 = v6;
                        v4 = v7;
                        if (v5 == 2)
                        {
LABEL_4bb950:
                            if (v2 - 1 >= v1)
                            {
                                v22.to_vec(v33, v12);
                                v28->field_0 = 1;
                                *((void*)&v28->field_8) = v22;
                                v28->field_10[1] = v23;
                                return v23;
                            }
                            *((unsigned long long *)&v28->field_8) = 3;
                            v28->field_10[0] = v2;
                            v28->field_10[1] = v1;
                            v28->field_0 = 2;
                            return 2;
                        }
                    }
                }
                v27 = v13;
                if ((char)v11.equal(v31, "rlsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v30, v14);
                    if (*((int *)&v0) == 4)
                    {
                        v2 = v1;
                    }
                    else
                    {
                        v10 = v3;
                        memcpy(&v8, &v0, 16);
                        uu_split::strategy::NumberType::from::{{closure}}(&v5, v30, v14, &v8);
                        v1 = v6;
                        v4 = v7;
                        if (v5 != 2)
                        {
                            *((void*)&v28->field_10[0]) = v4;
                            v28->field_0 = v5;
                            *((unsigned long long *)&v28->field_8) = v1;
                            return v5;
                        }
                    }
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v33, v12);
                    if (*((int *)&v0) == 4)
                    {
                        goto LABEL_4bbac4;
                    }
                    else
                    {
                        v10 = v3;
                        memcpy(&v8, &v0, 16);
                        uu_split::strategy::NumberType::from::{{closure}}(&v5, v33, v12, &v8);
                        v2 = v6;
                        v4 = v7;
                        if (v5 == 2)
                        {
LABEL_4bbac4:
                            if (v2 - 1 >= v1)
                            {
                                v24.to_vec(v33, v12);
                                v28->field_0 = 1;
                                *((void*)&v28->field_8) = v24;
                                v34 = *((long long *)&v25);
                                v28->field_10[1] = v34;
                                return v34;
                            }
                            *((unsigned long long *)&v28->field_8) = 5;
                            v28->field_10[0] = v2;
                            v28->field_10[1] = v1;
                            v28->field_0 = 2;
                            return 2;
                        }
                    }
                }
            }
        }
        else
        {
            v27 = v27;
            if (!v32)
            {
                v8 = 0;
                if (!(char)core::slice::<impl [T]>::starts_with(v11, v31, ::0x4bafe0::core::char::methods::encode_utf8_raw(108, &v8), v31))
                {
                    v9 = 0;
                    if (!(!(char)core::slice::<impl [T]>::starts_with(v11, v31, ::0x4bafe0::core::char::methods::encode_utf8_raw(114, &v9), v31)))
                        goto LABEL_4bb720;
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v33, v12);
                    if (*((int *)&v0) == 4)
                    {
                        v2 = v1;
                    }
                    else
                    {
                        v10 = v3;
                        memcpy(&v8, &v0, 16);
                        uu_split::strategy::NumberType::from::{{closure}}(&v5, v33, v12, &v9);
                        v1 = v6;
                        v4 = v7;
                        if (v5 != 2)
                        {
                            *((void*)&v28->field_10[0]) = v4;
                            v28->field_0 = v5;
                            *((unsigned long long *)&v28->field_8) = v1;
                            return v5;
                        }
                    }
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v11, v31);
                    if (*((int *)&v0) == 4)
                    {
                        goto LABEL_4bbc21;
                    }
                    else
                    {
                        v10 = v3;
                        memcpy(&v8, &v0, 16);
                        uu_split::strategy::NumberType::from::{{closure}}(&v5, v11, v31, &v9);
                        v2 = v6;
                        v4 = v7;
                        if (v5 == 2)
                        {
LABEL_4bbc21:
                            if (v2 - 1 >= v1)
                            {
                                v20.to_vec(v11, v31);
                                v28->field_0 = 1;
                                *((void*)&v28->field_8) = v20;
                                v28->field_10[1] = v21;
                                return v21;
                            }
                            *((unsigned long long *)&v28->field_8) = 1;
                            v28->field_10[0] = v2;
                            v28->field_10[1] = v1;
                            v28->field_0 = 2;
                            return 2;
                        }
                    }
                }
LABEL_4bb720:
                if ((char)v11.equal(v31, "lsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v33, v12);
                    if (*((int *)&v0) == 4)
                    {
                        *((unsigned long long *)&v28->field_8) = 2;
                        v28->field_10[0] = v1;
                        v28->field_0 = 2;
                        return 2;
                    }
                    memcpy(&(char)v10, &v3, 16);
                    memcpy(&v8, &v0, 16);
                    uu_split::strategy::NumberType::from::{{closure}}(&v5, v33, v12, &v8);
                    v2 = v6;
                    memcpy(&(char)v4, &(char)v7, 16);
                    if (v5 == 2)
                    {
                        *((unsigned long long *)&v28->field_8) = 2;
                        v28->field_10[0] = v2;
                        v28->field_0 = 2;
                        return 2;
                    }
                    goto LABEL_4bbc3f;
                }
                v27 = v13;
                if ((char)v11.equal(v31, "rlsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v0, v33, v12);
                    if (*((int *)&v0) == 4)
                    {
                        *((unsigned long long *)&v28->field_8) = 4;
                        v28->field_10[0] = v1;
                        v28->field_0 = 2;
                        return 2;
                    }
                    memcpy(&(char)v10, &v3, 16);
                    memcpy(&v8, &v0, 16);
                    uu_split::strategy::NumberType::from::{{closure}}(&v5, v33, v12, &v8);
                    v2 = v6;
                    memcpy(&(char)v4, &(char)v7, 16);
                    if (v5 == 2)
                    {
                        *((unsigned long long *)&v28->field_8) = 4;
                        v28->field_10[0] = v2;
                        v28->field_0 = 2;
                        return 2;
                    }
LABEL_4bbc3f:
                    *((void*)&v28->field_10[0]) = v4;
                    v28->field_0 = v5;
                    *((unsigned long long *)&v28->field_8) = v2;
                    return v2;
                }
            }
        }
    }
    v28->field_8.to_vec(v27, a2);
    v28->field_0 = 0;
    return 0;
}
