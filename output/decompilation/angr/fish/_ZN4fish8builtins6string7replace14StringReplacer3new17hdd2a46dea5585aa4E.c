long long fish::builtins::string::replace::StringReplacer::new(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5[45])
{
    void* v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    char v2;  // [bp-0x110], Other Possible Types: unsigned long long
    char v3;  // [bp-0x109]
    char v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    int v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0]
    int v8;  // [bp-0xe8]
    char v9[45];  // [bp-0xe0]
    int v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xc8]
    unsigned long long v12;  // [bp-0xc0]
    char v13;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v14;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0xa8]
    int v16;  // [bp-0xa0]
    char v17;  // [bp-0x90]
    int v18;  // [bp-0x78]
    int v19;  // [bp-0x68], Other Possible Types: unsigned long long
    char v20;  // [bp-0x60], Other Possible Types: unsigned long long
    int v21;  // [bp-0x58], Other Possible Types: char
    char v22;  // [bp-0x48]
    int v24;  // xmm0
    unsigned long long v25;  // r12
    unsigned long long v26;  // rax
    int v27;  // xmm0
    unsigned long long v28;  // rcx
    unsigned long long v29;  // r8

    if (a5[44])
    {
        v0 = 0;
        v2 = 0;
        v4 = 0;
        v2 = a5[42];
        v3 = 1;
        v13.build(&v0, a1);
        if (!v13)
        {
            v20.to_vec(a1, a2);
            v19 = (long long)v16;
            memcpy(&v18, &v14, 16);
            a0[40] = v21;
            *((unsigned long long *)&a0[24]) = v19;
            *((unsigned long long *)&a0[32]) = v20;
            a0[8] = v18;
            *((unsigned long long *)a0) = 9223372036854775809;
            return 9223372036854775809;
        }
        v24 = *((int128_t *)&v14);
        memcpy(&v21, &v17, 16);
        v19 = v16;
        v18 = v24;
        v6 = v18;
        v8 = v16;
        v10 = v21;
        v11 = v13;
        v5 = v11;
        if (fish::future_feature_flags::test(2))
        {
            v13.to_vec(a3, v12);
            v25 = v13;
            v26 = v14;
            a1 = v15;
        }
        else
        {
            v0.interpret_escape(a3, v12);
            v25 = v0;
            if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
            {
                v13.to_vec(a1, a2);
                v27 = *((int128_t *)&v13);
                *((unsigned long long *)&a0[8]) = 3;
                a0[16] = v27;
                *((unsigned long long *)&a0[32]) = v15;
                *((unsigned long long *)a0) = 9223372036854775809;
                return (unsigned long long)core::ptr::drop_in_place<pcre2::regex_impl::Regex<pcre2::ffi::CodeUnitWidth32>>(&v5);
            }
            v26 = v1;
            a1 = v2;
        }
        v28 = (long long)v6;
        v29 = (long long)v8;
        memcpy(&v22, &v21, 16);
    }
    else
    {
        v25 = 0x8000000000000000;
        if (a5[42])
        {
            (char)v5.to_lowercase(a1, a2);
            v13.to_vec(a3, a4);
            a1 = (long long)v6;
            v11 = v7;
            v29 = v15;
        }
        else
        {
            v26 = 0x8000000000000000;
            v28 = 0x8000000000000000;
            v11 = a2;
            v14 = a3;
            v29 = a4;
        }
        v9 = a5;
    }
    *((unsigned long long *)a0) = v25;
    *((unsigned long long *)&a0[8]) = v26;
    *((unsigned long long *)&a0[16]) = a1;
    *((unsigned long long *)&a0[24]) = v11;
    *((unsigned long long *)&a0[32]) = v28;
    *((unsigned long long *)&a0[40]) = v14;
    *((unsigned long long *)&a0[48]) = v29;
    *((char *[45])&a0[56]) = v9;
    *((int128_t *)&a0[64]) = *((int128_t *)&v22);
    *((char *[45])&a0[80]) = a5;
    return v26;
}
