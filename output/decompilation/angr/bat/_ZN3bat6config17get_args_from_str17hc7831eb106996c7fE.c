long long bat::config::get_args_from_str(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x90], Other Possible Types: char
    unsigned long long v1;  // [bp-0x80]
    int v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    void* v5;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x50]
    void* v7;  // [bp-0x48], Other Possible Types: char
    void* v8;  // [bp-0x38]
    unsigned short v9;  // [bp-0x18]

    v7.into_searcher(10, a1, a2);
    v5 = 0;
    v6 = a2;
    v9 = 1;
    v0.collect(&v5);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        v4 = v1;
        v2 = v0;
        v5 = v3;
        v6 = v3 + v4 * 24;
        v7 = 0;
        v8 = 0;
        v0.collect(&v5);
        *((unsigned long long *)&a0[16]) = v1;
        *(a0) = v0;
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<alloc::string::String>>>(&(char)v2);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
