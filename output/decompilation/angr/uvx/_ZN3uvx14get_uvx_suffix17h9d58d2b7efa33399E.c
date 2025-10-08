long long uvx::get_uvx_suffix(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    char v2;  // [bp-0x8]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v4 = a0.file_name(a1);
    if (!v4)
        return 0;
    core::str::converts::from_utf8(&v0, v4, v5);
    if (!(v0 & 1))
        return v1.strip_prefix_of(*((long long *)&v2));
    return 0;
}
