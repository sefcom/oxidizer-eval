void uu_df::columns::Column::from_matches(void* a0, unsigned long long a1)
{
    void* v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    void* v2;  // [bp-0xe8]
    void* v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    void* v5;  // [bp-0xd0]
    unsigned long v6;  // [bp-0xc8]
    unsigned long v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8], Other Possible Types: char
    int v9;  // [bp-0xa8]
    int v10;  // [bp-0x98]
    char v11;  // [bp-0x88]
    int v12;  // [bp-0x78], Other Possible Types: char
    int v13;  // [bp-0x68]
    int v14;  // [bp-0x58]
    char v15;  // [bp-0x48]
    char v17;  // r15b
    char v18;  // bpl
    char v19;  // al
    struct_0 *v20;  // rax
    struct_0 *v21;  // rax
    unsigned long long v22[3];  // rax
    unsigned int v23;  // ebp

    v17 = a1.get_flag("print-typeexclude-typesrc/uu/df/src/df.rs", 10);
    v18 = a1.get_flag("inodeslocalno-syncoutputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    v19 = a1.value_source("outputpathsportabilityprint-typeexclude-typesrc/uu/df/src/df.rs", 6);
    if (v19 == 3)
    {
        if (!v17)
        {
            if (!v18)
                goto LABEL_46b0f0;
            goto LABEL_46af5e;
        }
        if (v18)
        {
LABEL_46af21:
            v20 = 1.alloc_impl(7);
            if (!v20)
                alloc::alloc::handle_alloc_error(1, 7); /* do not return */
            v20->field_0 = 0x7060b00;
            v20->field_4 = 2312;
        }
        else
        {
LABEL_46af8f:
            v20 = 1.alloc_impl(7);
            if (!v20)
                alloc::alloc::handle_alloc_error(1, 7); /* do not return */
            v20->field_0 = 0x2010b00;
            v20->field_4 = 1027;
        }
        v20->field_6 = 5;
        *((unsigned long long *)&a0[8]) = 7;
        *((struct_0 **)&a0[16]) = v20;
        *((unsigned long long *)&a0[24]) = 7;
        *((unsigned long long *)a0) = 0;
        return;
    }
    else
    {
        if (!v17)
        {
            if (!v18)
            {
                if (v19 == 2)
                {
                    v12.try_get_many(a1);
                    v8.unwrap(&v12);
                    if (!*((long long *)&v8))
                        core::option::unwrap_failed(&g_502e20); /* do not return */
                    memcpy(&v15, &v11, 16);
                    v14 = v10;
                    v13 = v9;
                    v12 = v8;
                    v0 = 0;
                    v1 = 8;
                    v2 = 0;
                    v3 = 0;
                    v4 = 1;
                    v5 = 0;
                    while (true)
                    {
                        v22 = v12.next();
                        if (v22)
                        {
                            v6 = v22[1];
                            v7 = v22[2];
                            if (!v6.slice_contains(v1, 0))
                            {
                                v0.push(v6, v7);
                                v23 = v6.parse(v7);
                                v23.unwrap();
                                v3.push(v23);
                            }
                            else
                            {
                                v8.to_vec(v6, v7);
                                *((long long *)&a0[24]) = (long long)v9;
                                a0[8] = v8;
                                *((unsigned long long *)a0) = 1;
                                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, 1);
                                break;
                            }
                        }
                        else
                        {
                            *((unsigned long long *)&a0[24]) = 0;
                            *((int128_t *)&a0[8]) = *((int128_t *)&v3);
                            *((unsigned long long *)a0) = 0;
                            break;
                        }
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v0, v1);
                    return;
                }
LABEL_46b0f0:
                v21 = 1.alloc_impl(6);
                if (!v21)
                    alloc::alloc::handle_alloc_error(1, 6); /* do not return */
                v21->field_0 = 0x3020100;
                v21->field_4 = 1284;
                *((unsigned long long *)&a0[8]) = 6;
                *((struct_0 **)&a0[16]) = v21;
                *((unsigned long long *)&a0[24]) = 6;
                *((unsigned long long *)a0) = 0;
                return;
            }
            if (v19 != 2)
            {
LABEL_46af5e:
                v21 = 1.alloc_impl(6);
                if (!v21)
                    alloc::alloc::handle_alloc_error(1, 6); /* do not return */
                v21->field_0 = 0x8070600;
                v21->field_4 = 1289;
                *((unsigned long long *)&a0[8]) = 6;
                *((struct_0 **)&a0[16]) = v21;
                *((unsigned long long *)&a0[24]) = 6;
                *((unsigned long long *)a0) = 0;
                return;
            }
        }
        else if (v18)
        {
            if (v19 != 2)
                goto LABEL_46af21;
        }
        else
        {
            if (v19 != 2)
                goto LABEL_46af8f;
        }
        core::panicking::panic("internal error: entered unreachable code()a Display implementation returned an error unexpectedly/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/home/34r7hm4n/.rustup/toolchains", 40, &g_502e80); /* do not return */
    }
}
