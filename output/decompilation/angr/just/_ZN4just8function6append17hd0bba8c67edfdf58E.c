long long just::function::append(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    char *v5;  // [bp-0x58]
    void* v6;  // [bp-0x50]
    char v7;  // [bp-0x40]
    unsigned short v8;  // [bp-0x18]

    v3 = a2;
    v4 = a3;
    v7.into_searcher(a4, a5);
    v6 = 0;
    v8 = 1;
    v5 = &v3;
    v0.collect(&v5);
    alloc::str::join_generic_copy(&v5, v1, v2, " [private]\nexport ", 1);
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = a5;
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v5);
    a0->field_0 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return a0;
}
