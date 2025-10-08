long long bat::theme::ThemeName::new(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    v0.into(a1);
    if (!(char)v1.equal(*((long long *)&v2), "defaultplainUnknown style 'src/style.rs", 7))
    {
        v4 = *((long long *)&v2);
        *((unsigned long long *)&a0[16]) = v4;
        *((int128_t *)a0) = *((int128_t *)&v0);
        return v4;
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
