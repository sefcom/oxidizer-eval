long long uu_wc::Input::try_as_files0(unsigned long long a0[3], unsigned long long a1[3])
{
    char v0;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x180]
    unsigned long long v2;  // [bp-0x178]
    char v3;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    int v6;  // [bp-0x158]
    int v7;  // [bp-0x148]
    int v8;  // [bp-0x138]
    unsigned long long v9;  // [bp-0x128]
    unsigned long long v10;  // [bp-0x120]
    unsigned long long v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x110]
    int v13;  // [bp-0x108]
    int v14;  // [bp-0xf8]
    int v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xd8]
    char v17;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v18;  // [bp-0xc8]
    char v19;  // [bp-0x98]
    char v20;  // [bp-0x80]
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdi
    unsigned long long v24;  // r14
    unsigned long long v25;  // rsi

    if (a1[0] == 9223372036854775809)
    {
        v22 = uu_wc::is_stdin_small_file();
        if (!(char)v22)
        {
            a0[0] = 0x8000000000000000;
            return v22;
        }
        uu_wc::files0_iter_stdin(&v17);
        v3.collect(&v17);
        if (v3 != 0x8000000000000000)
        {
            a0[0] = v3;
            a0[1] = v4;
            a0[2] = v5;
            return v4;
        }
        a0[1] = v4;
        a0[2] = v5;
        a0[0] = 9223372036854775809;
        return v4;
    }
    else
    {
        std::fs::metadata(&v17, a1);
        v23 = v17;
        if (v23 == 2 || (0xf000 & *((int *)&v19)) != 0x8000 || *((long long *)&v20) > 0xa00000)
        {
            a0[0] = 0x8000000000000000;
            goto LABEL_4656d6;
        }
        else
        {
            v24 = v23;
            uu_wc::files0_iter_file(&(char)v3, a1[1], a1[2]);
            v11 = v11;
            v12 = v12;
            if (v3 != 9223372036854775809)
            {
                v16 = v9;
                v15 = v8;
                v14 = v7;
                v13 = v6;
                v10 = v3;
                v11 = v4;
                v12 = v5;
                v0.collect(&v10);
                v11 = v1;
                v12 = v2;
                if (v0 == 0x8000000000000000)
                    goto LABEL_4657a6;
                a0[0] = v0;
                a0[1] = v1;
                a0[2] = v2;
                v23 = v24;
LABEL_4656d6:
                v25 = *((long long *)&v18);
            }
            else
            {
LABEL_4657a6:
                a0[1] = v11;
                a0[2] = v12;
                a0[0] = 9223372036854775809;
                v25 = *((long long *)&v18);
                v23 = v24;
            }
        }
        return (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v23, v25);
    }
}
