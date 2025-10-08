long long starship::print::all_modules_uniq(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    struct_0 *v3;  // [bp-0x70]
    int v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    unsigned long long v9;  // r13

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v9 = 8;
    do
    {
        if (!a1.get(a2, *((long long *)(v9 - -18820104)), *((long long *)&(&g_11f2c10)[v9])))
        {
            v6.to_vec(*((long long *)(v9 - -18820104)), *((long long *)&(&g_11f2c10)[v9]));
            v5 = *((long long *)&v7);
            v4 = v6;
            v0.push(&v4);
        }
        v9 += 16;
    } while (v9 != 1592);
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return 0;
}
