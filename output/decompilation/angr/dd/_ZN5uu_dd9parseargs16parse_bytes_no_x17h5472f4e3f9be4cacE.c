long long uu_dd::parseargs::parse_bytes_no_x(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1[2];  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    int v3;  // [bp-0x90]
    void* v4;  // [bp-0x70]
    void* v5;  // [bp-0x60]
    unsigned short v6;  // [bp-0x50]
    char v7;  // [bp-0x4e]
    int v8;  // [bp-0x48], Other Possible Types: char
    char v9;  // [bp-0x38]
    char v11;  // al
    char v12;  // r15b
    char v13;  // al
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long v17;  // cc_ndep
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long v20;  // cc_ndep
    unsigned long long v21;  // rdx
    unsigned long v22;  // cc_ndep
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rax
    unsigned long v26;  // cc_ndep
    unsigned long long v29;  // rax
    void* v32;  // r14

    v6 = 257;
    v7 = 0;
    v4 = 0;
    v5 = 0;
    v11 = core::str::<impl str>::find(a3, a4);
    v12 = core::str::<impl str>::rfind(a3, a4, 119);
    v13 = core::str::<impl str>::rfind(a3, a4, 98);
    if ((v11 & 1))
    {
        if ((v12 & 1))
        {
            v18 = v0 + 8.to_vec(a1, a2);
            *((unsigned long long *)v0) = 7;
            return v18;
        }
        else if (!(v13 & 1))
        {
            uu_dd::parseargs::parse_bytes_only(&v1, a3, a4, v14);
            v15 = v2;
            if (v1 != 14)
            {
                v0[16] = v3;
                *((unsigned long long [2])v0) = v1;
                *((unsigned long long *)&v0[8]) = v15;
                return v15;
            }
            v32 = a0;
            v16 = v15 * 1;
            if ((char)_ccall(0, 48, v15, 1, v17))
            {
                v32 + 8.to_vec(a1, a2);
                *((unsigned long long *)v32) = v29;
                return v29;
            }
        }
        else
        {
            v18 = v0 + 8.to_vec(a1, a2);
            *((unsigned long long *)v0) = 7;
            return v18;
        }
    }
    else
    {
        if ((v12 & 1))
        {
            if ((v13 & 1))
            {
                v18 = v0 + 8.to_vec(a1, a2);
                *((unsigned long long *)v0) = 7;
                return v18;
            }
            uu_dd::parseargs::parse_bytes_only(&(char)v1, a3, a4, v19);
            v15 = v2;
            if (v1 != 14)
            {
                v0[16] = v3;
                *((unsigned long long [2])v0) = v1;
                *((unsigned long long *)&v0[8]) = v15;
                return v15;
            }
            v32 = a0;
            v16 = v15 * 2;
            if ((char)_ccall(0, 48, v15, 2, v20))
            {
                v32 + 8.to_vec(a1, a2);
                *((unsigned long long *)v32) = v29;
                return v29;
            }
        }
        else
        {
            if ((v13 & 1))
            {
                uu_dd::parseargs::parse_bytes_only(&(char)v1, a3, a4, v21);
                v15 = v2;
                if (v1 != 14)
                {
                    v0[16] = v3;
                    *((unsigned long long [2])v0) = v1;
                    *((unsigned long long *)&v0[8]) = v15;
                    return v15;
                }
                v32 = a0;
                v16 = v15 * 0x200;
                if ((char)_ccall(0, 48, v15, 0x200, v22))
                {
                    v32 + 8.to_vec(a1, a2);
                    *((unsigned long long *)v32) = v29;
                    return v29;
                }
            }
            else
            {
                v1.parse_u64(&v4, a3, a4);
                if (v1 == 2)
                {
                    v24 = 18446744073709551615;
                    v32 = a0;
                }
                else if ((unsigned int)v1 == 4)
                {
                    v32 = v0;
                }
                else
                {
                    v8.to_vec(a1, a2);
                    *((long long *)&v0[24]) = *((long long *)&v9);
                    v0[8] = v8;
                    *((unsigned long long *)v0) = 13;
                    return (unsigned long long)core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v1);
                }
                core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v1);
                v25 = v24;
                v16 = v25 * 1;
                if ((char)_ccall(0, 48, v25, 1, v26))
                {
                    v32 + 8.to_vec(a1, a2);
                    *((unsigned long long *)v32) = v29;
                    return v29;
                }
            }
        }
    }
    *((unsigned long long *)&v32[8]) = v16;
    *((unsigned long long *)v32) = 14;
    return 14;
}
