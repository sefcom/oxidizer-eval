long long fish::key::must_escape(char a0, unsigned int a1)
{
    unsigned int v1;  // ebp

    v1 = vvar_22{reg 56} & 0xffffff00 | 1;
    if ((char)a1.is_contained_in(&g_548130, 16))
        return v1;
    if (a0 && (char)a1.is_contained_in("~#\\%c%c", 2))
        return v1;
    if (a1 != 63)
        return 0;
    return fish::future_feature_flags::test(1) & 255 & 0xffffff00 | fish::future_feature_flags::test(1) ^ 1;
}
