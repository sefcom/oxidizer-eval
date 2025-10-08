long long fish::env_universal_common::decode_serialized(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x20]
    unsigned long long v4;  // rax

    v4 = a1.equal(a2, &g_550fb4, 1);
    if (!(char)v4)
    {
        v0 = a1;
        v1 = a2;
        v2 = 30;
        return a0.collect(&v0);
    }
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    return v4;
}
