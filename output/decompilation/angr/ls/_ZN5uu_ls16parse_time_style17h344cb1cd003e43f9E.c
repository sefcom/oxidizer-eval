long long uu_ls::parse_time_style(struct_1 *a0, unsigned long long a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    int v1;  // [bp-0xf8]
    unsigned long v2;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v3;  // [bp-0xe0], Other Possible Types: unsigned long
    unsigned long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    int v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    struct_0 *v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8], Other Possible Types: char, unsigned long
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    int v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x78]
    int v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x58]
    int v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x38]
    struct_0 *v19;  // rax
    struct_0 *v20;  // r14
    unsigned long long v21[3];  // r14
    unsigned long long v22;  // rax
    unsigned long long v24;  // rdx
    unsigned long v26;  // r15
    unsigned long long v27;  // r12
    unsigned long long v28;  // rcx
    unsigned long v29;  // r12
    unsigned long long v30;  // r15
    unsigned int v31;  // eax
    unsigned int v32;  // eax
    unsigned long long v33;  // rax

    v19 = 8.alloc_impl(120);
    if (!v19)
        alloc::alloc::handle_alloc_error(8, 120); /* do not return */
    v20 = v19;
    v0.to_vec("full-isoBorrowedFilePathVariableENOTSOCK", 8);
    v15 = v2;
    v14 = v1;
    v0.to_vec("long-isoBCE year", 8);
    v17 = v2;
    v16 = v1;
    v0.to_vec("isolocale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 3);
    v8 = v2;
    v6 = v1;
    v0.to_vec("locale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 6);
    v11 = v2;
    memcpy(&v9, &v0, 16);
    v0.to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 48);
    v13 = v2;
    v12 = v1;
    v20->field_10 = v15;
    *((void*)&v20->field_0) = v14;
    *((unsigned long long *)((char *)&v20->field_18 + 8)) = v17;
    *((void*)&(&v20->field_10)[1]) = v16;
    *((unsigned long long *)&v20->field_30) = v8;
    *((int128_t *)&v20->field_28) = (int128_t)v6;
    *((int128_t *)((char *)&v20->field_30 + 8)) = *((int128_t *)&v9);
    (&v20->field_40)[1] = v11;
    *((void*)&v20->field_48) = v12;
    v20->field_58 = v13;
    v6 = 5;
    v7 = v20;
    v8 = 5;
    v0.try_get_one(a1, _ZN5uu_ls7options10TIME_STYLE17h9c4061feafcc43faE, g_6a0ea0);
    v21 = _ZN5uu_ls7options10TIME_STYLE17h9c4061feafcc43faE.unwrap(g_6a0ea0, &v0);
    if (v21)
    {
        if ((char)a1.get_flag(_ZN5uu_ls7options9FULL_TIME17h4d4ee22532e1f1b3E, g_6a0eb0))
        {
            v0.indices_of(a1, _ZN5uu_ls7options9FULL_TIME17h4d4ee22532e1f1b3E, g_6a0eb0);
            if (!(long long)v1)
                core::option::unwrap_failed(&g_69f020); /* do not return */
            v11 = v2;
            v9 = v1;
            v22 = v9.next_back();
            v0.indices_of(a1, _ZN5uu_ls7options10TIME_STYLE17h9c4061feafcc43faE, g_6a0ea0);
            if (!(long long)v1)
                core::option::unwrap_failed(&g_69f038); /* do not return */
            v13 = v2;
            v12 = v1;
            if (!(v22) || v24 <= v24 == 1 && !!v12.next_back())
                goto LABEL_521b5c;
        }
        else
        {
LABEL_521b5c:
            v26 = v21[1];
            v27 = v21[2];
            if (!(char)v26.equal(v27, "full-isoBorrowedFilePathVariableENOTSOCK", 8))
            {
                if ((char)v26.equal(v27, "long-isoBCE year", 8))
                {
                    v28 = 9223372036854775809;
                    a0->field_8[0] = 9223372036854775809;
                    *((unsigned long long *)&a0->field_0) = 9223372036854775814;
                    return ::0x51d380::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                }
                else if ((char)v26.equal(v27, "isolocale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 3))
                {
                    v28 = 9223372036854775810;
                    a0->field_8[0] = 9223372036854775810;
                    *((unsigned long long *)&a0->field_0) = 9223372036854775814;
                    return ::0x51d380::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                }
                else if ((char)v26.equal(v27, "locale+FORMAT (e.g., +%H:%M) for a 'date'-style formatsrc/uu/ls/src/ls.rs", 6))
                {
                    v28 = 9223372036854775811;
                    a0->field_8[0] = 9223372036854775811;
                    *((unsigned long long *)&a0->field_0) = 9223372036854775814;
                    return ::0x51d380::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                }
                else
                {
                    v29 = v21[1];
                    v30 = v21[2];
                    v9 = v29;
                    v10 = v29 + v30;
                    v31 = ((int)::0x51dbd0::core::str::validations::next_code_point(&v9) ? (unsigned int)v24 : 0x110000);
                    switch (v32)
                    {
                    case 43:
                        v33 = 1.get(v29, v30);
                        if (!v33)
                            core::str::slice_error_fail(v29, v30, 1, v30, &g_69f068); /* do not return */
                        v0.to_vec(v33, v24);
                        a0->field_18 = v2;
                        *((void*)&a0->field_8[0]) = v1;
                        *((unsigned long long *)&a0->field_0) = 9223372036854775814;
                        return ::0x51d380::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                    case 1114112:
                        core::option::unwrap_failed(&g_69f050); /* do not return */
                    default:
                        v12.clone(v21);
                        v5 = 5;
                        memcpy(&v3, &v6, 16);
                        v2 = v13;
                        v0 = v12;
                        a0->field_20 = v4;
                        a0->field_28 = 5;
                        a0->field_8[1] = v2;
                        a0->field_18 = v3;
                        *((void*)&a0->field_0) = v12;
                        return v3;
                    }
                }
            }
        }
    }
    else
    {
        if (!(char)a1.get_flag(_ZN5uu_ls7options9FULL_TIME17h4d4ee22532e1f1b3E, g_6a0eb0))
        {
            v28 = 9223372036854775811;
            a0->field_8[0] = 9223372036854775811;
            *((unsigned long long *)&a0->field_0) = 9223372036854775814;
            return ::0x51d380::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
        }
    }
    v28 = 0x8000000000000000;
    a0->field_8[0] = 0x8000000000000000;
    *((unsigned long long *)&a0->field_0) = 9223372036854775814;
    return ::0x51d380::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
}
