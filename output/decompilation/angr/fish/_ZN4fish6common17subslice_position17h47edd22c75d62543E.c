long long fish::common::subslice_position(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]

    v1 = a2;
    v2 = a3;
    if (!a3)
        return 1;
    v3 = a0;
    v4 = a1;
    v5 = a3;
    v0 = 0;
    return (int)v3.try_fold(&v1, &v0) & 1;
}
