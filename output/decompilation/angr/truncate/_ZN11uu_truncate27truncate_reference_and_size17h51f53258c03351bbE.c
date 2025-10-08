long long uu_truncate::truncate_reference_and_size(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3], unsigned long a5, char a6)
{
    char v0;  // [bp-0x158]
    unsigned int v1;  // [bp-0x150]
    char v2;  // [bp-0x148]
    char *v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    char v5;  // [bp-0x128]
    char v6;  // [bp-0x118]
    char v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf0]
    char v9;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xe0]
    char *v11;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0xd0], Other Possible Types: unsigned int
    void* v13;  // [bp-0xc8]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // r12
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax

    uu_truncate::parse_mode_and_size(&v0, a2, a3);
    if (*((int *)&v0) == 4)
    {
        if (v1)
        {
            if (v1 != 5 && v1 != 6 || *((long long *)&v2))
            {
                std::fs::metadata(&v9, a0, a1);
                if (*((int *)&v9) == 2)
                {
                    v14 = uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v10);
                }
                else
                {
                    v15 = (unsigned long long)v1.to_size();
                    v16 = a5 * 24;
                    do
                    {
                        if (!v16)
                            return 0;
                        v14 = uu_truncate::file_truncate(a4[1], a4[2], a6, v15);
                        v16 -= 24;
                        a4 += 1;
                    } while (!v14);
                }
                return v14;
            }
            v17 = "division by zero";
            v18 = 16;
        }
        else
        {
            v17 = "you must specify a relative '--size' with '--reference'cannot stat : No such file or directory";
            v18 = 55;
        }
        v9.to_vec(v17, v18);
        v12 = 1;
        v19 = v9.new();
    }
    else
    {
        memcpy(&v6, &v2, 16);
        memcpy(&v5, &v0, 16);
        v3 = &v5;
        v4 = <uucore::features::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
        v9 = &g_4e40e8;
        v10 = 1;
        v13 = 0;
        v11 = &v3;
        v12 = 1;
        v7.map_or_else(&v9);
        v12 = 1;
        memcpy(&v9, &v7, 16);
        v11 = v8;
        v19 = v9.new();
        core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&v5);
    }
    return v19;
}
