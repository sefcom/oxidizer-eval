long long uu_expand::expand_shortcuts(unsigned long a0, struct_1 *a1)
{
    char v0;  // [bp-0xe8], Other Possible Types: unsigned int, unsigned long long
    unsigned int v1;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    unsigned long long v6;  // [bp-0xc8]
    void* v7;  // [bp-0xc0]
    struct_0 *v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    unsigned long long v12;  // [bp-0xa0]
    char v13;  // [bp-0x98]
    void* v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    int v16;  // [bp-0x68]
    unsigned short v17;  // [bp-0x38]
    unsigned long long v19;  // rdx
    char *v20;  // r12
    unsigned long long v21;  // r14
    unsigned long long v22;  // rax

    v5 = a1->field_10.with_capacity_in(8, 24, &g_4e8890);
    v6 = v19;
    v7 = 0;
    v13.into_iter(a1);
    (char)v10.next(&v13);
    if (!((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63)))
    {
        v20 = &v0;
        v10 = v9;
        do
        {
            v21 = v10;
            core::str::converts::from_utf8(v20, v11, v12);
            if (v0 == 1)
            {
LABEL_45cb90:
                v0 = v21;
                v2 = v11;
                v4 = v12;
                v20 = &v0;
                v5.push(&v0, &g_4e88c0);
            }
            else
            {
                v1 = 0;
                if (!(char)core::slice::<impl [T]>::starts_with(v2, v4, ::0x459f90::core::char::methods::encode_utf8_raw(45, v20)))
                    goto LABEL_45cb90;
                v22 = v2.get(v4);
                if (!v22)
                    core::str::slice_error_fail(v2, v4, 1, v4, &g_4e88a8); /* do not return */
                v1 = v22;
                v2 = v22 + v19;
                if (!v1.try_fold().eq())
                    goto LABEL_45cb90;
                v16.into_searcher(v1, v19);
                v14 = 0;
                v15 = v19;
                v17 = 1;
                v14.fold(&v5);
                v20 = &v1;
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v21, v11);
            }
            (char)v10.next(&v13);
            v10 = v9;
        } while (v10 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v13);
    v8->field_10 = 0;
    v8->field_0 = *((int128_t *)&v5);
    return v8;
}
