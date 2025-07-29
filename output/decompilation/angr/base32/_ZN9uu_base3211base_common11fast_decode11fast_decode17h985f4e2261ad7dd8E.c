long long uu_base32::base_common::fast_decode::fast_decode(unsigned long long a0, struct_2 *a1, unsigned long long a2, struct_0 *a3, unsigned long long a4, struct struct_1 *a5[8], char a6)
{
    unsigned long long v0;  // [bp-0x200]
    void* v1;  // [bp-0x1f8]
    unsigned long long v2;  // [bp-0x1f0]
    void* v3;  // [bp-0x1e8]
    void* v4;  // [bp-0x1e0]
    unsigned long long v5;  // [bp-0x1d8]
    void* v6;  // [bp-0x1d0]
    void* v7;  // [bp-0x1c8]
    unsigned long long v8;  // [bp-0x1c0]
    void* v9;  // [bp-0x1b8]
    unsigned long v10;  // [bp-0x1b0]
    struct_1 **v11;  // [bp-0x1a0]
    char v12;  // [bp-0x190]
    unsigned long long v13;  // [bp-0x188]
    unsigned long long v14;  // [bp-0x180]
    int v15;  // [sp-0x178]
    unsigned long long v16;  // [bp-0x170]
    unsigned long long v17;  // [bp-0x168]
    unsigned int v18;  // [bp-0x160]
    int v19;  // [bp-0x148], Other Possible Types: char
    unsigned long long v20;  // [bp-0x138]
    char v21;  // [bp-0x130]
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long v24;  // cc_ndep
    unsigned long v25;  // rdx
    char v26;  // al
    unsigned long long v27;  // rax
    void* v28;  // r14
    unsigned long long v29;  // r15
    char *v30;  // rax
    unsigned long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rcx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v40;  // rax
    unsigned long long v46;  // [bp-0x178]

    v22 = a5[3](a4);
    v23 = a5[7](a4);
    v0 = v23 * 0x400;
    if ((char)amd64g_calculate_condition(4, 32, v23 * 0x400, v23 * 0x200, v24))
        core::panicking::panic("assertion failed: decode_in_chunks_of_size > 0assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < decode_in_chunks_of_size/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs", 46, &g_5a3138); /* do not return */
    uu_base32::base_common::fast_decode::alphabet_to_table(&v21, v22, v25, a6);
    v12.from_elem();
    if (!v14)
        core::panicking::panic("assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < decode_in_chunks_of_size/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs", 42, &g_5a3168); /* do not return */
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = 0;
    v5 = 1;
    v6 = 0;
    v7 = 0;
    v8 = 1;
    v9 = 0;
    v11 = &a5[4]->field_0;
    v10 = a3->field_38;
    while (true)
    {
        if (a1->field_18(a0, v13))
        {
            v26 = (unsigned long long)v25.kind();
            if (v26 == 35)
            {
                ::0x4b61b0::core::ptr::drop_in_place<std::io::error::Error>(v25);
            }
            else
            {
                uu_base32::base_common::format_read_error(&v19, v26);
                v18 = 1;
                v15 = v19;
                v17 = v20;
                v36 = v46.new();
                ::0x4b61b0::core::ptr::drop_in_place<std::io::error::Error>(v25);
                break;
            }
        }
        else
        {
            if (!v25)
            {
                v36 = v11(a4, 1, v3, &v4);
                if (!(!v36))
                    goto LABEL_4b6d82;
                v40 = (unsigned long long)uu_base32::base_common::fast_decode::write_to_output(&v4, a2, v10);
                if (!v40)
                {
                    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
                    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
                    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
                    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v12);
                    return 0;
                }
                v36 = v40.from();
LABEL_4b6d7f:
LABEL_4b6d82:
                break;
            }
            v27 = v25.index(v13, v14);
            v28 = v25;
            v29 = v27;
            v46 = v27;
            v16 = v27 + v25;
            if (v46.any(&v21))
            {
                v28 = 0;
                v46 = v29;
                if (!v46.next())
                {
                    v28 = 0;
                }
                else
                {
                    do
                    {
                        v31 = *(v30);
                        if ((&v21)[v31])
                            v7.push(v31 & 255);
                        v30 = v46.next();
                    } while (v30);
                }
                v32 = v0;
                v29 = 1;
                v33 = v32 - v3;
                if (v33 <= v28)
                    goto LABEL_4b6c74;
                goto LABEL_4b6c29;
            }
            else
            {
                v32 = v0;
                v33 = v32 - v3;
                if (v33 > v25)
                {
LABEL_4b6c29:
                    v1.spec_extend(v29, v28 + v29, &g_5a31b0);
                    if (v3 >= v0)
                        core::panicking::panic("assertion failed: leftover_buffer.len() < decode_in_chunks_of_size/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs", 66, &g_5a31c8); /* do not return */
                }
                else
                {
LABEL_4b6c74:
                    v36 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(a4, v11, v32, v33, v29, v28, &v4, &v1);
                    if (!(!v36))
                        goto LABEL_4b6d82;
                    if (v3 >= v0)
                        core::panicking::panic("assertion failed: leftover_buffer.len() < decode_in_chunks_of_size/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs", 66, &g_5a3198); /* do not return */
                    v37 = (unsigned long long)uu_base32::base_common::fast_decode::write_to_output(&v4, a2, v10);
                    if (v37)
                    {
                        v36 = v37.from();
                        goto LABEL_4b6d7f;
                    }
                }
            }
        }
    }
    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v1);
    ::0x4b61d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v12);
    return v36;
}
