long long uu_test::eval(struct_0 *a0, unsigned long long a1[3])
{
    int v0;  // [bp-0x68]
    int v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x48]
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdi

    if (!a1[2])
    {
        a0->field_8 = 0;
        a0->field_0 = 7;
        return a0;
    }
    v4 = a1[2] - 1;
    a1[2] = v4;
    v5 = a1[1];
    v6 = v4 * 5;
    *((int128_t *)&v0) = *((int128_t *)(v5 + v6 * 8));
    v2 = *((long long *)(v5 + v6 * 8 + 32));
    *((int128_t *)&v1) = *((int128_t *)(v5 + v6 * 8 + 16));
    goto (long long)(g_42eb50[v0] + (char *)&g_42eb50[0]);
}
