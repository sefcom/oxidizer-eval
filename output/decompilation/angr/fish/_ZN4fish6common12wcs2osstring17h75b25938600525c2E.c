long long fish::common::wcs2osstring(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    void* v2;  // [bp-0x10]

    if (a2)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        fish::common::wcs2string_appending(&v0, a1, a2);
        *((unsigned long long *)&a0[16]) = 0;
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    else
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 1;
        *((unsigned long long *)&a0[16]) = 0;
    }
    return a0;
}
