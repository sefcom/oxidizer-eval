void forc_tx::ParseError::print(unsigned long long *a0)
{
    unsigned long long *v0;  // [bp-0x328]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax

    v1 = v3;
    v4 = 0x8000000000000000 ^ *(a0);
    if (v4 >= 5)
        v4 = 3;
    v0 = a0;
    goto (long long)(g_4aa6e0[v4] + (char *)&g_4aa6e0[0]);
}
