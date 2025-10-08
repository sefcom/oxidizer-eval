long long just::name::Name::from_identifier(struct_0 *a0, void* a1)
{
    void* v0;  // [bp-0x30]
    unsigned long v2;  // rax
    int v3;  // xmm0
    int v4;  // xmm1
    int v5;  // xmm2

    if ((char)a1[64] != 24)
    {
        v0 = 0;
        core::panicking::assert_failed(0, a1 + 64, &g_46e88e, &v0, &g_8305c8); /* do not return */
    }
    v2 = (long long)a1[64];
    a0->field_40 = v2;
    v3 = *((int128_t *)a1);
    v4 = (int128_t)a1[16];
    v5 = (int128_t)a1[32];
    a0->field_30 = (int128_t)a1[48];
    *((void*)&a0->field_20) = v5;
    *((void*)&a0->field_10) = v4;
    *((void*)&a0->field_0) = v3;
    return v2;
}
