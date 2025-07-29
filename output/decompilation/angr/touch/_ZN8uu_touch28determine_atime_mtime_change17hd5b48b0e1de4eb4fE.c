long long uu_touch::determine_atime_mtime_change(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    unsigned long long v2[3];  // rax
    char v3;  // bpl
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    char v6;  // bpl
    unsigned long long v7;  // rax

    if ((char)a0.contains_id(_ZN8uu_touch7options4TIME17hd0f0a07d4b06cac0E, g_771650))
    {
        v0.try_get_one(a0, _ZN8uu_touch7options4TIME17hd0f0a07d4b06cac0E, g_771650);
        v2 = _ZN8uu_touch7options4TIME17hd0f0a07d4b06cac0E.unwrap(g_771650, &v0);
        if (!v2)
            goto LABEL_5b61b5;
        v3 = uu_touch::determine_atime_mtime_change::{{closure}}(v2[1], v2[2]);
        if (!(!(char)a0.get_flag(_ZN8uu_touch7options6ACCESS17hd2278682e00e1a5dE, g_771610)))
            goto LABEL_5b61d3;
        v4 = a0.get_flag(_ZN8uu_touch7options12MODIFICATION17ha306a006ba24d570E, g_771620);
        if ((char)v4)
        {
            v5 = v4 & 0xffffffffffffff00 | 1;
            if (!v3)
                return v4 & 0xffffffffffffff00 | 1;
        }
        else
        {
            if (!v3)
                return v4 & 0xffffffffffffff00 | 1;
LABEL_5b6228:
            return 0;
        }
    }
    else
    {
LABEL_5b61b5:
        v6 = 2;
        if (!(char)a0.get_flag(_ZN8uu_touch7options6ACCESS17hd2278682e00e1a5dE, g_771610))
        {
            v7 = a0.get_flag(_ZN8uu_touch7options12MODIFICATION17ha306a006ba24d570E, g_771620);
            v4 = v7 & 0xffffffffffffff00 | 2;
            if (!(char)v7)
                return v7 & 0xffffffffffffff00 | 2;
            return v4 & 0xffffffffffffff00 | 1;
        }
LABEL_5b61d3:
        v5 = a0.get_flag(_ZN8uu_touch7options12MODIFICATION17ha306a006ba24d570E, g_771620);
        if (!(char)v5 && (v6 == 2 || (v6 & 1)))
            goto LABEL_5b6228;
    }
    return v5 & 0xffffffffffffff00 | 2;
}
