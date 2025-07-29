long long uu_cp::disk_usage(unsigned long long a0, unsigned long a1, char a2)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    int v2;  // [bp-0xd8]
    char v3;  // [bp-0xa0]
    unsigned long long v5[3];  // rax

    v0 = a0;
    v1 = a0 + a1 * 24;
    if (!v0.next())
        goto LABEL_4e2934;
    if (!a2)
    {
        while (true)
        {
            std::fs::metadata(&v2, v5);
            if ((int)v2 == 2)
                break;
            v5 = v0.next();
            if (!v5)
                goto LABEL_4e2934;
        }
LABEL_4e2934:
        return 0;
    }
    while (true)
    {
        std::fs::metadata(&v2, v5);
        if ((int)v2 == 2)
            break;
        if (((short)*((int *)&v3) & 0xf000) != 0x4000)
        {
            v5 = v0.next();
            if (!(!v5))
                continue;
        }
        else
        {
            v5 = v0.next();
            if (!v5)
                goto LABEL_4e2934;
        }
    }
}
