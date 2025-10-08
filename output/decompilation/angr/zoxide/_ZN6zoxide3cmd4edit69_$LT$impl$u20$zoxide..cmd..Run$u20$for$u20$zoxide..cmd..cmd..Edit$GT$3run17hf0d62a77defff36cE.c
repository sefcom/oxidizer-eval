long long zoxide::cmd::edit::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Edit>::run(unsigned long long *a0)
{
    char v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    int v2;  // [bp-0xd8]
    char v3;  // [bp-0xc8]
    char v4;  // [bp-0xb8]
    char v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0x88]
    int v7;  // [bp-0x80]
    char v8;  // [bp-0x70]
    char v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x50]
    unsigned long v12;  // rdx

    if (((char)zoxide::util::current_time() & 1))
        return v12;
    v0.open();
    if (*((int *)&v0) == 1)
        return v6;
    v10 = *((long long *)&v5);
    memcpy(&v9, &v4, 16);
    memcpy(&v8, &v3, 16);
    v7 = v2;
    v6 = v1;
    goto (long long)(g_4192d4[*(a0)] + (char *)&g_4192d4[0]);
}
