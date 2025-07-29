long long uu_base32::base_common::fast_encode::fast_encode(unsigned long long a0, struct_2 *a1, unsigned long long a2, struct_1 *a3, unsigned long long a4, struct struct_0 *a5[7], char a6, void* a7)
{
    unsigned int v0;  // [bp-0x104]
    struct_1 *v1;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long long v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    void* v4;  // [sp-0xe8]
    unsigned long long v5;  // [sp-0xe0]
    struct_0 **v6;  // [bp-0xd0]
    char v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    void* v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0xa0]
    int v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x90]
    void* v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    uint128_t v16;  // [bp-0x78]
    int v17;  // [bp-0x68]
    unsigned long long v18;  // [bp-0x58]
    unsigned int v19;  // [bp-0x50]
    int v20;  // [bp-0x48], Other Possible Types: char
    char v21;  // [bp-0x38]
    unsigned long long v22;  // r12
    unsigned long long v23;  // r12
    unsigned long v24;  // cc_ndep
    unsigned long long v25;  // rdx
    char v26;  // al
    unsigned long long v27;  // rax
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax

    v22 = a5[6](a4);
    v23 = v22 * 0x400;
    if ((char)amd64g_calculate_condition(4, 32, v22 * 0x400, v22 * 0x200, v24))
        core::panicking::panic("assertion failed: encode_in_chunks_of_size > 0assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < encode_in_chunks_of_size", 46, &g_5a2ee8); /* do not return */
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
        a7 = 0;
        v2 = 0x8000000000000000;
    }
    v7.from_elem();
    if (!v9)
        core::panicking::panic("assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < encode_in_chunks_of_size", 42, &g_5a2f18); /* do not return */
    v10 = 0;
    *((uint128_t *)&v12) = 0;
    v11 = 1;
    v14 = 0;
    v16 = 0;
    v15 = 1;
    v6 = &a5[5]->field_0;
    v1 = v1->field_38;
    v0 = a6 & !a7;
    while (true)
    {
        if (a1->field_18(a0, v8))
        {
            v26 = (unsigned long long)v25.kind();
            if (v26 == 35)
            {
                ::0x4b5300::core::ptr::drop_in_place<std::io::error::Error>(v25);
            }
            else
            {
                uu_base32::base_common::format_read_error(&v20, v26);
                v19 = 1;
                v17 = v20;
                v18 = *((long long *)&v21);
                v28 = v17.new();
                ::0x4b5300::core::ptr::drop_in_place<std::io::error::Error>(v25);
                break;
            }
        }
        else if (v25)
        {
            v27 = v25.index(v8, v9);
            if (v23 - v13 > v25)
            {
                v10.spec_extend(v27, v27 + v25, &g_5a2f60);
                if (v13 >= v23)
                    core::panicking::panic("assertion failed: leftover_buffer.len() < encode_in_chunks_of_size", 66, &g_5a2f78); /* do not return */
            }
            else
            {
                v28 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(a4, v6, v23, v23 - v13, v27, v25, &v14, &v10);
                if (!(!v28))
                    goto LABEL_4b5e94;
                if (v13 >= v23)
                    core::panicking::panic("assertion failed: leftover_buffer.len() < encode_in_chunks_of_size", 66, &g_5a2f48); /* do not return */
                v29 = uu_base32::base_common::fast_encode::write_to_output(&v2, &v14, a2, v1, 0, v0);
                if (v29)
                {
                    v30 = v29.from();
                    goto LABEL_4b5e91;
                }
            }
        }
        else
        {
            v28 = v6(a4, v10.make_contiguous());
            if (!(!v28))
                goto LABEL_4b5e94;
            v31 = uu_base32::base_common::fast_encode::write_to_output(&v2, &v14, a2, v1, 1, v0);
            if (!v31)
            {
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&v14);
                core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&v10);
                ::0x4b5320::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
                core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(&v2);
                return 0;
            }
            v30 = v31.from();
LABEL_4b5e91:
            v28 = v30;
LABEL_4b5e94:
            break;
        }
    }
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&v14);
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(&v10);
    ::0x4b5320::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
    core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(&v2);
    return v28;
}
