long long fish::wildcard::wildcard_expand_string(unsigned int *a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7[3])
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned int v2;  // [bp-0xc0]
    char v3;  // [bp-0x36]
    char v4;  // [bp-0x35]
    char v5;  // [bp-0x34]
    unsigned long v6;  // rbp
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r15
    unsigned long long v9;  // r13
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx

    v0 = a5;
    v1 = a6;
    if (((unsigned short)a4 & 264) == 0x100)
        core::panicking::panic("assertion failed: flags.contains(ExpandFlags::FOR_COMPLETIONS) ||\n    !flags.contains(ExpandFlags::FUZZY_MATCH)assertion failed: !(flags.contains(ExpandFlags::SPECIAL_FOR_CD)) ||\n    ((flags.contains(ExpandFlags::DIRECTORIES_ONLY)) &&\n                (flag", 111, &g_14e4f88); /* do not return */
    v6 = a4;
    if (!((unsigned short)a4 & 104) == 40 && !!(a4 & 0x800))
        core::panicking::panic("assertion failed: !(flags.contains(ExpandFlags::SPECIAL_FOR_CD)) ||\n    ((flags.contains(ExpandFlags::DIRECTORIES_ONLY)) &&\n                (flags.contains(ExpandFlags::FOR_COMPLETIONS)) &&\n            (!flags.contains(ExpandFlags::GEN_DESCRIPTIONS)))EmptyInvalidChar", 251, &g_14e4fa0); /* do not return */
    v2 = 0;
    if (v2.slice_contains(a0, a1))
    {
LABEL_1428530:
        v7 = 0;
    }
    else if (((char)v6 & 8))
    {
        v2 = 64994;
        if (!v2.slice_contains(a0, a1))
            goto LABEL_1428559;
        goto LABEL_1428530;
    }
    else
    {
LABEL_1428559:
        v8 = "/";
        v9 = 1;
        if (a0.starts_with(a1, "/", 1))
        {
            a0 = a0.slice_from(a1, 1);
            a2 = 4;
            a3 = 0;
            v11 = v10;
        }
        else
        {
            v8 = 4;
            v9 = 0;
            v11 = a1;
        }
        v2.new(a2, a3, v6, &v0, &g_14e4fb8, a7);
        v2.expand(v8, v9, a0, v11, v8, v9, 0);
        v7 = v11 & 0xffffffffffffff00 | 2;
        if (!v3)
        {
            v7 = v7 & 0xffffffffffffff00 | 3;
            if (!v4)
                v7 = v5;
        }
        core::ptr::drop_in_place<fish::wildcard::expander::WildCardExpander>(&v2);
    }
    return v7 & 4294967295;
}
