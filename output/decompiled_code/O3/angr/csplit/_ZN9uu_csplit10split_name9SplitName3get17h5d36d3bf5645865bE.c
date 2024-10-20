long long uu_csplit::split_name::SplitName::get::h5d36d3bf5645865b(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2)
{
    unsigned long v0;  // [sp-0x68], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x60]
    unsigned long long v2;  // [sp-0x58]
    void* v3;  // [sp-0x50], Other Possible Types: unsigned long long
    char v4;  // [bp-0x48], Other Possible Types: unsigned long, unsigned long long
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long v9;  // r15
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // r14
    unsigned long long v13;  // r15
    unsigned long long v14;  // r12

    v9 = a1[2];
    if (!v9)
    {
        v10 = 1;
        goto LABEL_541f4f;
    }
    else
    {
        if (v9 < 0)
        {
            v3 = 0;
        }
        else
        {
            v3 = 1;
            v10 = __rust_alloc(v9, 1);
            if (v10)
            {
LABEL_541f4f:
                memcpy(v1, a1[1], v9);
                v0 = v9;
                v1 = v10;
                v2 = v9;
                v11 = uucore::features::format::Format$LT$F$GT$::fmt::hbc11746d4600190b(a1 + 1, &v0, a2);
                if (v11)
                {
                    v4 = v11;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                alloc::string::String::from_utf8_lossy::hea505cf60d4f919b(&v4, v1, v2);
                v12 = *((long long *)&v5);
                v13 = *((long long *)&v6);
                if (!v13)
                {
                    v14 = 1;
                    goto LABEL_541fe3;
                }
                else
                {
                    if (v13 < 0)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v14 = __rust_alloc(v13, 1);
                    if (v14)
                    {
LABEL_541fe3:
                        memcpy(v14, v12, v13);
                        a0[0] = v13;
                        a0[1] = v14;
                        a0[2] = v13;
                        if (v0)
                            __rust_dealloc(v1);
                        if (!v4 << 1)
                            return a0;
                        __rust_dealloc(v12);
                    }
                }
            }
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
}
