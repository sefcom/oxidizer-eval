long long uu_csplit::SplitWriter::do_to_line(unsigned long a0, struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long a4, struct_3 *a5)
{
    struct_0 *v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe0]
    int v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    char v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    int v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x90]
    int v9;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x80]
    unsigned long long v11;  // [bp-0x78]
    uint128_t v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x50]
    unsigned long long v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    uint256_t v17;  // ymm0
    uint256_t v18;  // ymm1
    int v19;  // xmm0
    unsigned long v20;  // rax
    unsigned long long v21;  // rax
    char v22;  // bpl
    int v24;  // xmm0

    a5->field_38 = 1;
    a5->field_30 = 1;
    v6.to_vec(a2, a3);
    v5 = 1;
    while (true)
    {
        v13.next(a5);
        if (v14 == 9223372036854775809)
        {
            core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v13);
            a1.finish_split();
            v0->field_20 = v8;
            v24 = *((int128_t *)&v5);
            *((void*)&v0->field_8[8]) = v7;
            *((void*)&v0->field_0) = v24;
            return v8;
        }
        v19 = *((int128_t *)&v15);
        v17 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19;
        if (v14 == 0x8000000000000000)
        {
            *((unsigned long long *)&v0->field_0) = 12;
            *((void*)&v0->field_8[0]) = v19;
            return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v5);
        }
        v1 = v14;
        v2 = v19;
        if ((char)(v13 + 1 > a4 ? v13 + 1 != a4 : 255) != 1)
            break;
        v18 = v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((unsigned int)(v19 >> 96) CONCAT (unsigned int)(v19 >> 64) CONCAT (unsigned int)(v19 >> 96) CONCAT (unsigned int)(v19 >> 64));
        v21 = a1.writeln(v17, v18);
        if (v21)
        {
            *((unsigned long long *)&v0->field_0) = 0;
            *((unsigned long long *)&v0->field_8[0]) = v21;
            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v1);
            return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v5);
        }
        ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v1);
    }
    if (!(unsigned int)v20)
    {
        v22 = a1->field_20->field_63;
        if (!v22)
        {
            v11 = v3;
            *((int128_t *)&v9) = *((int128_t *)&v1);
            v4.add_line_to_buffer(a5, v13, &(char)v9);
            if (*((long long *)&v4) != 0x8000000000000000)
            {
                ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v4);
                v9 = &g_72ed58;
                v10 = 1;
                v11 = 8;
                v12 = 0;
                core::panicking::panic_fmt(&v9, &g_72ed80); /* do not return */
            }
            ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v4);
        }
        core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v5);
        v5 = 13;
        if (v22)
            ::0x58e8c0::core::ptr::drop_in_place<alloc::string::String>(&v1);
    }
    else
    {
        v11 = v3;
        *((int128_t *)&v9) = *((int128_t *)&v1);
        v4.add_line_to_buffer(a5, v13, &(char)v9);
        if (*((long long *)&v4) != 0x8000000000000000)
        {
            ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v4);
            v9 = &g_72ed58;
            v9 = &g_72ed58;
            v10 = 1;
            v11 = 8;
            v12 = 0;
            core::panicking::panic_fmt(&v9, &g_72ed68); /* do not return */
        }
        ::0x58f000::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v4);
        core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v5);
        v5 = 13;
    }
    a1.finish_split();
    v0->field_20 = v8;
    v24 = *((int128_t *)&v5);
    *((void*)&v0->field_8[8]) = v7;
    *((void*)&v0->field_0) = v24;
    return v8;
}
