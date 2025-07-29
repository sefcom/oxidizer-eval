long long uu_truncate::truncate_size_only(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, char a4)
{
    char v0;  // [bp-0x1a8]
    unsigned int v1;  // [bp-0x1a0]
    unsigned long long v2;  // [bp-0x198]
    unsigned int v3;  // [bp-0x190]
    int v4;  // [bp-0x178], Other Possible Types: char
    unsigned long long v5;  // [bp-0x168]
    unsigned long long v6;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x158]
    char v8;  // [bp-0x150]
    unsigned long long v9;  // [bp-0x140]
    void* v10;  // [bp-0x138]
    int v11;  // [bp-0x130]
    char v12;  // [bp-0x120]
    int v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x108]
    char v15;  // [bp-0x100]
    unsigned long long v16;  // [bp-0xf0]
    int v17;  // [bp-0xe8], Other Possible Types: char
    int v18;  // [bp-0xe0]
    unsigned int v19;  // [bp-0xd0]
    int v20;  // [bp-0xb0]
    struct_0 *v22;  // rax
    struct_0 *v23;  // r13
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    uu_truncate::parse_mode_and_size(&v0, a0, a1);
    if (*((int *)&v0) != 4)
    {
        memcpy(&(char)v18, &(char)v2, 16);
        *((int128_t *)&v17) = *((int128_t *)&v0);
        v27 = uu_truncate::truncate_size_only::{{closure}}(&(char)v17);
    }
    else if (v1 != 5 && v1 != 6 || v2)
    {
        v6 = a2;
        v7 = a2 + a3 * 24;
        while (true)
        {
            v22 = v6.next();
            if (!v22)
                return 0;
            v23 = v22;
            std::fs::metadata(&v17, v22);
            if (*((long long *)&v17) == 2)
            {
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, (long long)v18);
            }
            else if (((short)(int)v20 & 0xf000) == 0x1000)
            {
                v0.to_vec("filename", 8);
                v5 = v2;
                memcpy(&v4, &v0, 16);
                v10 = 0;
                *((int128_t *)&v11) = *((int128_t *)&v23->field_8);
                v12 = 1;
                v0.spec_to_string(&v10);
                v14 = v5;
                v13 = v4;
                memcpy(&v15, &v0, 16);
                v16 = v2;
                v0.from_iter(&v13);
                uucore::mods::locale::get_message_with_args(&v8, "truncate-error-cannot-open-no-deviceerrortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 36, &v0);
                v3 = 1;
                memcpy(&v0, &v8, 16);
                v2 = v9;
                v26 = v0.new();
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(*((long long *)&v17), (long long)v18);
                return v26;
            }
            v24 = (unsigned long long)v1.to_size();
            v25 = uu_truncate::file_truncate(*((long long *)&v23->field_8), *((long long *)&v23[1].padding_0[7]), a4, v24);
            if (v25)
                return v25;
        }
    }
    else
    {
        uucore::mods::locale::get_message(&v17, "truncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 31);
        v19 = 1;
        v27 = v17.new();
    }
    return v27;
}
