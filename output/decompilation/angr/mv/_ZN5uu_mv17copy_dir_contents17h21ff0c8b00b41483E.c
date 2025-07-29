long long uu_mv::copy_dir_contents(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long a6)
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [bp+0x0]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = std::fs::create_dir_all(a2, a3);
    if (v3)
    {
        return v3;
    }
    else if (!a5 || !a4)
    {
        return 0;
    }
    else
    {
        return uu_mv::copy_dir_contents_recursive(a0, a1, a2, a3, a4, a5, *((long long *)&v1));
    }
}
