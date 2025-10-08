int fish::builtins::fish_indent::read_file(void* a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x3c]
    void* v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    void* v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    char v5;  // [bp-0x10]
    unsigned long long v7;  // rdx

    v0 = a1;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    if (((char)v0.read_to_end(&v1) & 1))
    {
        v4 = v7;
        core::ptr::drop_in_place<std::io::error::Error>(&v4);
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        fish::common::str2wcstring(&(char)v4, v2, 0);
        *((long long *)&a0[16]) = *((long long *)&v5);
        *((int128_t *)a0) = *((int128_t *)&v4);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
    return core::ptr::drop_in_place<std::fs::File>(v0);
}
