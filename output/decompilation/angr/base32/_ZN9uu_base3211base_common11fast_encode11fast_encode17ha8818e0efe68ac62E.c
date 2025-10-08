long long uu_base32::base_common::fast_encode::fast_encode(unsigned long long a0, struct_1 *a1, unsigned long long a2, struct_5 *a3, unsigned long long a4, struct_4 *a5, char a6, unsigned long long a7)
{
    unsigned int v0;  // [bp-0x104]
    struct_5 *v1;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long long v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    void* v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    struct_2 **v6;  // [bp-0xd0]
    void* v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    int v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    char v11;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x90]
    void* v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    uint128_t v16;  // [bp-0x78]
    int v17;  // [bp-0x68]
    unsigned long long v18;  // [bp-0x58]
    unsigned int v19;  // [bp-0x50]
    int v20;  // [bp-0x48], Other Possible Types: char
    char v21;  // [bp-0x38]
    unsigned long long v22;  // r13
    unsigned long long v23;  // r13
    unsigned long v24;  // cc_ndep
    unsigned long long v25;  // rbp
    unsigned long long v26;  // r15
    char v27;  // al
    unsigned long long v28;  // rax
    void* v29;  // rbp
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    void* v32;  // rax
    unsigned long long v33;  // rax

    v22 = a5->field_30(a4);
    v23 = v22 * 0x400;
    if ((char)_ccall(4, 32, v22 * 0x400, v22 * 0x200, v24))
        core::panicking::panic("assertion failed: encode_in_chunks_of_size > 0assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < encode_in_chunks_of_sizeassertion failed: table[us]assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 46, &g_50e248); /* do not return */
    v1 = a3;
    if (!(a6 & 1))
    {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v5 = 76;
    }
    else if (a7)
    {
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v5 = a7;
    }
    else
    {
        v2 = 0x8000000000000000;
    }
    v11.from_elem(&g_50e260);
    v25 = v13;
    if (!v13)
        core::panicking::panic("assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < encode_in_chunks_of_sizeassertion failed: table[us]assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 42, &g_50e278); /* do not return */
    v7 = 0;
    *((uint128_t *)&v9) = 0;
    v8 = 1;
    v14 = 0;
    v16 = 0;
    v15 = 1;
    v6 = a5->field_28;
    v1 = v1->field_38;
    v0 = a6 & !a7;
    while (true)
    {
        v26 = v12;
        if (((char)a1->field_18(a0, v26, v25) & 1))
        {
            v27 = (unsigned long long)v31.kind();
            if (v27 == 35)
            {
                core::ptr::drop_in_place<std::io::error::Error>(v31);
            }
            else
            {
                uu_base32::base_common::format_read_error(&v20, v27);
                v19 = 1;
                v17 = v20;
                v18 = *((long long *)&v21);
                v29 = v17.new();
                core::ptr::drop_in_place<std::io::error::Error>(v31);
                v26 = v12;
                break;
            }
        }
        else if (v31)
        {
            v28 = v31.index(v26, v25, &g_50e290);
            if (v23 - v10 > v31)
            {
                v7.spec_extend(v28, v28 + v31, &g_50e2c0);
                if (v10 >= v23)
                    core::panicking::panic("assertion failed: leftover_buffer.len() < encode_in_chunks_of_sizeassertion failed: table[us]assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 66, &g_50e2d8); /* do not return */
            }
            else
            {
                v29 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(a4, v6, v23, v23 - v10, v28, v31, &v14, &v7);
                if (v29)
                    goto LABEL_46a479;
                if (v10 >= v23)
                    core::panicking::panic("assertion failed: leftover_buffer.len() < encode_in_chunks_of_sizeassertion failed: table[us]assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 66, &g_50e2a8); /* do not return */
                v30 = uu_base32::base_common::fast_encode::write_to_output(&v2, &v14, a2, v1, 0, v0);
                if (v30)
                {
                    v32 = v30.from();
                    goto LABEL_46a476;
                }
            }
        }
        else
        {
            v29 = v6(a4, v7.make_contiguous());
            if (v29)
                goto LABEL_46a479;
            v33 = uu_base32::base_common::fast_encode::write_to_output(&v2, &v14, a2, v1, 1, v0);
            if (v33)
            {
                v32 = v33.from();
LABEL_46a476:
                v29 = v32;
LABEL_46a479:
                break;
            }
            else
            {
                v29 = 0;
                break;
            }
        }
        v25 = v13;
    }
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&v14);
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&v7);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v11, v26);
    core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(v2, v3);
    return v29;
}
