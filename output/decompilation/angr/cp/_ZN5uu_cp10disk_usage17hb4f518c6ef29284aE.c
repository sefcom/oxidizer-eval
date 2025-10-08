long long uu_cp::disk_usage(unsigned long long a0[3], unsigned long a1, char a2)
{
    int v0;  // [bp-0xe0]
    char v1;  // [bp-0xa8]
    unsigned long long v3[3];  // r14
    unsigned long long v4;  // r13
    unsigned long long v5;  // r13
    unsigned long long v7;  // r13

    if (!a1)
        return 0;
    v3 = a0;
    v4 = a1 * 24;
    if (!a2)
    {
        while (true)
        {
            v5 = v4;
            std::fs::metadata(&v0, v3);
            if ((int)v0 == 2)
                break;
            v3 += 1;
            v4 = v5 - 24;
            if (v5 == 24)
                return 0;
        }
    }
    else
    {
        while (true)
        {
            v7 = v4;
            std::fs::metadata(&v0, v3);
            if ((int)v0 == 2)
                break;
            if (((short)*((int *)&v1) & 0xf000) != 0x4000)
            {
                v3 += 1;
                v4 = v7 - 24;
                if (v7 == 24)
                    return 0;
            }
            else if (!((char)uu_cp::disk_usage_directory(v3[1], v3[2]) & 1))
            {
                v3 += 1;
                v4 = v7 - 24;
                if (v7 == 24)
                    return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 1;
}
