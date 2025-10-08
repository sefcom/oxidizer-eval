long long starship::config::Style::to_ansi_style(void* a0, void* a1, struct_0 *a2)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rcx
    unsigned int v3;  // ecx
    unsigned long v4;  // rax

    if (!a2)
    {
        v4 = (char)a1[16];
        *((char *)&a0[16]) = v4;
        *((int128_t *)a0) = *((int128_t *)a1);
        return v4;
    }
    if ((char)a1[17] == 2)
    {
        v1 = (int)a1[13];
        v2 = (char)a1[18];
        if ((char)v2 == 2)
            goto LABEL_b62a67;
        goto LABEL_b62a4f;
    }
    else if (((char)a1[17] & 1))
    {
        v1 = *((int *)((char *)&a2->field_9 + 1));
        v2 = (char)a1[18];
        if ((char)v2 == 2)
            goto LABEL_b62a67;
LABEL_b62a4f:
        v3 = *((int *)&(&a2->padding_0)[1 + 4 * (v2 & 4294967295)]);
    }
    else
    {
        v1 = *((int *)&(&a2->padding_0)[1]);
        v2 = (char)a1[18];
        if ((char)v2 != 2)
            goto LABEL_b62a4f;
LABEL_b62a67:
        v3 = (int)a1[9];
    }
    *((char *)&a0[8]) = (char)a1[8];
    *((long long *)a0) = *((long long *)a1);
    *((unsigned int *)&a0[9]) = v3;
    *((unsigned int *)&a0[13]) = v1;
    return v1;
}
