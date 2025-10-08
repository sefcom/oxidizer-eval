long long ruff_python_formatter::string::normalize::normalize_string(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned int a5)
{
    void* v2;  // [bp-0x110]
    void* v32;  // r13
    void* v34;  // rbp
    unsigned long v54;  // rdx
    unsigned long long v55;  // rax
    unsigned long long v56;  // r8
    unsigned long long v57;  // rcx

    if (!v34)
    {
        *((unsigned long long *)&v32[8]) = a1;
        *((unsigned long long *)&v32[16]) = a2;
        *((unsigned long long *)v32) = 0x8000000000000000;
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v2);
    }
    v55 = v34.get(a1, a2);
    if (v55)
    {
        v2.spec_extend(v55, v54 + v55);
        *((unsigned long long *)&v32[16]) = 0;
        *((int128_t *)v32) = *((int128_t *)&v2);
        return 0;
    }
    v56 = &g_97f778;
    v57 = a2;
}
