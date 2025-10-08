double ruff_python_formatter::string::docstring::CodeExampleKind::indent(long long a0, long long a1)
{
    unsigned long long v1;  // rcx
    unsigned int v2;  // eax
    int v3;  // xmm0
    int v4;  // xmm0
    int v5;  // xmm0
    unsigned long v6;  // xmm0lq

    v1 = 0x8000000000000000 ^ a1->field_0;
    if (v1 >= 3)
        v1 = 1;
    if (!v1)
    {
        a0.from_str(a1->field_18[1], a1->field_18[2]);
        return v6;
    }
    else if (v1 == 1)
    {
        v2 = a1->field_20[0];
        if (v2 != 5)
        {
            *((int *)&a0[20]) = *((int *)((char *)&a1->field_28 + 4));
            v4 = *((int128_t *)((char *)&a1->field_20[0] + 4));
            a0[4] = v4;
            *((unsigned int *)a0) = v2;
            return (unsigned long long)v4;
        }
        *((unsigned long long *)&a0[16]) = a1->field_18[2];
        v3 = *((int128_t *)&a1->field_18[0]);
        *(a0) = v3;
        return (unsigned long long)v3;
    }
    else
    {
        *((unsigned long long *)&a0[16]) = a1->field_20[0];
        v5 = *((int128_t *)&a1->field_18[1]);
        *(a0) = v5;
        return (unsigned long long)v5;
    }
}
