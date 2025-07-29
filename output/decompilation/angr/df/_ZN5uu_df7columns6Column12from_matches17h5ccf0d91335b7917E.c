long long uu_df::columns::Column::from_matches(struct_1 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0xf8]
    void* v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    void* v3;  // [bp-0xd8]
    void* v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    void* v6;  // [bp-0xc0]
    struct_0 *v7;  // [bp-0xb8], Other Possible Types: char
    int v8;  // [bp-0xa8]
    int v9;  // [bp-0x98]
    char v10;  // [bp-0x88]
    struct_0 *v11;  // [bp-0x78], Other Possible Types: char
    int v12;  // [bp-0x68]
    int v13;  // [bp-0x58]
    char v14;  // [bp-0x48]
    char v16;  // al
    char v17;  // bpl
    char v18;  // al
    struct_0 *v19;  // rax
    struct_0 *v20;  // rax
    unsigned long long v21[3];  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned int v24;  // ebp

    v16 = a1.get_flag(_ZN5uu_df14OPT_PRINT_TYPE17h4e883310bc5a277eE, g_59cb28);
    v17 = a1.get_flag(_ZN5uu_df10OPT_INODES17he0e92eb733f7b979E, g_59cae8);
    v18 = a1.value_source(_ZN5uu_df10OPT_OUTPUT17h6acb1ddb55033c5fE, g_59caf8);
    if (v16)
    {
        if (v17)
        {
            if (v18 != 2)
            {
                v19 = 7.alloc_impl();
                if (!v19)
                    alloc::alloc::handle_alloc_error(1, 7); /* do not return */
                v19->field_0 = 0x7060b00;
                v19->field_4 = 2312;
                v19->field_6 = 5;
                a0->field_8 = 7;
                *((struct_0 **)&a0->padding_10[0]) = v19;
                a0->field_18 = 7;
                a0->field_0 = 0;
                return a0;
            }
        }
        else
        {
            if (v18 != 2)
            {
                v19 = 7.alloc_impl();
                if (!v19)
                    alloc::alloc::handle_alloc_error(1, 7); /* do not return */
                v19->field_0 = 0x2010b00;
                v19->field_4 = 1027;
                v19->field_6 = 5;
                a0->field_8 = 7;
                *((struct_0 **)&a0->padding_10[0]) = v19;
                a0->field_18 = 7;
                a0->field_0 = 0;
                return a0;
            }
        }
    }
    else
    {
        if (v17)
        {
            if (v18 != 2)
            {
                v20 = 6.alloc_impl();
                if (!v20)
                    alloc::alloc::handle_alloc_error(1, 6); /* do not return */
                v20->field_0 = 0x8070600;
                v20->field_4 = 1289;
                a0->field_8 = 6;
                *((struct_0 **)&a0->padding_10[0]) = v20;
                a0->field_18 = 6;
                a0->field_0 = 0;
                return a0;
            }
        }
        else
        {
            if (v18 == 2)
            {
                v11.try_get_many(a1, _ZN5uu_df10OPT_OUTPUT17h6acb1ddb55033c5fE, g_59caf8);
                v7.unwrap(_ZN5uu_df10OPT_OUTPUT17h6acb1ddb55033c5fE, g_59caf8, &v11);
                if (!*((long long *)&v7))
                    core::option::unwrap_failed(&g_59d288); /* do not return */
                memcpy(&v14, &v10, 16);
                v13 = v9;
                v12 = v8;
                v11 = v7;
                v1 = 0;
                v2 = 8;
                v3 = 0;
                v4 = 0;
                v5 = 1;
                v6 = 0;
                while (true)
                {
                    v21 = v11.next();
                    if (v21)
                    {
                        v22 = v21[1].call_once(v21[2]);
                        if (!v22)
                            goto LABEL_4c2e4b;
                        v0 = v22;
                        if (!v0.slice_contains(8, 0))
                        {
                            v1.push(v0, v23);
                            v24 = v0.parse(v23);
                            v24.unwrap();
                            v4.push(v24);
                        }
                        else
                        {
                            v7.to_vec(v0, v23);
                            a0->field_18 = (long long)v8;
                            a0->field_8 = v7;
                            a0->field_0 = 1;
                            core::ptr::drop_in_place<alloc::vec::Vec<uu_df::columns::Column>>(&v4);
                            break;
                        }
                    }
                    else
                    {
LABEL_4c2e4b:
                        a0->field_18 = 0;
                        *((int128_t *)&a0->field_8) = *((int128_t *)&v4);
                        a0->field_0 = 0;
                        break;
                    }
                }
                core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v1);
                return a0;
            }
            else
            {
                v20 = 6.alloc_impl();
                if (!v20)
                    alloc::alloc::handle_alloc_error(1, 6); /* do not return */
                v20->field_0 = 0x3020100;
                v20->field_4 = 1284;
                a0->field_8 = 6;
                *((struct_0 **)&a0->padding_10[0]) = v20;
                a0->field_18 = 6;
                a0->field_0 = 0;
                return a0;
            }
        }
    }
    core::panicking::panic("internal error: entered unreachable code()a Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 40, &g_59d2e8); /* do not return */
}
