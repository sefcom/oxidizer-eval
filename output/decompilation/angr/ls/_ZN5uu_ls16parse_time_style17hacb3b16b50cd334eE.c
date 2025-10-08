long long uu_ls::parse_time_style(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0], Other Possible Types: unsigned long long
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
    struct_0 *v20;  // r15
    unsigned long long v21[3];  // r15
    char v22;  // al
    unsigned long long v24;  // rdx
    unsigned long v26;  // r12
    unsigned long long v27;  // r14
    unsigned long long v28;  // rcx
    unsigned int v29;  // eax
    unsigned int v30;  // eax
    unsigned long long v31;  // rax

    v19 = 8.alloc_impl(120, 0);
    if (!v19)
        alloc::alloc::handle_alloc_error(8, 120); /* do not return */
    v20 = v19;
    v0.to_vec("full-isoBorrowedENOTSOCKclassify", 8);
    v15 = v2;
    v14 = v1;
    v0.to_vec("long-iso", 8);
    v17 = v2;
    v16 = v1;
    v0.to_vec("isolocale+FORMAT (e.g., +%H:%M) for a 'date'-style formatverbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 3);
    v8 = v2;
    v6 = v1;
    v0.to_vec("locale+FORMAT (e.g., +%H:%M) for a 'date'-style formatverbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 6);
    v11 = v2;
    memcpy(&(char)v9, &v0, 16);
    v0.to_vec("+FORMAT (e.g., +%H:%M) for a 'date'-style formatverbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 48);
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
    v0.try_get_one(a1, "time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8", 10);
    v21 = "time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8".unwrap(10, &v0);
    if (v21)
    {
        if ((char)a1.get_flag("full-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/", 9))
        {
            v0.indices_of(a1, "full-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/", 9);
            if (!(long long)v1)
                core::option::unwrap_failed(&g_686770); /* do not return */
            v11 = v2;
            v9 = v1;
            v22 = (char)v9.next_back();
            v0.indices_of(a1, "time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8", 10);
            if (!(long long)v1)
                core::option::unwrap_failed(&g_686788); /* do not return */
            v13 = v2;
            v12 = v1;
            if (!(v22 & 1) || ((char)v12.next_back() & v24 <= v24))
                goto LABEL_5911c8;
        }
        else
        {
LABEL_5911c8:
            v26 = v21[1];
            v27 = v21[2];
            if (!(char)v26.equal(v27, "full-isoBorrowedENOTSOCKclassify", 8))
            {
                if ((char)v26.equal(v27, "long-iso", 8))
                {
                    v28 = 9223372036854775809;
                    *((unsigned long long *)&a0[8]) = 9223372036854775809;
                    *((unsigned long long *)a0) = 9223372036854775814;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                }
                else if ((char)v26.equal(v27, "isolocale+FORMAT (e.g., +%H:%M) for a 'date'-style formatverbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 3))
                {
                    v28 = 9223372036854775810;
                    *((unsigned long long *)&a0[8]) = 9223372036854775810;
                    *((unsigned long long *)a0) = 9223372036854775814;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                }
                else if ((char)v26.equal(v27, "locale+FORMAT (e.g., +%H:%M) for a 'date'-style formatverbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 6))
                {
                    v28 = 9223372036854775811;
                    *((unsigned long long *)&a0[8]) = 9223372036854775811;
                    *((unsigned long long *)a0) = 9223372036854775814;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                }
                else
                {
                    v9 = v26;
                    v10 = v26 + v27;
                    v29 = (((char)core::str::validations::next_code_point(&v9) & 1) ? (unsigned int)v24 : 0x110000);
                    switch (v30)
                    {
                    case 43:
                        v31 = 1.get(v26, v27);
                        if (!v31)
                            core::str::slice_error_fail(v26, v27, 1, v27, &g_6867b8); /* do not return */
                        v0.to_vec(v31, v24);
                        *((unsigned long long *)&a0[24]) = v2;
                        a0[8] = v1;
                        *((unsigned long long *)a0) = 9223372036854775814;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
                    case 1114112:
                        core::option::unwrap_failed(&g_6867a0); /* do not return */
                    default:
                        v12.clone(v21);
                        v5 = 5;
                        memcpy(&v3, &v6, 16);
                        v2 = v13;
                        v0 = v12;
                        *((unsigned long *)&a0[32]) = v4;
                        *((unsigned long long *)&a0[40]) = 5;
                        *((unsigned long long *)&a0[16]) = v2;
                        *((unsigned long long *)&a0[24]) = v3;
                        *(a0) = v12;
                        return v3;
                    }
                }
            }
        }
    }
    else
    {
        if (!(char)a1.get_flag("full-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/", 9))
        {
            v28 = 9223372036854775811;
            *((unsigned long long *)&a0[8]) = 9223372036854775811;
            *((unsigned long long *)a0) = 9223372036854775814;
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
        }
    }
    v28 = 0x8000000000000000;
    *((unsigned long long *)&a0[8]) = 0x8000000000000000;
    *((unsigned long long *)a0) = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v6);
}
