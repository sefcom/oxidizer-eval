long long fish::expand::expand_home_directory(void* a0, unsigned long long a1, struct_0 **a2)
{
    int v0;  // [bp-0x20e8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x20d8]
    unsigned long long v3;  // [bp-0x20c8]
    void* v4;  // [bp-0x20c0]
    passwd v5;  // [bp-0x20b8]
    char v9;  // [bp-0x2080]
    int v10;  // [bp-0x2068], Other Possible Types: char
    unsigned long long v11;  // [bp-0x2058]
    char v12;  // [bp-0x2048]
    unsigned long long v13;  // [bp-0x2038]
    void* v14;  // [bp-0x2030]
    char v15;  // [bp-0x2020]
    void* v16;  // [bp-0x1030]
    unsigned int v18;  // ebp
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    char *v22;  // r15
    unsigned long long v25;  // rax

    v16 = 0;
    v14 = 0;
    if (!(long long)a0[16])
    {
        v14.replace((long long)a0[8], 0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        v25 = *((long long *)&v15);
        *((unsigned long long *)&a0[16]) = v25;
        *((int128_t *)a0) = *((int128_t *)&v14);
        return v25;
    }
    v18 = *((int *)(long long)a0[8]);
    v14.replace((long long)a0[8], (long long)a0[16]);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
    v19 = *((long long *)&v15);
    *((unsigned long long *)&a0[16]) = v19;
    *((int128_t *)a0) = *((int128_t *)&v14);
    if (v18 != 64976)
        return v19;
    v3 = 18446744073709551615;
    v20 = fish::expand::get_home_directory_name((long long)a0[8], (long long)a0[16], &v3);
    v0 = 0x8000000000000000;
    if (v21)
    {
        v22 = fish::common::wcs2zstring(v20, v21);
        v4 = 0;
        memset(&v14, 0, 0x2000);
        if (!getpwnam_r(v22, &v5, &v14, 0x2000, &v4) && v4)
        {
            fish::common::charptr2wcstring(&v12, v5.pw_dir);
            v11 = v13;
            memcpy(&v10, &v12, 16);
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
            v2 = v11;
            v0 = v10;
        }
        return (unsigned long long)core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v22, v21);
    }
    else
    {
        a2(&v9, a1, "H", 4);
        if (!*((long long *)&v9))
        {
            *((unsigned long long *)&a0[16]) = 0;
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
        }
        v14.as_string(&v9);
        *((long long *)&v5.pw_uid) = *((long long *)&v15);
        *((int128_t *)&v5.pw_name) = *((int128_t *)&v14);
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
        *((struct passwd *)&v2) = *((struct passwd *)&v5.pw_uid);
        *((int128_t *)&v0) = *((int128_t *)&v5.pw_name);
        v3 = 1;
        return core::ptr::drop_in_place<fish::env::var::EnvVar>(&v9);
    }
}
