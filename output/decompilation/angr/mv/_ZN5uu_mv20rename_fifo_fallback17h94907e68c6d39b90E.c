long long uu_mv::rename_fifo_fallback(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x2f]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    std::fs::exists(&v0, a2, a3);
    if (v0)
        return *((long long *)&v2);
    if (v1)
    {
        v4 = std::fs::remove_file(a2, a3);
        if (v4)
            return v4;
    }
    v5 = uucore::features::fs::make_fifo(a2, a3);
    if (!v5)
        return std::fs::remove_file(a0, a1);
    return v5;
}
