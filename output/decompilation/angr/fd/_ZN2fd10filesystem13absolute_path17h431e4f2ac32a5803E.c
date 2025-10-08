long long fd::filesystem::absolute_path(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    fd::filesystem::path_absolute_form(&v0, a1, a2);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
        a0[2] = *((long long *)&v2);
    a0[1] = v1;
    a0[0] = v0;
    return v0;
}
