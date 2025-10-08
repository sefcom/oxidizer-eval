long long uu_split::strategy::NumberType::from(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x238], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x238]
    unsigned long long v2;  // [bp-0x230]
    int v3;  // [bp-0x228]
    int v4;  // [bp-0x218]
    unsigned long long v5;  // [bp-0x208]
    unsigned long long v6;  // [bp-0x200]
    unsigned long long v7;  // [bp-0x1f8]
    unsigned long long v8;  // [bp-0x1f0]
    void* v9;  // [bp-0x1e8], Other Possible Types: unsigned long, unsigned long long
    void* v10;  // [bp-0x1e0]
    unsigned long long v11;  // [bp-0x1d8]
    char v12;  // [bp-0x1d0]
    unsigned short v13;  // [bp-0x1a0]
    char v14;  // [bp-0x198]
    char v15;  // [bp-0x190]
    char v16;  // [bp-0x178]
    char v17;  // [bp-0x170]
    char v18;  // [bp-0x158]
    char v19;  // [bp-0x150]
    char v20;  // [bp-0x138]
    char v21;  // [bp-0x130]
    char v22;  // [bp-0x118]
    char v23;  // [bp-0x110]
    char v24;  // [bp-0xf8]
    char v25;  // [bp-0xf0]
    char v26;  // [bp-0xd8]
    char v27;  // [bp-0xd0]
    char v28;  // [bp-0xb8]
    char v29;  // [bp-0xb0]
    char v30;  // [bp-0x98]
    char v31;  // [bp-0x90]
    int v32;  // [bp-0x78], Other Possible Types: char
    unsigned long long v33;  // [bp-0x68]
    int v34;  // [bp-0x60], Other Possible Types: char
    unsigned long long v35;  // [bp-0x50]
    int v36;  // [bp-0x48], Other Possible Types: char
    char v37;  // [bp-0x38]
    unsigned long long v39;  // r13
    void* v40;  // rbx
    unsigned long long v41;  // rax
    void* v42;  // rax
    unsigned long long v43;  // rdx
    void* v44;  // rax
    unsigned long long v45;  // r12
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rdx
    unsigned long long v58;  // rax

    v39 = a1;
    v40 = a0;
    v12.into_searcher(a1, a2);
    v10 = 0;
    v11 = a2;
    v13 = 1;
    v9 = 3;
    v5 = v10.next();
    v7 = a1;
    v9 = 2;
    v41 = v10.next();
    if (v9)
    {
        if (v9 == 1)
        {
            v9 = 0;
            v42 = v10.get_end();
        }
        else
        {
            v9 -= 1;
            v42 = v10.next();
        }
        v8 = v43;
        if (!v9)
        {
            v44 = 0;
        }
        else if (v9 == 1)
        {
            v9 = 0;
            v44 = v10.get_end();
        }
        else
        {
            v9 -= 1;
            v44 = v10.next();
        }
    }
    else
    {
        v42 = 0;
        v44 = 0;
    }
    v45 = v41;
    v40 = a0;
    v39 = v7;
    if (v5)
    {
        if (!v45)
        {
            if (!v42 && !v44)
            {
                uucore::features::parser::parse_size::parse_size_u64(&v14, v5, v54);
                if (*((int *)&v14) == 4)
                {
                    v53 = *((long long *)&v15);
                }
                else
                {
                    uu_split::strategy::NumberType::from::{{closure}}(&(char)v1, v5, v54, &v14);
                    v48 = *((long long *)&v0);
                    v53 = v2;
                    v4 = v3;
                    if (*((long long *)&v0) != 2)
                    {
                        v40[16] = v4;
                        *((unsigned long long *)v40) = v48;
                        *((unsigned long long *)&v40[8]) = v53;
                        return v53;
                    }
                }
                if (v53)
                {
                    *((unsigned long long *)&v40[8]) = 0;
                    *((unsigned long long *)&v40[16]) = v53;
                    *((unsigned long long *)v40) = 2;
                    return v53;
                }
            }
        }
        else if (v42)
        {
            v39 = v39;
            if (!v44)
            {
                if ((char)v5.equal(v43, "lsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v22, v42, v8);
                    if (*((int *)&v22) == 4)
                    {
                        v46 = *((long long *)&v23);
                    }
                    else
                    {
                        uu_split::strategy::NumberType::from::{{closure}}(&v0, v42, v8, &v22);
                        v47 = *((long long *)&v0);
                        v46 = v2;
                        v4 = v3;
                        if (*((long long *)&v0) != 2)
                        {
                            v40[16] = v4;
                            *((unsigned long long *)v40) = v47;
                            *((unsigned long long *)&v40[8]) = v46;
                            return v47;
                        }
                    }
                    uucore::features::parser::parse_size::parse_size_u64(&v24, v45, v6);
                    if (*((int *)&v24) == 4)
                    {
                        v53 = *((long long *)&v25);
                        goto LABEL_46c929;
                    }
                    else
                    {
                        uu_split::strategy::NumberType::from::{{closure}}(&v0, v45, v6, &v24);
                        v48 = *((long long *)&v0);
                        v53 = v2;
                        v4 = v3;
                        if (*((long long *)&v0) == 2)
                        {
LABEL_46c929:
                            if (v53 - 1 >= v46)
                            {
                                v34.to_vec(v45, v6);
                                *((unsigned long long *)v40) = 1;
                                v40[8] = v34;
                                *((unsigned long long *)&v40[24]) = v35;
                                return v35;
                            }
                            *((unsigned long long *)&v40[8]) = 3;
                            *((unsigned long long *)&v40[16]) = v53;
                            *((unsigned long long *)&v40[24]) = v46;
                            *((unsigned long long *)v40) = 2;
                            return v53;
                        }
                    }
                }
                v39 = v7;
                if ((char)v5.equal(v43, "rlsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v28, v42, v8);
                    if (*((int *)&v28) == 4)
                    {
                        v46 = *((long long *)&v29);
                    }
                    else
                    {
                        uu_split::strategy::NumberType::from::{{closure}}(&v0, v42, v8, &v28);
                        v47 = *((long long *)&v0);
                        v46 = v2;
                        v4 = v3;
                        if (*((long long *)&v0) != 2)
                        {
                            v40[16] = v4;
                            *((unsigned long long *)v40) = v47;
                            *((unsigned long long *)&v40[8]) = v46;
                            return v47;
                        }
                    }
                    uucore::features::parser::parse_size::parse_size_u64(&v30, v45, v6);
                    if (*((int *)&v30) == 4)
                    {
                        v53 = *((long long *)&v31);
                        goto LABEL_46ca79;
                    }
                    else
                    {
                        uu_split::strategy::NumberType::from::{{closure}}(&v0, v45, v6, &v30);
                        v48 = *((long long *)&v0);
                        v53 = v2;
                        v4 = v3;
                        if (*((long long *)&v0) == 2)
                        {
LABEL_46ca79:
                            if (v53 - 1 >= v46)
                            {
                                v36.to_vec(v45, v6);
                                *((unsigned long long *)v40) = 1;
                                v40[8] = v36;
                                v49 = *((long long *)&v37);
                                *((unsigned long long *)&v40[24]) = v49;
                                return v49;
                            }
                            *((unsigned long long *)&v40[8]) = 5;
                            *((unsigned long long *)&v40[16]) = v53;
                            *((unsigned long long *)&v40[24]) = v46;
                            *((unsigned long long *)v40) = 2;
                            return v53;
                        }
                    }
                }
            }
        }
        else
        {
            v39 = v39;
            if (!v44)
            {
                v1 = 0;
                if (!(char)core::slice::<impl [T]>::starts_with(v5, v43, ::0x4675a0::core::char::methods::encode_utf8_raw(108, &v1), v43))
                {
                    v1 = 0;
                    if ((char)core::slice::<impl [T]>::starts_with(v5, v43, ::0x4675a0::core::char::methods::encode_utf8_raw(114, &v1), v43))
                        goto LABEL_46c70c;
                    uucore::features::parser::parse_size::parse_size_u64(&v16, v45, v6);
                    if (*((int *)&v16) == 4)
                    {
                        v46 = *((long long *)&v17);
                    }
                    else
                    {
                        uu_split::strategy::NumberType::from::{{closure}}(&v1, v45, v6, &v16);
                        v47 = *((long long *)&v0);
                        v46 = v2;
                        v4 = v3;
                        if (*((long long *)&v1) != 2)
                        {
                            v40[16] = v4;
                            *((unsigned long long *)v40) = v47;
                            *((unsigned long long *)&v40[8]) = v46;
                            return v47;
                        }
                    }
                    uucore::features::parser::parse_size::parse_size_u64(&v18, v5, v43);
                    if (*((int *)&v18) == 4)
                    {
                        v53 = *((long long *)&v19);
                        goto LABEL_46cba9;
                    }
                    else
                    {
                        uu_split::strategy::NumberType::from::{{closure}}(&v1, v5, v43, &v18);
                        v48 = *((long long *)&v1);
                        v53 = v2;
                        v4 = v3;
                        if (*((long long *)&v1) == 2)
                        {
LABEL_46cba9:
                            if (v53 - 1 >= v46)
                            {
                                v32.to_vec(v5, v43);
                                *((unsigned long long *)v40) = 1;
                                v40[8] = v32;
                                *((unsigned long long *)&v40[24]) = v33;
                                return v33;
                            }
                            *((unsigned long long *)&v40[8]) = 1;
                            *((unsigned long long *)&v40[16]) = v53;
                            *((unsigned long long *)&v40[24]) = v46;
                            *((unsigned long long *)v40) = 2;
                            return v53;
                        }
                    }
                }
LABEL_46c70c:
                if ((char)v5.equal(v43, "lsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v20, v45, v6);
                    if (*((int *)&v20) == 4)
                    {
                        v53 = *((long long *)&v21);
                        *((unsigned long long *)&v40[8]) = 2;
                        *((unsigned long long *)&v40[16]) = v53;
                        *((unsigned long long *)v40) = 2;
                        return v53;
                    }
                    uu_split::strategy::NumberType::from::{{closure}}(&v1, v45, v6, &v20);
                    v48 = *((long long *)&v0);
                    v53 = v2;
                    memcpy(&(char)v4, &(char)v3, 16);
                    if (*((long long *)&v1) == 2)
                    {
                        *((unsigned long long *)&v40[8]) = 2;
                        *((unsigned long long *)&v40[16]) = v53;
                        *((unsigned long long *)v40) = 2;
                        return v53;
                    }
                    goto LABEL_46cbce;
                }
                v39 = v7;
                if ((char)v5.equal(v43, "rlsrc/uu/split/src/strategy.rs", 1))
                {
                    uucore::features::parser::parse_size::parse_size_u64(&v26, v45, v6);
                    if (*((int *)&v26) == 4)
                    {
                        v53 = *((long long *)&v27);
                        *((unsigned long long *)&v40[8]) = 4;
                        *((unsigned long long *)&v40[16]) = v53;
                        *((unsigned long long *)v40) = 2;
                        return v53;
                    }
                    uu_split::strategy::NumberType::from::{{closure}}(&v1, v45, v6, &v26);
                    v48 = *((long long *)&v0);
                    v53 = v2;
                    memcpy(&(char)v4, &(char)v3, 16);
                    if (*((long long *)&v1) == 2)
                    {
                        *((unsigned long long *)&v40[8]) = 4;
                        *((unsigned long long *)&v40[16]) = v53;
                        *((unsigned long long *)v40) = 2;
                        return v53;
                    }
LABEL_46cbce:
                    v40[16] = v4;
                    *((unsigned long long *)v40) = v48;
                    *((unsigned long long *)&v40[8]) = v53;
                    return v53;
                }
            }
        }
    }
    v58 = v40 + 8.to_vec(v39, a2);
    *((unsigned long long *)v40) = 0;
    return v58;
}
