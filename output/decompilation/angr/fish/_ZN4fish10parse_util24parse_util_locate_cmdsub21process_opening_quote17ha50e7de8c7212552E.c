long long fish::parse_util::parse_util_locate_cmdsub::process_opening_quote(unsigned int *a0, unsigned long long a1, char *a2, unsigned int a3, unsigned long long a4, void* a5, unsigned long long a6[2], unsigned int a7)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // rax
    void* v2;  // rdx
    unsigned long long v3;  // rcx
    void* v4;  // 4096
    unsigned long long v5;  // rdx
    unsigned int v6;  // r12d

    v0 = v1;
    v2 = a5 - 1;
    if (a5 < 1)
        v2 = 0;
    if (a7 != 0x110000)
    {
        v3 = a7;
        if (a7 == 0x110000)
            goto LABEL_13e38da;
LABEL_13e38d9:
        v4 = a5;
    }
    else
    {
        v3 = 34;
        if (a7 != 0x110000)
            goto LABEL_13e38d9;
LABEL_13e38da:
        v4 = v2;
    }
    if (!((char)fish::tokenizer::quote_end(a0, a1, v4, v3) & 1))
    {
        return 0;
    }
    else if (v5 < a1)
    {
        v6 = a0[v5];
        if (v6 == 36)
        {
            a6[0] = 1;
            a6[1] = v5;
            a4.push(a3);
        }
        if (!a2 || a3)
            return 1;
        *(a2) = v6 == 36;
        return 1;
    }
    else
    {
        core::panicking::panic_bounds_check(v5, a1, &g_14dd768); /* do not return */
    }
}
