long long uu_sort::KeySettings::set_dictionary_order::h4d79f3dcf023ab93(unsigned long long a0[3], char a1[6])
{
    unsigned long long v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    v3 = uu_sort::KeySettings::check_compatibility::hd03ca512104bcd48(&v0, a1[5], a1[3], 1);
    if (v0 == 0x8000000000000000)
    {
        a1[2] = 1;
        a0[0] = 0x8000000000000000;
        return v3;
    }
    v3 = *((long long *)&v1);
    a0[2] = v3;
    *((int128_t *)&a0[0]) = *((int128_t *)&v0);
    return v3;
}
