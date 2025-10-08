long long fish::env::environment::setup_user(void* a0)
{
    char v0;  // [bp-0x20d0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [bp-0x20c8]
    unsigned long long v2;  // [bp-0x20c0]
    struct_0 *v3;  // [bp-0x20b8]
    int v4;  // [bp-0x20b0], Other Possible Types: char
    unsigned long long v5;  // [bp-0x20a0]
    int v6;  // [bp-0x2098]
    unsigned long long v7;  // [bp-0x2088]
    passwd v8;  // [bp-0x2078]
    char v10;  // [bp-0x2048]
    void* v11;  // [bp-0x2030]
    void* v12;  // [bp-0x1030]
    unsigned int v14;  // ebp
    char *v15;  // r12
    unsigned long long v17;  // r14
    unsigned long long v19;  // rdx
    char *v20;  // rdi
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    v12 = 0;
    v11 = 0;
    v14 = fish::nix::geteuid();
    v4.getf_unless_empty(a0, "U", 4, 0);
    v3 = 0;
    memset(&v11, 0, 0x2000);
    if (*((long long *)&v4))
    {
        v7 = v5;
        v6 = v4;
        v0.as_string(&v4);
        v15 = fish::common::wcs2zstring(v1, v2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        if (!getpwnam_r(v15, &v8, &v11, 0x2000, &v3) && v3 && v3->field_10 == v14)
        {
            v17 = v8.pw_dir;
            v0.getf_unless_empty(a0, "H", 4, 0);
            core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
            if (!v0)
            {
                if (v17)
                {
                    fish::common::str2wcstring(&v0, v17, strlen(v17));
                    a0.set_one("H", 4, 20, &v0);
                }
                else
                {
                    a0.set_empty("H", 4, 20);
                }
            }
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v15, v19);
            v20 = &v6;
            return core::ptr::drop_in_place<fish::env::var::EnvVar>(v20);
        }
        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v15, v19);
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v6);
    }
    if (!getpwuid_r(v14, &v8, &v11, 0x2000, &v3) && v3)
    {
        v21 = v8.pw_dir;
        v22 = strlen(v8.pw_name);
        fish::common::str2wcstring(&v10, v8.pw_name, v22);
        a0.set_one("U", 4, 20, &v10);
        v0.getf_unless_empty(a0, "H", 4, 0);
        v23 = core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
        if (!v0)
        {
            if (!v21)
                goto LABEL_1394d49;
            fish::common::str2wcstring(&v0, v21, strlen(v21));
            v23 = a0.set_one("H", 4, 20, &v0);
        }
    }
    else
    {
        v0.getf_unless_empty(a0, "H", 4, 0);
        v23 = core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
        if (!v0)
        {
LABEL_1394d49:
            v23 = a0.set_empty("H", 4, 20);
        }
    }
    if (*((long long *)&v4))
    {
        return v23;
    }
    else if (*((long long *)&v4))
    {
        v20 = &v4;
        return core::ptr::drop_in_place<fish::env::var::EnvVar>(&v4);
    }
    else
    {
        return v23;
    }
}
