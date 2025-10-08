long long fish::history::string_could_be_path(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (!a1)
        return 0;
    v0 = v2;
    v3 = a0.starts_with(a1, 45);
    return v3 & 0xffffffffffffff00 | (char)v3 ^ 1;
}
