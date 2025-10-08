void uu_more::Pager::new(unsigned long a0, unsigned long long a1, unsigned int a2, struct_0 *a3)
{
    unsigned long v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa8]
    void* *v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    struct_2 *v4;  // [bp-0x88]
    void* v5;  // [bp-0x80], Other Possible Types: char
    unsigned long long v6;  // [bp-0x78]
    void* v7;  // [bp-0x70]
    struct_0 *v8;  // [bp-0x38]
    struct_0 *v10;  // r15
    unsigned long long v11;  // r13
    void* *v12;  // rax
    unsigned long v13;  // 4106
    unsigned long long v14;  // rbx
    void* v15;  // r12
    struct_0 *v16;  // rbp
    unsigned long long v17;  // rdx
    unsigned long long v18;  // cc_ndep
    void* v19;  // r12
    char v20;  // al
    unsigned long v21;  // cc_dep1
    void* v22;  // r12
    void* v23;  // r12
    void* v24;  // r12
    void* v25;  // r12
    void* v26;  // r12
    unsigned long long v27;  // rdx
    unsigned long v28;  // rcx
    unsigned long long v29;  // r14
    struct_0 *v30;  // r12
    unsigned long long v31;  // rax
    unsigned short v32;  // cx

    v10 = a3;
    v5.with_capacity(a1);
    v11 = v5.new();
    v12 = 8.alloc_impl(8);
    if (!v12)
        alloc::alloc::handle_alloc_error(8, 8); /* do not return */
    *(v12) = 0;
    v1 = 1;
    v2 = v12;
    v3 = 1;
    v5 = 0;
    v6 = 1;
    v13 = a3->field_0;
    v8 = a3;
    if ((char)(((0 ^ v13) & (0 ^ -(v13))) >> 63))
    {
        v14 = 0;
        v10 = &v1;
        v15 = 0;
        v16 = 0;
        while (true)
        {
            v7 = 0;
            if (((char)std::io::append_to_string(&v5, v11) & 1))
                break;
            if (!v17)
                goto LABEL_0x472114;
            v18 = _ccall(20, v17, 0, v18);
            v16 = (char *)&v16->field_0 + 1;
            v15 += v17;
            v1.push(v15);
        }
    }
    else
    {
        v0 = v11;
        if (a3->field_10)
        {
            v14 = 0;
            v19 = 0;
            v16 = 0;
            while (true)
            {
                v7 = 0;
                if (((char)std::io::append_to_string(&v5, v0) & 1))
                {
                    v11 = v0;
                    goto LABEL_472185;
                }
                if (v17)
                {
                    v19 += v17;
                    v1.push(v19);
                    if (!v14)
                    {
                        v20 = a3->field_8.is_contained_in(a3->field_10, v6, 0);
                        v21 = v20;
                        if (v20)
                            v10 = v16;
                        v14 = ((char)v21 ? 1 : 0);
                        v18 = _ccall(17, v21, 0, v18);
                        v16 = (char *)&v16->field_0 + 1;
                    }
                    else
                    {
                        v18 = _ccall(20, v14, 0, v18);
                        v16 = (char *)&v16->field_0 + 1;
                        v11 = v0;
                        while (true)
                        {
                            v22 = v19;
                            v7 = 0;
                            if (((char)std::io::append_to_string(&v5, v11) & 1))
                                break;
                            if (v17)
                            {
                                v23 = v22 + v17;
                                v1.push(v23);
                                v18 = (v22 + v17 <= v22 ? 1 : 0);
                                v16 = (char *)&v16->field_0 + 1;
                                v19 = v23;
                            }
                            else
                            {
                                v14 = 1;
                                goto LABEL_472175;
                            }
                        }
                        goto LABEL_472185;
                    }
                }
                else
                {
                    v11 = v0;
                    goto LABEL_472175;
                }
            }
LABEL_472175:
            v27 = v11.rewind();
            if (!v27)
            {
                v28 = a2;
                v29 = ((char)_ccall(2, 6, v28 & 65535, 1, v18) ? 0 : (unsigned int)v28 & 0xffff0000 | (unsigned short)v28 - 1);
                v30 = v8;
                v0 = v30->field_18;
                v31 = v29.with_capacity_in(8, 24, &g_524198);
                *((unsigned long long *)((char *)&v4->field_28 + 8)) = 1;
                *((int128_t *)&(&v4->field_20)[1]) = *((int128_t *)&v1);
                v32 = v30->field_26;
                v4->field_0 = v14;
                v4->field_8 = v10;
                v4->field_10 = v31;
                v4->field_18 = v17;
                v4->field_20 = 0;
                v4->field_38 = v11;
                v4->field_40 = &g_5240e0;
                v4->field_48 = v0;
                v4->field_50 = v29;
                v4->field_58 = 0;
                *((struct_0 **)&v4->padding_68[0]) = v16;
                v4->field_70 = 0;
                *((unsigned short *)&v4->field_78) = v32;
                core::ptr::drop_in_place<alloc::string::String>(v5, v6);
                return;
            }
        }
        else
        {
            v14 = 0;
            v10 = &v1;
            v24 = 0;
            v16 = 0;
            v11 = v0;
            while (true)
            {
                v25 = v24;
                v7 = 0;
                if (((char)std::io::append_to_string(&v5, v11) & 1))
                    break;
                if (!v17)
                    goto LABEL_0x472114;
                v26 = v25 + v17;
                v1.push(v26);
                v18 = (v25 + v17 <= v25 ? 1 : 0);
                v16 = (char *)&v16->field_0 + 1;
                v24 = v26;
            }
        }
    }
LABEL_472185:
    v4->field_8 = v27.from();
    v4->field_10 = v17;
    v4->field_0 = 2;
    core::ptr::drop_in_place<alloc::string::String>(v5, v6);
    core::ptr::drop_in_place<alloc::vec::Vec<u64>>(v1, v2);
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::buffered::bufreader::BufReader<std::io::cursor::Cursor<alloc::string::String>>>>(v11);
    return;
}
