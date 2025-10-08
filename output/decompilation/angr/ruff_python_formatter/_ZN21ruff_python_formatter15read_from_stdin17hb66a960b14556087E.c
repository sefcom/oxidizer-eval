long long ruff_python_formatter::read_from_stdin(void* a0)
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    void* v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    void* v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    char v7;  // dl
    unsigned long long v8;  // rdx

    v2 = 0;
    v3 = 1;
    v4 = 0;
    v5 = std::io::stdio::stdin();
    v0 = v5.lock();
    v1 = v7 & 1;
    if (!((char)v0.read_to_string(&v2) & 1))
    {
        core::ptr::drop_in_place<std::io::stdio::StdinLock>(v0, *((int *)&v1));
        *((unsigned long long *)&a0[16]) = 0;
        *((int128_t *)a0) = *((int128_t *)&v2);
        return 0;
    }
    *((long long *)&a0[8]) = v8.from();
    *((unsigned long long *)a0) = 0x8000000000000000;
    core::ptr::drop_in_place<std::io::stdio::StdinLock>(v0, *((int *)&v1));
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(v2, 1);
}
