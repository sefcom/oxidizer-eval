long long uu_dd::parseargs::parse_bytes_with_opt_multiplier(struct_0 *a0, unsigned long long a1, void* a2)
{
    char v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1[2];  // [bp-0xa8]
    unsigned long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    void* v4;  // [bp-0x90]
    char v5;  // [bp-0x88]
    unsigned short v6;  // [bp-0x58]
    char v7;  // [bp-0x50]
    unsigned long long v9;  // rax
    unsigned long long v10;  // r12
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r13
    unsigned long long v13;  // cc_ndep
    unsigned long long v14;  // r13
    void* v16;  // rcx
    unsigned long long v17;  // rax
    struct_0 *v18;  // rdx

    v5.into_searcher(120, a1, a2);
    v3 = 0;
    v4 = a2;
    v6 = 1;
    v0.collect(&v3);
    if (v2 == 1)
    {
        uu_dd::parseargs::parse_bytes_no_x(a0, a1, a2, v1[0], v1[1]);
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v0, v1);
    }
    v7.into_iter(&v0);
    if (v7.next())
    {
        v10 = 1;
        do
        {
            v14 = v12;
            if ((char)v9.equal(v14, "0", 1))
                uu_dd::parseargs::show_zero_multiplier_warning();
            uu_dd::parseargs::parse_bytes_no_x(&v3, a1, a2, v9, v14);
            v16 = v4;
            if (v3 != 14)
            {
                a0->field_10 = *((int128_t *)&v5);
                v18 = a0;
                v18->field_0 = v3;
                v18->field_8 = v16;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v7);
            }
            v17 = v10;
            if ((char)_ccall(0, 48, v17, v16, v13))
            {
                v3.to_vec(a1, a2);
                v16 = v3;
                v18 = a0;
                a0->field_10 = *((int128_t *)&v4);
                v18->field_0 = 13;
                v18->field_8 = v16;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v7);
            }
            v10 = v17 * v16;
            v9 = v7.next();
            v11 = v11;
        } while (v9);
    }
    else
    {
        v10 = 1;
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v7);
    a0->field_8 = v10;
    a0->field_0 = 14;
    return a0;
}
