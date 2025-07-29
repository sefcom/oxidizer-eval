long long uu_truncate::file_truncate(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3)
{
    char v0;  // [bp-0x198], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x194]
    unsigned long long v2;  // [bp-0x190]
    unsigned long long v3;  // [bp-0x188]
    unsigned int v4;  // [bp-0x180]
    void* v5;  // [bp-0x168], Other Possible Types: unsigned int
    unsigned long long v6;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x158]
    char v8;  // [bp-0x150]
    int v9;  // [bp-0x148], Other Possible Types: char
    unsigned long long v10;  // [bp-0x138]
    char v11;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x120]
    int v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x108]
    char v15;  // [bp-0x100]
    unsigned long long v16;  // [bp-0xf0]
    char v17;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v18;  // [bp-0xd8], Other Possible Types: unsigned int
    char v19;  // [bp-0xd7]
    unsigned short v20;  // [bp-0xd4]
    char v21;  // [bp-0xa8]
    unsigned long long v23;  // rsi
    unsigned long long v24;  // rax
    void* v25;  // r15

    std::fs::metadata(&v17, a0, a1);
    if (v17 == 2)
    {
        v23 = *((long long *)&v18);
        v17 = 2;
    }
    else
    {
        if ((0xf000 & *((int *)&v21)) == 0x1000)
        {
            v0.to_vec("filename", 8);
            v10 = v3;
            memcpy(&v9, &v0, 16);
            v5 = 0;
            v6 = a0;
            v7 = a1;
            v8 = 1;
            v0.spec_to_string(&v5);
            v14 = v10;
            v13 = v9;
            memcpy(&v15, &v0, 16);
            v16 = v3;
            v0.from_iter(&v13);
            uucore::mods::locale::get_message_with_args(&v11, "truncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 36, &v0);
            v4 = 1;
            memcpy(&v0, &v11, 16);
            v3 = v12;
            v24 = v0.new();
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v17, *((long long *)&v18));
            return v24;
        }
        v23 = *((long long *)&v18);
    }
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v17, v23);
    v17 = 0x1b600000000;
    v18 = 0;
    v20 = 0;
    v19 = 1;
    v0.open(&v17, a0, a1);
    if (v0)
    {
        v25 = v2;
        if (!(char)v2.kind() && !a2)
        {
            ::0x49d1b0::core::ptr::drop_in_place<std::io::error::Error>(v2);
            v25 = 0;
        }
    }
    else
    {
        v5 = v1;
        v25 = v5.set_len(a3);
        core::ptr::drop_in_place<std::fs::File>(v1);
    }
    return v25.map_err_context(a0, a1);
}
