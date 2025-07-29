long long uu_od::odfunc(struct_0 *a0, struct_1 *a1, struct_2 *a2)
{
    char v0;  // [bp-0xe9]
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [sp-0xd8]
    unsigned long long v6;  // [bp-0xd0]
    char *v7;  // [sp-0xd0]
    int v8;  // [bp-0xc8]
    void* v9;  // [bp-0xc0]
    void* v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    void* v12;  // [bp-0xa0]
    int v13;  // [bp-0x98], Other Possible Types: char *, unsigned long long
    unsigned long long v14;  // [bp-0x90]
    int v15;  // [bp-0x88]
    unsigned long v16;  // [bp-0x70]
    char *v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x58]
    int v19;  // [bp-0x50]
    unsigned long long v20;  // [bp-0x40]
    char v21;  // [bp-0x38]
    unsigned long long v23;  // rbp
    char v24;  // r14b
    int v25;  // xmm1
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rbx
    unsigned long long v29;  // [bp-0xc8]

    v10 = 0;
    v11 = 1;
    v12 = 0;
    v23 = a2->field_18;
    v16 = a2->field_28;
    v0 = a2->field_30;
    while (true)
    {
        while (true)
        {
            v19.peek_read(a1);
            if (v21 == 3)
            {
                v1 = (long long)v19;
                v13 = uucore::util_name();
                v14 = v27;
                v17 = &v13;
                v18 = <&T as core::fmt::Display>::fmt;
                v3 = &g_5954e8;
                v5 = 2;
                v9 = 0;
                v7 = &v17;
                v29 = 1;
                std::io::stdio::_eprint(&v3);
                v13 = &v1;
                v14 = <std::io::error::Error as core::fmt::Display>::fmt;
                v3 = &g_595508;
                v5 = 2;
                v9 = 0;
                v7 = &v13;
                v29 = 1;
                std::io::stdio::_eprint(&v3);
                a0.print_final_offset();
                v28 = 1.from();
                ::0x4a8a80::core::ptr::drop_in_place<std::io::error::Error>(v1);
                ::0x4a8aa0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
                return v28;
            }
            v25 = *((int128_t *)&v20);
            v13 = v19;
            v15 = v25;
            if (!v14)
            {
                a0.print_final_offset();
                v28 = (!(char)a1->field_18.has_error() ? 0 : 1.from());
                ::0x4a8aa0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
                return v28;
            }
            if (v14 != v23)
            {
                v26 = v16 + v14;
                if (v23 <= v26)
                    v26 = v23;
                (unsigned long long)v13.zero_out_buffer(v14, v26);
            }
            if (v14 == v23 && !(v0 & 1) && (char)(unsigned long long)v13.get_buffer(0).equal(v27, 1, 0))
            {
                if (!(v24 & 1))
                {
                    v2 = &g_5954d8;
                    v4 = 1;
                    v6 = 8;
                    *((uint128_t *)&v8) = 0;
                    std::io::stdio::_print(&v2);
                }
                v24 = 1;
                a0->field_10 = a0->field_10 + v14;
                if ((a0->field_0 & 1))
                    break;
            }
            else
            {
                if (v14 == v23)
                    (unsigned long long)v13.clone_buffer(&v10);
                v2.format_byte_offset(a0);
                uu_od::print_bytes(v4, v6, &(unsigned long long)v13, a2);
                ::0x4a8a70::core::ptr::drop_in_place<alloc::string::String>(&v2);
                a0->field_10 = a0->field_10 + v14;
                if ((a0->field_0 & 1))
                    break;
            }
        }
        *((unsigned long long *)&a0->field_0) = 1;
        a0->field_8 = a0->field_8 + v14;
    }
}
