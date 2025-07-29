long long uu_dd::parseargs::parse_bytes_with_opt_multiplier(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xd0]
    unsigned long long v1[2];  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    int v5;  // [bp-0xa8]
    char v6;  // [bp-0x98]
    void* v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    char v9;  // [bp-0x68]
    unsigned short v10;  // [bp-0x38]
    unsigned long long v12;  // rax
    unsigned long long v13;  // r12
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r13
    unsigned long long v16;  // cc_ndep
    unsigned long long v17;  // r13
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rax
    struct_0 *v21;  // rdx

    v9.into_searcher(120, a1, a2);
    v7 = 0;
    v8 = a2;
    v10 = 1;
    v0.from_iter(&v7, &g_5de8b8);
    if (v2 == 1)
    {
        uu_dd::parseargs::parse_bytes_no_x(a0, a1, a2, v1[0], v1[1]);
        return (unsigned long long)::0x4c8190::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
    }
    v6.into_iter(&v0);
    if (v6.next())
    {
        v13 = 1;
        do
        {
            v17 = v15;
            if ((char)v12.equal(v17, "0", 1))
                uu_dd::parseargs::show_zero_multiplier_warning();
            uu_dd::parseargs::parse_bytes_no_x(&v3, a1, a2, v12, v17);
            v19 = v4;
            if (v3 != 14)
            {
                *((void*)&a0->field_10) = v5;
                v21 = a0;
                v21->field_0 = v3;
                v21->field_8 = v19;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v6);
            }
            v20 = v13;
            if ((char)amd64g_calculate_condition(0, 48, v20, v19, v16))
            {
                v3.to_vec(a1, a2);
                v19 = v3;
                v21 = a0;
                a0->field_10 = *((int128_t *)&v4);
                v21->field_0 = 13;
                v21->field_8 = v19;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v6);
            }
            v13 = v20 * v19;
            v12 = v6.next();
            v14 = v14;
        } while (v12);
    }
    else
    {
        v13 = 1;
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v6);
    a0->field_8 = v13;
    a0->field_0 = 14;
    return a0;
}
