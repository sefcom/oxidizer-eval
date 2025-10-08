long long fish::null_terminated_array::NullTerminatedArray::new(unsigned long long *a0, unsigned long a1)
{
    void* v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    void* v4;  // [bp-0x38]
    unsigned long long *v6;  // r13

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v0.reserve_exact(a1 + 1, 8, &g_14dbfc0);
    v6 = 0;
    while (a1 * 16 != v6)
    {
        v6 += 2;
        v0.push(*((long long *)(a0 + v6)).haystack(), &g_14dbfd8);
    }
    v0.push(0, &g_14dbff0);
    v4 = 0;
    memcpy(&v3, &v0, 16);
    return v3.into_boxed_slice();
}
