long long fish::terminal::tparm1(unsigned long long a0, unsigned long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x570]
    unsigned long long v1;  // [bp-0x568]
    void* v2;  // [bp-0x560]
    unsigned long long v3;  // [bp-0x558]
    unsigned long long v4;  // [bp-0x558]
    int v5;  // [bp-0x550], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x548]
    unsigned long long v7;  // [bp-0x540]
    unsigned int v8;  // [bp-0x538]
    int v9;  // [bp-0x528], Other Possible Types: char
    unsigned long long v10;  // [bp-0x518]
    char v11;  // [bp-0x510]
    char v12;  // [bp-0x500]
    void* v14;  // rbx

    if (a1 == 1)
        core::panicking::panic("assertion failed: !cap.to_bytes().is_empty()src/termsize.rs", 44, &g_14e2bc8); /* do not return */
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v7 = 0x8000000000000000;
    v8 = a2;
    v12.default();
    v9.expand(a0, a1 - 1, &v0, &v7, &v12);
    if (v9 == 4)
    {
        v4 = v0;
        v5 = 1;
        v6 = 0;
        v3 = v4;
        if (v3 == 0x8000000000000000)
            goto LABEL_1415b48;
        memcpy(&v11, &v5, 16);
        v10 = v4;
        v14 = v10.to_cstring();
    }
    else
    {
        v5 = v9;
        v3 = 0x8000000000000000;
        core::ptr::drop_in_place<fish::io::BufferElement>(v4, 1);
LABEL_1415b48:
        core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<u8>,terminfo::error::Error>>(&v3);
        v14 = 0;
    }
    core::ptr::drop_in_place<terminfo::expand::Context>(&v12);
    core::ptr::drop_in_place<rust_embed_utils::EmbeddedFile>(v7, *((long long *)&v8));
    return v14;
}
