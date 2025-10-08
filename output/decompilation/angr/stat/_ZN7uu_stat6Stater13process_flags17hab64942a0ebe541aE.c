long long uu_stat::Stater::process_flags(unsigned int *a0, unsigned long long a1, unsigned long long *a2, unsigned long a3, char a4[6])
{
    unsigned int *v0;  // [bp-0x8]
    unsigned long long v2;  // rdi

    if (*(a2) >= a3)
        return a0;
    do
    {
        if (v2 >= a1)
        {
            v0 = a0;
            core::panicking::panic_bounds_check(v2, a1, &g_519d48); /* do not return */
        }
        switch (a0[v2])
        {
        case 32: case 73:
            a4[3] = 1;
            goto LABEL_4751b0;
        case 35:
            a4[0] = 1;
            goto LABEL_4751b0;
        case 39:
            a4[5] = 1;
            goto LABEL_4751b0;
        case 43:
            a4[4] = 1;
            goto LABEL_4751b0;
        case 45:
            a4[2] = 1;
            goto LABEL_4751b0;
        case 48:
            a4[1] = 1;
            goto LABEL_4751b0;
        }
LABEL_4751b0:
        v2 += 1;
        *(a2) = v2;
    } while (a3 != v2);
    return a0;
}
