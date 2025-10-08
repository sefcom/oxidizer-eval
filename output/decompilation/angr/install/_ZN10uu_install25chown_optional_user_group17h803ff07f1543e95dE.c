long long uu_install::chown_optional_user_group(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    void* v0;  // [bp-0x158]
    void* v1;  // [bp-0x150]
    char v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x138]
    char *v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x128]
    unsigned long v6;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x118]
    char v8;  // [bp-0x108]
    char v9;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xd8]
    char *v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    void* v13;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v14;  // [bp-0xb0]
    unsigned int v15;  // [bp-0xa4]
    char v16;  // [bp-0xa0]
    unsigned int v18;  // ebp
    unsigned long long v19;  // r12
    unsigned int v21;  // r13d
    unsigned int v22;  // r13d
    char *v23;  // rdi

    v18 = a2->field_50;
    v19 = a2->field_58;
    if (!(!v18 && !(unsigned int)v19))
    {
        v1 = a2->field_54;
        v0 = a2->field_5c;
        v21 = v18;
    }
    else if (!uucore::features::process::geteuid())
    {
        v1 = 0;
        v19 = 1;
        v0 = 0;
        v21 = 1;
    }
    else
    {
        return 0;
    }
    v22 = v21;
    std::fs::metadata(&v9, a0, a1);
    if (*((int *)&v9) == 2)
    {
        v7 = v10;
        v6 = 10;
        return v6.new();
    }
    uucore::features::perms::wrap_chown(&(char)v6, a0, a1, v15, *((int *)&v16), v22, (unsigned int)v1, v19, (unsigned int)v0, !v18);
    if (v6 == 1)
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&v2, a0, a1);
        v14 = *((long long *)&v8);
        memcpy(&v13, &v7, 16);
        memcpy(&(char)v10, &v2, 16);
        v12 = v3;
        v9 = 4;
        return v9.new();
    }
    if (a2->field_61 == 1 && *((long long *)&v8))
    {
        v3 = *((long long *)&v8);
        memcpy(&v2, &v7, 16);
        v4 = &v2;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = &g_502478;
        v10 = 2;
        v13 = 0;
        v11 = &v4;
        v12 = 1;
        std::io::stdio::_print(&v9);
        v23 = &v2;
    }
    else
    {
        v23 = &(char)v7;
    }
    core::ptr::drop_in_place<alloc::string::String>(v23);
    return 0;
}
