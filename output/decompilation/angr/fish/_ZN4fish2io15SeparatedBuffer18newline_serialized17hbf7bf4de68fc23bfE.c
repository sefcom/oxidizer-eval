long long fish::io::SeparatedBuffer::newline_serialized(struct_0 *a0, unsigned long long a1[5])
{
    unsigned long long v0;  // [bp-0x48]
    void* v1;  // [bp-0x38]
    unsigned long long v3;  // r13
    void* v4;  // rbp
    unsigned long v5;  // rdx

    v0 = a1[4].with_capacity_in(1, 1, &g_14db650);
    v1 = 0;
    if (a1[2])
    {
        v3 = a1[1];
        v4 = 0;
        do
        {
            v0.spec_extend(*((long long *)(8 + v3 + (char *)v4)), *((long long *)(16 + v3 + (char *)v4)) + *((long long *)(8 + v3 + (char *)v4)));
            if (*(24 + v3 + (char *)v4) == 1)
                v0.push(10, &g_14db668);
            v4 += 32;
        } while (a1[2] * 32 != v4);
    }
    a0->field_10 = 0;
    a0->field_0 = v0;
    a0->field_8 = v5;
    return a0;
}
