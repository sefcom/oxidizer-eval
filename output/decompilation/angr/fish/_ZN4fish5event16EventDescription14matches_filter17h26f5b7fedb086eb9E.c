long long fish::event::EventDescription::matches_filter(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned long long v4;  // rdx

    v0 = v2;
    v3 = vvar_28{reg 56} & 0xffffff00 | 1;
    if (!a2)
        return v3;
    switch (a0)
    {
    case 0:
        return 0;
    case 3: case 4: case 5:
        if (a1.eq_by(a1 + a2 * 4, "exitExitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs", "Exitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs"))
            return v3;
    default:
        return a1.equal(a2, a0.name(), v4);
    }
}
