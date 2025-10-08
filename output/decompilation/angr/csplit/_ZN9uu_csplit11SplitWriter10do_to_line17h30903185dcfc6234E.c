long long uu_csplit::SplitWriter::do_to_line(unsigned long a0, struct_2 *a1, unsigned long long a2, unsigned long long a3, unsigned long a4, struct_0 *a5)
{
    void* v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0xa8]
    char v5;  // [bp-0xa0]
    int v6;  // [bp-0x98]
    unsigned long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    char v12;  // [bp-0x60], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    uint128_t v15;  // [bp-0x48]
    unsigned long v17;  // rcx
    unsigned long long v18;  // rax
    int v20;  // xmm0

    a5->field_58 = 1;
    a5->field_50 = 1;
    v5.to_vec(a2, a3);
    v4 = 1;
    while (true)
    {
        v8.next(a5);
        if (v9 == 9223372036854775809)
        {
            core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(&v8);
            a1.finish_split();
            *((unsigned long *)&v0[32]) = v7;
            v20 = *((int128_t *)&v4);
            v0[16] = v6;
            *(v0) = v20;
            return v7;
        }
        if (v9 == 0x8000000000000000)
        {
            *((unsigned long long *)v0) = 12;
            *((unsigned long long *)&v0[8]) = v2;
            *((unsigned long long *)&v0[16]) = v3;
            return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v4);
        }
        v1 = v9;
        v2 = v10;
        v3 = v11;
        if ((a4 > v8 + 1) - 0 - (a4 < v8 + 1) != 1)
            break;
        v18 = a1.writeln(v2, v3);
        if (v18)
        {
            *((unsigned long long *)v0) = 0;
            *((unsigned long long *)&v0[8]) = v18;
            core::ptr::drop_in_place<alloc::string::String>(&v1);
            return core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v4);
        }
        core::ptr::drop_in_place<alloc::string::String>(&v1);
    }
    if (!(a4 > v17) - 0 - (a4 < v17))
    {
        if (!a1->field_20->field_63)
        {
            v12.add_line_to_buffer(a5, v8, &v1);
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v12);
            if (v12 != 0x8000000000000000)
            {
                v12 = &g_641bf0;
                v13 = 1;
                v14 = 8;
                v15 = 0;
                core::panicking::panic_fmt(&v12, &g_641c18); /* do not return */
            }
        }
        core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v4);
        v4 = 13;
        if (a1->field_20->field_63)
            core::ptr::drop_in_place<alloc::string::String>(&v1);
    }
    else
    {
        v12.add_line_to_buffer(a5, v8, &v1);
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v12);
        if (v12 != 0x8000000000000000)
        {
            v12 = &g_641bf0;
            v13 = 1;
            v14 = 8;
            v15 = 0;
            core::panicking::panic_fmt(&v12, &g_641c00); /* do not return */
        }
        core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v4);
        v4 = 13;
    }
    a1.finish_split();
    *((unsigned long *)&v0[32]) = v7;
    v20 = *((int128_t *)&v4);
    v0[16] = v6;
    *(v0) = v20;
    return v7;
}
