long long uu_touch::filetime_to_datetime(unsigned int *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x24], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0x1c]
    unsigned long long v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x10]
    unsigned long long v5;  // rax

    v5 = v0.from_timestamp(a1, a2);
    if (!*((int *)&v0))
    {
        *(a0) = 0;
        return v5;
    }
    v3 = v1;
    v2 = v0;
    return a0.from(&v2);
}
