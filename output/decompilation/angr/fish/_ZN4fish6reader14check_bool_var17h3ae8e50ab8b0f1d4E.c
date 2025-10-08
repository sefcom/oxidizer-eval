long long fish::reader::check_bool_var(unsigned long long a0, struct_0 **a1, unsigned long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x38], Other Possible Types: unsigned long long
    char v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x20]
    char v4;  // [bp-0x18]

    a1(&v0, a0);
    if (!*((long long *)&v0))
        return a4;
    fish::env_dispatch::init_locale::{{closure}}(&v1, &v0);
    memcpy(&v4, &v2, 16);
    v3 = v1;
    return (unsigned int)fish::reader::check_bool_var::{{closure}}(&v3);
}
