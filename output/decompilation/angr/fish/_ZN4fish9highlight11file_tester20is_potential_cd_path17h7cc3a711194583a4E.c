long long fish::highlight::file_tester::is_potential_cd_path(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3, unsigned long long a4, unsigned long long a5[4], unsigned int a6)
{
    int v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xf0], Other Possible Types: char
    int v3;  // [bp-0xe0], Other Possible Types: char
    void* v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    void* v6;  // [bp-0xb0]
    int v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]
    char v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x90]
    struct_0 *v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x80]
    char v14;  // [bp-0x60], Other Possible Types: unsigned long
    char v15;  // [bp-0x58]
    char v16;  // [bp-0x48]
    int v17;  // [bp-0x48]
    int v18;  // [bp-0x38]
    struct_0 *v19;  // rax
    struct_0 *v20;  // r14
    unsigned long long v21;  // rdx
    unsigned int v22;  // eax

    v4 = 0;
    v5 = 8;
    v6 = 0;
    if ((char)fish::wcstringutil::string_prefixes_string(".", 2, a0, a1))
    {
        v2.to_vec(a3, a4);
        v1 = *((long long *)&v3);
        v0 = v2;
        v4.push(&v0, &g_14d9150);
    }
    else
    {
        *((long long *)((!a5[0] ? ((unsigned int)a5[0] == 1 ? a5[3] : a5[2]) : &g_14c7518) + 56))(&v14);
        if (v14)
        {
            v10.to_vec(v14 + 16, *((long long *)&v15));
            core::ptr::drop_in_place<fish::env::var::EnvVar>(&v14);
        }
        else
        {
            v19 = 8.alloc_impl(24, 0);
            if (!v19)
                alloc::alloc::handle_alloc_error(8, 24); /* do not return */
            v20 = v19;
            v2.to_vec(".", 1);
            v1 = *((long long *)&v3);
            v0 = v2;
            v20->field_10 = *((long long *)&v3);
            *((void*)&v20->field_0) = v2;
            v11 = 1;
            v12 = v20;
            v13 = 1;
        }
        v2.to_vec(".", 1);
        v1 = (long long)v3;
        v0 = v2;
        v10.push(&v0, &g_14d9120);
        v2.into_iter(&v10);
        (char)v17.next(&v2);
        if (!((char)(((0 ^ *((long long *)&v16)) & (0 ^ -(*((long long *)&v16)))) >> 63)))
        {
            do
            {
                v21 = (long long)v18;
                v9 = v21;
                v7 = v17;
                if (!v9)
                {
                    v0.to_vec(".", 1);
                    v9 = v1;
                    v7 = v0;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v17);
                    v21 = v9;
                }
                fish::path::path_apply_working_directory(&v0, v8, v21, a3, a4);
                v4.push(&v0, &g_14d9138);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
                (char)v17.next(&v2);
            } while ((long long)v17 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v2);
    }
    v22 = fish::highlight::file_tester::is_potential_path(a0, a1, a2, 0x8, 0, a5, a6 & 0xff00 | 65537);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v4);
    return v22;
}
