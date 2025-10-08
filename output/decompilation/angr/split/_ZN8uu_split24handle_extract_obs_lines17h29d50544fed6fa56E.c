void uu_split::handle_extract_obs_lines(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [bp-0xa1]
    void* v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    void* v3;  // [bp-0x90]
    char v4;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x80]
    unsigned long v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    char *v9;  // [bp-0x60]
    char *v10;  // [bp-0x58]
    int v11;  // [bp-0x50], Other Possible Types: char
    unsigned long v12;  // [bp-0x40]
    int v13;  // [bp-0x38], Other Possible Types: char
    char v14;  // [bp-0x28]

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v0 = 0;
    v7 = a1;
    v8 = a1 + a2;
    v9 = &v0;
    v10 = &v1;
    v4.collect(&v7);
    if (v3)
    {
        v11.collect(v2, v2 + v3 * 4);
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
        a3->field_10 = v12;
        *((void*)&a3->field_0) = v11;
        if (v6 >= 2)
        {
            v13.collect(v5, v5 + v6 * 4);
            *((long long *)&a0[16]) = *((long long *)&v14);
            *(a0) = v13;
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
    }
    else
    {
        v7.to_vec(a1, a2);
        *((char **)&a0[16]) = v9;
        *((int128_t *)a0) = *((int128_t *)&v7);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<char>>(v4, v5);
    core::ptr::drop_in_place<alloc::vec::Vec<char>>(v1, v2);
    return;
}
