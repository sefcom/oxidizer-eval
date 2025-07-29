int uu_tail::follow::watch::Observer::add_bad_path()
{
    char v0;  // [bp-0x18]
    char v2[143];  // rdi
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // r8
    char v7;  // r9b

    if (v2[140] != 1)
    {
        return;
    }
    else if (v2[142] != 2)
    {
        v2.add_path(v3, v4, v5, v6, 0, *((long long *)&v0), v7);
        return;
    }
    else
    {
        return;
    }
}
