long long fish::builtins::string::match::RegexMatcher::new(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0x160], Other Possible Types: unsigned long long
    int v1;  // [bp-0x158], Other Possible Types: char
    int v2;  // [bp-0x148], Other Possible Types: char
    unsigned long long v3[5];  // [bp-0x140]
    int v4;  // [bp-0x138], Other Possible Types: char
    unsigned long long v5;  // [bp-0x130]
    void* v6;  // [bp-0x128]
    void* v7;  // [bp-0x118], Other Possible Types: char
    char v8;  // [bp-0x111]
    char v9;  // [bp-0x110]
    int v10;  // [bp-0x108]
    int v11;  // [bp-0xf8]
    int v12;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v13;  // [bp-0xe0], Other Possible Types: unsigned long
    int v14;  // [bp-0xd8], Other Possible Types: char
    int v15;  // [bp-0xc8], Other Possible Types: char
    int v16;  // [bp-0xb8], Other Possible Types: char
    int v17;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v18;  // [bp-0x98]
    int v19;  // [bp-0x90]
    int v20;  // [bp-0x80]
    int v21;  // [bp-0x78]
    char v22;  // [bp-0x70]
    char v23;  // [bp-0x68]
    int v24;  // [bp-0x58], Other Possible Types: char
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    int v28;  // xmm0
    int v29;  // xmm1
    unsigned long long v30;  // rax
    int v31;  // xmm0
    int v32;  // xmm1

    v6 = 0;
    v7 = 0;
    v9 = 0;
    v7 = a3->field_1b;
    v8 = 1;
    v0.build(&v6, a1);
    if (!v0)
    {
        v13.to_vec(a1, a2);
        v12 = (long long)v2;
        memcpy(&v11, &v1, 16);
        a0[40] = v14;
        *((unsigned long long *)&a0[24]) = v12;
        *((unsigned long *)&a0[32]) = v13;
        a0[8] = v11;
        *((unsigned long long *)a0) = 0;
        return v13;
    }
    v28 = *((int128_t *)&v1);
    v29 = *((int128_t *)&v2);
    memcpy(&v14, &v4, 16);
    v12 = v29;
    v11 = v28;
    v2 = v29;
    v1 = v11;
    v4 = v14;
    v6.validate_capture_group_names(v3[3], v3[4]);
    if ((int)v6 != 4)
    {
        v31 = *((int128_t *)&v6);
        v32 = *((int128_t *)&v7);
        a0[40] = v10;
        a0[24] = v32;
        a0[8] = v31;
        *((unsigned long long *)a0) = 0;
        return (unsigned long long)core::ptr::drop_in_place<pcre2::regex_impl::Regex<pcre2::ffi::CodeUnitWidth32>>(&v0);
    }
    v24.collect(v3[3], v3[3] + v3[4] * 24);
    v18 = v5;
    memcpy(&v17, &v2, 16);
    memcpy(&v16, &v1, 16);
    memcpy(&v15, &v0, 16);
    memcpy(&v22, &v26, 16);
    *((int128_t *)&v20) = *((int128_t *)&v25);
    v19 = v24;
    a0[32] = v17;
    a0[16] = v16;
    *(a0) = v15;
    *((unsigned long long *)&a0[48]) = v18;
    *((long long *)&a0[56]) = (long long)v19;
    v30 = *((long long *)&v23);
    *((unsigned long long *)&a0[96]) = v30;
    *((int128_t *)&a0[64]) = (int128_t)(&v19)[8];
    a0[80] = v21;
    *((struct_0 **)&a0[104]) = a3;
    *((unsigned long long *)&a0[112]) = 0;
    return v30;
}
