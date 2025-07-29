void uu_tail::args::FilterMode::from(unsigned long long a0[3], unsigned long long a1)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x170]
    char *v2;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x160], Other Possible Types: unsigned int
    void* v4;  // [bp-0x158]
    int v5;  // [bp-0x148], Other Possible Types: char
    unsigned long long v6;  // [bp-0x138]
    char v7;  // [bp-0x128]
    char v8;  // [bp-0x118]
    int v9;  // [bp-0x108], Other Possible Types: void*
    int v10;  // [bp-0x100]
    char v11;  // [bp-0xf8]
    char v12;  // [bp-0xf0]
    char *v13;  // [bp-0xe0]
    unsigned long long v14;  // [bp-0xd8]
    char v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc0]
    int v17;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v18;  // [bp-0xa8]
    char v19;  // [bp-0xa0]
    unsigned long long v20;  // [bp-0x90]
    int v21;  // [bp-0x88]
    unsigned long long v22;  // [bp-0x78]
    int v23;  // [bp-0x70]
    unsigned long long v24;  // [bp-0x60]
    int v25;  // [bp-0x58]
    unsigned long long v26;  // [bp-0x48]
    char v27;  // [bp-0x40]
    unsigned long long v28;  // [bp-0x30]
    char v30;  // bpl
    unsigned long long v31[3];  // rax
    unsigned long long v33;  // r14
    struct_0 *v34;  // rax
    unsigned long long v35;  // r15
    unsigned long long v36;  // r12
    unsigned long long v37;  // r12

    v30 = a1.get_flag("zero-terminatedbytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 15);
    v0.try_get_one(a1, "bytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 5);
    v31 = "bytestail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs".unwrap(5, &v0);
    if (v31)
    {
        uu_tail::args::parse_num(&v7, v31[1], v31[2]);
        if (*((int *)&v7) != 4)
        {
            memcpy(&v11, &v8, 16);
            *((int128_t *)&v9) = *((int128_t *)&v7);
            v0.to_vec("arg'", 3);
            v6 = v2;
            memcpy(&v5, &v0, 16);
            v13 = &(char)v9;
            v14 = <uucore::features::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
            v0 = &g_636158;
            v1 = 2;
            v4 = 0;
            v2 = &v13;
            v3 = 1;
            v17.map_or_else(&v0);
            v21 = v5;
            v22 = v6;
            v23 = v17;
            v24 = v18;
            v0.from_iter(&v21);
            uucore::mods::locale::get_message_with_args(&v15, "tail-error-invalid-number-of-byteslinestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 34, &v0);
            v3 = 1;
            memcpy(&v0, &v15, 16);
            v2 = v16;
            *((double *)&a0[1]) = v0.new();
            a0[2] = &g_636198;
            a0[0] = 5;
            core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&(char)v9);
            return;
        }
        v33 = 4;
        v33 = *((long long *)&v8);
    }
    else
    {
        v0.try_get_one(a1, "linestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 5);
        v34 = "linestail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs".unwrap(5, &v0);
        if (v34)
        {
            uu_tail::args::parse_num(&v7, *((long long *)&v34->field_8), *((long long *)&v34[1].padding_0[7]));
            if (*((int *)&v7) != 4)
            {
                v0.to_vec("arg'", 3);
                v6 = v2;
                memcpy(&v5, &v0, 16);
                v9 = 0;
                *((int128_t *)&v10) = *((int128_t *)&v34->field_8);
                v12 = 1;
                v0.spec_to_string(&v9);
                v26 = v6;
                v25 = v5;
                memcpy(&v27, &v0, 16);
                v28 = v2;
                v0.from_iter(&v25);
                uucore::mods::locale::get_message_with_args(&v19, "tail-error-invalid-number-of-linescannot convert float seconds to Duration: value is negativecannot convert float seconds to Duration: value is either too big or NaNsrc/uu/tail/src/args.rs", 34, &v0);
                v3 = 1;
                memcpy(&v0, &v19, 16);
                v2 = v20;
                *((double *)&a0[1]) = v0.new();
                a0[2] = &g_636198;
                a0[0] = 5;
                core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v7);
                return;
            }
            v35 = *((long long *)&v8);
            v36 = (v30 ? 0 : 10);
            core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v7);
            v33 = v36;
        }
        else
        {
            v33 = 0;
            v35 = 10;
        }
    }
    v37 = v33;
    a0[0] = v33;
    a0[1] = v35;
    a0[2] = v37;
    return;
}
