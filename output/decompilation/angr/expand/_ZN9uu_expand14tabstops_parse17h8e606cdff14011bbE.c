long long uu_expand::tabstops_parse(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x110]
    unsigned long long *v1;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x100]
    int v3;  // [bp-0xf8], Other Possible Types: char, unsigned int
    char v4;  // [bp-0xf7]
    unsigned long long v5;  // [bp-0xf0]
    unsigned long long *v6;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long *v7;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    int v10;  // [bp-0xc8], Other Possible Types: char
    unsigned long long *v11;  // [bp-0xb8]
    int v12;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v13;  // [bp-0x98]
    void* v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    unsigned long long *v16;  // [bp-0x79]
    char v17;  // [bp-0x78]
    unsigned long long v18;  // [bp-0x71]
    unsigned short v19;  // [bp-0x50]
    char v20;  // [bp-0x48]
    char v21;  // [bp-0x38]
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    char *v25;  // rax
    char v26;  // bl
    unsigned long long v27;  // rbp
    char v28;  // r15b
    unsigned long long v29;  // rbp
    char *v30;  // r12
    char *v31;  // rax
    unsigned int v32;  // edx
    unsigned long v33;  // rcx
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rbp
    void* v36;  // rax
    struct_0 *v37;  // rcx
    unsigned long long v38;  // rax
    unsigned long long v39;  // r15
    unsigned long long v40;  // rax
    struct_0 *v41;  // rcx
    unsigned long long *v42;  // rax
    unsigned long long *v43;  // rax
    unsigned long long *v44;  // rax

    v23 = core::str::<impl str>::trim_start_matches(a1, a2);
    if (v24)
    {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        v17.into_searcher(v23, a2);
        v14 = 0;
        v15 = v24;
        v19 = 1;
        if (v14.next())
        {
            v26 = 0;
            do
            {
                if (v27)
                {
                    v30 = 0;
                    while (true)
                    {
                        v31 = v30.forward_unchecked();
                        v32 = *((char *)(v25 + v30));
                        v34 = v33 & 0xffffffffffffff00 | 2;
                        switch (v32)
                        {
                        case 43:
                            v30 = v31;
                            v26 = v34;
                            if (v31 >= v29)
                            {
                                v26 = v34;
                                goto LABEL_49ed82;
                            }
                            break;
                        case 47:
                            v34 = v34 & 0xffffffffffffff00 | 1;
                        default:
                            core::str::converts::from_utf8(&(char)v3, v25 + v30, v29 - v30);
                            v35 = (char)v3.unwrap();
                            ::0x49ce30::core::num::<impl u64>::from_str_radix(&(char)v3, v35, a2);
                            if (v3)
                            {
                                if (v4 == 2)
                                {
                                    (char)v3.to_vec(v35, v24);
                                    v37 = a0;
                                    *((unsigned long long **)&a0->padding_11[0]) = v6;
                                    *((int128_t *)&a0->field_8) = *((int128_t *)&v3);
                                    v38 = 9223372036854775812;
                                    goto LABEL_49f110;
                                }
                                else
                                {
                                    v39 = core::str::<impl str>::trim_start_matches(v35, v24);
                                    v3 = 0;
                                    if (!(char)core::slice::<impl [T]>::starts_with(v39, v24, ::0x49e050::core::char::methods::encode_utf8_raw(47, &(char)v3), v24))
                                    {
                                        v3 = 0;
                                        if (!(!(char)core::slice::<impl [T]>::starts_with(v39, v24, ::0x49e050::core::char::methods::encode_utf8_raw(43, &(char)v3), v24)))
                                            goto LABEL_49f055;
                                        (char)v3.to_vec(v39, v24);
                                        *((unsigned long long **)&a0->padding_11[0]) = v6;
                                        *((int128_t *)&a0->field_8) = *((int128_t *)&v3);
                                        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
                                        break;
                                    }
                                    else
                                    {
LABEL_49f055:
                                        v40 = v39.get(v24);
                                        if (!v40)
                                            core::str::slice_error_fail(v39, v24, 0, 1, &g_57b550); /* do not return */
                                        (char)v3.to_vec(v40, 1);
                                        v13 = v6;
                                        memcpy(&v12, &(char)v3, 16);
                                        v20.to_vec(v39, v24);
                                        v9 = *((long long *)&v21);
                                        memcpy(&v7, &v20, 16);
                                        v6 = v13;
                                        v3 = v12;
                                        *((unsigned long long *)&a0->padding_11[8]) = v8;
                                        a0->field_20 = v9;
                                        a0->field_9 = v6;
                                        *((unsigned long long **)&a0->padding_11[0]) = v7;
                                        *((void*)&a0->field_0) = v12;
                                        break;
                                    }
                                }
                            }
                            if (v5)
                            {
                                v36 = v2 * 8 + 8;
                                if (!(!v36 - 8 || !v2 || (long long)v36[8] < v5))
                                {
                                    v38 = 9223372036854775813;
LABEL_49f10c:
                                    v37 = a0;
LABEL_49f110:
                                    *((unsigned long long *)&v37->field_0) = v38;
                                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v0);
                                }
                                else if (!(v28 & 1))
                                {
                                    v28 = v26;
                                    v0.push(v5);
                                    goto LABEL_49ed82;
                                }
                                else
                                {
                                    if (v26 == 1)
                                    {
                                        (char)v3.to_vec("/+src/uu/expand/src/expand.rs", 1);
                                        v41 = a0;
                                    }
                                    else
                                    {
                                        (char)v3.to_vec("+src/uu/expand/src/expand.rs", 1);
                                        v41 = a0;
                                    }
                                    v11 = v6;
                                    memcpy(&v10, &(char)v3, 16);
                                    *((unsigned long long *)&v41->field_0) = 9223372036854775810;
                                    *((void*)&v41->field_8[0]) = v10;
                                    v41->field_9 = v11;
                                    break;
                                }
                            }
                            else
                            {
                                v38 = 9223372036854775811;
                                goto LABEL_49f10c;
                            }
                        }
                    }
                }
LABEL_49ed82:
                v25 = v14.next();
                v27 = v24;
            } while (v25);
            if (v2 == 1)
            {
                v18 = 1;
                memcpy(&(char)v14, &v0, 16);
                *((char *)&a0->field_8) = 0;
                v43 = v16;
                *((int128_t *)((char *)&a0->field_8 + 1)) = *((int128_t *)&v14);
                *((unsigned long long **)&a0->padding_11[0]) = v43;
                *((long long *)&a0->padding_11[8]) = 1;
                *((unsigned long long *)&a0->field_0) = 9223372036854775814;
                return 9223372036854775814;
            }
            else if (v2)
            {
                v18 = v2;
                memcpy(&(char)v14, &v0, 16);
                *((char *)&a0->field_8) = v26;
                v43 = v16;
                *((int128_t *)((char *)&a0->field_8 + 1)) = *((int128_t *)&v14);
                *((unsigned long long **)&a0->padding_11[0]) = v43;
                *((unsigned long long *)&a0->padding_11[8]) = v18;
                *((unsigned long long *)&a0->field_0) = 9223372036854775814;
                return 9223372036854775814;
            }
        }
        v42 = 8.alloc_impl(8);
        if (!v42)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        *(v42) = 8;
        core::ptr::drop_in_place<alloc::vec::Vec<usize>>(&v0);
        v0 = 1;
        v1 = v42;
        v2 = 1;
        v18 = 1;
        memcpy(&(char)v14, &v0, 16);
        *((char *)&a0->field_8) = 0;
        v43 = v16;
        *((int128_t *)((char *)&a0->field_8 + 1)) = *((int128_t *)&v14);
        *((unsigned long long **)&a0->padding_11[0]) = v43;
        *((long long *)&a0->padding_11[8]) = 1;
        *((unsigned long long *)&a0->field_0) = 9223372036854775814;
        return 9223372036854775814;
    }
    else
    {
        v44 = 8.alloc_impl(8);
        if (!v44)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        *(v44) = 8;
        *((char *)&a0->field_8) = 0;
        a0->field_9 = 1;
        *((unsigned long long **)&a0->padding_11[0]) = v44;
        *((unsigned long long *)&a0->padding_11[8]) = 1;
        *((unsigned long long *)&a0->field_0) = 9223372036854775814;
        return 9223372036854775814;
    }
}
