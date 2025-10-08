long long uu_mkdir::get_mode(struct_0 *a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0xe4]
    char *v4;  // [bp-0xe0]
    unsigned int v5;  // [bp-0xdc]
    unsigned long long v6;  // [bp-0xd8]
    void* v7;  // [bp-0xd0]
    unsigned long long v8[3];  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    char *v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    unsigned long long v13;  // [bp-0x90]
    unsigned long long v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    void* v16;  // [bp-0x78], Other Possible Types: char
    unsigned long long v17;  // [bp-0x70]
    char v18;  // [bp-0x68]
    unsigned short v19;  // [bp-0x38]
    unsigned long long v21[3];  // rax
    unsigned long long v22[3];  // r14
    unsigned long long v23;  // rax
    unsigned int v24;  // ebp
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r13
    unsigned long long v30;  // rax
    char *v31;  // r12
    unsigned long long v32;  // rdx
    unsigned int v33;  // eax
    unsigned int v34;  // ecx
    unsigned int v35;  // ecx

    v16.try_get_one(a1);
    v21 = v16.unwrap();
    if (!v21)
    {
        a0->field_8 = ~((int)uucore::features::mode::get_umask()) & 511;
        a0->field_0 = 0x8000000000000000;
        return a0;
    }
    v22 = v21;
    v18.into_searcher(v21[1], v21[2]);
    v16 = 0;
    v17 = v21[2];
    v19 = 1;
    if (v16.next())
    {
        v8[0] = v22;
        v24 = 511;
        if (a2)
        {
            do
            {
                v9 = v23;
                v10 = v25;
                v0 = v23;
                v1 = v25 + v23;
                if (v0.try_fold().eq())
                {
                    uucore::features::mode::parse_numeric(&v0, v24, v22[1], v22[2], 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v34 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v0;
                        a0->field_8 = v34;
                        return a0;
                    }
                    v24 = v1;
                }
                else
                {
                    v11 = &v9;
                    v12 = <&T as core::fmt::Display>::fmt;
                    v0 = &g_4ede00;
                    v1 = 1;
                    v7 = 0;
                    v4 = &v11;
                    v6 = 1;
                    v13.map_or_else(&v0);
                    uucore::features::mode::parse_symbolic(&v0, v24, v14, v15, (unsigned int)uucore::features::mode::get_umask(), 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v35 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v0;
                        a0->field_8 = v35;
                        core::ptr::drop_in_place<alloc::string::String>(v13, v14);
                        return a0;
                    }
                    v24 = v1;
                    core::ptr::drop_in_place<alloc::string::String>(v13, v14);
                    v22 = v8;
                }
                v23 = v16.next();
            } while (v23);
        }
        else
        {
            v31 = &v16;
            do
            {
                v9 = v23;
                v10 = v32;
                v0 = v23;
                v1 = v23 + v32;
                if (v0.try_fold().eq())
                {
                    uucore::features::mode::parse_numeric(&v0, v24, v22[1], v22[2], 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v34 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v26;
                        a0->field_8 = v34;
                        return a0;
                    }
                    v24 = v1;
                }
                else
                {
                    v0.to_vec(v23, v32);
                    v28 = v1;
                    v33 = uucore::features::mode::get_umask();
                    uucore::features::mode::parse_symbolic(&v0, v24, v28, v4, v33, 1);
                    if (v0 != 0x8000000000000000)
                    {
                        v35 = v1;
                        *((unsigned int *)((char *)&a0->field_c + 4)) = v5;
                        *((long long *)&(&a0->field_8)[1]) = *((long long *)&v3);
                        a0->field_0 = v30;
                        a0->field_8 = v35;
                        core::ptr::drop_in_place<alloc::string::String>(v27, v28);
                        return a0;
                    }
                    v24 = v1;
                    core::ptr::drop_in_place<alloc::string::String>(v0, v28);
                    v22 = v8;
                }
                v23 = v31.next();
            } while (v23);
        }
    }
    else
    {
        v24 = 511;
    }
    a0->field_8 = v24;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
