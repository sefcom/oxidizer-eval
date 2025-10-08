long long uu_expand::tabstops_parse(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xc8]
    unsigned int v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    unsigned long long *v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long *v5;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xa0]
    int v7;  // [bp-0x98], Other Possible Types: char
    unsigned long long *v8;  // [bp-0x88]
    char v9;  // [bp-0x80]
    char v10;  // [bp-0x7f]
    unsigned long long v11;  // [bp-0x78]
    void* v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    unsigned long long *v14;  // [bp-0x61]
    char v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x59]
    unsigned short v17;  // [bp-0x38]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    char *v21;  // rax
    char v22;  // r12b
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx
    char v25;  // r15b
    unsigned long long v26;  // rdx
    unsigned int v27;  // esi
    unsigned long long v29;  // r13
    void* v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // r15
    unsigned long long v33;  // rax
    unsigned long long v34;  // r13
    unsigned long long *v35;  // rax
    unsigned long long *v36;  // rax
    unsigned long long *v37;  // rax

    v19 = core::str::<impl str>::trim_start_matches(a1, a2);
    if (v20)
    {
        v4 = 0;
        v5 = 8;
        v6 = 0;
        v15.into_searcher(v19, a2);
        v12 = 0;
        v13 = v20;
        v17 = 1;
        v21 = v12.next();
        if (v21)
        {
            v22 = 0;
            if (!v23)
                continue;
            while (true)
            {
                v26 = v23;
                v27 = *(v21);
                v24 = v24 & 0xffffffffffffff00 | 2;
                switch (v27)
                {
                case 43:
                    v21 += 1;
                    v22 = v24;
                    v23 = v26 - 1;
                    if (v26 == 1)
                    {
                        v22 = v24;
                        continue;
                    }
                    break;
                case 47:
                    v24 = v24 & 0xffffffffffffff00 | 1;
                default:
                    core::str::converts::from_utf8(&v1, v21, v26);
                    v29 = v1.unwrap();
                    ::0x458c20::core::num::<impl usize>::from_ascii_radix(&v9, v29, a2);
                    if (v9 == 1)
                    {
                        if (v10 == 2)
                        {
                            v1.to_vec(v29, v20);
                            *((unsigned long long **)&a0[24]) = v3;
                            *((int128_t *)&a0[8]) = *((int128_t *)&v1);
                            v31 = 9223372036854775812;
                            goto LABEL_45c65a;
                        }
                        else
                        {
                            v32 = core::str::<impl str>::trim_start_matches(v29, v20);
                            v0 = 0;
                            if (!(char)core::slice::<impl [T]>::starts_with(v32, v20, ::0x459f90::core::char::methods::encode_utf8_raw(47, &v0)))
                            {
                                v0 = 0;
                                if ((char)core::slice::<impl [T]>::starts_with(v32, v20, ::0x459f90::core::char::methods::encode_utf8_raw(43, &v0)))
                                    goto LABEL_45c571;
                                v0.to_vec(v32, v20);
                                *((unsigned long long **)&a0[24]) = v3;
                                *((int128_t *)&a0[8]) = *((int128_t *)&v0);
                                v31 = 0x8000000000000000;
                                goto LABEL_45c65a;
                            }
                            else
                            {
LABEL_45c571:
                                v33 = v32.get(v20);
                                if (!v33)
                                    core::str::slice_error_fail(v32, v20, 0, 1, &g_4e8860); /* do not return */
                                v0.to_vec(v33, 1);
                                v34 = *((long long *)&v1);
                                v0.to_vec(v32, v20);
                                *((unsigned long long *)&a0[40]) = v3;
                                *((int128_t *)&a0[24]) = *((int128_t *)&v1);
                                *((unsigned long long *)a0) = v34;
                                *((unsigned long *)&a0[8]) = v2;
                                *((unsigned long long *)&a0[16]) = v3;
                                goto LABEL_45c65d;
                            }
                        }
                    }
                    if (v11)
                    {
                        v30 = v6 * 8 + v5;
                        if (!(!v30 - 8 || !v6 || (long long)v30[8] < v11))
                        {
                            v31 = 9223372036854775813;
LABEL_45c65a:
                            *((unsigned long long *)a0) = v31;
LABEL_45c65d:
                            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v4, v5);
                        }
                        else if (!(v25 & 1))
                        {
                            v4.push(v11);
                            v25 = v22;
                        }
                        else
                        {
                            if (v22 == 1)
                                v1.to_vec("/+src/uu/expand/src/expand.rs", 1);
                            else
                                v1.to_vec("+src/uu/expand/src/expand.rs", 1);
                            v8 = v3;
                            memcpy(&v7, &v1, 16);
                            *((unsigned long long *)a0) = 9223372036854775810;
                            a0[8] = v7;
                            *((unsigned long long **)&a0[24]) = v8;
                            goto LABEL_45c65d;
                        }
                    }
                    else
                    {
                        v31 = 9223372036854775811;
                        goto LABEL_45c65a;
                    }
                }
            }
        }
        v35 = 8.alloc_impl(8);
        if (!v35)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        *(v35) = 8;
        core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v4, v5);
        v4 = 1;
        v5 = v35;
        v6 = 1;
        v22 = 0;
        v16 = v6;
        memcpy(&(char)v12, &v4, 16);
        *((char *)&a0[8]) = v22;
        v36 = v14;
        *((int128_t *)&a0[9]) = *((int128_t *)&v12);
        *((unsigned long long **)&a0[24]) = v36;
        *((unsigned long long *)&a0[32]) = v16;
    }
    else
    {
        v37 = 8.alloc_impl(8);
        if (!v37)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        *(v37) = 8;
        *((char *)&a0[8]) = 0;
        *((unsigned long long *)&a0[16]) = 1;
        *((unsigned long long **)&a0[24]) = v37;
        *((unsigned long long *)&a0[32]) = 1;
    }
    *((unsigned long long *)a0) = 9223372036854775814;
    return 9223372036854775814;
}
