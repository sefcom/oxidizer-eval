void uu_uniq::handle_extract_obs_skip_chars(unsigned long long *a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    struct_1 *v0;  // [bp-0xa0]
    void* v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    void* v3;  // [bp-0x88]
    int v4;  // [bp-0x80], Other Possible Types: char
    unsigned long v5;  // [bp-0x70], Other Possible Types: unsigned long long
    int v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned int v12;  // edx

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v9 = a1;
    v10 = a1 + a2;
    ::0x4a88d0::core::str::validations::next_code_point(&v9);
    memcpy(&(char)v7, &v9, 16);
    while (true)
    {
        if ((int)::0x4a88d0::core::str::validations::next_code_point(&(char)v7))
        {
            if (v12 - 48 < 10)
            {
                v1.push(v12, &g_58be10);
            }
            else
            {
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a3);
                *((unsigned long long *)&a3->field_0) = 0x8000000000000000;
                v4.to_owned(a1, a2);
                v0->field_10 = v5;
                *((void*)&v0->field_0) = v4;
                break;
            }
        }
        else
        {
            if (v3)
            {
                v4.from_iter(4, 4 + v3 * 4);
                v8 = v5;
                memcpy(&(char)v7, &v4, 16);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a3);
                a3->field_10 = v8;
                *((void*)&a3->field_0) = v7;
                *(a0) = 0x8000000000000000;
                break;
            }
            else
            {
                v4.to_owned(a1, a2);
            }
        }
    }
    ::0x4a7ca0::core::ptr::drop_in_place<alloc::vec::Vec<char>>(&v1);
    return;
}
