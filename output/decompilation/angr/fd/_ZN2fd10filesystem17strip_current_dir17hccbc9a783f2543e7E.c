long long fd::filesystem::strip_current_dir(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = a0.strip_prefix(a1);
    if (!v7)
    {
        if (v7)
            return a0;
    }
    else
    {
        if (v7)
            return v7;
    }
    return v8;
}
