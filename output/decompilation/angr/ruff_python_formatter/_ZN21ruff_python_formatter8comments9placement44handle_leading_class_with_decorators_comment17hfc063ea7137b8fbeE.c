double ruff_python_formatter::comments::placement::handle_leading_class_with_decorators_comment(long long a0, long long a1, long long a2)
{
    unsigned int v1;  // eax
    unsigned int v2;  // ecx
    unsigned long v3;  // xmm0lq
    int v4;  // xmm0
    int v5;  // xmm1
    int v6;  // xmm2

    if ((char)a1[72] == 1)
    {
        v1 = (int)a1[64];
        if (v1 < a2->field_30 && a2->field_10 && *((int *)(a2->field_8 + a2->field_10 * 96 - 12)) < v1)
        {
            v2 = (int)a1[68];
            *((unsigned long long *)&a0[8]) = 3;
            *((struct_0 **)&a0[16]) = a2;
            *((unsigned int *)&a0[24]) = v1;
            *((unsigned int *)&a0[28]) = v2;
            *((unsigned short *)&a0[32]) = 0x100;
            *((unsigned long long *)a0) = 96;
            return v3;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v4 = *((int128_t *)a1);
    v5 = (int128_t)a1[16];
    v6 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v6;
    a0[16] = v5;
    *(a0) = v4;
    return (unsigned long long)v4;
}
