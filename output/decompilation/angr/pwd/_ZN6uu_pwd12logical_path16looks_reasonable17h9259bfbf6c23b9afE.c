long long uu_pwd::logical_path::looks_reasonable(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x2f0], Other Possible Types: char
    unsigned long long v1;  // [bp-0x2e8]
    int v2;  // [bp-0x2e0], Other Possible Types: char
    unsigned long long v3;  // [bp-0x2d0]
    char v4;  // [bp-0x2c8]
    unsigned short v5;  // [bp-0x2b8]
    char v6;  // [bp-0x2b6]
    char v7;  // [bp-0x240]
    unsigned long long v8;  // [bp-0x220]
    char v9;  // [bp-0x218]
    char v10;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x188]
    char v12;  // [bp-0x180]
    char v13;  // [bp-0xe0]
    char v15;  // al
    unsigned int v16;  // ebx

    v0.components(a0, a1);
    if (v6 || v2 - 5 >= 2)
    {
        v10.from_utf8_lossy(a0, a1);
        v2.into_searcher(v11, *((long long *)&v12));
        v0 = 0;
        v1 = *((long long *)&v12);
        v5 = 1;
        v15 = v0.try_fold().eq();
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v10, v11);
        if (!v15)
        {
            std::fs::metadata(&v13, a0, a1);
            std::fs::metadata(&v10);
            memcpy(&v0, &v13, 176);
            memcpy(&v7, &v10, 176);
            v16 = 0;
            if ((int)v0 != 2 && *((long long *)&v7) != 2)
                v16 = !(*((long long *)&v9) ^ *((long long *)&v4)) && !(v3 ^ v8);
            core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(&v0);
            return v16;
        }
    }
    return 0;
}
