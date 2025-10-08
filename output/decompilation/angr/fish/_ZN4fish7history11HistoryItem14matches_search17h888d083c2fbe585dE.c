void fish::history::HistoryItem::matches_search(unsigned long long a0[3], unsigned long a1, unsigned long a2, unsigned int a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1[3];  // [bp-0x58]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v7;  // r15
    unsigned long long v8;  // r14
    unsigned long long v9;  // r12
    unsigned long long v10;  // rbx

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    if (a4)
    {
        v1[0] = a0;
        v0 = 0x8000000000000000;
        goto (long long)(g_9f41bc[a3] + (char *)&g_9f41bc[0]);
    }
    else
    {
        (char)v0.to_lowercase(a0[1], a0[2]);
        goto (long long)(g_9f41bc[a3] + (char *)&g_9f41bc[0]);
    }
}
