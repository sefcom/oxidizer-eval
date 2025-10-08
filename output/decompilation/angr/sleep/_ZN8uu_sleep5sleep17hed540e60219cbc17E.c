long long uu_sleep::sleep(unsigned long long a0, unsigned long a1)
{
    char v0;  // [bp-0x29]
    char v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x10]
    unsigned long long v4;  // rax
    unsigned int v5;  // edx

    v0 = 0;
    v4 = a0.fold(a1 * 16 + a0, &v0);
    if (!v0)
    {
        std::thread::sleep(v4, v5);
        return 0;
    }
    v1.to_vec();
    v2 = 1;
    return v1.new();
}
