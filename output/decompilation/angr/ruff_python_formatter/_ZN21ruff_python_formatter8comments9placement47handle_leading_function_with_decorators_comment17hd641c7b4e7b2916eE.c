double ruff_python_formatter::comments::placement::handle_leading_function_with_decorators_comment(long long a0, long long a1)
{
    unsigned int v1;  // ecx
    char v2;  // al
    char v3;  // cl
    int v4;  // xmm0
    int v5;  // xmm0
    int v6;  // xmm1
    int v7;  // xmm2

    if ((long long)a1[16] == 94)
    {
        v1 = (long long)a1[32];
        if ((long long)a1[32] != 94)
        {
LABEL_702e44:
            if (v1 == 79)
            {
                v3 = (char)a1[72];
                if (((char)a1[72] & v2))
                {
                    v4 = *((int128_t *)a1);
                    a0[8] = v4;
                    *((long long *)&a0[24]) = (long long)a1[64];
                    *((char *)&a0[32]) = 0;
                    *((char *)&a0[33]) = v3;
                    *((unsigned long long *)a0) = 96;
                    return (unsigned long long)v4;
                }
            }
            else
            {
                v3 = (char)a1[72];
                if ((v2 & v1 == 88 & (char)a1[72]) == 1)
                {
                    v4 = *((int128_t *)a1);
                    a0[8] = v4;
                    *((long long *)&a0[24]) = (long long)a1[64];
                    *((char *)&a0[32]) = 0;
                    *((char *)&a0[33]) = v3;
                    *((unsigned long long *)a0) = 96;
                    return (unsigned long long)v4;
                }
            }
        }
    }
    else
    {
        v2 = (int)(long long)a1[16] == 86;
        v1 = (long long)a1[32];
        if ((long long)a1[32] != 94)
            goto LABEL_702e44;
    }
    *((int128_t *)&a0[64]) = (int128_t)a1[64];
    v5 = *((int128_t *)a1);
    v6 = (int128_t)a1[16];
    v7 = (int128_t)a1[32];
    *((int128_t *)&a0[48]) = (int128_t)a1[48];
    a0[32] = v7;
    a0[16] = v6;
    *(a0) = v5;
    return (unsigned long long)v5;
}
