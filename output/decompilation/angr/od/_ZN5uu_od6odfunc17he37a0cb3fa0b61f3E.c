long long uu_od::odfunc(void* a0, struct_2 *a1, struct_0 *a2)
{
    char v0;  // [bp-0xe9]
    void* v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    void* v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long long v8;  // [sp-0xc0]
    unsigned long long v9;  // [bp-0xb8]
    char *v10;  // [sp-0xb8]
    int v11;  // [bp-0xb0]
    void* v12;  // [bp-0xa8]
    int v13;  // [bp-0x98], Other Possible Types: char *, unsigned long long
    unsigned long long v14;  // [bp-0x90]
    int v15;  // [bp-0x88]
    unsigned long v16;  // [bp-0x70]
    struct_0 *v17;  // [bp-0x68]
    char *v18;  // [bp-0x60]
    unsigned long long v19;  // [bp-0x58]
    int v20;  // [bp-0x50]
    unsigned long long v21;  // [bp-0x40]
    char v22;  // [bp-0x38]
    unsigned long long v24;  // r14
    char v25;  // r13b
    int v26;  // xmm1
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rbx
    unsigned long long v30;  // [bp-0xb0]

    v1 = 0;
    v2 = 1;
    v3 = 0;
    v24 = a2->field_18;
    v16 = a2->field_28;
    v17 = a2;
    v0 = a2->field_30;
    while (true)
    {
        while (true)
        {
            v20.peek_read(a1);
            if (v22 == 3)
            {
                v4 = (long long)v20;
                v13 = uucore::util_name();
                v14 = v28;
                v18 = &v13;
                v19 = <&T as core::fmt::Display>::fmt;
                v6 = &g_5014f0;
                v8 = 2;
                v12 = 0;
                v10 = &v18;
                v30 = 1;
                std::io::stdio::_eprint(&v6);
                v13 = &v4;
                v14 = <std::io::error::Error as core::fmt::Display>::fmt;
                v6 = &g_501510;
                v8 = 2;
                v12 = 0;
                v10 = &v13;
                v30 = 1;
                std::io::stdio::_eprint(&v6);
                a0.print_final_offset();
                v29 = 1.from();
                core::ptr::drop_in_place<std::io::error::Error>(v4);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v1, v2);
                return v29;
            }
            v26 = *((int128_t *)&v21);
            v13 = v20;
            v15 = v26;
            if (!v14)
            {
                a0.print_final_offset();
                v29 = (!(char)a1->field_18->field_60.has_error() ? 0 : 1.from());
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v1, v2);
                return v29;
            }
            if (v14 != v24)
            {
                v27 = v16 + v14;
                if (v24 <= v27)
                    v27 = v24;
                (unsigned long long)v13.zero_out_buffer(v14, v27);
            }
            if (v14 == v24 && !(v0 & 1) && (char)(unsigned long long)v13.get_buffer(0).equal(v28, v2, 0))
            {
                if (!(v25 & 1))
                {
                    v5 = &g_5014e0;
                    v7 = 1;
                    v9 = 8;
                    *((uint128_t *)&v11) = 0;
                    std::io::stdio::_print(&v5);
                }
                v25 = 1;
                *((unsigned long long *)&a0[16]) = (long long)a0[16] + v14;
                if ((*((char *)a0) & 1))
                    break;
            }
            else
            {
                if (v14 == v24)
                    (unsigned long long)v13.clone_buffer(&v1);
                v5.format_byte_offset(a0);
                uu_od::print_bytes(v7, v9, &(unsigned long long)v13);
                core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>>(v5, v7);
                *((unsigned long long *)&a0[16]) = (long long)a0[16] + v14;
                if ((*((char *)a0) & 1))
                    break;
            }
        }
        *((unsigned long long *)a0) = 1;
        *((unsigned long long *)&a0[8]) = (long long)a0[8] + v14;
    }
}
