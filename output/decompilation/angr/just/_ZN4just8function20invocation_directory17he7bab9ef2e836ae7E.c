long long just::function::invocation_directory(void* a0, struct_1 **a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x18]
    int v7;  // xmm0

    v0.convert_native_path(a1, a2, a3, *(a1)->field_0->field_20, *(a1)->field_0->field_28);
    if (*((int *)&v0) == 1)
    {
        v5 = v3;
        memcpy(&v4, &v1, 16);
        just::function::invocation_directory::{{closure}}(a0 + 8, &v4, a2);
        *((unsigned long long *)a0) = 1;
    }
    else
    {
        v7 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v7;
    }
    return a0;
}
