void uu_uniq::handle_extract_obs_skip_fields(void* a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    char v0;  // [bp-0xaa]
    char v1;  // [bp-0xa9]
    void* v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    void* v4;  // [bp-0x98]
    char v5;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    unsigned long v10;  // [bp-0x68]
    char *v11;  // [bp-0x60]
    char *v12;  // [bp-0x58]
    int v13;  // [bp-0x50], Other Possible Types: char
    unsigned long v14;  // [bp-0x40]
    int v15;  // [bp-0x38], Other Possible Types: char
    char v16;  // [bp-0x28]
    unsigned long long v18;  // rax

    v2 = 0;
    v3 = 4;
    v4 = 0;
    v1 = 0;
    v0 = 0;
    v8 = a1;
    v9 = a1 + a2;
    v10 = &v0;
    v11 = &v1;
    v12 = &v2;
    v5.collect(&v8);
    if (!v4)
    {
        v8.to_vec(a1, a2);
        *((unsigned long *)&a0[16]) = v10;
        *((int128_t *)a0) = *((int128_t *)&v8);
    }
    else if (v0)
    {
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
        *((unsigned long long *)a3) = 0x8000000000000000;
        v18 = v7;
        if (v7 <= 1)
            goto LABEL_467367;
LABEL_4672bf:
        v15.collect(v6, v6 + v18 * 4);
        *((long long *)&a0[16]) = *((long long *)&v16);
        *(a0) = v15;
    }
    else
    {
        v13.collect(v3, v3 + v4 * 4);
        if (*((long long *)a3) != 0x8000000000000000)
            v13.spec_extend((long long)a3[8], (long long)a3[16] + (long long)a3[8]);
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
        *((unsigned long *)&a3[16]) = v14;
        *(a3) = v13;
        v18 = v7;
        if (v7 > 1)
            goto LABEL_4672bf;
LABEL_467367:
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<char>>(v5, v6);
    core::ptr::drop_in_place<alloc::vec::Vec<char>>(v2, v3);
    return;
}
