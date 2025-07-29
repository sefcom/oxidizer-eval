long long uu_du::file_as_vec(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x40]

    v0.open(a1);
    v1.with_capacity(0x2000, (unsigned int)v0.expect());
    return a0.from_iter(&v1, &g_5e4a78);
}
