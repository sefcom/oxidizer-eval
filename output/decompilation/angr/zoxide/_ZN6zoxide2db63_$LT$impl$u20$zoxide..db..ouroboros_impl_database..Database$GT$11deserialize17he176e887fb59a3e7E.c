long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::deserialize(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned int v1;  // [bp-0xb4]
    char v2;  // [bp-0xb0], Other Possible Types: unsigned long
    unsigned int v3;  // [bp-0xac]
    unsigned long long v4;  // [bp-0xa8]
    char *v5;  // [bp-0xa0], Other Possible Types: unsigned long long
    int v6;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x90]
    char *v8;  // [bp-0x80], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [bp-0x78]
    unsigned long v10;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x68]
    char v12;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    char v16;  // [bp-0x40]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v0 = 0x2000000;
    v19 = bincode::internal::serialized_size(&v0).unwrap(v18);
    if (a2 >= v19)
    {
        core::slice::<impl [T]>::split_at_unchecked(&v12, a1, a2, v19);
        bincode::internal::deserialize_seed(&v2, v12, v13, &v0);
        if (*((int *)&v2) != 1)
        {
            if (v3 == 3)
            {
                bincode::internal::deserialize_seed(&v2, v14, v15);
                v8.context(&v2);
                v20 = v9;
                if (v8 != 0x8000000000000000)
                {
                    a0[0] = v8;
                    a0[1] = v9;
                    a0[2] = v10;
                    return v9;
                }
            }
            else
            {
                v1 = v3;
                v8 = &v1;
                v9 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v10 = &g_418e14;
                v11 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                v2 = &g_534b00;
                v4 = 3;
                v7 = 0;
                v5 = &v8;
                v6 = 2;
                v16.map_or_else(0, a2, &v2);
                v20 = v16.msg();
            }
            a0[1] = v20;
            a0[0] = 0x8000000000000000;
            return v20;
        }
        v21 = v4.from();
    }
    else
    {
        v2 = &g_534af0;
        v4 = 1;
        v5 = 8;
        *((uint128_t *)&v6) = 0;
        v21 = anyhow::__private::format_err(&(char)v2);
    }
    a0[1] = v21;
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
