void forc_crypto::run()
{
    char v0;  // [bp-0x110]
    unsigned long long v2;  // rax

    v0.parse();
    v2 = *((long long *)&v0) - 2;
    if (v2 >= 6)
        v2 = 6;
    goto (long long)(*((int *)(4682836 + 4 * v2)) + (char *)&g_477454[0]);
}
