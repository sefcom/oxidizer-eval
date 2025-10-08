void uu_uniq::handle_extract_obs_skip_chars(unsigned long long *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    struct_0 *v0;  // [bp-0x90]
    void* v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    void* v3;  // [bp-0x78]
    int v4;  // [bp-0x70], Other Possible Types: char
    unsigned long long v5;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    int v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x38]
    unsigned int v12;  // edx
    unsigned long long v13;  // r15
    void* v14;  // rdi
    unsigned long long v15;  // rsi

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v6 = a1;
    v7 = a1 + a2;
    core::str::validations::next_code_point(&v6);
    memcpy(&(char)v9, &v6, 16);
    while (true)
    {
        if (!((char)core::str::validations::next_code_point(&(char)v9) & 1))
        {
            if (v3)
            {
                v13 = v2;
                v4.collect(v2, v2 + v3 * 4);
                v10 = v5;
                memcpy(&(char)v9, &v4, 16);
                core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
                *((unsigned long long *)&a3[16]) = v10;
                *(a3) = v9;
                *(a0) = 0x8000000000000000;
            }
            else
            {
                v4.to_vec(a1, a2);
                v0->field_10 = v5;
                *((void*)&v0->field_0) = v4;
                v13 = v2;
            }
            v14 = v1;
            v15 = v13;
            break;
        }
        else if (v12 - 48 < 10)
        {
            v1.push(v12, &g_4f5928);
        }
        else
        {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
            *((unsigned long long *)a3) = 0x8000000000000000;
            v4.to_vec(a1, a2);
            v0->field_10 = v5;
            *((void*)&v0->field_0) = v4;
            v14 = v1;
            v15 = v2;
            break;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<char>>(v14, v15);
    return;
}
