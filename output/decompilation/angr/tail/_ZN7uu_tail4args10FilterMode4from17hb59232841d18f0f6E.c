long long uu_tail::args::FilterMode::from(unsigned long long a0[3], unsigned long long a1)
{
    int v0;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    int v1;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xd0]
    char *v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xb8]
    char v6;  // [bp-0xa8]
    int v7;  // [bp-0x98], Other Possible Types: char
    char *v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    int v10;  // [bp-0x78], Other Possible Types: char
    int v11;  // [bp-0x68]
    int v12;  // [bp-0x58], Other Possible Types: char
    unsigned long long v13;  // [bp-0x48]
    int v14;  // [bp-0x40], Other Possible Types: char
    char v15;  // [bp-0x30]
    char v17;  // bpl
    unsigned long long v18[3];  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22[3];  // rax
    unsigned long long v23;  // rcx

    v17 = a1.get_flag("zero-terminatedbyteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 15);
    v0.try_get_one(a1, "byteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 5);
    v18 = "byteslinescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ".unwrap(5, &v0);
    if (v18)
    {
        uu_tail::args::parse_num(&v6, v18[1], v18[2]);
        if (*((int *)&v6) != 4)
        {
            v11 = v7;
            memcpy(&v10, &v6, 16);
            v8 = &v10;
            v9 = <uucore::features::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
            v1 = &g_572ec8;
            v2 = 2;
            v5 = 0;
            v3 = &v8;
            v4 = 1;
            v12.map_or_else(&v1);
            v4 = 1;
            v0 = v12;
            v3 = v13;
            *((double *)&a0[1]) = v1.new();
            a0[2] = &g_572f18;
            a0[0] = 5;
            return (unsigned long long)core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&v10);
        }
        v19 = *((long long *)&v7);
        v20 = 4;
    }
    else
    {
        v0.try_get_one(a1, "linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ", 5);
        v22 = "linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rsinvalid maximum number of unchanged stats between opens: invalid PID: : ".unwrap(5, &v0);
        if (v22)
        {
            uu_tail::args::parse_num(&v6, v22[1], v22[2]);
            if (*((int *)&v6) != 4)
            {
                v11 = v7;
                memcpy(&v10, &v6, 16);
                v8 = &v10;
                v9 = <uucore::features::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
                v0 = &g_572ee8;
                v2 = 1;
                v5 = 0;
                v3 = &v8;
                v4 = 1;
                v14.map_or_else(&v0);
                v4 = 1;
                v1 = v14;
                v3 = *((long long *)&v15);
                v21 = v0.new();
                a0[1] = v21;
                a0[2] = &g_572f18;
                a0[0] = 5;
                return (unsigned long long)core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&v10);
            }
            v23 = (long long)v7;
            v19 = (v17 ? 0 : 10);
        }
        else
        {
            v20 = 0;
            v23 = 10;
            v19 = (v17 ? 0 : 10);
        }
    }
    a0[0] = v20;
    a0[1] = v23;
    a0[2] = v19;
    return v20;
}
