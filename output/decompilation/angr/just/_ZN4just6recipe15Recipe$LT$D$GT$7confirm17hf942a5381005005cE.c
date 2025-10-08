long long just::recipe::Recipe<D>::confirm(void* a0, unsigned long a1)
{
    void* v0;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x58]
    void* v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    char *v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    void* v7;  // [bp-0x28]
    unsigned long long v9[2];  // rax
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx
    unsigned long long v13;  // rdx

    v9 = a1 + 216.get(0);
    if (v9 && v9[0] == 9223372036854775809)
    {
        if (v9[1] == 0x8000000000000000)
        {
            v0 = a1 + 144;
            v1 = <just::name::Name as core::fmt::Display>::fmt;
            v10 = &g_830b50;
        }
        else
        {
            v0 = &v9[1];
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v10 = &g_82ddb0;
        }
        v3 = v10;
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        std::io::stdio::_eprint(&v3);
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = std::io::stdio::stdin();
        if (((char)v3.read_line(&v0) & 1))
        {
            *((char *)a0) = 26;
            *((unsigned long *)&a0[8]) = v11;
        }
        else
        {
            alloc::str::<impl str>::to_lowercase(&v3, core::str::<impl str>::trim_matches(1, 0), v13);
            if (!(char)2.equal(v5, "y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rs", 1))
                2.equal(v5, "yesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an ", 3);
            *((char *)&a0[1]) = 1;
            *((char *)a0) = 56;
            core::ptr::drop_in_place<alloc::string::String>(&v3);
        }
        return core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    *((unsigned short *)a0) = 312;
    return v9;
}
