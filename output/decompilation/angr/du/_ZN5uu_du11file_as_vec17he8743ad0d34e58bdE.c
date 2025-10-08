long long uu_du::file_as_vec(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x40]

    v0.open(a1);
    v0.with_capacity((unsigned int)v0.expect());
    return a0.collect(&v0);
}
