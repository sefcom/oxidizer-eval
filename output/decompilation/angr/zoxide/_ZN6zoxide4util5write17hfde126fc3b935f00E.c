long long zoxide::util::write(unsigned long long a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x88]
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x68]
    char *v4;  // [bp-0x60], Other Possible Types: char
    char *v5;  // [bp-0x58]
    unsigned int v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // r15

    v7 = a0.as_ref();
    v8 = v10;
    v11 = a1[1].index(a1[2]);
    v12 = v7.parent(v10);
    if (!v12)
        core::option::unwrap_failed(&g_534bc8); /* do not return */
    zoxide::util::tmpfile(&v2, v12, v10);
    v13 = v2;
    if (!((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63)))
    {
        memcpy(&v1, &v4, 16);
        v0 = v3;
        v6 = v13;
        v2 = v11;
        v3 = v10;
        v4 = &v0;
        v5 = &v7;
        v13 = zoxide::util::write::{{closure}}(&v2);
        if (v13)
        {
            v2 = std::fs::remove_file(&v0);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v2);
        }
        core::mem::drop(v0, *((long long *)&v1));
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a1[0], a1[1]);
    return v13;
}
