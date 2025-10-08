long long bat::run_cache_subcommand(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    int v0;  // [bp-0x80], Other Possible Types: char
    int v1;  // [bp-0x70]
    int v2;  // [bp-0x60]
    int v3;  // [bp-0x50]
    char v4;  // [bp-0x40]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rax

    v0.try_get_one(a1, "targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'b", 6);
    v6 = "targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'b".unwrap(6, &v0);
    if (v6)
    {
        a4 = v6[1];
        a5 = v6[2];
    }
    if ((char)a1.get_flag("buildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).clearRemove the cached syntax definitions and themes.sourcedirUse a different direc", 5))
    {
        v7 = bat::build_assets(&v0, a1, a2, a3, a4, a5);
        if (v0 != 13)
        {
            *((int128_t *)&a0[64]) = *((int128_t *)&v4);
            a0[48] = v3;
            a0[32] = v2;
            a0[16] = v1;
            *(a0) = v0;
            return v7;
        }
    }
    else
    {
        v7 = a1.get_flag("clearRemove the cached syntax definitions and themes.sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of a", 5);
        if ((char)v7)
            v7 = (unsigned long long)bat::assets::clear_assets(a4, a5);
    }
    *((char *)a0) = 13;
    return v7;
}
