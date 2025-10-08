long long bat::build_assets(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x58]
    unsigned long long v2[3];  // rax
    char v3;  // al

    v0.try_get_one(a1, "sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.", 6);
    v2 = "sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.".unwrap(6, &v0);
    if (v2)
    {
        a2 = v2[1];
        a3 = v2[2];
    }
    v3 = a1.get_flag("blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'bat cache --help' for more informationterminal width cannot be zeromust be", 5);
    return bat::assets::build_assets::build(a0, a2, a3, v3 ^ 1, (unsigned int)a1.get_flag("acknowledgements", 16), a4, a5, "0.25.0Clearing  ... okay\nskipped (not present)\n", 6);
}
