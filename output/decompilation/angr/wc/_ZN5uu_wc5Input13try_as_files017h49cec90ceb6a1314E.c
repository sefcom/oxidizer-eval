long long uu_wc::Input::try_as_files0(unsigned long long a0[3], unsigned long long a1[3])
{
    char v0;  // [bp-0x1e0], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x1d8]
    unsigned long v2;  // [bp-0x1d0]
    char v3;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x1c0]
    unsigned long long v5;  // [bp-0x1b8]
    int v6;  // [bp-0x1b0]
    int v7;  // [bp-0x1a0]
    int v8;  // [bp-0x190]
    unsigned long long v9;  // [bp-0x180]
    unsigned long long v10;  // [bp-0x178]
    unsigned long long v11;  // [bp-0x170]
    unsigned long long v12;  // [bp-0x168]
    int v13;  // [bp-0x160]
    int v14;  // [bp-0x150]
    int v15;  // [bp-0x140]
    unsigned long long v16;  // [bp-0x130]
    char v17;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long v18;  // [bp-0x120], Other Possible Types: unsigned long long
    char v19;  // [bp-0x118]
    char v20;  // [bp-0xf0]
    char v21;  // [bp-0xd8]
    char v22;  // [bp-0x78]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long long v26;  // rdi
    unsigned long long v27;  // r14
    unsigned long long v28;  // rsi

    if (a1[0] == 9223372036854775809)
    {
        v24 = uu_wc::is_stdin_small_file();
        if (!(char)v24)
        {
            a0[0] = 0x8000000000000000;
            return v24;
        }
        uu_wc::files0_iter_stdin(&v22);
        core::iter::adapters::try_process(&v17, &v22);
        v25 = *((long long *)&v19);
        if (v17 != 0x8000000000000000)
        {
            a0[0] = v17;
            a0[1] = v18;
            a0[2] = v25;
            return v18;
        }
        a0[1] = v18;
        a0[2] = v25;
        a0[0] = 9223372036854775809;
        return v18;
    }
    else
    {
        std::fs::metadata(&(char)v17, a1);
        v26 = v17;
        if (v26 == 2 || (0xf000 & *((int *)&v20)) != 0x8000 || *((long long *)&v21) >= 10485761)
        {
            a0[0] = 0x8000000000000000;
            goto LABEL_4af746;
        }
        else
        {
            v27 = v26;
            uu_wc::files0_iter_file(&v3, a1[1], a1[2]);
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
                core::iter::adapters::try_process(&v0, &v10);
                v11 = v1;
                v12 = v2;
                if (v0 == 0x8000000000000000)
                    goto LABEL_4af81c;
                a0[0] = v0;
                a0[1] = v1;
                a0[2] = v2;
                v26 = v27;
LABEL_4af746:
                v28 = v18;
            }
            else
            {
LABEL_4af81c:
                a0[1] = v11;
                a0[2] = v12;
                a0[0] = 9223372036854775809;
                v28 = v18;
                v26 = v27;
            }
        }
        return (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v26, v28);
    }
}
