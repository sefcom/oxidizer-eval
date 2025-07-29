long long uu_truncate::truncate_reference_and_size(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5, char a6)
{
    int v0;  // [bp-0x198], Other Possible Types: char
    unsigned long long v1;  // [bp-0x188]
    char v2;  // [bp-0x178]
    unsigned int v3;  // [bp-0x170]
    char v4;  // [bp-0x168]
    char v5;  // [bp-0x158]
    char v6;  // [bp-0x148]
    char v7;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    unsigned int v10;  // [bp-0x120]
    char v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x70]
    int v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    char v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x40]
    unsigned long long v17;  // rax
    unsigned long long v18[3];  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax

    uu_truncate::parse_mode_and_size(&v2, a2, a3);
    if (*((int *)&v2) != 4)
    {
        memcpy(&v6, &v4, 16);
        memcpy(&v5, &v2, 16);
        v7.to_vec("errortruncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 5);
        v1 = v9;
        memcpy(&v0, &v7, 16);
        v7.spec_to_string(&v5);
        v14 = v1;
        v13 = v0;
        memcpy(&v15, &v7, 16);
        v16 = v9;
        v7.from_iter(&v13);
        uucore::mods::locale::get_message_with_args(&v11, "truncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file", 29, &v7);
        v10 = 1;
        memcpy(&v7, &v11, 16);
        v9 = v12;
        v22 = v7.new();
        core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(&v5);
        return v22;
    }
    if (!v3)
    {
        v20 = "truncate-error-must-specify-relative-sizetruncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file";
        v21 = 41;
    }
    else if (v3 != 5 && v3 != 6 || *((long long *)&v4))
    {
        std::fs::metadata(&v7, a0, a1);
        if (*((int *)&v7) == 2)
            return uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, v8);
        v17 = (unsigned long long)v3.to_size();
        v7 = a4;
        v8 = a4 + a5 * 24;
        while (true)
        {
            v18 = v7.next();
            if (!v18)
                return 0;
            v19 = uu_truncate::file_truncate(v18[1], v18[2], a6, v17);
            if (v19)
                return v19;
        }
    }
    else
    {
        v20 = "truncate-error-division-by-zerotruncate-error-invalid-numbertruncate-error-cannot-stat-no-such-file";
        v21 = 31;
    }
    uucore::mods::locale::get_message(&v7, v20, v21);
    v10 = 1;
    return v7.new();
}
