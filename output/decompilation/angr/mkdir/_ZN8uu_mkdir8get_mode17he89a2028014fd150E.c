long long uu_mkdir::get_mode(struct_0 *a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0xf4]
    char *v4;  // [bp-0xf0]
    unsigned int v5;  // [bp-0xec]
    unsigned long long v6;  // [bp-0xe8]
    void* v7;  // [bp-0xe0]
    int v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    char *v10;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xb0]
    unsigned long long v12;  // [bp-0xa8]
    char *v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x98]
    int v15;  // [bp-0x90]
    unsigned long long v16;  // [bp-0x80]
    void* v17;  // [bp-0x78], Other Possible Types: char
    unsigned long v18;  // [bp-0x70]
    char v19;  // [bp-0x68]
    unsigned short v20;  // [bp-0x38]
    unsigned long long v22[3];  // rax
    unsigned long long v23[3];  // r14
    unsigned long long v24;  // rax
    unsigned long long v25;  // r13
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rbx
    unsigned long long v33;  // rdx
    unsigned int v35;  // ecx
    unsigned int v37;  // ecx
    unsigned int v39;  // ebp

    v17.try_get_one(a1, "modesizei128", 4);
    v22 = "modesizei128".unwrap(4, &v17);
    if (!v22)
    {
        a0->field_8 = ~((int)uucore::features::mode::get_umask()) & 511;
        a0->field_0 = 0x8000000000000000;
        return a0;
    }
    v23 = v22;
    v19.into_searcher(v22[1], v22[2]);
    v17 = 0;
    v18 = v22[2];
    v20 = 1;
    v24 = v17.next();
    if (v24)
    {
        v25 = v24;
        if (a2)
        {
            v39 = 511;
            do
            {
                v11 = v25;
                v12 = v27;
                v0 = v25;
                v1 = v27 + v25;
                if (v0.try_fold().eq())
                {
                    uucore::features::mode::parse_numeric(&v0, v39, v23[1], v23[2], 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v35 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v0;
                        a0->field_8 = v35;
                        return a0;
                    }
                    v39 = v1;
                }
                else
                {
                    v13 = &v11;
                    v14 = <&T as core::fmt::Display>::fmt;
                    v0 = &g_57f488;
                    v1 = 1;
                    v7 = 0;
                    v4 = &v13;
                    v6 = 1;
                    v15.map_or_else(&v0);
                    v10 = v16;
                    v8 = v15;
                    uucore::features::mode::parse_symbolic(&v0, v39, v9, v16, (unsigned int)uucore::features::mode::get_umask(), 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v37 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v0;
                        a0->field_8 = v37;
                        ::0x4a0320::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                        return a0;
                    }
                    v39 = v1;
                    ::0x4a0320::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                }
                v25 = v17.next();
                v26 = v26;
            } while (v25);
        }
        else
        {
            v39 = 511;
            do
            {
                v31 = v27;
                v11 = v25;
                v12 = v31;
                v0 = v25;
                v1 = v31 + v25;
                if (v0.try_fold().eq())
                {
                    uucore::features::mode::parse_numeric(&v0, v39, v23[1], v23[2], 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v35 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v28;
                        a0->field_8 = v35;
                        return a0;
                    }
                    v39 = v1;
                }
                else
                {
                    v0.to_vec(v25, v31);
                    v10 = v4;
                    *((int128_t *)&v8) = *((int128_t *)&v0);
                    uucore::features::mode::parse_symbolic(&v0, v39, v9, v10, (unsigned int)uucore::features::mode::get_umask(), 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v37 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v30;
                        a0->field_8 = v37;
                        ::0x4a0320::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                        return a0;
                    }
                    v39 = v1;
                    ::0x4a0320::core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
                }
                v25 = v17.next();
                v27 = v33;
            } while (v25);
        }
    }
    else
    {
        v39 = 511;
    }
    a0->field_8 = v39;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
