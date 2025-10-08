double ruff_python_formatter::comments::placement::handle_pattern_match_class_comment(long long a0, long long a1, long long a2)
{
    unsigned int v1;  // eax
    unsigned int v2;  // edx
    unsigned int v3;  // ecx
    int v4;  // xmm0
    char v5;  // dl
    int v6;  // xmm0
    int v7;  // xmm1
    int v8;  // xmm2

    a2->field_40.range();
    v1 = (int)a1[64];
    if (v2 < v1)
    {
        v3 = (int)a1[68];
        if (v3 < a2->field_30)
        {
            v4 = *((int128_t *)a1);
            v5 = (char)a1[72];
            a0[8] = v4;
            *((unsigned int *)&a0[24]) = v1;
            *((unsigned int *)&a0[28]) = v3;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v5;
            *((unsigned long long *)a0) = 96;
            return (unsigned long long)v4;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v6 = *((int128_t *)a1);
    v7 = (int128_t)a1[16];
    v8 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v8;
    a0[16] = v7;
    *(a0) = v6;
    return (unsigned long long)v6;
}
