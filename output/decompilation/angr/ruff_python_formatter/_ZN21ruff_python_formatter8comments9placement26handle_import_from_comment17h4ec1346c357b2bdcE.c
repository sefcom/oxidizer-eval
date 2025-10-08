double ruff_python_formatter::comments::placement::handle_import_from_comment(long long a0, long long a1, long long a2)
{
    unsigned int v1;  // ebx
    int v2;  // xmm0
    int v3;  // xmm1
    int v4;  // xmm2
    int v5;  // xmm0
    unsigned int v6;  // eax

    if (!(char)a1[72] && a2->field_10)
    {
        v1 = (int)a1[64];
        if ((char)ruff_python_formatter::comments::placement::handle_import_from_comment::{{closure}}(a2->field_40, v1, a2->field_8))
        {
            v5 = *((int128_t *)a1);
            v6 = (int)a1[68];
            a0[8] = v5;
            *((unsigned int *)&a0[24]) = v1;
            *((unsigned int *)&a0[28]) = v6;
            *((unsigned short *)&a0[32]) = 0;
            *((unsigned long long *)a0) = 96;
            return (unsigned long long)v5;
        }
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v2 = *((int128_t *)a1);
    v3 = (int128_t)a1[16];
    v4 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v4;
    a0[16] = v3;
    *(a0) = v2;
    return (unsigned long long)v2;
}
