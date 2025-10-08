long long uu_wc::print_stats(char a0[29], unsigned long long a1[5], unsigned long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x150]
    unsigned long long v1;  // [bp-0x148]
    void* v2;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x128]
    char *v6;  // [bp-0x120], Other Possible Types: unsigned long long
    int v7;  // [bp-0x118], Other Possible Types: unsigned long long
    void* v8;  // [bp-0x110]
    unsigned long long v9;  // [bp-0xf8]
    char *v10;  // [bp-0xf0]
    char *v11;  // [bp-0xe8]
    char *v12;  // [bp-0xe0]
    unsigned long long v13;  // [bp-0xd8]
    char *v14;  // [bp-0xd0]
    unsigned long long v15;  // [bp-0xc8]
    void* v16;  // [bp-0xc0]
    unsigned short v17;  // [bp-0xb8]
    unsigned long long v18;  // [bp-0xb0]
    char v19;  // [bp-0xb0]
    unsigned long v20;  // [bp-0xa8]
    char v21;  // [bp-0xa0]
    unsigned long v22;  // [bp-0x98]
    char v23;  // [bp-0x90]
    unsigned long v24;  // [bp-0x88]
    char v25;  // [bp-0x80]
    unsigned long v26;  // [bp-0x78]
    char v27;  // [bp-0x70]
    unsigned long v28;  // [bp-0x68]
    char v29;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x58]
    char *v31;  // [bp-0x50]
    unsigned long long v32;  // [bp-0x48]
    unsigned long long v33;  // [bp-0x40]
    unsigned long long v34;  // [bp-0x38]
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax

    v18 = std::io::stdio::stdout();
    v0 = v18.lock();
    v19 = a0[26];
    v20 = a1[2];
    v21 = a0[27];
    v22 = a1[3];
    v23 = a0[25];
    v24 = a1[1];
    v25 = a0[24];
    v26 = a1[0];
    v27 = a0[28];
    v28 = a1[4];
    v1 = 1;
    v2 = 0;
    v10 = &v19;
    v11 = &v29;
    v36 = v10.find();
    if (!v36)
    {
LABEL_46a490:
        if (v9)
        {
            v12 = &v1;
            v13 = <&T as core::fmt::Display>::fmt;
            v4 = &g_4187e0;
            v5 = 1;
            v8 = 0;
            v6 = &v12;
            v7 = 1;
            v37 = v0.write_fmt(&v4);
            if (!v37)
            {
                v37 = v0.write_all(v9, a3);
                core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000, v9);
                if (v37)
                {
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
                    return v37;
                }
                goto LABEL_46a529;
            }
        }
        else
        {
LABEL_46a529:
            v4 = &g_4f9358;
            v5 = 1;
            v6 = 8;
            *((uint128_t *)&v7) = 0;
            v37 = v0.write_fmt(&v4);
        }
    }
    else if (a4 <= 65535)
    {
        while (true)
        {
            v3 = v36 + 8;
            v12 = &v1;
            v13 = <&T as core::fmt::Display>::fmt;
            v14 = &v3;
            v15 = <&T as core::fmt::Display>::fmt;
            v16 = 0;
            v17 = a4;
            v29 = &g_41a470;
            v30 = 2;
            v33 = &g_41a5b0;
            v34 = 2;
            v31 = &v12;
            v32 = 3;
            if (v0.write_fmt(&v29))
                break;
            v1 = " FilesDisabledextraStdinReprNotAllowedZeroLengthFileNameZeroLengthFileNameCtxidxextra operand ''\nfile operands cannot be combined with --files0-from:: invalid zero-length file name";
            v2 = 1;
            v36 = v10.find();
            if (!v36)
                goto LABEL_46a490;
        }
    }
    else
    {
        v3 = v36 + 8;
        v4 = &g_4f9348;
        v5 = 1;
        v6 = 8;
        *((uint128_t *)&v7) = 0;
        core::panicking::panic_fmt(&v4, &g_4f9368); /* do not return */
    }
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
    return v37;
}
