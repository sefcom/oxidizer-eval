char uu_touch::all_digits(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0;
    v1 = a1 + a0;
    return v0.all();
}
