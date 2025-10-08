long long fish::complete::const_desc(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x20]

    v0.to_vec(a0, a1);
    return v0.new();
}
