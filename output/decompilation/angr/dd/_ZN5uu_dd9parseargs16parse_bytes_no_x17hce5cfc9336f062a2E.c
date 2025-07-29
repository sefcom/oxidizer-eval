long long uu_dd::parseargs::parse_bytes_no_x(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    struct_0 *v0;  // [bp-0xa8]
    unsigned long long v1[2];  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    int v3;  // [bp-0x90]
    void* v4;  // [bp-0x70]
    void* v5;  // [bp-0x60]
    unsigned short v6;  // [bp-0x50]
    char v7;  // [bp-0x4e]
    int v8;  // [bp-0x48], Other Possible Types: char
    char v9;  // [bp-0x38]
    unsigned long long v11;  // rax
    unsigned long long v12;  // r15
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    struct_0 *v16;  // r14
    unsigned long v18;  // cc_ndep
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long v21;  // cc_ndep
    unsigned long long v22;  // rdx
    unsigned long v23;  // cc_ndep
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rax
    unsigned long v27;  // cc_ndep
    unsigned long long v30;  // rax

    v6 = 257;
    v7 = 0;
    v4 = 0;
    v5 = 0;
    v11 = core::str::<impl str>::find(a3, a4);
    v12 = core::str::<impl str>::rfind(a3, a4, 119);
    v13 = core::str::<impl str>::rfind(a3, a4, 98);
    if (v11)
    {
        if (!v12 && !v13)
        {
            uu_dd::parseargs::parse_bytes_only(&v1, a3, a4, v14);
            v15 = v2;
            if (v1 != 14)
            {
                *((void*)&v0->field_10[0]) = v3;
                *((unsigned long long [2])&v0->field_0) = v1;
                *((unsigned long long *)&v0->field_8) = v15;
                return v15;
            }
            v16 = a0;
            if (!((char)amd64g_calculate_condition(0, 48, v15, 1, v18)))
            {
                *((unsigned long long *)&v16->field_8) = v15 * 1;
                v16->field_0 = v30;
                return v30;
            }
        }
        else
        {
            v19 = v0->field_8.to_vec(a1, a2);
            v0->field_0 = 7;
            return v19;
        }
    }
    else
    {
        if (v12)
        {
            if (v13)
            {
                v19 = v0->field_8.to_vec(a1, a2);
                v0->field_0 = 7;
                return v19;
            }
            uu_dd::parseargs::parse_bytes_only(&v1, a3, a4, v20);
            v15 = v2;
            if (v1 != 14)
            {
                *((void*)&v0->field_10[0]) = v3;
                *((unsigned long long [2])&v0->field_0) = v1;
                *((unsigned long long *)&v0->field_8) = v15;
                return v15;
            }
            v16 = a0;
            if (!((char)amd64g_calculate_condition(0, 48, v15, 2, v21)))
            {
                *((unsigned long long *)&v16->field_8) = v15 * 2;
                v16->field_0 = v30;
                return v30;
            }
        }
        else
        {
            if (v13)
            {
                uu_dd::parseargs::parse_bytes_only(&v1, a3, a4, v22);
                v15 = v2;
                if (v1 != 14)
                {
                    *((void*)&v0->field_10[0]) = v3;
                    *((unsigned long long [2])&v0->field_0) = v1;
                    *((unsigned long long *)&v0->field_8) = v15;
                    return v15;
                }
                v16 = a0;
                if (!((char)amd64g_calculate_condition(0, 48, v15, 0x200, v23)))
                {
                    *((unsigned long long *)&v16->field_8) = v15 * 0x200;
                    v16->field_0 = v30;
                    return v30;
                }
            }
            else
            {
                (char)v1.parse_u64(&v4, a3, a4);
                if (v1 == 2)
                {
                    v25 = 18446744073709551615;
                    v16 = a0;
                }
                else if ((unsigned int)v1 == 4)
                {
                    v16 = v0;
                }
                else
                {
                    v8.to_vec(a1, a2);
                    v0->field_10[1] = *((long long *)&v9);
                    *((void*)&v0->field_8) = v8;
                    v0->field_0 = 13;
                    return (unsigned long long)core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&(char)v1);
                }
                core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&(char)v1);
                v26 = v25;
                if (!((char)amd64g_calculate_condition(0, 48, v26, 1, v27)))
                {
                    *((unsigned long long *)&v16->field_8) = v26 * 1;
                    v16->field_0 = v30;
                    return v30;
                }
            }
        }
    }
    v16->field_8.to_vec(a1, a2);
    v16->field_0 = 8;
    return 8;
}
