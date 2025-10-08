long long fish::fork_exec::flog_safe::format_int(void* a0, unsigned long long a1, char a2)
{
    void* v1;  // rax
    unsigned long long v2;  // rsi
    void* v3;  // r9
    unsigned long long v4;  // rdx

    if (!a1)
        return "0";
    *((uint128_t *)a0) = 0;
    *((unsigned long long *)&a0[16]) = 0;
    v1 = 23;
    while (true)
    {
        v2 = a1;
        v3 = v1;
        v4 = v2 / 10;
        *((char *)(a0 + v3)) = (char)((v2 & 4294967295) - (unsigned int)v4 * 10) | 48;
        v1 = v3 - 1;
        if (v3 < 2)
            break;
        a1 = v4;
        if (v2 <= 9)
            break;
    }
    if (a2)
        *((char *)(a0 + v1)) = 45;
    else
        v1 += 1;
    return a0 + v1;
}
