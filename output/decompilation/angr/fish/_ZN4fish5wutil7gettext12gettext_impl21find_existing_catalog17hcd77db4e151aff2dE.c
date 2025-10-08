long long fish::wutil::gettext::gettext_impl::find_existing_catalog(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    unsigned long v6;  // [bp-0x58], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    void* v9;  // [bp-0x40]
    char *v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    unsigned long long v13;  // rax
    unsigned long long *v14;  // rdx
    unsigned long long v15[2];  // rax
    unsigned long long *v16;  // rdx

    v3 = a0;
    v4 = a1;
    if (a0.get_entry(a1))
    {
        return *(v16);
    }
    core::str::<impl str>::split_once(&v5, a0, a1);
    v13 = v5.map_or(a0);
    if ((char)a0.equal(a1, v13, v14))
    {
        v10 = &v3;
        v11 = <&T as core::fmt::Display>::fmt;
        v5 = &g_14c1118;
        v6 = 2;
        v9 = 0;
        v7 = &v10;
        v8 = 1;
        v0.map_or_else(&v5);
        v5 = g_1518c10;
        v6 = g_1518c10 + 168;
        while (true)
        {
            v15 = v5.next();
            if (!v15)
                break;
            if ((char)core::slice::<impl [T]>::starts_with(v15[0], v15[1], v1, v2))
            {
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                return *(v14);
            }
        }
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else if (v13.get_entry(v14))
    {
        return *(v16);
    }
    return 0;
}
