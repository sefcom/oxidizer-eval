long long uu_expand::expand_shortcuts(unsigned long a0, struct_0 *a1)
{
    int v0;  // [bp-0x108], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    unsigned long long v6;  // [bp-0xe8]
    void* v7;  // [bp-0xe0]
    int v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    struct_1 *v11;  // [bp-0xb8]
    char v12;  // [bp-0xb0]
    int v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa0]
    char v15;  // [bp-0x98]
    void* v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x70]
    int v18;  // [bp-0x68]
    unsigned short v19;  // [bp-0x38]
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax

    v5 = a1->field_10.with_capacity_in(8, 24, &g_57b598);
    v6 = v21;
    v7 = 0;
    v15.into_iter(a1);
    (char)v13.next(&v15);
    if (!((char)(((0 ^ *((long long *)&v12)) & (0 ^ -(*((long long *)&v12)))) >> 63)))
    {
        do
        {
            v8 = v13;
            v10 = v14;
            v2.try_from(v9, v14);
            v0 = v2;
            if (((char)vvar_288{stack -264} & 1))
            {
LABEL_49f7d0:
                v4 = v10;
                *((int128_t *)&v0) = (int128_t)v8;
                v5.push(&(unsigned long long)v0, &g_57b5c8);
            }
            else
            {
                v0 = 0;
                v0 = v1;
                if (!(char)core::slice::<impl [T]>::starts_with(v3, v4, ::0x49e050::core::char::methods::encode_utf8_raw(45, &v0), v21))
                    goto LABEL_49f7d0;
                v22 = v3.get(v4);
                if (!v22)
                    core::str::slice_error_fail(v3, v4, 1, v4, &g_57b5b0); /* do not return */
                v2 = v22;
                v3 = v22 + v21;
                v0 = v2;
                if (!v0.try_fold().eq())
                    goto LABEL_49f7d0;
                v18.into_searcher(v2, v21);
                v16 = 0;
                v17 = v21;
                v19 = 1;
                v16.fold(&v5);
                ::0x49d220::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v8);
            }
            (char)v13.next(&v15);
        } while ((long long)v13 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v15);
    v11->field_10 = 0;
    v11->field_0 = *((int128_t *)&v5);
    return v11;
}
