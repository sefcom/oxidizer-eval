long long fish::env::environment::Environment::getf_unless_empty(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x38], Other Possible Types: char
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x10]

    v2.getf(a1, a2, a3, a4);
    if (!*((long long *)&v2))
    {
        *((unsigned long long *)a0) = 0;
        return a0;
    }
    v1 = *((long long *)&v3);
    memcpy(&v0, &v2, 16);
    if ((char)v0.is_empty())
    {
        *((unsigned long long *)a0) = 0;
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v0);
    }
    else
    {
        *((unsigned long long *)&a0[16]) = v1;
        *(a0) = v0;
    }
    return a0;
}
