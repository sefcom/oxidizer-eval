long long fish::complete::sort_and_prioritize(unsigned long long a0[3], char a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a0[2];
    if (!v3)
    {
        return v3;
    }
    else if (((char)a0[1].reduce(v3 * 56 + a0[1]) & 1))
    {
        a0.retain(&vvar_38{reg 32});
        fish::complete::unique_completions_retaining_order(a0);
        v4 = alloc::slice::<impl [T]>::sort_by(a0[1], a0[2]);
        if (!(a1 & 1))
            return v4;
        return alloc::slice::<impl [T]>::sort_by(a0[1], a0[2]);
    }
    else
    {
        core::option::unwrap_failed(&g_14d5b50); /* do not return */
    }
}
