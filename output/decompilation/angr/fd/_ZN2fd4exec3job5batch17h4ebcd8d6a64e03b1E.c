long long fd::exec::job::batch(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3[59])
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0x80]
    void* v3;  // r8

    v0.into_iter(a0);
    v1.filter_map(&v0, a3);
    v3 = 0;
    if (!((char)(((0 ^ a3[45]) & (0 ^ -(a3[45]))) >> 63)))
        v3 = a3[46];
    return a1.execute_batch(a2, &v1, a3[58], v3, a3[47]);
}
