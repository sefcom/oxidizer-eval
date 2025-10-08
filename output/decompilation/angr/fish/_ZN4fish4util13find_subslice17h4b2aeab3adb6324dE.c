long long fish::util::find_subslice(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v7;  // rdx

    v1 = a0.as_ref(a1);
    v2 = v7;
    if (!v7)
        return 1;
    v3 = a2.as_ref(a3);
    v4 = v7;
    v5 = v7;
    v0 = 0;
    return (int)v3.try_fold(&v1, &v0) & 1;
}
