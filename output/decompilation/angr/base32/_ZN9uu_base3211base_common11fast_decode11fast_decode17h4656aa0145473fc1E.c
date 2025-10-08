long long uu_base32::base_common::fast_decode::fast_decode(unsigned long long a0, struct_2 *a1, unsigned long long a2, struct_0 *a3, unsigned long long a4, struct_6 *a5, char a6)
{
    void* v0;  // [bp-0x1f0]
    unsigned long long v1;  // [bp-0x1e8]
    void* v2;  // [bp-0x1e0]
    void* v3;  // [bp-0x1d8]
    unsigned long long v4;  // [bp-0x1d0]
    void* v5;  // [bp-0x1c8]
    void* v6;  // [bp-0x1c0]
    unsigned long long v7;  // [bp-0x1b8]
    void* v8;  // [bp-0x1b0]
    unsigned long v9;  // [bp-0x1a8]
    struct_4 **v10;  // [bp-0x198]
    char v11;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x180]
    unsigned long long v13;  // [bp-0x178]
    unsigned long long v14;  // [bp-0x178]
    char *v15;  // [bp-0x168]
    int v16;  // [bp-0x168]
    unsigned long long v17;  // [bp-0x160]
    unsigned long long v18;  // [bp-0x158]
    unsigned int v19;  // [bp-0x150]
    int v20;  // [bp-0x148], Other Possible Types: char
    unsigned long long v21;  // [bp-0x138]
    char v22;  // [bp-0x130]
    char *v23;  // rax
    unsigned long long v24;  // r13
    unsigned long long v25;  // r13
    unsigned long v26;  // cc_ndep
    void* v27;  // rdx
    unsigned long long v28;  // r15
    char v29;  // al
    char *v30;  // rax
    char *v31;  // r15
    char *v32;  // r15
    void* v33;  // rdx
    char *v34;  // rax
    unsigned long v35;  // rcx
    void* v37;  // r12
    char *v38;  // r15
    void* v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v44;  // rax
    unsigned long long v47;  // rbx

    v23 = a5->field_18(a4);
    v24 = a5->field_38(a4);
    v25 = v24 * 0x400;
    if ((char)_ccall(4, 32, v24 * 0x400, v24 * 0x200, v26))
        core::panicking::panic("assertion failed: decode_in_chunks_of_size > 0assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 46, &g_50e380); /* do not return */
    uu_base32::base_common::fast_decode::alphabet_to_table(&v22, v23, v27, a6);
    v11.from_elem(&g_50e398);
    if (!v14)
        core::panicking::panic("assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < encode_in_chunks_of_sizeassertion failed: table[us]assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 42, &g_50e3b0); /* do not return */
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    v8 = 0;
    v10 = a5->field_20;
    v9 = a3->field_38;
    v13 = v14;
    while (true)
    {
        v28 = v13;
        v47 = v12;
        if (((char)a1->field_18(a0, v47, v28) & 1))
        {
            v29 = (unsigned long long)v27.kind();
            if (v29 == 35)
            {
                core::ptr::drop_in_place<std::io::error::Error>(v27);
            }
            else
            {
                uu_base32::base_common::format_read_error(&v20, v29);
                v19 = 1;
                v16 = v20;
                v18 = v21;
                v39 = v15.new();
                core::ptr::drop_in_place<std::io::error::Error>(v27);
                v47 = v12;
LABEL_46ad04:
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v6, v7);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v4);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
                break;
            }
        }
        else if (v27)
        {
            v30 = v27.index(v47, v28, &g_50e3c8);
            v31 = v30;
            v15 = v30;
            v17 = v30 + v27;
            v32 = v31;
            v33 = v27;
            if (v15.any(&v22))
            {
                v8 = 0;
                if (!!v31 && !!v27)
                {
                    v34 = &v31[1 + -1 * (v27 < 1)];
                    while (true)
                    {
                        v35 = *(v31);
                        v31 = v34;
                        if ((&v22)[v35])
                            v6.push(v35 & 255, &g_50e410);
                        if (!v31)
                            break;
                        v34 = &v31[v31 != v17];
                        if (v31 == v17)
                            break;
                    }
                }
                v32 = v7;
                v33 = 0;
            }
            v37 = v33;
            v38 = v32;
            if (v25 - v2 > v37)
            {
                v0.spec_extend(v38, v37 + v38);
                if (v2 >= v25)
                    core::panicking::panic("assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 66, &g_50e3f8); /* do not return */
            }
            else
            {
                v39 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(a4, v10, v25, v25 - v2, v38, v37, &v3, &v0);
                if (v39)
                    goto LABEL_46ac9f;
                if (v2 >= v25)
                    core::panicking::panic("assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 66, &g_50e3e0); /* do not return */
                v40 = (unsigned long long)uu_base32::base_common::fast_decode::write_to_output(&v3, a2, v9);
                if (v40)
                {
                    v39 = v40.from();
                    goto LABEL_46ac9c;
                }
            }
        }
        else
        {
            v39 = v10(a4, v1, v2, &v3);
            if (v39)
                goto LABEL_46ac9f;
            v44 = (unsigned long long)uu_base32::base_common::fast_decode::write_to_output(&v3, a2, v9);
            if (v44)
            {
                v39 = v44.from();
LABEL_46ac9c:
LABEL_46ac9f:
                goto LABEL_46ad04;
            }
            else
            {
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v6, v7);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v3, v4);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
                v39 = 0;
                break;
            }
        }
        v13 = v14;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v11, v47);
    return v39;
}
