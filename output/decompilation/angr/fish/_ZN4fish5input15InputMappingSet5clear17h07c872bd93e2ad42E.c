long long fish::input::InputMappingSet::clear(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char *v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]

    v1 = a1;
    v2 = a2;
    if (!a3)
        a0 += 24;
    v0 = &v1;
    return a0.retain(&v0);
}
