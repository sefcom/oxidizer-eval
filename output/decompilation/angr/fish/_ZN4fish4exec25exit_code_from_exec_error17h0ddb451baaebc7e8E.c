long long fish::exec::exit_code_from_exec_error(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]
    unsigned long long v5;  // rax

    v5 = 1;
    switch (a0)
    {
    case 0:
        v0 = &g_14d7a80;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d7a90); /* do not return */
    case 2: case 20:
        return 127;
    case 8: case 13:
        v5 = 126;
        goto LABEL_13a4db7;
    default:
LABEL_13a4db7:
        return v5;
    }
}
