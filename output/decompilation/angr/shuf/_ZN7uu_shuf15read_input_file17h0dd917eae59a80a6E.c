long long uu_shuf::read_input_file(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    char v4;  // [bp-0x30], Other Possible Types: unsigned long
    char v5;  // [bp-0x28]
    unsigned long long v8;  // rcx

    if (!(char)a1.equal(a2, "-read errorsrc/uu/shuf/src/shuf.rs", 1))
    {
        std::fs::read(&(char)v0, a1, a2);
        a0.map_err_context(&(char)v0, a1, a2);
        return a0;
    }
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = std::io::stdio::stdin();
    v4.map_err_context(v3.read_to_end(&v0), a2);
    if (!v4)
    {
        *((unsigned long long *)&a0[16]) = 0;
        *((int128_t *)a0) = *((int128_t *)&v0);
        return a0;
    }
    v8 = *((long long *)&v5);
    *((unsigned long *)&a0[8]) = v4;
    *((unsigned long long *)&a0[16]) = v8;
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, 1);
    return a0;
}
