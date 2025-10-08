long long fish::history::file::MmapRegion::map_file(unsigned long long a0[3], unsigned int a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    unsigned long long v6;  // rcx

    v0 = v2;
    v3 = mmap(NULL, a2, 1, 2, a1, 0);
    if (v3 != -1)
    {
        v4 = v3.new(a2);
        a0[2] = v5;
        v6 = 0;
    }
    else
    {
        v4 = *(__errno_location()) * 0x100000000 | 2;
        v6 = 1;
    }
    a0[1] = v4;
    a0[0] = v6;
    return v4;
}
